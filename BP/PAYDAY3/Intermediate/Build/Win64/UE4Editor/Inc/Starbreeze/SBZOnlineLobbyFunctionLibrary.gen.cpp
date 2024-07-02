// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnlineLobbyFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnlineLobbyFunctionLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSession_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZOnlineLobbyFunctionLibrary::execGetOnlineSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZOnlineSession**)Z_Param__Result=USBZOnlineLobbyFunctionLibrary::GetOnlineSession(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineLobbyFunctionLibrary::execIsPlayerReady)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineLobbyFunctionLibrary::IsPlayerReady(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineLobbyFunctionLibrary::execSetPlayerReady)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineLobbyFunctionLibrary::SetPlayerReady(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineLobbyFunctionLibrary::execSetPlayerUnready)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineLobbyFunctionLibrary::SetPlayerUnready(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineLobbyFunctionLibrary::execTogglePlayerReady)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineLobbyFunctionLibrary::TogglePlayerReady(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZOnlineLobbyFunctionLibrary::StaticRegisterNativesUSBZOnlineLobbyFunctionLibrary()
	{
		UClass* Class = USBZOnlineLobbyFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOnlineSession", &USBZOnlineLobbyFunctionLibrary::execGetOnlineSession },
			{ "IsPlayerReady", &USBZOnlineLobbyFunctionLibrary::execIsPlayerReady },
			{ "SetPlayerReady", &USBZOnlineLobbyFunctionLibrary::execSetPlayerReady },
			{ "SetPlayerUnready", &USBZOnlineLobbyFunctionLibrary::execSetPlayerUnready },
			{ "TogglePlayerReady", &USBZOnlineLobbyFunctionLibrary::execTogglePlayerReady },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_GetOnlineSession_Statics
	{
		struct SBZOnlineLobbyFunctionLibrary_eventGetOnlineSession_Parms
		{
			const UObject* WorldContextObject;
			USBZOnlineSession* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_GetOnlineSession_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_GetOnlineSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineLobbyFunctionLibrary_eventGetOnlineSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_GetOnlineSession_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_GetOnlineSession_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_GetOnlineSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineLobbyFunctionLibrary_eventGetOnlineSession_Parms, ReturnValue), Z_Construct_UClass_USBZOnlineSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_GetOnlineSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_GetOnlineSession_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_GetOnlineSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_GetOnlineSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineLobbyFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_GetOnlineSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary, nullptr, "GetOnlineSession", nullptr, nullptr, sizeof(SBZOnlineLobbyFunctionLibrary_eventGetOnlineSession_Parms), Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_GetOnlineSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_GetOnlineSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_GetOnlineSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_GetOnlineSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_GetOnlineSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_GetOnlineSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady_Statics
	{
		struct SBZOnlineLobbyFunctionLibrary_eventIsPlayerReady_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineLobbyFunctionLibrary_eventIsPlayerReady_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineLobbyFunctionLibrary_eventIsPlayerReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineLobbyFunctionLibrary_eventIsPlayerReady_Parms), &Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineLobbyFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary, nullptr, "IsPlayerReady", nullptr, nullptr, sizeof(SBZOnlineLobbyFunctionLibrary_eventIsPlayerReady_Parms), Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerReady_Statics
	{
		struct SBZOnlineLobbyFunctionLibrary_eventSetPlayerReady_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerReady_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerReady_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineLobbyFunctionLibrary_eventSetPlayerReady_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerReady_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerReady_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerReady_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineLobbyFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary, nullptr, "SetPlayerReady", nullptr, nullptr, sizeof(SBZOnlineLobbyFunctionLibrary_eventSetPlayerReady_Parms), Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerUnready_Statics
	{
		struct SBZOnlineLobbyFunctionLibrary_eventSetPlayerUnready_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerUnready_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerUnready_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineLobbyFunctionLibrary_eventSetPlayerUnready_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerUnready_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerUnready_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerUnready_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerUnready_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerUnready_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineLobbyFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerUnready_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary, nullptr, "SetPlayerUnready", nullptr, nullptr, sizeof(SBZOnlineLobbyFunctionLibrary_eventSetPlayerUnready_Parms), Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerUnready_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerUnready_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerUnready_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerUnready_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerUnready()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerUnready_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_TogglePlayerReady_Statics
	{
		struct SBZOnlineLobbyFunctionLibrary_eventTogglePlayerReady_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_TogglePlayerReady_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_TogglePlayerReady_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineLobbyFunctionLibrary_eventTogglePlayerReady_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_TogglePlayerReady_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_TogglePlayerReady_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_TogglePlayerReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_TogglePlayerReady_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_TogglePlayerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineLobbyFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_TogglePlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary, nullptr, "TogglePlayerReady", nullptr, nullptr, sizeof(SBZOnlineLobbyFunctionLibrary_eventTogglePlayerReady_Parms), Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_TogglePlayerReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_TogglePlayerReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_TogglePlayerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_TogglePlayerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_TogglePlayerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_TogglePlayerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary_NoRegister()
	{
		return USBZOnlineLobbyFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_GetOnlineSession, "GetOnlineSession" }, // 2523911781
		{ &Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_IsPlayerReady, "IsPlayerReady" }, // 491516232
		{ &Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerReady, "SetPlayerReady" }, // 3354090031
		{ &Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_SetPlayerUnready, "SetPlayerUnready" }, // 2720529932
		{ &Z_Construct_UFunction_USBZOnlineLobbyFunctionLibrary_TogglePlayerReady, "TogglePlayerReady" }, // 1614662680
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZOnlineLobbyFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZOnlineLobbyFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZOnlineLobbyFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary_Statics::ClassParams = {
		&USBZOnlineLobbyFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZOnlineLobbyFunctionLibrary, 2900543022);
	template<> STARBREEZE_API UClass* StaticClass<USBZOnlineLobbyFunctionLibrary>()
	{
		return USBZOnlineLobbyFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZOnlineLobbyFunctionLibrary(Z_Construct_UClass_USBZOnlineLobbyFunctionLibrary, &USBZOnlineLobbyFunctionLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZOnlineLobbyFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZOnlineLobbyFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
