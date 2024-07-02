// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameInstance() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameInstance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGlobalItemDatabase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlatformUserManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplayManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSaveManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTimeEventManager_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReplayInfo();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameEventBroker_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineEventBroker_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMatchmakingProvider();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHostingProvider();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkInitBank_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMusicManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWwiseMotionManagerComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVolumeManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGamepadBindingsManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZListenerManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSoundEnvironmentManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChallengeManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChallengeCategoryManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDSChallengeManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZServerStatusManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameStateMachine_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsMenuManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponConfigManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponProgressionManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssetDatabaseManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStoreManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatisticsManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadoutManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteUser_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAnalyticsManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWorldLoader_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSafeHouseManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCurrencyManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExperienceManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInstantLootManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInfamyManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPreplanningAssetManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAchievementManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteNetworkErrorManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemProgressionManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBanPlayerManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUE4StatsProfiler_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMergePartyManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFineGrainedRateLimitManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZGameInstance::execDisplayVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameInstance::execGetBuiltFromChangelist)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USBZGameInstance::GetBuiltFromChangelist();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameInstance::execGetDifficulty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZDifficulty*)Z_Param__Result=P_THIS->GetDifficulty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameInstance::execGetGlobalItemDatabase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZGlobalItemDatabase**)Z_Param__Result=P_THIS->GetGlobalItemDatabase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameInstance::execGetPlatformUserManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZPlatformUserManager**)Z_Param__Result=P_THIS->GetPlatformUserManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameInstance::execGetReplayManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZReplayManager**)Z_Param__Result=P_THIS->GetReplayManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameInstance::execGetSaveManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSaveManager**)Z_Param__Result=P_THIS->GetSaveManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameInstance::execGetTimeEventManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZTimeEventManager**)Z_Param__Result=P_THIS->GetTimeEventManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameInstance::execHandleGameStateEntered)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleGameStateEntered(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameInstance::execSetDifficulty)
	{
		P_GET_ENUM(ESBZDifficulty,Z_Param_InDifficulty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDifficulty(ESBZDifficulty(Z_Param_InDifficulty));
		P_NATIVE_END;
	}
	static FName NAME_USBZGameInstance_OnFindReplaysComplete = FName(TEXT("OnFindReplaysComplete"));
	void USBZGameInstance::OnFindReplaysComplete(TArray<FSBZReplayInfo> const& Replays)
	{
		SBZGameInstance_eventOnFindReplaysComplete_Parms Parms;
		Parms.Replays=Replays;
		ProcessEvent(FindFunctionChecked(NAME_USBZGameInstance_OnFindReplaysComplete),&Parms);
	}
	void USBZGameInstance::StaticRegisterNativesUSBZGameInstance()
	{
		UClass* Class = USBZGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayVersion", &USBZGameInstance::execDisplayVersion },
			{ "GetBuiltFromChangelist", &USBZGameInstance::execGetBuiltFromChangelist },
			{ "GetDifficulty", &USBZGameInstance::execGetDifficulty },
			{ "GetGlobalItemDatabase", &USBZGameInstance::execGetGlobalItemDatabase },
			{ "GetPlatformUserManager", &USBZGameInstance::execGetPlatformUserManager },
			{ "GetReplayManager", &USBZGameInstance::execGetReplayManager },
			{ "GetSaveManager", &USBZGameInstance::execGetSaveManager },
			{ "GetTimeEventManager", &USBZGameInstance::execGetTimeEventManager },
			{ "HandleGameStateEntered", &USBZGameInstance::execHandleGameStateEntered },
			{ "SetDifficulty", &USBZGameInstance::execSetDifficulty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZGameInstance_DisplayVersion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameInstance_DisplayVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameInstance_DisplayVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameInstance, nullptr, "DisplayVersion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameInstance_DisplayVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_DisplayVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameInstance_DisplayVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameInstance_DisplayVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameInstance_GetBuiltFromChangelist_Statics
	{
		struct SBZGameInstance_eventGetBuiltFromChangelist_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZGameInstance_GetBuiltFromChangelist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameInstance_eventGetBuiltFromChangelist_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameInstance_GetBuiltFromChangelist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameInstance_GetBuiltFromChangelist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameInstance_GetBuiltFromChangelist_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameInstance_GetBuiltFromChangelist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameInstance, nullptr, "GetBuiltFromChangelist", nullptr, nullptr, sizeof(SBZGameInstance_eventGetBuiltFromChangelist_Parms), Z_Construct_UFunction_USBZGameInstance_GetBuiltFromChangelist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_GetBuiltFromChangelist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameInstance_GetBuiltFromChangelist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_GetBuiltFromChangelist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameInstance_GetBuiltFromChangelist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameInstance_GetBuiltFromChangelist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameInstance_GetDifficulty_Statics
	{
		struct SBZGameInstance_eventGetDifficulty_Parms
		{
			ESBZDifficulty ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameInstance_GetDifficulty_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameInstance_GetDifficulty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameInstance_eventGetDifficulty_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameInstance_GetDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameInstance_GetDifficulty_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameInstance_GetDifficulty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameInstance_GetDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameInstance_GetDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameInstance, nullptr, "GetDifficulty", nullptr, nullptr, sizeof(SBZGameInstance_eventGetDifficulty_Parms), Z_Construct_UFunction_USBZGameInstance_GetDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_GetDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameInstance_GetDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_GetDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameInstance_GetDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameInstance_GetDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameInstance_GetGlobalItemDatabase_Statics
	{
		struct SBZGameInstance_eventGetGlobalItemDatabase_Parms
		{
			USBZGlobalItemDatabase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameInstance_GetGlobalItemDatabase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameInstance_eventGetGlobalItemDatabase_Parms, ReturnValue), Z_Construct_UClass_USBZGlobalItemDatabase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameInstance_GetGlobalItemDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameInstance_GetGlobalItemDatabase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameInstance_GetGlobalItemDatabase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameInstance_GetGlobalItemDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameInstance, nullptr, "GetGlobalItemDatabase", nullptr, nullptr, sizeof(SBZGameInstance_eventGetGlobalItemDatabase_Parms), Z_Construct_UFunction_USBZGameInstance_GetGlobalItemDatabase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_GetGlobalItemDatabase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameInstance_GetGlobalItemDatabase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_GetGlobalItemDatabase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameInstance_GetGlobalItemDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameInstance_GetGlobalItemDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameInstance_GetPlatformUserManager_Statics
	{
		struct SBZGameInstance_eventGetPlatformUserManager_Parms
		{
			USBZPlatformUserManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameInstance_GetPlatformUserManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameInstance_eventGetPlatformUserManager_Parms, ReturnValue), Z_Construct_UClass_USBZPlatformUserManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameInstance_GetPlatformUserManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameInstance_GetPlatformUserManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameInstance_GetPlatformUserManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameInstance_GetPlatformUserManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameInstance, nullptr, "GetPlatformUserManager", nullptr, nullptr, sizeof(SBZGameInstance_eventGetPlatformUserManager_Parms), Z_Construct_UFunction_USBZGameInstance_GetPlatformUserManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_GetPlatformUserManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameInstance_GetPlatformUserManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_GetPlatformUserManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameInstance_GetPlatformUserManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameInstance_GetPlatformUserManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameInstance_GetReplayManager_Statics
	{
		struct SBZGameInstance_eventGetReplayManager_Parms
		{
			USBZReplayManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameInstance_GetReplayManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameInstance_eventGetReplayManager_Parms, ReturnValue), Z_Construct_UClass_USBZReplayManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameInstance_GetReplayManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameInstance_GetReplayManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameInstance_GetReplayManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameInstance_GetReplayManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameInstance, nullptr, "GetReplayManager", nullptr, nullptr, sizeof(SBZGameInstance_eventGetReplayManager_Parms), Z_Construct_UFunction_USBZGameInstance_GetReplayManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_GetReplayManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameInstance_GetReplayManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_GetReplayManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameInstance_GetReplayManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameInstance_GetReplayManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameInstance_GetSaveManager_Statics
	{
		struct SBZGameInstance_eventGetSaveManager_Parms
		{
			USBZSaveManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameInstance_GetSaveManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameInstance_eventGetSaveManager_Parms, ReturnValue), Z_Construct_UClass_USBZSaveManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameInstance_GetSaveManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameInstance_GetSaveManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameInstance_GetSaveManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameInstance_GetSaveManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameInstance, nullptr, "GetSaveManager", nullptr, nullptr, sizeof(SBZGameInstance_eventGetSaveManager_Parms), Z_Construct_UFunction_USBZGameInstance_GetSaveManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_GetSaveManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameInstance_GetSaveManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_GetSaveManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameInstance_GetSaveManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameInstance_GetSaveManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameInstance_GetTimeEventManager_Statics
	{
		struct SBZGameInstance_eventGetTimeEventManager_Parms
		{
			USBZTimeEventManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameInstance_GetTimeEventManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameInstance_eventGetTimeEventManager_Parms, ReturnValue), Z_Construct_UClass_USBZTimeEventManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameInstance_GetTimeEventManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameInstance_GetTimeEventManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameInstance_GetTimeEventManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameInstance_GetTimeEventManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameInstance, nullptr, "GetTimeEventManager", nullptr, nullptr, sizeof(SBZGameInstance_eventGetTimeEventManager_Parms), Z_Construct_UFunction_USBZGameInstance_GetTimeEventManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_GetTimeEventManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameInstance_GetTimeEventManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_GetTimeEventManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameInstance_GetTimeEventManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameInstance_GetTimeEventManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameInstance_HandleGameStateEntered_Statics
	{
		struct SBZGameInstance_eventHandleGameStateEntered_Parms
		{
			FName StateName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZGameInstance_HandleGameStateEntered_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameInstance_eventHandleGameStateEntered_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameInstance_HandleGameStateEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameInstance_HandleGameStateEntered_Statics::NewProp_StateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameInstance_HandleGameStateEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameInstance_HandleGameStateEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameInstance, nullptr, "HandleGameStateEntered", nullptr, nullptr, sizeof(SBZGameInstance_eventHandleGameStateEntered_Parms), Z_Construct_UFunction_USBZGameInstance_HandleGameStateEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_HandleGameStateEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameInstance_HandleGameStateEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_HandleGameStateEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameInstance_HandleGameStateEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameInstance_HandleGameStateEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameInstance_OnFindReplaysComplete_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Replays_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Replays_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Replays;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameInstance_OnFindReplaysComplete_Statics::NewProp_Replays_Inner = { "Replays", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZReplayInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameInstance_OnFindReplaysComplete_Statics::NewProp_Replays_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZGameInstance_OnFindReplaysComplete_Statics::NewProp_Replays = { "Replays", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameInstance_eventOnFindReplaysComplete_Parms, Replays), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZGameInstance_OnFindReplaysComplete_Statics::NewProp_Replays_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_OnFindReplaysComplete_Statics::NewProp_Replays_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameInstance_OnFindReplaysComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameInstance_OnFindReplaysComplete_Statics::NewProp_Replays_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameInstance_OnFindReplaysComplete_Statics::NewProp_Replays,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameInstance_OnFindReplaysComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameInstance_OnFindReplaysComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameInstance, nullptr, "OnFindReplaysComplete", nullptr, nullptr, sizeof(SBZGameInstance_eventOnFindReplaysComplete_Parms), Z_Construct_UFunction_USBZGameInstance_OnFindReplaysComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_OnFindReplaysComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameInstance_OnFindReplaysComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_OnFindReplaysComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameInstance_OnFindReplaysComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameInstance_OnFindReplaysComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameInstance_SetDifficulty_Statics
	{
		struct SBZGameInstance_eventSetDifficulty_Parms
		{
			ESBZDifficulty InDifficulty;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InDifficulty_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InDifficulty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameInstance_SetDifficulty_Statics::NewProp_InDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameInstance_SetDifficulty_Statics::NewProp_InDifficulty = { "InDifficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameInstance_eventSetDifficulty_Parms, InDifficulty), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameInstance_SetDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameInstance_SetDifficulty_Statics::NewProp_InDifficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameInstance_SetDifficulty_Statics::NewProp_InDifficulty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameInstance_SetDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameInstance_SetDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameInstance, nullptr, "SetDifficulty", nullptr, nullptr, sizeof(SBZGameInstance_eventSetDifficulty_Parms), Z_Construct_UFunction_USBZGameInstance_SetDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_SetDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameInstance_SetDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameInstance_SetDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameInstance_SetDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameInstance_SetDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZGameInstance_NoRegister()
	{
		return USBZGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameEventBroker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameEventBroker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineEventBroker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineEventBroker;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchmakingProvider_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchmakingProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchmakingProvider;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HostingProvider_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostingProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HostingProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseInitBank_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WwiseInitBank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MusicManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MusicManagerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MotionManagerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_VolumeManagerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadBindingsManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GamepadBindingsManagerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListenerManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ListenerManagerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundEnvironmentManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SoundEnvironmentManagerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChallengeManagerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeCategoryManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChallengeCategoryManagerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DSChallengeManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DSChallengeManagerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerStatusManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ServerStatusManagerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UIManagerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalItemDatabaseClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GlobalItemDatabaseClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalQuickStartItemDatabaseClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GlobalQuickStartItemDatabaseClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameStateMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameStateMachine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FramerateLimitOutOfFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FramerateLimitOutOfFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsMenuManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingsMenuManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponConfigManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponConfigManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponCosmeticsManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponCosmeticsManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponProgressionManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponProgressionManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetDatabaseManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetDatabaseManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoreManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStatisticsManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStatisticsManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadoutManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MusicManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MusicManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VolumeManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadBindingsManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GamepadBindingsManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListenerManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ListenerManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundEnvironmentManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundEnvironmentManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AccelByteUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChallengeManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DSChallengeManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DSChallengeManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeCategoryManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChallengeCategoryManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerStatusManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerStatusManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalyticsManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnalyticsManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLoader_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldLoader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplayManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafeHouseManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SafeHouseManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalItemDatabase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlobalItemDatabase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrencyManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperienceManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExperienceManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstantLootManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstantLootManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfamyManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreplanningAssetManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreplanningAssetManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AchievementManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeEventManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeEventManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteNetworkPoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AccelByteNetworkPoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemProgressionManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemProgressionManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BanPlayerManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BanPlayerManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UE4StatsProfiler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UE4StatsProfiler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameplayManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergePartyManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MergePartyManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FGRLManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FGRLManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformUserManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformUserManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZGameInstance_DisplayVersion, "DisplayVersion" }, // 3040759571
		{ &Z_Construct_UFunction_USBZGameInstance_GetBuiltFromChangelist, "GetBuiltFromChangelist" }, // 1468269878
		{ &Z_Construct_UFunction_USBZGameInstance_GetDifficulty, "GetDifficulty" }, // 770671723
		{ &Z_Construct_UFunction_USBZGameInstance_GetGlobalItemDatabase, "GetGlobalItemDatabase" }, // 3810508968
		{ &Z_Construct_UFunction_USBZGameInstance_GetPlatformUserManager, "GetPlatformUserManager" }, // 158134579
		{ &Z_Construct_UFunction_USBZGameInstance_GetReplayManager, "GetReplayManager" }, // 2723098470
		{ &Z_Construct_UFunction_USBZGameInstance_GetSaveManager, "GetSaveManager" }, // 3323892158
		{ &Z_Construct_UFunction_USBZGameInstance_GetTimeEventManager, "GetTimeEventManager" }, // 204353965
		{ &Z_Construct_UFunction_USBZGameInstance_HandleGameStateEntered, "HandleGameStateEntered" }, // 3030687324
		{ &Z_Construct_UFunction_USBZGameInstance_OnFindReplaysComplete, "OnFindReplaysComplete" }, // 719201385
		{ &Z_Construct_UFunction_USBZGameInstance_SetDifficulty, "SetDifficulty" }, // 1030163042
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GameEventBroker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GameEventBroker = { "GameEventBroker", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, GameEventBroker), Z_Construct_UClass_USBZGameEventBroker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GameEventBroker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GameEventBroker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_OnlineEventBroker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_OnlineEventBroker = { "OnlineEventBroker", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, OnlineEventBroker), Z_Construct_UClass_USBZOnlineEventBroker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_OnlineEventBroker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_OnlineEventBroker_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MatchmakingProvider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MatchmakingProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MatchmakingProvider = { "MatchmakingProvider", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, MatchmakingProvider), Z_Construct_UEnum_Starbreeze_ESBZMatchmakingProvider, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MatchmakingProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MatchmakingProvider_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_HostingProvider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_HostingProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_HostingProvider = { "HostingProvider", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, HostingProvider), Z_Construct_UEnum_Starbreeze_ESBZHostingProvider, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_HostingProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_HostingProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WwiseInitBank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WwiseInitBank = { "WwiseInitBank", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, WwiseInitBank), Z_Construct_UClass_UAkInitBank_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WwiseInitBank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WwiseInitBank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MusicManagerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MusicManagerClass = { "MusicManagerClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, MusicManagerClass), Z_Construct_UClass_USBZMusicManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MusicManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MusicManagerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MotionManagerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MotionManagerClass = { "MotionManagerClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, MotionManagerClass), Z_Construct_UClass_USBZWwiseMotionManagerComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MotionManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MotionManagerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_VolumeManagerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_VolumeManagerClass = { "VolumeManagerClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, VolumeManagerClass), Z_Construct_UClass_USBZVolumeManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_VolumeManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_VolumeManagerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GamepadBindingsManagerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GamepadBindingsManagerClass = { "GamepadBindingsManagerClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, GamepadBindingsManagerClass), Z_Construct_UClass_USBZGamepadBindingsManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GamepadBindingsManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GamepadBindingsManagerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ListenerManagerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ListenerManagerClass = { "ListenerManagerClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, ListenerManagerClass), Z_Construct_UClass_USBZListenerManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ListenerManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ListenerManagerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SoundEnvironmentManagerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SoundEnvironmentManagerClass = { "SoundEnvironmentManagerClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, SoundEnvironmentManagerClass), Z_Construct_UClass_USBZSoundEnvironmentManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SoundEnvironmentManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SoundEnvironmentManagerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeManagerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeManagerClass = { "ChallengeManagerClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, ChallengeManagerClass), Z_Construct_UClass_USBZChallengeManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeManagerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeCategoryManagerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeCategoryManagerClass = { "ChallengeCategoryManagerClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, ChallengeCategoryManagerClass), Z_Construct_UClass_USBZChallengeCategoryManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeCategoryManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeCategoryManagerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_DSChallengeManagerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_DSChallengeManagerClass = { "DSChallengeManagerClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, DSChallengeManagerClass), Z_Construct_UClass_USBZDSChallengeManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_DSChallengeManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_DSChallengeManagerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ServerStatusManagerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ServerStatusManagerClass = { "ServerStatusManagerClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, ServerStatusManagerClass), Z_Construct_UClass_USBZServerStatusManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ServerStatusManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ServerStatusManagerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_UIManagerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_UIManagerClass = { "UIManagerClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, UIManagerClass), Z_Construct_UClass_USBZUIManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_UIManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_UIManagerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GlobalItemDatabaseClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GlobalItemDatabaseClass = { "GlobalItemDatabaseClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, GlobalItemDatabaseClass), Z_Construct_UClass_USBZGlobalItemDatabase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GlobalItemDatabaseClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GlobalItemDatabaseClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GlobalQuickStartItemDatabaseClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GlobalQuickStartItemDatabaseClass = { "GlobalQuickStartItemDatabaseClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, GlobalQuickStartItemDatabaseClass), Z_Construct_UClass_USBZGlobalItemDatabase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GlobalQuickStartItemDatabaseClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GlobalQuickStartItemDatabaseClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GameStateMachine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GameStateMachine = { "GameStateMachine", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, GameStateMachine), Z_Construct_UClass_USBZGameStateMachine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GameStateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GameStateMachine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_FramerateLimitOutOfFocus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_FramerateLimitOutOfFocus = { "FramerateLimitOutOfFocus", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, FramerateLimitOutOfFocus), METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_FramerateLimitOutOfFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_FramerateLimitOutOfFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SaveManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SaveManager = { "SaveManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, SaveManager), Z_Construct_UClass_USBZSaveManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SaveManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SaveManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SettingsMenuManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SettingsMenuManager = { "SettingsMenuManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, SettingsMenuManager), Z_Construct_UClass_USBZSettingsMenuManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SettingsMenuManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SettingsMenuManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WeaponConfigManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WeaponConfigManager = { "WeaponConfigManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, WeaponConfigManager), Z_Construct_UClass_USBZWeaponConfigManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WeaponConfigManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WeaponConfigManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WeaponCosmeticsManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WeaponCosmeticsManager = { "WeaponCosmeticsManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, WeaponCosmeticsManager), Z_Construct_UClass_USBZCosmeticsManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WeaponCosmeticsManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WeaponCosmeticsManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WeaponProgressionManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WeaponProgressionManager = { "WeaponProgressionManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, WeaponProgressionManager), Z_Construct_UClass_USBZWeaponProgressionManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WeaponProgressionManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WeaponProgressionManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AssetDatabaseManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AssetDatabaseManager = { "AssetDatabaseManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, AssetDatabaseManager), Z_Construct_UClass_USBZAssetDatabaseManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AssetDatabaseManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AssetDatabaseManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_StoreManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_StoreManager = { "StoreManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, StoreManager), Z_Construct_UClass_USBZStoreManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_StoreManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_StoreManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_InventoryManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, InventoryManager), Z_Construct_UClass_USBZInventoryManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_InventoryManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_InventoryManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_PlayerStatisticsManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_PlayerStatisticsManager = { "PlayerStatisticsManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, PlayerStatisticsManager), Z_Construct_UClass_USBZPlayerStatisticsManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_PlayerStatisticsManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_PlayerStatisticsManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_LoadoutManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_LoadoutManager = { "LoadoutManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, LoadoutManager), Z_Construct_UClass_USBZLoadoutManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_LoadoutManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_LoadoutManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MusicManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MusicManager = { "MusicManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, MusicManager), Z_Construct_UClass_USBZMusicManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MusicManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MusicManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_VolumeManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_VolumeManager = { "VolumeManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, VolumeManager), Z_Construct_UClass_USBZVolumeManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_VolumeManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_VolumeManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MotionManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MotionManager = { "MotionManager", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, MotionManager), Z_Construct_UClass_USBZWwiseMotionManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MotionManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MotionManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GamepadBindingsManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GamepadBindingsManager = { "GamepadBindingsManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, GamepadBindingsManager), Z_Construct_UClass_USBZGamepadBindingsManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GamepadBindingsManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GamepadBindingsManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ListenerManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ListenerManager = { "ListenerManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, ListenerManager), Z_Construct_UClass_USBZListenerManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ListenerManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ListenerManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SoundEnvironmentManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SoundEnvironmentManager = { "SoundEnvironmentManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, SoundEnvironmentManager), Z_Construct_UClass_USBZSoundEnvironmentManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SoundEnvironmentManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SoundEnvironmentManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AccelByteUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AccelByteUser = { "AccelByteUser", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, AccelByteUser), Z_Construct_UClass_USBZAccelByteUser_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AccelByteUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AccelByteUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeManager = { "ChallengeManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, ChallengeManager), Z_Construct_UClass_USBZChallengeManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_DSChallengeManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_DSChallengeManager = { "DSChallengeManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, DSChallengeManager), Z_Construct_UClass_USBZDSChallengeManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_DSChallengeManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_DSChallengeManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeCategoryManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeCategoryManager = { "ChallengeCategoryManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, ChallengeCategoryManager), Z_Construct_UClass_USBZChallengeCategoryManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeCategoryManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeCategoryManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ServerStatusManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ServerStatusManager = { "ServerStatusManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, ServerStatusManager), Z_Construct_UClass_USBZServerStatusManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ServerStatusManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ServerStatusManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_UIManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_UIManager = { "UIManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, UIManager), Z_Construct_UClass_USBZUIManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_UIManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_UIManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AnalyticsManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AnalyticsManager = { "AnalyticsManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, AnalyticsManager), Z_Construct_UClass_USBZAnalyticsManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AnalyticsManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AnalyticsManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WorldLoader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WorldLoader = { "WorldLoader", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, WorldLoader), Z_Construct_UClass_USBZWorldLoader_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WorldLoader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WorldLoader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ReplayManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ReplayManager = { "ReplayManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, ReplayManager), Z_Construct_UClass_USBZReplayManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ReplayManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ReplayManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SafeHouseManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SafeHouseManager = { "SafeHouseManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, SafeHouseManager), Z_Construct_UClass_USBZSafeHouseManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SafeHouseManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SafeHouseManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GlobalItemDatabase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GlobalItemDatabase = { "GlobalItemDatabase", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, GlobalItemDatabase), Z_Construct_UClass_USBZGlobalItemDatabase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GlobalItemDatabase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GlobalItemDatabase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_CharacterManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_CharacterManager = { "CharacterManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, CharacterManager), Z_Construct_UClass_USBZCharacterManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_CharacterManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_CharacterManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_CurrencyManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_CurrencyManager = { "CurrencyManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, CurrencyManager), Z_Construct_UClass_USBZCurrencyManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_CurrencyManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_CurrencyManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ExperienceManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ExperienceManager = { "ExperienceManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, ExperienceManager), Z_Construct_UClass_USBZExperienceManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ExperienceManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ExperienceManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_InstantLootManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_InstantLootManager = { "InstantLootManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, InstantLootManager), Z_Construct_UClass_USBZInstantLootManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_InstantLootManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_InstantLootManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_InfamyManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_InfamyManager = { "InfamyManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, InfamyManager), Z_Construct_UClass_USBZInfamyManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_InfamyManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_InfamyManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SkillManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SkillManager = { "SkillManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, SkillManager), Z_Construct_UClass_USBZSkillManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SkillManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SkillManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_PreplanningAssetManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_PreplanningAssetManager = { "PreplanningAssetManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, PreplanningAssetManager), Z_Construct_UClass_USBZPreplanningAssetManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_PreplanningAssetManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_PreplanningAssetManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AchievementManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AchievementManager = { "AchievementManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, AchievementManager), Z_Construct_UClass_USBZAchievementManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AchievementManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AchievementManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_TimeEventManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_TimeEventManager = { "TimeEventManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, TimeEventManager), Z_Construct_UClass_USBZTimeEventManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_TimeEventManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_TimeEventManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AccelByteNetworkPoll_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AccelByteNetworkPoll = { "AccelByteNetworkPoll", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, AccelByteNetworkPoll), Z_Construct_UClass_USBZAccelByteNetworkErrorManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AccelByteNetworkPoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AccelByteNetworkPoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ItemProgressionManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ItemProgressionManager = { "ItemProgressionManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, ItemProgressionManager), Z_Construct_UClass_USBZItemProgressionManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ItemProgressionManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ItemProgressionManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_BanPlayerManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_BanPlayerManager = { "BanPlayerManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, BanPlayerManager), Z_Construct_UClass_USBZBanPlayerManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_BanPlayerManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_BanPlayerManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_UE4StatsProfiler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_UE4StatsProfiler = { "UE4StatsProfiler", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, UE4StatsProfiler), Z_Construct_UClass_USBZUE4StatsProfiler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_UE4StatsProfiler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_UE4StatsProfiler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GameplayManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GameplayManager = { "GameplayManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, GameplayManager), Z_Construct_UClass_USBZGameplayManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GameplayManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GameplayManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MergePartyManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MergePartyManager = { "MergePartyManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, MergePartyManager), Z_Construct_UClass_USBZMergePartyManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MergePartyManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MergePartyManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_FGRLManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_FGRLManager = { "FGRLManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, FGRLManager), Z_Construct_UClass_USBZFineGrainedRateLimitManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_FGRLManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_FGRLManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameInstance_Statics::NewProp_PlatformUserManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameInstance" },
		{ "ModuleRelativePath", "Public/SBZGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameInstance_Statics::NewProp_PlatformUserManager = { "PlatformUserManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameInstance, PlatformUserManager), Z_Construct_UClass_USBZPlatformUserManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_PlatformUserManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::NewProp_PlatformUserManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GameEventBroker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_OnlineEventBroker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MatchmakingProvider_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MatchmakingProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_HostingProvider_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_HostingProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WwiseInitBank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MusicManagerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MotionManagerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_VolumeManagerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GamepadBindingsManagerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ListenerManagerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SoundEnvironmentManagerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeManagerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeCategoryManagerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_DSChallengeManagerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ServerStatusManagerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_UIManagerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GlobalItemDatabaseClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GlobalQuickStartItemDatabaseClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GameStateMachine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_FramerateLimitOutOfFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SaveManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SettingsMenuManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WeaponConfigManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WeaponCosmeticsManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WeaponProgressionManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AssetDatabaseManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_StoreManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_InventoryManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_PlayerStatisticsManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_LoadoutManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MusicManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_VolumeManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MotionManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GamepadBindingsManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ListenerManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SoundEnvironmentManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AccelByteUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_DSChallengeManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ChallengeCategoryManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ServerStatusManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_UIManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AnalyticsManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_WorldLoader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ReplayManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SafeHouseManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GlobalItemDatabase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_CharacterManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_CurrencyManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ExperienceManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_InstantLootManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_InfamyManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_SkillManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_PreplanningAssetManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AchievementManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_TimeEventManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_AccelByteNetworkPoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_ItemProgressionManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_BanPlayerManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_UE4StatsProfiler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_GameplayManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_MergePartyManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_FGRLManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameInstance_Statics::NewProp_PlatformUserManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameInstance_Statics::ClassParams = {
		&USBZGameInstance::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::PropPointers),
		0,
		0x009000AEu,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameInstance, 1995261761);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameInstance>()
	{
		return USBZGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameInstance(Z_Construct_UClass_USBZGameInstance, &USBZGameInstance::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
