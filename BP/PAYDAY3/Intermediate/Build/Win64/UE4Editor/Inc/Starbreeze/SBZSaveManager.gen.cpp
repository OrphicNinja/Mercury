// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSaveManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSaveManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSaveManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSaveManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZProgressionSaveChallenges_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZProgressionSaveGame_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSaveManagerInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZSaveManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSaveManager**)Z_Param__Result=USBZSaveManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSaveManager::execGetChecked)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSaveManager**)Z_Param__Result=USBZSaveManager::GetChecked(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSaveManager::execGetProgressionSaveChallenges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZProgressionSaveChallenges**)Z_Param__Result=P_THIS->GetProgressionSaveChallenges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSaveManager::execGetProgressionSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZProgressionSaveGame**)Z_Param__Result=P_THIS->GetProgressionSaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSaveManager::execUpdateLoadoutInLobby)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLoadoutInLobby();
		P_NATIVE_END;
	}
	void USBZSaveManager::StaticRegisterNativesUSBZSaveManager()
	{
		UClass* Class = USBZSaveManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZSaveManager::execGet },
			{ "GetChecked", &USBZSaveManager::execGetChecked },
			{ "GetProgressionSaveChallenges", &USBZSaveManager::execGetProgressionSaveChallenges },
			{ "GetProgressionSaveGame", &USBZSaveManager::execGetProgressionSaveGame },
			{ "UpdateLoadoutInLobby", &USBZSaveManager::execUpdateLoadoutInLobby },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSaveManager_Get_Statics
	{
		struct SBZSaveManager_eventGet_Parms
		{
			const UObject* WorldContextObject;
			USBZSaveManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSaveManager_Get_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSaveManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSaveManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSaveManager_Get_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSaveManager_Get_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSaveManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSaveManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZSaveManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSaveManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSaveManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSaveManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSaveManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSaveManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSaveManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSaveManager, nullptr, "Get", nullptr, nullptr, sizeof(SBZSaveManager_eventGet_Parms), Z_Construct_UFunction_USBZSaveManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSaveManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSaveManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSaveManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSaveManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSaveManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSaveManager_GetChecked_Statics
	{
		struct SBZSaveManager_eventGetChecked_Parms
		{
			const UObject* WorldContextObject;
			USBZSaveManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSaveManager_GetChecked_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSaveManager_GetChecked_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSaveManager_eventGetChecked_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSaveManager_GetChecked_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSaveManager_GetChecked_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSaveManager_GetChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSaveManager_eventGetChecked_Parms, ReturnValue), Z_Construct_UClass_USBZSaveManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSaveManager_GetChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSaveManager_GetChecked_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSaveManager_GetChecked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSaveManager_GetChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSaveManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSaveManager_GetChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSaveManager, nullptr, "GetChecked", nullptr, nullptr, sizeof(SBZSaveManager_eventGetChecked_Parms), Z_Construct_UFunction_USBZSaveManager_GetChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSaveManager_GetChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSaveManager_GetChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSaveManager_GetChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSaveManager_GetChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSaveManager_GetChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveChallenges_Statics
	{
		struct SBZSaveManager_eventGetProgressionSaveChallenges_Parms
		{
			USBZProgressionSaveChallenges* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveChallenges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSaveManager_eventGetProgressionSaveChallenges_Parms, ReturnValue), Z_Construct_UClass_USBZProgressionSaveChallenges_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveChallenges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveChallenges_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveChallenges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveChallenges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSaveManager, nullptr, "GetProgressionSaveChallenges", nullptr, nullptr, sizeof(SBZSaveManager_eventGetProgressionSaveChallenges_Parms), Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveChallenges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveChallenges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveChallenges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveChallenges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveChallenges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveChallenges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveGame_Statics
	{
		struct SBZSaveManager_eventGetProgressionSaveGame_Parms
		{
			USBZProgressionSaveGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSaveManager_eventGetProgressionSaveGame_Parms, ReturnValue), Z_Construct_UClass_USBZProgressionSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSaveManager, nullptr, "GetProgressionSaveGame", nullptr, nullptr, sizeof(SBZSaveManager_eventGetProgressionSaveGame_Parms), Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSaveManager_UpdateLoadoutInLobby_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSaveManager_UpdateLoadoutInLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSaveManager_UpdateLoadoutInLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSaveManager, nullptr, "UpdateLoadoutInLobby", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSaveManager_UpdateLoadoutInLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSaveManager_UpdateLoadoutInLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSaveManager_UpdateLoadoutInLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSaveManager_UpdateLoadoutInLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSaveManager_NoRegister()
	{
		return USBZSaveManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZSaveManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionSaveGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressionSaveGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultProgressionSaveGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultProgressionSaveGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionSaveChallenges_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressionSaveChallenges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultProgressionSaveChallenges_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultProgressionSaveChallenges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSaveManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSaveManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSaveManager_Get, "Get" }, // 1131804416
		{ &Z_Construct_UFunction_USBZSaveManager_GetChecked, "GetChecked" }, // 344163378
		{ &Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveChallenges, "GetProgressionSaveChallenges" }, // 3676853883
		{ &Z_Construct_UFunction_USBZSaveManager_GetProgressionSaveGame, "GetProgressionSaveGame" }, // 2050235736
		{ &Z_Construct_UFunction_USBZSaveManager_UpdateLoadoutInLobby, "UpdateLoadoutInLobby" }, // 2224386287
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSaveManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSaveManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSaveManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSaveManager_Statics::NewProp_ProgressionSaveGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSaveManager" },
		{ "ModuleRelativePath", "Public/SBZSaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSaveManager_Statics::NewProp_ProgressionSaveGame = { "ProgressionSaveGame", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSaveManager, ProgressionSaveGame), Z_Construct_UClass_USBZProgressionSaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSaveManager_Statics::NewProp_ProgressionSaveGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSaveManager_Statics::NewProp_ProgressionSaveGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSaveManager_Statics::NewProp_DefaultProgressionSaveGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSaveManager" },
		{ "ModuleRelativePath", "Public/SBZSaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSaveManager_Statics::NewProp_DefaultProgressionSaveGame = { "DefaultProgressionSaveGame", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSaveManager, DefaultProgressionSaveGame), Z_Construct_UClass_USBZProgressionSaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSaveManager_Statics::NewProp_DefaultProgressionSaveGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSaveManager_Statics::NewProp_DefaultProgressionSaveGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSaveManager_Statics::NewProp_ProgressionSaveChallenges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSaveManager" },
		{ "ModuleRelativePath", "Public/SBZSaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSaveManager_Statics::NewProp_ProgressionSaveChallenges = { "ProgressionSaveChallenges", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSaveManager, ProgressionSaveChallenges), Z_Construct_UClass_USBZProgressionSaveChallenges_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSaveManager_Statics::NewProp_ProgressionSaveChallenges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSaveManager_Statics::NewProp_ProgressionSaveChallenges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSaveManager_Statics::NewProp_DefaultProgressionSaveChallenges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSaveManager" },
		{ "ModuleRelativePath", "Public/SBZSaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSaveManager_Statics::NewProp_DefaultProgressionSaveChallenges = { "DefaultProgressionSaveChallenges", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSaveManager, DefaultProgressionSaveChallenges), Z_Construct_UClass_USBZProgressionSaveChallenges_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSaveManager_Statics::NewProp_DefaultProgressionSaveChallenges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSaveManager_Statics::NewProp_DefaultProgressionSaveChallenges_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSaveManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSaveManager_Statics::NewProp_ProgressionSaveGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSaveManager_Statics::NewProp_DefaultProgressionSaveGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSaveManager_Statics::NewProp_ProgressionSaveChallenges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSaveManager_Statics::NewProp_DefaultProgressionSaveChallenges,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZSaveManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZSaveManagerInterface_NoRegister, (int32)VTABLE_OFFSET(USBZSaveManager, ISBZSaveManagerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSaveManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSaveManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSaveManager_Statics::ClassParams = {
		&USBZSaveManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSaveManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSaveManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSaveManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSaveManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSaveManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSaveManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSaveManager, 3604300696);
	template<> STARBREEZE_API UClass* StaticClass<USBZSaveManager>()
	{
		return USBZSaveManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSaveManager(Z_Construct_UClass_USBZSaveManager, &USBZSaveManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSaveManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSaveManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
