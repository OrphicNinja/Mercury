// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateWaitingActionPhaseHost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateWaitingActionPhaseHost() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseHost::execDestinationMapLoaded)
	{
		P_GET_OBJECT(UWorld,Z_Param_NewWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestinationMapLoaded(Z_Param_NewWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseHost::execHandlePlayerAckReceived)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerAckReceived(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseHost::execHandlePlayerControllerReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerControllerReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseHost::execHandlePlayerRegister)
	{
		P_GET_OBJECT(APlayerState,Z_Param_ChangedPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerRegister(Z_Param_ChangedPlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseHost::execPostLoadTransitionMap)
	{
		P_GET_OBJECT(UWorld,Z_Param_NewWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostLoadTransitionMap(Z_Param_NewWorld);
		P_NATIVE_END;
	}
	void USBZStateMachineStateWaitingActionPhaseHost::StaticRegisterNativesUSBZStateMachineStateWaitingActionPhaseHost()
	{
		UClass* Class = USBZStateMachineStateWaitingActionPhaseHost::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestinationMapLoaded", &USBZStateMachineStateWaitingActionPhaseHost::execDestinationMapLoaded },
			{ "HandlePlayerAckReceived", &USBZStateMachineStateWaitingActionPhaseHost::execHandlePlayerAckReceived },
			{ "HandlePlayerControllerReady", &USBZStateMachineStateWaitingActionPhaseHost::execHandlePlayerControllerReady },
			{ "HandlePlayerRegister", &USBZStateMachineStateWaitingActionPhaseHost::execHandlePlayerRegister },
			{ "PostLoadTransitionMap", &USBZStateMachineStateWaitingActionPhaseHost::execPostLoadTransitionMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_DestinationMapLoaded_Statics
	{
		struct SBZStateMachineStateWaitingActionPhaseHost_eventDestinationMapLoaded_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_DestinationMapLoaded_Statics::NewProp_NewWorld = { "NewWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateWaitingActionPhaseHost_eventDestinationMapLoaded_Parms, NewWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_DestinationMapLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_DestinationMapLoaded_Statics::NewProp_NewWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_DestinationMapLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_DestinationMapLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost, nullptr, "DestinationMapLoaded", nullptr, nullptr, sizeof(SBZStateMachineStateWaitingActionPhaseHost_eventDestinationMapLoaded_Parms), Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_DestinationMapLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_DestinationMapLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_DestinationMapLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_DestinationMapLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_DestinationMapLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_DestinationMapLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerAckReceived_Statics
	{
		struct SBZStateMachineStateWaitingActionPhaseHost_eventHandlePlayerAckReceived_Parms
		{
			FUniqueNetIdRepl PlayerId;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerAckReceived_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateWaitingActionPhaseHost_eventHandlePlayerAckReceived_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerAckReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerAckReceived_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerAckReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerAckReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost, nullptr, "HandlePlayerAckReceived", nullptr, nullptr, sizeof(SBZStateMachineStateWaitingActionPhaseHost_eventHandlePlayerAckReceived_Parms), Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerAckReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerAckReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerAckReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerAckReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerAckReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerAckReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerControllerReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerControllerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerControllerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost, nullptr, "HandlePlayerControllerReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerControllerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerControllerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerControllerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerControllerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerRegister_Statics
	{
		struct SBZStateMachineStateWaitingActionPhaseHost_eventHandlePlayerRegister_Parms
		{
			APlayerState* ChangedPlayerState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChangedPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerRegister_Statics::NewProp_ChangedPlayerState = { "ChangedPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateWaitingActionPhaseHost_eventHandlePlayerRegister_Parms, ChangedPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerRegister_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerRegister_Statics::NewProp_ChangedPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerRegister_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerRegister_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost, nullptr, "HandlePlayerRegister", nullptr, nullptr, sizeof(SBZStateMachineStateWaitingActionPhaseHost_eventHandlePlayerRegister_Parms), Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerRegister_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerRegister_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerRegister_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerRegister_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerRegister()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerRegister_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_PostLoadTransitionMap_Statics
	{
		struct SBZStateMachineStateWaitingActionPhaseHost_eventPostLoadTransitionMap_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_PostLoadTransitionMap_Statics::NewProp_NewWorld = { "NewWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateWaitingActionPhaseHost_eventPostLoadTransitionMap_Parms, NewWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_PostLoadTransitionMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_PostLoadTransitionMap_Statics::NewProp_NewWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_PostLoadTransitionMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_PostLoadTransitionMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost, nullptr, "PostLoadTransitionMap", nullptr, nullptr, sizeof(SBZStateMachineStateWaitingActionPhaseHost_eventPostLoadTransitionMap_Parms), Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_PostLoadTransitionMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_PostLoadTransitionMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_PostLoadTransitionMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_PostLoadTransitionMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_PostLoadTransitionMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_PostLoadTransitionMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_NoRegister()
	{
		return USBZStateMachineStateWaitingActionPhaseHost::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeOutAck_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeOutAck;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_DestinationMapLoaded, "DestinationMapLoaded" }, // 3021318891
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerAckReceived, "HandlePlayerAckReceived" }, // 1783993943
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerControllerReady, "HandlePlayerControllerReady" }, // 3010566674
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_HandlePlayerRegister, "HandlePlayerRegister" }, // 1003742895
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseHost_PostLoadTransitionMap, "PostLoadTransitionMap" }, // 1200826635
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateWaitingActionPhaseHost.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseHost.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_Statics::NewProp_TimeOutAck_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateWaitingActionPhaseHost" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_Statics::NewProp_TimeOutAck = { "TimeOutAck", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateWaitingActionPhaseHost, TimeOutAck), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_Statics::NewProp_TimeOutAck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_Statics::NewProp_TimeOutAck_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_Statics::NewProp_TimeOutAck,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateWaitingActionPhaseHost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_Statics::ClassParams = {
		&USBZStateMachineStateWaitingActionPhaseHost::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateWaitingActionPhaseHost, 1562635231);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateWaitingActionPhaseHost>()
	{
		return USBZStateMachineStateWaitingActionPhaseHost::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateWaitingActionPhaseHost(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseHost, &USBZStateMachineStateWaitingActionPhaseHost::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateWaitingActionPhaseHost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateWaitingActionPhaseHost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
