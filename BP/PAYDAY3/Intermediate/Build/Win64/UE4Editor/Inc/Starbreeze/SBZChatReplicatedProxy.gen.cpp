// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChatReplicatedProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChatReplicatedProxy() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZChatReplicatedProxy_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZChatReplicatedProxy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChatMessage();
// End Cross Module References
	DEFINE_FUNCTION(ASBZChatReplicatedProxy::execClientSendChatMessage)
	{
		P_GET_STRUCT(FSBZChatMessage,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ClientSendChatMessage_Validate(Z_Param_Message))
		{
			RPC_ValidateFailed(TEXT("ClientSendChatMessage_Validate"));
			return;
		}
		P_THIS->ClientSendChatMessage_Implementation(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZChatReplicatedProxy::execMulticastReceiveChatMessage)
	{
		P_GET_STRUCT(FSBZChatMessage,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->MulticastReceiveChatMessage_Validate(Z_Param_Message))
		{
			RPC_ValidateFailed(TEXT("MulticastReceiveChatMessage_Validate"));
			return;
		}
		P_THIS->MulticastReceiveChatMessage_Implementation(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZChatReplicatedProxy::execServerSendChatMessage)
	{
		P_GET_STRUCT(FSBZChatMessage,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSendChatMessage_Validate(Z_Param_Message))
		{
			RPC_ValidateFailed(TEXT("ServerSendChatMessage_Validate"));
			return;
		}
		P_THIS->ServerSendChatMessage_Implementation(Z_Param_Message);
		P_NATIVE_END;
	}
	static FName NAME_ASBZChatReplicatedProxy_ClientSendChatMessage = FName(TEXT("ClientSendChatMessage"));
	void ASBZChatReplicatedProxy::ClientSendChatMessage(FSBZChatMessage const& Message)
	{
		SBZChatReplicatedProxy_eventClientSendChatMessage_Parms Parms;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_ASBZChatReplicatedProxy_ClientSendChatMessage),&Parms);
	}
	static FName NAME_ASBZChatReplicatedProxy_MulticastReceiveChatMessage = FName(TEXT("MulticastReceiveChatMessage"));
	void ASBZChatReplicatedProxy::MulticastReceiveChatMessage(FSBZChatMessage const& Message)
	{
		SBZChatReplicatedProxy_eventMulticastReceiveChatMessage_Parms Parms;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_ASBZChatReplicatedProxy_MulticastReceiveChatMessage),&Parms);
	}
	static FName NAME_ASBZChatReplicatedProxy_ServerSendChatMessage = FName(TEXT("ServerSendChatMessage"));
	void ASBZChatReplicatedProxy::ServerSendChatMessage(FSBZChatMessage const& Message)
	{
		SBZChatReplicatedProxy_eventServerSendChatMessage_Parms Parms;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_ASBZChatReplicatedProxy_ServerSendChatMessage),&Parms);
	}
	void ASBZChatReplicatedProxy::StaticRegisterNativesASBZChatReplicatedProxy()
	{
		UClass* Class = ASBZChatReplicatedProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientSendChatMessage", &ASBZChatReplicatedProxy::execClientSendChatMessage },
			{ "MulticastReceiveChatMessage", &ASBZChatReplicatedProxy::execMulticastReceiveChatMessage },
			{ "ServerSendChatMessage", &ASBZChatReplicatedProxy::execServerSendChatMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZChatReplicatedProxy_ClientSendChatMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZChatReplicatedProxy_ClientSendChatMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZChatReplicatedProxy_ClientSendChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChatReplicatedProxy_eventClientSendChatMessage_Parms, Message), Z_Construct_UScriptStruct_FSBZChatMessage, METADATA_PARAMS(Z_Construct_UFunction_ASBZChatReplicatedProxy_ClientSendChatMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatReplicatedProxy_ClientSendChatMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZChatReplicatedProxy_ClientSendChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZChatReplicatedProxy_ClientSendChatMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZChatReplicatedProxy_ClientSendChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChatReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZChatReplicatedProxy_ClientSendChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZChatReplicatedProxy, nullptr, "ClientSendChatMessage", nullptr, nullptr, sizeof(SBZChatReplicatedProxy_eventClientSendChatMessage_Parms), Z_Construct_UFunction_ASBZChatReplicatedProxy_ClientSendChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatReplicatedProxy_ClientSendChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x85020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZChatReplicatedProxy_ClientSendChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatReplicatedProxy_ClientSendChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZChatReplicatedProxy_ClientSendChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZChatReplicatedProxy_ClientSendChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZChatReplicatedProxy_MulticastReceiveChatMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZChatReplicatedProxy_MulticastReceiveChatMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZChatReplicatedProxy_MulticastReceiveChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChatReplicatedProxy_eventMulticastReceiveChatMessage_Parms, Message), Z_Construct_UScriptStruct_FSBZChatMessage, METADATA_PARAMS(Z_Construct_UFunction_ASBZChatReplicatedProxy_MulticastReceiveChatMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatReplicatedProxy_MulticastReceiveChatMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZChatReplicatedProxy_MulticastReceiveChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZChatReplicatedProxy_MulticastReceiveChatMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZChatReplicatedProxy_MulticastReceiveChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChatReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZChatReplicatedProxy_MulticastReceiveChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZChatReplicatedProxy, nullptr, "MulticastReceiveChatMessage", nullptr, nullptr, sizeof(SBZChatReplicatedProxy_eventMulticastReceiveChatMessage_Parms), Z_Construct_UFunction_ASBZChatReplicatedProxy_MulticastReceiveChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatReplicatedProxy_MulticastReceiveChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZChatReplicatedProxy_MulticastReceiveChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatReplicatedProxy_MulticastReceiveChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZChatReplicatedProxy_MulticastReceiveChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZChatReplicatedProxy_MulticastReceiveChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZChatReplicatedProxy_ServerSendChatMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZChatReplicatedProxy_ServerSendChatMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZChatReplicatedProxy_ServerSendChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChatReplicatedProxy_eventServerSendChatMessage_Parms, Message), Z_Construct_UScriptStruct_FSBZChatMessage, METADATA_PARAMS(Z_Construct_UFunction_ASBZChatReplicatedProxy_ServerSendChatMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatReplicatedProxy_ServerSendChatMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZChatReplicatedProxy_ServerSendChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZChatReplicatedProxy_ServerSendChatMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZChatReplicatedProxy_ServerSendChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChatReplicatedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZChatReplicatedProxy_ServerSendChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZChatReplicatedProxy, nullptr, "ServerSendChatMessage", nullptr, nullptr, sizeof(SBZChatReplicatedProxy_eventServerSendChatMessage_Parms), Z_Construct_UFunction_ASBZChatReplicatedProxy_ServerSendChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatReplicatedProxy_ServerSendChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZChatReplicatedProxy_ServerSendChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZChatReplicatedProxy_ServerSendChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZChatReplicatedProxy_ServerSendChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZChatReplicatedProxy_ServerSendChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZChatReplicatedProxy_NoRegister()
	{
		return ASBZChatReplicatedProxy::StaticClass();
	}
	struct Z_Construct_UClass_ASBZChatReplicatedProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZChatReplicatedProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZChatReplicatedProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZChatReplicatedProxy_ClientSendChatMessage, "ClientSendChatMessage" }, // 4104137615
		{ &Z_Construct_UFunction_ASBZChatReplicatedProxy_MulticastReceiveChatMessage, "MulticastReceiveChatMessage" }, // 2890547151
		{ &Z_Construct_UFunction_ASBZChatReplicatedProxy_ServerSendChatMessage, "ServerSendChatMessage" }, // 106413678
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZChatReplicatedProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZChatReplicatedProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZChatReplicatedProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZChatReplicatedProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZChatReplicatedProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZChatReplicatedProxy_Statics::ClassParams = {
		&ASBZChatReplicatedProxy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZChatReplicatedProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZChatReplicatedProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZChatReplicatedProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZChatReplicatedProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZChatReplicatedProxy, 2435213563);
	template<> STARBREEZE_API UClass* StaticClass<ASBZChatReplicatedProxy>()
	{
		return ASBZChatReplicatedProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZChatReplicatedProxy(Z_Construct_UClass_ASBZChatReplicatedProxy, &ASBZChatReplicatedProxy::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZChatReplicatedProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZChatReplicatedProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
