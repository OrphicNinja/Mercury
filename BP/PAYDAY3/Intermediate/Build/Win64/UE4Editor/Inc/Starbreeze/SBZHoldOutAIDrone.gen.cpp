// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutAIDrone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutAIDrone() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHoldOutAIDrone_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHoldOutAIDrone();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHoldOutArea_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutObjectiveBase_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHoldOutObjectiveResult();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveStarted__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveProgressChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutAreaComplete__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIConfigDPSData();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZObjective_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAbilitySystemComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutFogApplierComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHoldOutModeDifficulty();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayTagCounterArrayOwnerInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZHoldOutAIDrone::execApplyGamePlayEffectOnEnemies)
	{
		P_GET_OBJECT(UClass,Z_Param_GameplayEffectClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyGamePlayEffectOnEnemies(Z_Param_GameplayEffectClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutAIDrone::execClearTagsForCurrentObjectives)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearTagsForCurrentObjectives();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutAIDrone::execGetGameplayTagCount)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGameplayTagCount(Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutAIDrone::execMoveToNextHoldOutArea)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToNextHoldOutArea();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutAIDrone::execMulticast_ApplyGamePlayEffectOnEnemies)
	{
		P_GET_OBJECT(UClass,Z_Param_GameplayEffectClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ApplyGamePlayEffectOnEnemies_Implementation(Z_Param_GameplayEffectClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutAIDrone::execOnAreaCompletedCallBack)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_OBJECT(ASBZHoldOutArea,Z_Param_HoldOutArea);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAreaCompletedCallBack(Z_Param_bSuccess,Z_Param_HoldOutArea);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutAIDrone::execOnMoveCompleted)
	{
		P_GET_STRUCT(FAIRequestID,Z_Param_RequestID);
		P_GET_PROPERTY(FByteProperty,Z_Param_MovementResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMoveCompleted(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_MovementResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutAIDrone::execOnObjectiveProgressChangedCallBack)
	{
		P_GET_OBJECT(USBZHoldOutObjectiveBase,Z_Param_Objective);
		P_GET_PROPERTY(FIntProperty,Z_Param_OldProgressCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewProgressCount);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_GrantedTags);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_RemovedTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnObjectiveProgressChangedCallBack(Z_Param_Objective,Z_Param_OldProgressCount,Z_Param_NewProgressCount,Z_Param_Out_GrantedTags,Z_Param_Out_RemovedTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutAIDrone::execOnObjectiveResultChangedCallBack)
	{
		P_GET_ENUM(ESBZHoldOutObjectiveResult,Z_Param_Result);
		P_GET_OBJECT(USBZHoldOutObjectiveBase,Z_Param_Objective);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_GrantedTags);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_RemovedTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnObjectiveResultChangedCallBack(ESBZHoldOutObjectiveResult(Z_Param_Result),Z_Param_Objective,Z_Param_Out_GrantedTags,Z_Param_Out_RemovedTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutAIDrone::execOnObjectiveStartedCallBack)
	{
		P_GET_OBJECT(USBZHoldOutObjectiveBase,Z_Param_Objective);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_GrantedTags);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_RemovedTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnObjectiveStartedCallBack(Z_Param_Objective,Z_Param_Out_GrantedTags,Z_Param_Out_RemovedTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutAIDrone::execOverrideFogSettings)
	{
		P_GET_STRUCT_REF(FSBZHoldOutDroneFogSettings,Z_Param_Out_FogSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OverrideDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverrideFogSettings(Z_Param_Out_FogSettings,Z_Param_OverrideDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutAIDrone::execSetGameplayTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameplayTag(Z_Param_Out_Tag,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutAIDrone::execStopOverrideFogSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopOverrideFogSettings();
		P_NATIVE_END;
	}
	static FName NAME_ASBZHoldOutAIDrone_Multicast_ApplyGamePlayEffectOnEnemies = FName(TEXT("Multicast_ApplyGamePlayEffectOnEnemies"));
	void ASBZHoldOutAIDrone::Multicast_ApplyGamePlayEffectOnEnemies(TSubclassOf<UGameplayEffect>  GameplayEffectClass)
	{
		SBZHoldOutAIDrone_eventMulticast_ApplyGamePlayEffectOnEnemies_Parms Parms;
		Parms.GameplayEffectClass=GameplayEffectClass;
		ProcessEvent(FindFunctionChecked(NAME_ASBZHoldOutAIDrone_Multicast_ApplyGamePlayEffectOnEnemies),&Parms);
	}
	void ASBZHoldOutAIDrone::StaticRegisterNativesASBZHoldOutAIDrone()
	{
		UClass* Class = ASBZHoldOutAIDrone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyGamePlayEffectOnEnemies", &ASBZHoldOutAIDrone::execApplyGamePlayEffectOnEnemies },
			{ "ClearTagsForCurrentObjectives", &ASBZHoldOutAIDrone::execClearTagsForCurrentObjectives },
			{ "GetGameplayTagCount", &ASBZHoldOutAIDrone::execGetGameplayTagCount },
			{ "MoveToNextHoldOutArea", &ASBZHoldOutAIDrone::execMoveToNextHoldOutArea },
			{ "Multicast_ApplyGamePlayEffectOnEnemies", &ASBZHoldOutAIDrone::execMulticast_ApplyGamePlayEffectOnEnemies },
			{ "OnAreaCompletedCallBack", &ASBZHoldOutAIDrone::execOnAreaCompletedCallBack },
			{ "OnMoveCompleted", &ASBZHoldOutAIDrone::execOnMoveCompleted },
			{ "OnObjectiveProgressChangedCallBack", &ASBZHoldOutAIDrone::execOnObjectiveProgressChangedCallBack },
			{ "OnObjectiveResultChangedCallBack", &ASBZHoldOutAIDrone::execOnObjectiveResultChangedCallBack },
			{ "OnObjectiveStartedCallBack", &ASBZHoldOutAIDrone::execOnObjectiveStartedCallBack },
			{ "OverrideFogSettings", &ASBZHoldOutAIDrone::execOverrideFogSettings },
			{ "SetGameplayTag", &ASBZHoldOutAIDrone::execSetGameplayTag },
			{ "StopOverrideFogSettings", &ASBZHoldOutAIDrone::execStopOverrideFogSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZHoldOutAIDrone_ApplyGamePlayEffectOnEnemies_Statics
	{
		struct SBZHoldOutAIDrone_eventApplyGamePlayEffectOnEnemies_Parms
		{
			TSubclassOf<UGameplayEffect>  GameplayEffectClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_ApplyGamePlayEffectOnEnemies_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventApplyGamePlayEffectOnEnemies_Parms, GameplayEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutAIDrone_ApplyGamePlayEffectOnEnemies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_ApplyGamePlayEffectOnEnemies_Statics::NewProp_GameplayEffectClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_ApplyGamePlayEffectOnEnemies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutAIDrone_ApplyGamePlayEffectOnEnemies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutAIDrone, nullptr, "ApplyGamePlayEffectOnEnemies", nullptr, nullptr, sizeof(SBZHoldOutAIDrone_eventApplyGamePlayEffectOnEnemies_Parms), Z_Construct_UFunction_ASBZHoldOutAIDrone_ApplyGamePlayEffectOnEnemies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_ApplyGamePlayEffectOnEnemies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_ApplyGamePlayEffectOnEnemies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_ApplyGamePlayEffectOnEnemies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutAIDrone_ApplyGamePlayEffectOnEnemies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutAIDrone_ApplyGamePlayEffectOnEnemies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutAIDrone_ClearTagsForCurrentObjectives_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_ClearTagsForCurrentObjectives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutAIDrone_ClearTagsForCurrentObjectives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutAIDrone, nullptr, "ClearTagsForCurrentObjectives", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_ClearTagsForCurrentObjectives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_ClearTagsForCurrentObjectives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutAIDrone_ClearTagsForCurrentObjectives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutAIDrone_ClearTagsForCurrentObjectives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutAIDrone_GetGameplayTagCount_Statics
	{
		struct SBZHoldOutAIDrone_eventGetGameplayTagCount_Parms
		{
			FGameplayTag Tag;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_GetGameplayTagCount_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_GetGameplayTagCount_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventGetGameplayTagCount_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_GetGameplayTagCount_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_GetGameplayTagCount_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_GetGameplayTagCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventGetGameplayTagCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutAIDrone_GetGameplayTagCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_GetGameplayTagCount_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_GetGameplayTagCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_GetGameplayTagCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutAIDrone_GetGameplayTagCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutAIDrone, nullptr, "GetGameplayTagCount", nullptr, nullptr, sizeof(SBZHoldOutAIDrone_eventGetGameplayTagCount_Parms), Z_Construct_UFunction_ASBZHoldOutAIDrone_GetGameplayTagCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_GetGameplayTagCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_GetGameplayTagCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_GetGameplayTagCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutAIDrone_GetGameplayTagCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutAIDrone_GetGameplayTagCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutAIDrone_MoveToNextHoldOutArea_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_MoveToNextHoldOutArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutAIDrone_MoveToNextHoldOutArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutAIDrone, nullptr, "MoveToNextHoldOutArea", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_MoveToNextHoldOutArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_MoveToNextHoldOutArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutAIDrone_MoveToNextHoldOutArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutAIDrone_MoveToNextHoldOutArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutAIDrone_Multicast_ApplyGamePlayEffectOnEnemies_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_Multicast_ApplyGamePlayEffectOnEnemies_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventMulticast_ApplyGamePlayEffectOnEnemies_Parms, GameplayEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutAIDrone_Multicast_ApplyGamePlayEffectOnEnemies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_Multicast_ApplyGamePlayEffectOnEnemies_Statics::NewProp_GameplayEffectClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_Multicast_ApplyGamePlayEffectOnEnemies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutAIDrone_Multicast_ApplyGamePlayEffectOnEnemies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutAIDrone, nullptr, "Multicast_ApplyGamePlayEffectOnEnemies", nullptr, nullptr, sizeof(SBZHoldOutAIDrone_eventMulticast_ApplyGamePlayEffectOnEnemies_Parms), Z_Construct_UFunction_ASBZHoldOutAIDrone_Multicast_ApplyGamePlayEffectOnEnemies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_Multicast_ApplyGamePlayEffectOnEnemies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_Multicast_ApplyGamePlayEffectOnEnemies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_Multicast_ApplyGamePlayEffectOnEnemies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutAIDrone_Multicast_ApplyGamePlayEffectOnEnemies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutAIDrone_Multicast_ApplyGamePlayEffectOnEnemies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutAIDrone_OnAreaCompletedCallBack_Statics
	{
		struct SBZHoldOutAIDrone_eventOnAreaCompletedCallBack_Parms
		{
			bool bSuccess;
			ASBZHoldOutArea* HoldOutArea;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldOutArea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZHoldOutAIDrone_OnAreaCompletedCallBack_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((SBZHoldOutAIDrone_eventOnAreaCompletedCallBack_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnAreaCompletedCallBack_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHoldOutAIDrone_eventOnAreaCompletedCallBack_Parms), &Z_Construct_UFunction_ASBZHoldOutAIDrone_OnAreaCompletedCallBack_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnAreaCompletedCallBack_Statics::NewProp_HoldOutArea = { "HoldOutArea", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventOnAreaCompletedCallBack_Parms, HoldOutArea), Z_Construct_UClass_ASBZHoldOutArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutAIDrone_OnAreaCompletedCallBack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OnAreaCompletedCallBack_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OnAreaCompletedCallBack_Statics::NewProp_HoldOutArea,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_OnAreaCompletedCallBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnAreaCompletedCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutAIDrone, nullptr, "OnAreaCompletedCallBack", nullptr, nullptr, sizeof(SBZHoldOutAIDrone_eventOnAreaCompletedCallBack_Parms), Z_Construct_UFunction_ASBZHoldOutAIDrone_OnAreaCompletedCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnAreaCompletedCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnAreaCompletedCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnAreaCompletedCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutAIDrone_OnAreaCompletedCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutAIDrone_OnAreaCompletedCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutAIDrone_OnMoveCompleted_Statics
	{
		struct SBZHoldOutAIDrone_eventOnMoveCompleted_Parms
		{
			FAIRequestID RequestID;
			TEnumAsByte<EPathFollowingResult::Type> MovementResult;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnMoveCompleted_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventOnMoveCompleted_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnMoveCompleted_Statics::NewProp_MovementResult = { "MovementResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventOnMoveCompleted_Parms, MovementResult), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutAIDrone_OnMoveCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OnMoveCompleted_Statics::NewProp_RequestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OnMoveCompleted_Statics::NewProp_MovementResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_OnMoveCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnMoveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutAIDrone, nullptr, "OnMoveCompleted", nullptr, nullptr, sizeof(SBZHoldOutAIDrone_eventOnMoveCompleted_Parms), Z_Construct_UFunction_ASBZHoldOutAIDrone_OnMoveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnMoveCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnMoveCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnMoveCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutAIDrone_OnMoveCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutAIDrone_OnMoveCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics
	{
		struct SBZHoldOutAIDrone_eventOnObjectiveProgressChangedCallBack_Parms
		{
			USBZHoldOutObjectiveBase* Objective;
			int32 OldProgressCount;
			int32 NewProgressCount;
			FGameplayTagContainer GrantedTags;
			FGameplayTagContainer RemovedTags;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldProgressCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewProgressCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventOnObjectiveProgressChangedCallBack_Parms, Objective), Z_Construct_UClass_USBZHoldOutObjectiveBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::NewProp_OldProgressCount = { "OldProgressCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventOnObjectiveProgressChangedCallBack_Parms, OldProgressCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::NewProp_NewProgressCount = { "NewProgressCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventOnObjectiveProgressChangedCallBack_Parms, NewProgressCount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::NewProp_GrantedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventOnObjectiveProgressChangedCallBack_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::NewProp_GrantedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::NewProp_GrantedTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::NewProp_RemovedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::NewProp_RemovedTags = { "RemovedTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventOnObjectiveProgressChangedCallBack_Parms, RemovedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::NewProp_RemovedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::NewProp_RemovedTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::NewProp_Objective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::NewProp_OldProgressCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::NewProp_NewProgressCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::NewProp_GrantedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::NewProp_RemovedTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutAIDrone, nullptr, "OnObjectiveProgressChangedCallBack", nullptr, nullptr, sizeof(SBZHoldOutAIDrone_eventOnObjectiveProgressChangedCallBack_Parms), Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics
	{
		struct SBZHoldOutAIDrone_eventOnObjectiveResultChangedCallBack_Parms
		{
			ESBZHoldOutObjectiveResult Result;
			USBZHoldOutObjectiveBase* Objective;
			FGameplayTagContainer GrantedTags;
			FGameplayTagContainer RemovedTags;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventOnObjectiveResultChangedCallBack_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZHoldOutObjectiveResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventOnObjectiveResultChangedCallBack_Parms, Objective), Z_Construct_UClass_USBZHoldOutObjectiveBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_GrantedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventOnObjectiveResultChangedCallBack_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_GrantedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_GrantedTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_RemovedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_RemovedTags = { "RemovedTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventOnObjectiveResultChangedCallBack_Parms, RemovedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_RemovedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_RemovedTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_Objective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_GrantedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::NewProp_RemovedTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutAIDrone, nullptr, "OnObjectiveResultChangedCallBack", nullptr, nullptr, sizeof(SBZHoldOutAIDrone_eventOnObjectiveResultChangedCallBack_Parms), Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics
	{
		struct SBZHoldOutAIDrone_eventOnObjectiveStartedCallBack_Parms
		{
			USBZHoldOutObjectiveBase* Objective;
			FGameplayTagContainer GrantedTags;
			FGameplayTagContainer RemovedTags;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventOnObjectiveStartedCallBack_Parms, Objective), Z_Construct_UClass_USBZHoldOutObjectiveBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::NewProp_GrantedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventOnObjectiveStartedCallBack_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::NewProp_GrantedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::NewProp_GrantedTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::NewProp_RemovedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::NewProp_RemovedTags = { "RemovedTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventOnObjectiveStartedCallBack_Parms, RemovedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::NewProp_RemovedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::NewProp_RemovedTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::NewProp_Objective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::NewProp_GrantedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::NewProp_RemovedTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutAIDrone, nullptr, "OnObjectiveStartedCallBack", nullptr, nullptr, sizeof(SBZHoldOutAIDrone_eventOnObjectiveStartedCallBack_Parms), Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutAIDrone_OverrideFogSettings_Statics
	{
		struct SBZHoldOutAIDrone_eventOverrideFogSettings_Parms
		{
			FSBZHoldOutDroneFogSettings FogSettings;
			float OverrideDuration;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FogSettings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_OverrideFogSettings_Statics::NewProp_FogSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OverrideFogSettings_Statics::NewProp_FogSettings = { "FogSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventOverrideFogSettings_Parms, FogSettings), Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_OverrideFogSettings_Statics::NewProp_FogSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OverrideFogSettings_Statics::NewProp_FogSettings_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OverrideFogSettings_Statics::NewProp_OverrideDuration = { "OverrideDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventOverrideFogSettings_Parms, OverrideDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutAIDrone_OverrideFogSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OverrideFogSettings_Statics::NewProp_FogSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_OverrideFogSettings_Statics::NewProp_OverrideDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_OverrideFogSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutAIDrone_OverrideFogSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutAIDrone, nullptr, "OverrideFogSettings", nullptr, nullptr, sizeof(SBZHoldOutAIDrone_eventOverrideFogSettings_Parms), Z_Construct_UFunction_ASBZHoldOutAIDrone_OverrideFogSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OverrideFogSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_OverrideFogSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_OverrideFogSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutAIDrone_OverrideFogSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutAIDrone_OverrideFogSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutAIDrone_SetGameplayTag_Statics
	{
		struct SBZHoldOutAIDrone_eventSetGameplayTag_Parms
		{
			FGameplayTag Tag;
			int32 Count;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_SetGameplayTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_SetGameplayTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventSetGameplayTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_SetGameplayTag_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_SetGameplayTag_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZHoldOutAIDrone_SetGameplayTag_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutAIDrone_eventSetGameplayTag_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutAIDrone_SetGameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_SetGameplayTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutAIDrone_SetGameplayTag_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_SetGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutAIDrone_SetGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutAIDrone, nullptr, "SetGameplayTag", nullptr, nullptr, sizeof(SBZHoldOutAIDrone_eventSetGameplayTag_Parms), Z_Construct_UFunction_ASBZHoldOutAIDrone_SetGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_SetGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_SetGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_SetGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutAIDrone_SetGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutAIDrone_SetGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutAIDrone_StopOverrideFogSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutAIDrone_StopOverrideFogSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutAIDrone_StopOverrideFogSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutAIDrone, nullptr, "StopOverrideFogSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutAIDrone_StopOverrideFogSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutAIDrone_StopOverrideFogSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutAIDrone_StopOverrideFogSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutAIDrone_StopOverrideFogSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZHoldOutAIDrone_NoRegister()
	{
		return ASBZHoldOutAIDrone::StaticClass();
	}
	struct Z_Construct_UClass_ASBZHoldOutAIDrone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnObjectiveStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectiveStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnObjectiveResultChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectiveResultChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnObjectiveProgressChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectiveProgressChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAreaCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAreaCompleted;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldOutAreas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldOutAreas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HoldOutAreas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagCounterArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTagCounterArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagReactionSpawnConfigs_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagReactionSpawnConfigs_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagReactionSpawnConfigs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TagReactionSpawnConfigs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagDroneReactions_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagDroneReactions_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagDroneReactions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TagDroneReactions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagsForCurrentObjectives_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagsForCurrentObjectives_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TagsForCurrentObjectives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIDPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIDPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowDroneObjective_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowDroneObjective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogApplierComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FogApplierComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AKComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AKComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentDifficulty_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDifficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentDifficulty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZHoldOutAIDrone_ApplyGamePlayEffectOnEnemies, "ApplyGamePlayEffectOnEnemies" }, // 386438104
		{ &Z_Construct_UFunction_ASBZHoldOutAIDrone_ClearTagsForCurrentObjectives, "ClearTagsForCurrentObjectives" }, // 464576602
		{ &Z_Construct_UFunction_ASBZHoldOutAIDrone_GetGameplayTagCount, "GetGameplayTagCount" }, // 3858849744
		{ &Z_Construct_UFunction_ASBZHoldOutAIDrone_MoveToNextHoldOutArea, "MoveToNextHoldOutArea" }, // 977743026
		{ &Z_Construct_UFunction_ASBZHoldOutAIDrone_Multicast_ApplyGamePlayEffectOnEnemies, "Multicast_ApplyGamePlayEffectOnEnemies" }, // 524895276
		{ &Z_Construct_UFunction_ASBZHoldOutAIDrone_OnAreaCompletedCallBack, "OnAreaCompletedCallBack" }, // 1677018264
		{ &Z_Construct_UFunction_ASBZHoldOutAIDrone_OnMoveCompleted, "OnMoveCompleted" }, // 79004470
		{ &Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveProgressChangedCallBack, "OnObjectiveProgressChangedCallBack" }, // 4175948721
		{ &Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveResultChangedCallBack, "OnObjectiveResultChangedCallBack" }, // 2302878855
		{ &Z_Construct_UFunction_ASBZHoldOutAIDrone_OnObjectiveStartedCallBack, "OnObjectiveStartedCallBack" }, // 1121388868
		{ &Z_Construct_UFunction_ASBZHoldOutAIDrone_OverrideFogSettings, "OverrideFogSettings" }, // 3089619092
		{ &Z_Construct_UFunction_ASBZHoldOutAIDrone_SetGameplayTag, "SetGameplayTag" }, // 3568988955
		{ &Z_Construct_UFunction_ASBZHoldOutAIDrone_StopOverrideFogSettings, "StopOverrideFogSettings" }, // 1458071508
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SBZHoldOutAIDrone.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnObjectiveStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutAIDrone" },
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnObjectiveStarted = { "OnObjectiveStarted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutAIDrone, OnObjectiveStarted), Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveStarted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnObjectiveStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnObjectiveStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnObjectiveResultChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutAIDrone" },
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnObjectiveResultChanged = { "OnObjectiveResultChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutAIDrone, OnObjectiveResultChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnObjectiveResultChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnObjectiveResultChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnObjectiveProgressChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutAIDrone" },
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnObjectiveProgressChanged = { "OnObjectiveProgressChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutAIDrone, OnObjectiveProgressChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveProgressChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnObjectiveProgressChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnObjectiveProgressChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnAreaCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutAIDrone" },
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnAreaCompleted = { "OnAreaCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutAIDrone, OnAreaCompleted), Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutAreaComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnAreaCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnAreaCompleted_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_HoldOutAreas_Inner = { "HoldOutAreas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZHoldOutArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_HoldOutAreas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutAIDrone" },
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_HoldOutAreas = { "HoldOutAreas", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutAIDrone, HoldOutAreas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_HoldOutAreas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_HoldOutAreas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_GameplayTagCounterArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutAIDrone" },
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_GameplayTagCounterArray = { "GameplayTagCounterArray", nullptr, (EPropertyFlags)0x0040000000002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutAIDrone, GameplayTagCounterArray), Z_Construct_UScriptStruct_FSBZGameplayTagCounterArray, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_GameplayTagCounterArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_GameplayTagCounterArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagReactionSpawnConfigs_ValueProp = { "TagReactionSpawnConfigs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagReactionSpawnConfigs_Key_KeyProp = { "TagReactionSpawnConfigs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagReactionSpawnConfigs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutAIDrone" },
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagReactionSpawnConfigs = { "TagReactionSpawnConfigs", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutAIDrone, TagReactionSpawnConfigs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagReactionSpawnConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagReactionSpawnConfigs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagDroneReactions_ValueProp = { "TagDroneReactions", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZHoldOutDroneReactionArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagDroneReactions_Key_KeyProp = { "TagDroneReactions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagDroneReactions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutAIDrone" },
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagDroneReactions = { "TagDroneReactions", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutAIDrone, TagDroneReactions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagDroneReactions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagDroneReactions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagsForCurrentObjectives_Inner = { "TagsForCurrentObjectives", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagsForCurrentObjectives_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutAIDrone" },
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagsForCurrentObjectives = { "TagsForCurrentObjectives", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutAIDrone, TagsForCurrentObjectives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagsForCurrentObjectives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagsForCurrentObjectives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_AIDPS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutAIDrone" },
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_AIDPS = { "AIDPS", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(AIDPS, ASBZHoldOutAIDrone), STRUCT_OFFSET(ASBZHoldOutAIDrone, AIDPS), Z_Construct_UScriptStruct_FSBZAIConfigDPSData, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_AIDPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_AIDPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_FollowDroneObjective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutAIDrone" },
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_FollowDroneObjective = { "FollowDroneObjective", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutAIDrone, FollowDroneObjective), Z_Construct_UClass_ASBZObjective_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_FollowDroneObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_FollowDroneObjective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutAIDrone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutAIDrone, AbilitySystemComponent), Z_Construct_UClass_USBZAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_FogApplierComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutAIDrone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_FogApplierComponent = { "FogApplierComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutAIDrone, FogApplierComponent), Z_Construct_UClass_USBZHoldOutFogApplierComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_FogApplierComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_FogApplierComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_AKComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutAIDrone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_AKComponent = { "AKComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutAIDrone, AKComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_AKComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_AKComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_CurrentDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_CurrentDifficulty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutAIDrone" },
		{ "ModuleRelativePath", "Public/SBZHoldOutAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_CurrentDifficulty = { "CurrentDifficulty", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutAIDrone, CurrentDifficulty), Z_Construct_UEnum_Starbreeze_ESBZHoldOutModeDifficulty, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_CurrentDifficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_CurrentDifficulty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnObjectiveStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnObjectiveResultChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnObjectiveProgressChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_OnAreaCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_HoldOutAreas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_HoldOutAreas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_GameplayTagCounterArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagReactionSpawnConfigs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagReactionSpawnConfigs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagReactionSpawnConfigs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagDroneReactions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagDroneReactions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagDroneReactions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagsForCurrentObjectives_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_TagsForCurrentObjectives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_AIDPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_FollowDroneObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_AbilitySystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_FogApplierComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_AKComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_CurrentDifficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::NewProp_CurrentDifficulty,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZGameplayTagCounterArrayOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZHoldOutAIDrone, ISBZGameplayTagCounterArrayOwnerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZHoldOutAIDrone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::ClassParams = {
		&ASBZHoldOutAIDrone::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZHoldOutAIDrone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZHoldOutAIDrone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZHoldOutAIDrone, 4168737973);
	template<> STARBREEZE_API UClass* StaticClass<ASBZHoldOutAIDrone>()
	{
		return ASBZHoldOutAIDrone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZHoldOutAIDrone(Z_Construct_UClass_ASBZHoldOutAIDrone, &ASBZHoldOutAIDrone::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZHoldOutAIDrone"), false, nullptr, nullptr, nullptr);

	void ASBZHoldOutAIDrone::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_GameplayTagCounterArray(TEXT("GameplayTagCounterArray"));

		const bool bIsValid = true
			&& Name_GameplayTagCounterArray == ClassReps[(int32)ENetFields_Private::GameplayTagCounterArray].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZHoldOutAIDrone"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZHoldOutAIDrone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
