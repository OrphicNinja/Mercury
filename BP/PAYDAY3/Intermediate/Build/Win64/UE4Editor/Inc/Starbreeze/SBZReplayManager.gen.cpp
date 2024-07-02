// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplayManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplayManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplayManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplayManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameInstance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplayFilePlayer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplayFileRecorder_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZReplayManager::execDeleteReplay)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ReplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteReplay(Z_Param_ReplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayManager::execFindReplays)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindReplays();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayManager::execGetReplayManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZReplayManager**)Z_Param__Result=USBZReplayManager::GetReplayManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayManager::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplayManager::execIsRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRecording();
		P_NATIVE_END;
	}
	void USBZReplayManager::StaticRegisterNativesUSBZReplayManager()
	{
		UClass* Class = USBZReplayManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteReplay", &USBZReplayManager::execDeleteReplay },
			{ "FindReplays", &USBZReplayManager::execFindReplays },
			{ "GetReplayManager", &USBZReplayManager::execGetReplayManager },
			{ "IsPlaying", &USBZReplayManager::execIsPlaying },
			{ "IsRecording", &USBZReplayManager::execIsRecording },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZReplayManager_DeleteReplay_Statics
	{
		struct SBZReplayManager_eventDeleteReplay_Parms
		{
			FString ReplayName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayManager_DeleteReplay_Statics::NewProp_ReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZReplayManager_DeleteReplay_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplayManager_eventDeleteReplay_Parms, ReplayName), METADATA_PARAMS(Z_Construct_UFunction_USBZReplayManager_DeleteReplay_Statics::NewProp_ReplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayManager_DeleteReplay_Statics::NewProp_ReplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReplayManager_DeleteReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplayManager_DeleteReplay_Statics::NewProp_ReplayName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayManager_DeleteReplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayManager_DeleteReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayManager, nullptr, "DeleteReplay", nullptr, nullptr, sizeof(SBZReplayManager_eventDeleteReplay_Parms), Z_Construct_UFunction_USBZReplayManager_DeleteReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayManager_DeleteReplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayManager_DeleteReplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayManager_DeleteReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayManager_DeleteReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayManager_DeleteReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayManager_FindReplays_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayManager_FindReplays_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayManager_FindReplays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayManager, nullptr, "FindReplays", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayManager_FindReplays_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayManager_FindReplays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayManager_FindReplays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayManager_FindReplays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayManager_GetReplayManager_Statics
	{
		struct SBZReplayManager_eventGetReplayManager_Parms
		{
			const UObject* WorldContextObject;
			USBZReplayManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayManager_GetReplayManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZReplayManager_GetReplayManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplayManager_eventGetReplayManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayManager_GetReplayManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayManager_GetReplayManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZReplayManager_GetReplayManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplayManager_eventGetReplayManager_Parms, ReturnValue), Z_Construct_UClass_USBZReplayManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReplayManager_GetReplayManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplayManager_GetReplayManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplayManager_GetReplayManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayManager_GetReplayManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayManager_GetReplayManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayManager, nullptr, "GetReplayManager", nullptr, nullptr, sizeof(SBZReplayManager_eventGetReplayManager_Parms), Z_Construct_UFunction_USBZReplayManager_GetReplayManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayManager_GetReplayManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayManager_GetReplayManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayManager_GetReplayManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayManager_GetReplayManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayManager_GetReplayManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayManager_IsPlaying_Statics
	{
		struct SBZReplayManager_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_USBZReplayManager_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZReplayManager_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZReplayManager_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplayManager_eventIsPlaying_Parms), &Z_Construct_UFunction_USBZReplayManager_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReplayManager_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplayManager_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayManager_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayManager_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayManager, nullptr, "IsPlaying", nullptr, nullptr, sizeof(SBZReplayManager_eventIsPlaying_Parms), Z_Construct_UFunction_USBZReplayManager_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayManager_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayManager_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayManager_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayManager_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayManager_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplayManager_IsRecording_Statics
	{
		struct SBZReplayManager_eventIsRecording_Parms
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
	void Z_Construct_UFunction_USBZReplayManager_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZReplayManager_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZReplayManager_IsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplayManager_eventIsRecording_Parms), &Z_Construct_UFunction_USBZReplayManager_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReplayManager_IsRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplayManager_IsRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplayManager_IsRecording_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplayManager_IsRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplayManager, nullptr, "IsRecording", nullptr, nullptr, sizeof(SBZReplayManager_eventIsRecording_Parms), Z_Construct_UFunction_USBZReplayManager_IsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayManager_IsRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplayManager_IsRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplayManager_IsRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplayManager_IsRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplayManager_IsRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZReplayManager_NoRegister()
	{
		return USBZReplayManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZReplayManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayFilePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplayFilePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayFileRecorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplayFileRecorder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReplayManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZReplayManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZReplayManager_DeleteReplay, "DeleteReplay" }, // 2376750309
		{ &Z_Construct_UFunction_USBZReplayManager_FindReplays, "FindReplays" }, // 2473323499
		{ &Z_Construct_UFunction_USBZReplayManager_GetReplayManager, "GetReplayManager" }, // 13080335
		{ &Z_Construct_UFunction_USBZReplayManager_IsPlaying, "IsPlaying" }, // 3518150740
		{ &Z_Construct_UFunction_USBZReplayManager_IsRecording, "IsRecording" }, // 3863089800
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplayManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZReplayManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReplayManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplayManager_Statics::NewProp_GameInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayManager" },
		{ "ModuleRelativePath", "Public/SBZReplayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReplayManager_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplayManager, GameInstance), Z_Construct_UClass_USBZGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReplayManager_Statics::NewProp_GameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayManager_Statics::NewProp_GameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplayManager_Statics::NewProp_ReplayFilePlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayManager" },
		{ "ModuleRelativePath", "Public/SBZReplayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReplayManager_Statics::NewProp_ReplayFilePlayer = { "ReplayFilePlayer", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplayManager, ReplayFilePlayer), Z_Construct_UClass_USBZReplayFilePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReplayManager_Statics::NewProp_ReplayFilePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayManager_Statics::NewProp_ReplayFilePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplayManager_Statics::NewProp_ReplayFileRecorder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayManager" },
		{ "ModuleRelativePath", "Public/SBZReplayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReplayManager_Statics::NewProp_ReplayFileRecorder = { "ReplayFileRecorder", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplayManager, ReplayFileRecorder), Z_Construct_UClass_USBZReplayFileRecorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReplayManager_Statics::NewProp_ReplayFileRecorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayManager_Statics::NewProp_ReplayFileRecorder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZReplayManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplayManager_Statics::NewProp_GameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplayManager_Statics::NewProp_ReplayFilePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplayManager_Statics::NewProp_ReplayFileRecorder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReplayManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZReplayManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReplayManager_Statics::ClassParams = {
		&USBZReplayManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZReplayManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayManager_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZReplayManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReplayManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReplayManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReplayManager, 3286108171);
	template<> STARBREEZE_API UClass* StaticClass<USBZReplayManager>()
	{
		return USBZReplayManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReplayManager(Z_Construct_UClass_USBZReplayManager, &USBZReplayManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReplayManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReplayManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
