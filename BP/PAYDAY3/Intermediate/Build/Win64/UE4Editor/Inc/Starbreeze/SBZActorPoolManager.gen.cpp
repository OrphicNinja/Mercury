// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActorPoolManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActorPoolManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorPoolManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorPoolManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActorPool();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(USBZActorPoolManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZActorPoolManager**)Z_Param__Result=USBZActorPoolManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZActorPoolManager::execGetActor)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetActor(Z_Param_World,Z_Param_ActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZActorPoolManager::execInitPool)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitPool(Z_Param_World,Z_Param_ActorClass,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZActorPoolManager::execOnActorDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorDestroyed(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZActorPoolManager::execOnExitedActionPhase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitedActionPhase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZActorPoolManager::execReturnActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnActor(Z_Param_Actor,Z_Param_Delay);
		P_NATIVE_END;
	}
	void USBZActorPoolManager::StaticRegisterNativesUSBZActorPoolManager()
	{
		UClass* Class = USBZActorPoolManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZActorPoolManager::execGet },
			{ "GetActor", &USBZActorPoolManager::execGetActor },
			{ "InitPool", &USBZActorPoolManager::execInitPool },
			{ "OnActorDestroyed", &USBZActorPoolManager::execOnActorDestroyed },
			{ "OnExitedActionPhase", &USBZActorPoolManager::execOnExitedActionPhase },
			{ "ReturnActor", &USBZActorPoolManager::execReturnActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZActorPoolManager_Get_Statics
	{
		struct SBZActorPoolManager_eventGet_Parms
		{
			const UObject* WorldContextObject;
			USBZActorPoolManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorPoolManager_Get_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActorPoolManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorPoolManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZActorPoolManager_Get_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorPoolManager_Get_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorPoolManager_Get_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActorPoolManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorPoolManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZActorPoolManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZActorPoolManager_Get_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorPoolManager_Get_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZActorPoolManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorPoolManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorPoolManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorPoolManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActorPoolManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActorPoolManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActorPoolManager, nullptr, "Get", nullptr, nullptr, sizeof(SBZActorPoolManager_eventGet_Parms), Z_Construct_UFunction_USBZActorPoolManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorPoolManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActorPoolManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorPoolManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActorPoolManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActorPoolManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZActorPoolManager_GetActor_Statics
	{
		struct SBZActorPoolManager_eventGetActor_Parms
		{
			UWorld* World;
			TSubclassOf<AActor>  ActorClass;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActorPoolManager_GetActor_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorPoolManager_eventGetActor_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USBZActorPoolManager_GetActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorPoolManager_eventGetActor_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActorPoolManager_GetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorPoolManager_eventGetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZActorPoolManager_GetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorPoolManager_GetActor_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorPoolManager_GetActor_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorPoolManager_GetActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorPoolManager_GetActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActorPoolManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActorPoolManager_GetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActorPoolManager, nullptr, "GetActor", nullptr, nullptr, sizeof(SBZActorPoolManager_eventGetActor_Parms), Z_Construct_UFunction_USBZActorPoolManager_GetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorPoolManager_GetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActorPoolManager_GetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorPoolManager_GetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActorPoolManager_GetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActorPoolManager_GetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZActorPoolManager_InitPool_Statics
	{
		struct SBZActorPoolManager_eventInitPool_Parms
		{
			UWorld* World;
			TSubclassOf<AActor>  ActorClass;
			int32 Count;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActorPoolManager_InitPool_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorPoolManager_eventInitPool_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USBZActorPoolManager_InitPool_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorPoolManager_eventInitPool_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZActorPoolManager_InitPool_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorPoolManager_eventInitPool_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZActorPoolManager_InitPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorPoolManager_InitPool_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorPoolManager_InitPool_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorPoolManager_InitPool_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorPoolManager_InitPool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActorPoolManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActorPoolManager_InitPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActorPoolManager, nullptr, "InitPool", nullptr, nullptr, sizeof(SBZActorPoolManager_eventInitPool_Parms), Z_Construct_UFunction_USBZActorPoolManager_InitPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorPoolManager_InitPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActorPoolManager_InitPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorPoolManager_InitPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActorPoolManager_InitPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActorPoolManager_InitPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZActorPoolManager_OnActorDestroyed_Statics
	{
		struct SBZActorPoolManager_eventOnActorDestroyed_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActorPoolManager_OnActorDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorPoolManager_eventOnActorDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZActorPoolManager_OnActorDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorPoolManager_OnActorDestroyed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorPoolManager_OnActorDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActorPoolManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActorPoolManager_OnActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActorPoolManager, nullptr, "OnActorDestroyed", nullptr, nullptr, sizeof(SBZActorPoolManager_eventOnActorDestroyed_Parms), Z_Construct_UFunction_USBZActorPoolManager_OnActorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorPoolManager_OnActorDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActorPoolManager_OnActorDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorPoolManager_OnActorDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActorPoolManager_OnActorDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActorPoolManager_OnActorDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZActorPoolManager_OnExitedActionPhase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorPoolManager_OnExitedActionPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActorPoolManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActorPoolManager_OnExitedActionPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActorPoolManager, nullptr, "OnExitedActionPhase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActorPoolManager_OnExitedActionPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorPoolManager_OnExitedActionPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActorPoolManager_OnExitedActionPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActorPoolManager_OnExitedActionPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZActorPoolManager_ReturnActor_Statics
	{
		struct SBZActorPoolManager_eventReturnActor_Parms
		{
			AActor* Actor;
			float Delay;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActorPoolManager_ReturnActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorPoolManager_eventReturnActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZActorPoolManager_ReturnActor_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorPoolManager_eventReturnActor_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZActorPoolManager_ReturnActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorPoolManager_ReturnActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorPoolManager_ReturnActor_Statics::NewProp_Delay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorPoolManager_ReturnActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActorPoolManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActorPoolManager_ReturnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActorPoolManager, nullptr, "ReturnActor", nullptr, nullptr, sizeof(SBZActorPoolManager_eventReturnActor_Parms), Z_Construct_UFunction_USBZActorPoolManager_ReturnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorPoolManager_ReturnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActorPoolManager_ReturnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorPoolManager_ReturnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActorPoolManager_ReturnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActorPoolManager_ReturnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZActorPoolManager_NoRegister()
	{
		return USBZActorPoolManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZActorPoolManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pools_ValueProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Pools_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pools_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Pools;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnActorTimerHandles_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnActorTimerHandles_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnActorTimerHandles_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnActorTimerHandles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZActorPoolManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZActorPoolManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZActorPoolManager_Get, "Get" }, // 3797500398
		{ &Z_Construct_UFunction_USBZActorPoolManager_GetActor, "GetActor" }, // 3793955988
		{ &Z_Construct_UFunction_USBZActorPoolManager_InitPool, "InitPool" }, // 4166659823
		{ &Z_Construct_UFunction_USBZActorPoolManager_OnActorDestroyed, "OnActorDestroyed" }, // 416170613
		{ &Z_Construct_UFunction_USBZActorPoolManager_OnExitedActionPhase, "OnExitedActionPhase" }, // 1394898935
		{ &Z_Construct_UFunction_USBZActorPoolManager_ReturnActor, "ReturnActor" }, // 1941099245
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorPoolManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZActorPoolManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZActorPoolManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZActorPoolManager_Statics::NewProp_Pools_ValueProp = { "Pools", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZActorPool, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZActorPoolManager_Statics::NewProp_Pools_Key_KeyProp = { "Pools_Key", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorPoolManager_Statics::NewProp_Pools_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorPoolManager" },
		{ "ModuleRelativePath", "Public/SBZActorPoolManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZActorPoolManager_Statics::NewProp_Pools = { "Pools", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActorPoolManager, Pools), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZActorPoolManager_Statics::NewProp_Pools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorPoolManager_Statics::NewProp_Pools_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZActorPoolManager_Statics::NewProp_ReturnActorTimerHandles_ValueProp = { "ReturnActorTimerHandles", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZActorPoolManager_Statics::NewProp_ReturnActorTimerHandles_Key_KeyProp = { "ReturnActorTimerHandles_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorPoolManager_Statics::NewProp_ReturnActorTimerHandles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorPoolManager" },
		{ "ModuleRelativePath", "Public/SBZActorPoolManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZActorPoolManager_Statics::NewProp_ReturnActorTimerHandles = { "ReturnActorTimerHandles", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActorPoolManager, ReturnActorTimerHandles), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZActorPoolManager_Statics::NewProp_ReturnActorTimerHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorPoolManager_Statics::NewProp_ReturnActorTimerHandles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZActorPoolManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorPoolManager_Statics::NewProp_Pools_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorPoolManager_Statics::NewProp_Pools_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorPoolManager_Statics::NewProp_Pools,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorPoolManager_Statics::NewProp_ReturnActorTimerHandles_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorPoolManager_Statics::NewProp_ReturnActorTimerHandles_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorPoolManager_Statics::NewProp_ReturnActorTimerHandles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZActorPoolManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZActorPoolManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZActorPoolManager_Statics::ClassParams = {
		&USBZActorPoolManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZActorPoolManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorPoolManager_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZActorPoolManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorPoolManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZActorPoolManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZActorPoolManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZActorPoolManager, 3527735235);
	template<> STARBREEZE_API UClass* StaticClass<USBZActorPoolManager>()
	{
		return USBZActorPoolManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZActorPoolManager(Z_Construct_UClass_USBZActorPoolManager, &USBZActorPoolManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZActorPoolManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZActorPoolManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
