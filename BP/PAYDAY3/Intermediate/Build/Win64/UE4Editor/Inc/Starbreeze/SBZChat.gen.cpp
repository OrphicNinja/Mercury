// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChat() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChat_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChat();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWhisperInfo();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsChatNotif();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChatMessage();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_ChatMessageReceived__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZChat::execGetChat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZChat**)Z_Param__Result=USBZChat::GetChat(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChat::execGetNextWhisperOption)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_CurrentWhisper);
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_OutNextWhisper);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutNextWhisperName);
		P_GET_UBOOL_REF(Z_Param_Out_bOutNoWhisperOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNextWhisperOption(Z_Param_Out_CurrentWhisper,Z_Param_Out_OutNextWhisper,Z_Param_Out_OutNextWhisperName,Z_Param_Out_bOutNoWhisperOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChat::execGetWhisperOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZWhisperInfo>*)Z_Param__Result=P_THIS->GetWhisperOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChat::execIsMuted)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMuted(Z_Param_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChat::execOnSessionMessageReceived)
	{
		P_GET_STRUCT_REF(FAccelByteModelsChatNotif,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSessionMessageReceived(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChat::execSendChatMessage)
	{
		P_GET_STRUCT(FSBZChatMessage,Z_Param_ChatMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendChatMessage(Z_Param_ChatMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChat::execSendSessionMessage)
	{
		P_GET_STRUCT_REF(FSBZChatMessage,Z_Param_Out_InMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendSessionMessage(Z_Param_Out_InMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChat::execSendSystemChatMessage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZChat::SendSystemChatMessage(Z_Param_WorldContextObject,Z_Param_Message);
		P_NATIVE_END;
	}
	void USBZChat::StaticRegisterNativesUSBZChat()
	{
		UClass* Class = USBZChat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChat", &USBZChat::execGetChat },
			{ "GetNextWhisperOption", &USBZChat::execGetNextWhisperOption },
			{ "GetWhisperOptions", &USBZChat::execGetWhisperOptions },
			{ "IsMuted", &USBZChat::execIsMuted },
			{ "OnSessionMessageReceived", &USBZChat::execOnSessionMessageReceived },
			{ "SendChatMessage", &USBZChat::execSendChatMessage },
			{ "SendSessionMessage", &USBZChat::execSendSessionMessage },
			{ "SendSystemChatMessage", &USBZChat::execSendSystemChatMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZChat_GetChat_Statics
	{
		struct SBZChat_eventGetChat_Parms
		{
			UObject* WorldContextObject;
			USBZChat* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZChat_GetChat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChat_eventGetChat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZChat_GetChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChat_eventGetChat_Parms, ReturnValue), Z_Construct_UClass_USBZChat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChat_GetChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChat_GetChat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChat_GetChat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChat_GetChat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChat.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChat_GetChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChat, nullptr, "GetChat", nullptr, nullptr, sizeof(SBZChat_eventGetChat_Parms), Z_Construct_UFunction_USBZChat_GetChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_GetChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChat_GetChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_GetChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChat_GetChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChat_GetChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics
	{
		struct SBZChat_eventGetNextWhisperOption_Parms
		{
			FUniqueNetIdRepl CurrentWhisper;
			FUniqueNetIdRepl OutNextWhisper;
			FString OutNextWhisperName;
			bool bOutNoWhisperOptions;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWhisper_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentWhisper;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNextWhisper;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutNextWhisperName;
		static void NewProp_bOutNoWhisperOptions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutNoWhisperOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::NewProp_CurrentWhisper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::NewProp_CurrentWhisper = { "CurrentWhisper", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChat_eventGetNextWhisperOption_Parms, CurrentWhisper), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::NewProp_CurrentWhisper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::NewProp_CurrentWhisper_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::NewProp_OutNextWhisper = { "OutNextWhisper", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChat_eventGetNextWhisperOption_Parms, OutNextWhisper), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::NewProp_OutNextWhisperName = { "OutNextWhisperName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChat_eventGetNextWhisperOption_Parms, OutNextWhisperName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::NewProp_bOutNoWhisperOptions_SetBit(void* Obj)
	{
		((SBZChat_eventGetNextWhisperOption_Parms*)Obj)->bOutNoWhisperOptions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::NewProp_bOutNoWhisperOptions = { "bOutNoWhisperOptions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZChat_eventGetNextWhisperOption_Parms), &Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::NewProp_bOutNoWhisperOptions_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZChat_eventGetNextWhisperOption_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZChat_eventGetNextWhisperOption_Parms), &Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::NewProp_CurrentWhisper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::NewProp_OutNextWhisper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::NewProp_OutNextWhisperName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::NewProp_bOutNoWhisperOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChat, nullptr, "GetNextWhisperOption", nullptr, nullptr, sizeof(SBZChat_eventGetNextWhisperOption_Parms), Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChat_GetNextWhisperOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChat_GetNextWhisperOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChat_GetWhisperOptions_Statics
	{
		struct SBZChat_eventGetWhisperOptions_Parms
		{
			TArray<FSBZWhisperInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChat_GetWhisperOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZWhisperInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZChat_GetWhisperOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChat_eventGetWhisperOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChat_GetWhisperOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChat_GetWhisperOptions_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChat_GetWhisperOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChat_GetWhisperOptions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChat_GetWhisperOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChat, nullptr, "GetWhisperOptions", nullptr, nullptr, sizeof(SBZChat_eventGetWhisperOptions_Parms), Z_Construct_UFunction_USBZChat_GetWhisperOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_GetWhisperOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChat_GetWhisperOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_GetWhisperOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChat_GetWhisperOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChat_GetWhisperOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChat_IsMuted_Statics
	{
		struct SBZChat_eventIsMuted_Parms
		{
			FUniqueNetIdRepl UniqueNetId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChat_IsMuted_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChat_eventIsMuted_Parms, UniqueNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZChat_IsMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZChat_eventIsMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZChat_IsMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZChat_eventIsMuted_Parms), &Z_Construct_UFunction_USBZChat_IsMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChat_IsMuted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChat_IsMuted_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChat_IsMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChat_IsMuted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChat_IsMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChat, nullptr, "IsMuted", nullptr, nullptr, sizeof(SBZChat_eventIsMuted_Parms), Z_Construct_UFunction_USBZChat_IsMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_IsMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChat_IsMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_IsMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChat_IsMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChat_IsMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChat_OnSessionMessageReceived_Statics
	{
		struct SBZChat_eventOnSessionMessageReceived_Parms
		{
			FAccelByteModelsChatNotif Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChat_OnSessionMessageReceived_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChat_OnSessionMessageReceived_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChat_eventOnSessionMessageReceived_Parms, Result), Z_Construct_UScriptStruct_FAccelByteModelsChatNotif, METADATA_PARAMS(Z_Construct_UFunction_USBZChat_OnSessionMessageReceived_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_OnSessionMessageReceived_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChat_OnSessionMessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChat_OnSessionMessageReceived_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChat_OnSessionMessageReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChat_OnSessionMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChat, nullptr, "OnSessionMessageReceived", nullptr, nullptr, sizeof(SBZChat_eventOnSessionMessageReceived_Parms), Z_Construct_UFunction_USBZChat_OnSessionMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_OnSessionMessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChat_OnSessionMessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_OnSessionMessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChat_OnSessionMessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChat_OnSessionMessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChat_SendChatMessage_Statics
	{
		struct SBZChat_eventSendChatMessage_Parms
		{
			FSBZChatMessage ChatMessage;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChat_SendChatMessage_Statics::NewProp_ChatMessage = { "ChatMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChat_eventSendChatMessage_Parms, ChatMessage), Z_Construct_UScriptStruct_FSBZChatMessage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChat_SendChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChat_SendChatMessage_Statics::NewProp_ChatMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChat_SendChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChat_SendChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChat, nullptr, "SendChatMessage", nullptr, nullptr, sizeof(SBZChat_eventSendChatMessage_Parms), Z_Construct_UFunction_USBZChat_SendChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_SendChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChat_SendChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_SendChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChat_SendChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChat_SendChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChat_SendSessionMessage_Statics
	{
		struct SBZChat_eventSendSessionMessage_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChat_SendSessionMessage_Statics::NewProp_InMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChat_SendSessionMessage_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChat_eventSendSessionMessage_Parms, InMessage), Z_Construct_UScriptStruct_FSBZChatMessage, METADATA_PARAMS(Z_Construct_UFunction_USBZChat_SendSessionMessage_Statics::NewProp_InMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_SendSessionMessage_Statics::NewProp_InMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChat_SendSessionMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChat_SendSessionMessage_Statics::NewProp_InMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChat_SendSessionMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChat.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChat_SendSessionMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChat, nullptr, "SendSessionMessage", nullptr, nullptr, sizeof(SBZChat_eventSendSessionMessage_Parms), Z_Construct_UFunction_USBZChat_SendSessionMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_SendSessionMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChat_SendSessionMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_SendSessionMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChat_SendSessionMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChat_SendSessionMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChat_SendSystemChatMessage_Statics
	{
		struct SBZChat_eventSendSystemChatMessage_Parms
		{
			UObject* WorldContextObject;
			FString Message;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZChat_SendSystemChatMessage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChat_eventSendSystemChatMessage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChat_SendSystemChatMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZChat_SendSystemChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChat_eventSendSystemChatMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_USBZChat_SendSystemChatMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_SendSystemChatMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChat_SendSystemChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChat_SendSystemChatMessage_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChat_SendSystemChatMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChat_SendSystemChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChat.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChat_SendSystemChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChat, nullptr, "SendSystemChatMessage", nullptr, nullptr, sizeof(SBZChat_eventSendSystemChatMessage_Parms), Z_Construct_UFunction_USBZChat_SendSystemChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_SendSystemChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChat_SendSystemChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChat_SendSystemChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChat_SendSystemChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChat_SendSystemChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZChat_NoRegister()
	{
		return USBZChat::StaticClass();
	}
	struct Z_Construct_UClass_USBZChat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnlineChatHistory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineChatHistory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OnlineChatHistory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMessageReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageReceived;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MutedPlayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MutedPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MutedPlayers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WhisperOptions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhisperOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WhisperOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZChat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZChat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZChat_GetChat, "GetChat" }, // 1349546380
		{ &Z_Construct_UFunction_USBZChat_GetNextWhisperOption, "GetNextWhisperOption" }, // 2814027161
		{ &Z_Construct_UFunction_USBZChat_GetWhisperOptions, "GetWhisperOptions" }, // 1115373375
		{ &Z_Construct_UFunction_USBZChat_IsMuted, "IsMuted" }, // 762243946
		{ &Z_Construct_UFunction_USBZChat_OnSessionMessageReceived, "OnSessionMessageReceived" }, // 1439994022
		{ &Z_Construct_UFunction_USBZChat_SendChatMessage, "SendChatMessage" }, // 2096362523
		{ &Z_Construct_UFunction_USBZChat_SendSessionMessage, "SendSessionMessage" }, // 3951678289
		{ &Z_Construct_UFunction_USBZChat_SendSystemChatMessage, "SendSystemChatMessage" }, // 2604951805
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChat_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZChat.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZChat.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZChat_Statics::NewProp_OnlineChatHistory_Inner = { "OnlineChatHistory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZChatMessage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChat_Statics::NewProp_OnlineChatHistory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChat" },
		{ "ModuleRelativePath", "Public/SBZChat.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZChat_Statics::NewProp_OnlineChatHistory = { "OnlineChatHistory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChat, OnlineChatHistory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZChat_Statics::NewProp_OnlineChatHistory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChat_Statics::NewProp_OnlineChatHistory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChat_Statics::NewProp_OnMessageReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChat" },
		{ "ModuleRelativePath", "Public/SBZChat.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZChat_Statics::NewProp_OnMessageReceived = { "OnMessageReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChat, OnMessageReceived), Z_Construct_UDelegateFunction_Starbreeze_ChatMessageReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZChat_Statics::NewProp_OnMessageReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChat_Statics::NewProp_OnMessageReceived_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZChat_Statics::NewProp_MutedPlayers_Inner = { "MutedPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChat_Statics::NewProp_MutedPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChat" },
		{ "ModuleRelativePath", "Public/SBZChat.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZChat_Statics::NewProp_MutedPlayers = { "MutedPlayers", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChat, MutedPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZChat_Statics::NewProp_MutedPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChat_Statics::NewProp_MutedPlayers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZChat_Statics::NewProp_WhisperOptions_Inner = { "WhisperOptions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZWhisperInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChat_Statics::NewProp_WhisperOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChat" },
		{ "ModuleRelativePath", "Public/SBZChat.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZChat_Statics::NewProp_WhisperOptions = { "WhisperOptions", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChat, WhisperOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZChat_Statics::NewProp_WhisperOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChat_Statics::NewProp_WhisperOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChat_Statics::NewProp_OnlineChatHistory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChat_Statics::NewProp_OnlineChatHistory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChat_Statics::NewProp_OnMessageReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChat_Statics::NewProp_MutedPlayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChat_Statics::NewProp_MutedPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChat_Statics::NewProp_WhisperOptions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChat_Statics::NewProp_WhisperOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZChat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZChat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZChat_Statics::ClassParams = {
		&USBZChat::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZChat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZChat_Statics::PropPointers),
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZChat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZChat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZChat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZChat, 4096745547);
	template<> STARBREEZE_API UClass* StaticClass<USBZChat>()
	{
		return USBZChat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZChat(Z_Construct_UClass_USBZChat, &USBZChat::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZChat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZChat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
