// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateWaitingActionPhaseClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateWaitingActionPhaseClient() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseClient_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseClient();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseClient::execHandleGameStateReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleGameStateReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseClient::execHandleJoinedHost)
	{
		P_GET_OBJECT(UWorld,Z_Param_NewWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleJoinedHost(Z_Param_NewWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseClient::execHandlePlayerControllerReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerControllerReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseClient::execReceivedHostUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceivedHostUpdate();
		P_NATIVE_END;
	}
	void USBZStateMachineStateWaitingActionPhaseClient::StaticRegisterNativesUSBZStateMachineStateWaitingActionPhaseClient()
	{
		UClass* Class = USBZStateMachineStateWaitingActionPhaseClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleGameStateReady", &USBZStateMachineStateWaitingActionPhaseClient::execHandleGameStateReady },
			{ "HandleJoinedHost", &USBZStateMachineStateWaitingActionPhaseClient::execHandleJoinedHost },
			{ "HandlePlayerControllerReady", &USBZStateMachineStateWaitingActionPhaseClient::execHandlePlayerControllerReady },
			{ "ReceivedHostUpdate", &USBZStateMachineStateWaitingActionPhaseClient::execReceivedHostUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleGameStateReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleGameStateReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleGameStateReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseClient, nullptr, "HandleGameStateReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleGameStateReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleGameStateReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleGameStateReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleGameStateReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleJoinedHost_Statics
	{
		struct SBZStateMachineStateWaitingActionPhaseClient_eventHandleJoinedHost_Parms
		{
			UWorld* NewWorld;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleJoinedHost_Statics::NewProp_NewWorld = { "NewWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateWaitingActionPhaseClient_eventHandleJoinedHost_Parms, NewWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleJoinedHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleJoinedHost_Statics::NewProp_NewWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleJoinedHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleJoinedHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseClient, nullptr, "HandleJoinedHost", nullptr, nullptr, sizeof(SBZStateMachineStateWaitingActionPhaseClient_eventHandleJoinedHost_Parms), Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleJoinedHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleJoinedHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleJoinedHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleJoinedHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleJoinedHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleJoinedHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandlePlayerControllerReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandlePlayerControllerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandlePlayerControllerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseClient, nullptr, "HandlePlayerControllerReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandlePlayerControllerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandlePlayerControllerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandlePlayerControllerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandlePlayerControllerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_ReceivedHostUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_ReceivedHostUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_ReceivedHostUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseClient, nullptr, "ReceivedHostUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_ReceivedHostUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_ReceivedHostUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_ReceivedHostUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_ReceivedHostUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseClient_NoRegister()
	{
		return USBZStateMachineStateWaitingActionPhaseClient::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleGameStateReady, "HandleGameStateReady" }, // 455833457
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandleJoinedHost, "HandleJoinedHost" }, // 530566407
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_HandlePlayerControllerReady, "HandlePlayerControllerReady" }, // 3922185031
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseClient_ReceivedHostUpdate, "ReceivedHostUpdate" }, // 2250699536
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateWaitingActionPhaseClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateWaitingActionPhaseClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseClient_Statics::ClassParams = {
		&USBZStateMachineStateWaitingActionPhaseClient::StaticClass,
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
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateWaitingActionPhaseClient, 2106529898);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateWaitingActionPhaseClient>()
	{
		return USBZStateMachineStateWaitingActionPhaseClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateWaitingActionPhaseClient(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseClient, &USBZStateMachineStateWaitingActionPhaseClient::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateWaitingActionPhaseClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateWaitingActionPhaseClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
