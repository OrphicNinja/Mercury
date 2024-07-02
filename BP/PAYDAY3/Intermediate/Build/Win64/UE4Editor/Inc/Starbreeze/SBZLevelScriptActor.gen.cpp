// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLevelScriptActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLevelScriptActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLevelScriptActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLevelScriptActor();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLevelScriptActorBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStatisticCriteriaData_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagHandle();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DefeatState();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZInstantLoot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagType_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZLevelScriptActor::execCriteriaObjectiveComplete)
	{
		P_GET_OBJECT(USBZStatisticCriteriaData,Z_Param_StatisticData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CriteriaObjectiveComplete(Z_Param_StatisticData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActor::execEndIntroSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndIntroSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActor::execEndOutroSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndOutroSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActor::execGetRandomBoolWithWeightFromLevelStream)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Weight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRandomBoolWithWeightFromLevelStream(Z_Param_Weight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActor::execGetRandomBoolWithWeightFromStreamMixed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Weight);
		P_GET_PROPERTY(FIntProperty,Z_Param_MixedSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRandomBoolWithWeightFromStreamMixed(Z_Param_Weight,Z_Param_MixedSeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActor::execGetRandomIntegerFromLevelStream)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Max);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRandomIntegerFromLevelStream(Z_Param_Max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActor::execGetRandomIntegerFromStreamMixed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Max);
		P_GET_PROPERTY(FIntProperty,Z_Param_MixedSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRandomIntegerFromStreamMixed(Z_Param_Max,Z_Param_MixedSeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActor::execHandleActionPhaseStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleActionPhaseStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActor::execHandleBlackScreenStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleBlackScreenStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActor::execHandleIntroSequenceChanged)
	{
		P_GET_UBOOL(Z_Param_bIsStarted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleIntroSequenceChanged(Z_Param_bIsStarted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActor::execHandleOutroSequenceStarted)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OutroVariation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOutroSequenceStarted(Z_Param_OutroVariation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActor::execOnOptionalObjectiveComplete)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ObjectiveNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOptionalObjectiveComplete(Z_Param_ObjectiveNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActor::execOnRandomizedRoomShown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRandomizedRoomShown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActor::execSBZPlaceRandomSublevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_LevelName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelStreamingDynamic**)Z_Param__Result=ASBZLevelScriptActor::SBZPlaceRandomSublevel(Z_Param_WorldContextObject,Z_Param_LevelName,Z_Param_Location,Z_Param_Rotation,Z_Param_Out_bOutSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActor::execSBZPlaceRandomSublevelBySoftObjectPtr)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UWorld>,Z_Param_Level);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RoomTransform);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelStreamingDynamic**)Z_Param__Result=ASBZLevelScriptActor::SBZPlaceRandomSublevelBySoftObjectPtr(Z_Param_WorldContextObject,Z_Param_Level,Z_Param_Out_RoomTransform,Z_Param_Out_bOutSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActor::execSetBagMarkerEnabledByBagType)
	{
		P_GET_OBJECT(USBZBagType,Z_Param_BagType);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBagMarkerEnabledByBagType(Z_Param_BagType,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActor::execSetBagMarkerEnabledByTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_BagGameplayTagContainer);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBagMarkerEnabledByTags(Z_Param_Out_BagGameplayTagContainer,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZLevelScriptActor_ActionPhaseStarted = FName(TEXT("ActionPhaseStarted"));
	void ASBZLevelScriptActor::ActionPhaseStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_ActionPhaseStarted),NULL);
	}
	static FName NAME_ASBZLevelScriptActor_BlackScreenStarted = FName(TEXT("BlackScreenStarted"));
	void ASBZLevelScriptActor::BlackScreenStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_BlackScreenStarted),NULL);
	}
	static FName NAME_ASBZLevelScriptActor_CallPlaced = FName(TEXT("CallPlaced"));
	void ASBZLevelScriptActor::CallPlaced()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_CallPlaced),NULL);
	}
	static FName NAME_ASBZLevelScriptActor_HeistStateChanged = FName(TEXT("HeistStateChanged"));
	void ASBZLevelScriptActor::HeistStateChanged(EPD3HeistState OldHeistState, EPD3HeistState CurrentHeistState)
	{
		SBZLevelScriptActor_eventHeistStateChanged_Parms Parms;
		Parms.OldHeistState=OldHeistState;
		Parms.CurrentHeistState=CurrentHeistState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_HeistStateChanged),&Parms);
	}
	static FName NAME_ASBZLevelScriptActor_IntroSequenceChanged = FName(TEXT("IntroSequenceChanged"));
	void ASBZLevelScriptActor::IntroSequenceChanged(bool bIsStarted)
	{
		SBZLevelScriptActor_eventIntroSequenceChanged_Parms Parms;
		Parms.bIsStarted=bIsStarted ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_IntroSequenceChanged),&Parms);
	}
	static FName NAME_ASBZLevelScriptActor_OnAllBagSecured = FName(TEXT("OnAllBagSecured"));
	void ASBZLevelScriptActor::OnAllBagSecured(int32 SecuredCount)
	{
		SBZLevelScriptActor_eventOnAllBagSecured_Parms Parms;
		Parms.SecuredCount=SecuredCount;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_OnAllBagSecured),&Parms);
	}
	static FName NAME_ASBZLevelScriptActor_OnAllRandomizedRoomsPlaced = FName(TEXT("OnAllRandomizedRoomsPlaced"));
	void ASBZLevelScriptActor::OnAllRandomizedRoomsPlaced()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_OnAllRandomizedRoomsPlaced),NULL);
	}
	static FName NAME_ASBZLevelScriptActor_OnBagSecured = FName(TEXT("OnBagSecured"));
	void ASBZLevelScriptActor::OnBagSecured(FSBZBagHandle const& BagHandle, int32 SecuredCount, int32 TotalLeftToSecure)
	{
		SBZLevelScriptActor_eventOnBagSecured_Parms Parms;
		Parms.BagHandle=BagHandle;
		Parms.SecuredCount=SecuredCount;
		Parms.TotalLeftToSecure=TotalLeftToSecure;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_OnBagSecured),&Parms);
	}
	static FName NAME_ASBZLevelScriptActor_OnDifficultyModifierApplied = FName(TEXT("OnDifficultyModifierApplied"));
	void ASBZLevelScriptActor::OnDifficultyModifierApplied(ESBZDifficulty InDifficulty)
	{
		SBZLevelScriptActor_eventOnDifficultyModifierApplied_Parms Parms;
		Parms.InDifficulty=InDifficulty;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_OnDifficultyModifierApplied),&Parms);
	}
	static FName NAME_ASBZLevelScriptActor_OnLevelModifiersApplied = FName(TEXT("OnLevelModifiersApplied"));
	void ASBZLevelScriptActor::OnLevelModifiersApplied(ESBZDifficulty InDifficulty, TArray<ESBZSecurityCompany> const& InCompanies)
	{
		SBZLevelScriptActor_eventOnLevelModifiersApplied_Parms Parms;
		Parms.InDifficulty=InDifficulty;
		Parms.InCompanies=InCompanies;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_OnLevelModifiersApplied),&Parms);
	}
	static FName NAME_ASBZLevelScriptActor_OnOverkillWeaponRequested = FName(TEXT("OnOverkillWeaponRequested"));
	void ASBZLevelScriptActor::OnOverkillWeaponRequested()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_OnOverkillWeaponRequested),NULL);
	}
	static FName NAME_ASBZLevelScriptActor_OnPlayerDefeatStateChanged = FName(TEXT("OnPlayerDefeatStateChanged"));
	void ASBZLevelScriptActor::OnPlayerDefeatStateChanged(ASBZPlayerState* PlayerState, EPD3DefeatState OldDefeatState, EPD3DefeatState DefeatState)
	{
		SBZLevelScriptActor_eventOnPlayerDefeatStateChanged_Parms Parms;
		Parms.PlayerState=PlayerState;
		Parms.OldDefeatState=OldDefeatState;
		Parms.DefeatState=DefeatState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_OnPlayerDefeatStateChanged),&Parms);
	}
	static FName NAME_ASBZLevelScriptActor_OnPlayerInstantLootTaken = FName(TEXT("OnPlayerInstantLootTaken"));
	void ASBZLevelScriptActor::OnPlayerInstantLootTaken(ASBZInstantLoot* InstantLoot, ASBZPlayerCharacter* TakenByPlayer)
	{
		SBZLevelScriptActor_eventOnPlayerInstantLootTaken_Parms Parms;
		Parms.InstantLoot=InstantLoot;
		Parms.TakenByPlayer=TakenByPlayer;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_OnPlayerInstantLootTaken),&Parms);
	}
	static FName NAME_ASBZLevelScriptActor_OnPlayerPickedUpBag = FName(TEXT("OnPlayerPickedUpBag"));
	void ASBZLevelScriptActor::OnPlayerPickedUpBag(FSBZBagHandle BagHandle)
	{
		SBZLevelScriptActor_eventOnPlayerPickedUpBag_Parms Parms;
		Parms.BagHandle=BagHandle;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_OnPlayerPickedUpBag),&Parms);
	}
	static FName NAME_ASBZLevelScriptActor_OnPreplanningAssetsTagsApplied = FName(TEXT("OnPreplanningAssetsTagsApplied"));
	void ASBZLevelScriptActor::OnPreplanningAssetsTagsApplied(FGameplayTagContainer const& PreplanningTagContainer)
	{
		SBZLevelScriptActor_eventOnPreplanningAssetsTagsApplied_Parms Parms;
		Parms.PreplanningTagContainer=PreplanningTagContainer;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_OnPreplanningAssetsTagsApplied),&Parms);
	}
	static FName NAME_ASBZLevelScriptActor_OnRandomPlacementStarted = FName(TEXT("OnRandomPlacementStarted"));
	void ASBZLevelScriptActor::OnRandomPlacementStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_OnRandomPlacementStarted),NULL);
	}
	static FName NAME_ASBZLevelScriptActor_OnRandomSublevelPlaced = FName(TEXT("OnRandomSublevelPlaced"));
	void ASBZLevelScriptActor::OnRandomSublevelPlaced()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_OnRandomSublevelPlaced),NULL);
	}
	static FName NAME_ASBZLevelScriptActor_OutroSequenceStarted = FName(TEXT("OutroSequenceStarted"));
	void ASBZLevelScriptActor::OutroSequenceStarted(const int32 OutroVariation)
	{
		SBZLevelScriptActor_eventOutroSequenceStarted_Parms Parms;
		Parms.OutroVariation=OutroVariation;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_OutroSequenceStarted),&Parms);
	}
	static FName NAME_ASBZLevelScriptActor_RandomPlacementStarted = FName(TEXT("RandomPlacementStarted"));
	void ASBZLevelScriptActor::RandomPlacementStarted(FRandomStream const& RandomStream)
	{
		SBZLevelScriptActor_eventRandomPlacementStarted_Parms Parms;
		Parms.RandomStream=RandomStream;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLevelScriptActor_RandomPlacementStarted),&Parms);
	}
	void ASBZLevelScriptActor::StaticRegisterNativesASBZLevelScriptActor()
	{
		UClass* Class = ASBZLevelScriptActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CriteriaObjectiveComplete", &ASBZLevelScriptActor::execCriteriaObjectiveComplete },
			{ "EndIntroSequence", &ASBZLevelScriptActor::execEndIntroSequence },
			{ "EndOutroSequence", &ASBZLevelScriptActor::execEndOutroSequence },
			{ "GetRandomBoolWithWeightFromLevelStream", &ASBZLevelScriptActor::execGetRandomBoolWithWeightFromLevelStream },
			{ "GetRandomBoolWithWeightFromStreamMixed", &ASBZLevelScriptActor::execGetRandomBoolWithWeightFromStreamMixed },
			{ "GetRandomIntegerFromLevelStream", &ASBZLevelScriptActor::execGetRandomIntegerFromLevelStream },
			{ "GetRandomIntegerFromStreamMixed", &ASBZLevelScriptActor::execGetRandomIntegerFromStreamMixed },
			{ "HandleActionPhaseStarted", &ASBZLevelScriptActor::execHandleActionPhaseStarted },
			{ "HandleBlackScreenStarted", &ASBZLevelScriptActor::execHandleBlackScreenStarted },
			{ "HandleIntroSequenceChanged", &ASBZLevelScriptActor::execHandleIntroSequenceChanged },
			{ "HandleOutroSequenceStarted", &ASBZLevelScriptActor::execHandleOutroSequenceStarted },
			{ "OnOptionalObjectiveComplete", &ASBZLevelScriptActor::execOnOptionalObjectiveComplete },
			{ "OnRandomizedRoomShown", &ASBZLevelScriptActor::execOnRandomizedRoomShown },
			{ "SBZPlaceRandomSublevel", &ASBZLevelScriptActor::execSBZPlaceRandomSublevel },
			{ "SBZPlaceRandomSublevelBySoftObjectPtr", &ASBZLevelScriptActor::execSBZPlaceRandomSublevelBySoftObjectPtr },
			{ "SetBagMarkerEnabledByBagType", &ASBZLevelScriptActor::execSetBagMarkerEnabledByBagType },
			{ "SetBagMarkerEnabledByTags", &ASBZLevelScriptActor::execSetBagMarkerEnabledByTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_ActionPhaseStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_ActionPhaseStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_ActionPhaseStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "ActionPhaseStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_ActionPhaseStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_ActionPhaseStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_ActionPhaseStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_ActionPhaseStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_BlackScreenStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_BlackScreenStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_BlackScreenStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "BlackScreenStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_BlackScreenStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_BlackScreenStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_BlackScreenStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_BlackScreenStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_CallPlaced_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_CallPlaced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_CallPlaced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "CallPlaced", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020804, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_CallPlaced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_CallPlaced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_CallPlaced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_CallPlaced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_CriteriaObjectiveComplete_Statics
	{
		struct SBZLevelScriptActor_eventCriteriaObjectiveComplete_Parms
		{
			const USBZStatisticCriteriaData* StatisticData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatisticData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_CriteriaObjectiveComplete_Statics::NewProp_StatisticData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_CriteriaObjectiveComplete_Statics::NewProp_StatisticData = { "StatisticData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventCriteriaObjectiveComplete_Parms, StatisticData), Z_Construct_UClass_USBZStatisticCriteriaData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_CriteriaObjectiveComplete_Statics::NewProp_StatisticData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_CriteriaObjectiveComplete_Statics::NewProp_StatisticData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_CriteriaObjectiveComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_CriteriaObjectiveComplete_Statics::NewProp_StatisticData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_CriteriaObjectiveComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_CriteriaObjectiveComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "CriteriaObjectiveComplete", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventCriteriaObjectiveComplete_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_CriteriaObjectiveComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_CriteriaObjectiveComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_CriteriaObjectiveComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_CriteriaObjectiveComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_CriteriaObjectiveComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_CriteriaObjectiveComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_EndIntroSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_EndIntroSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_EndIntroSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "EndIntroSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_EndIntroSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_EndIntroSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_EndIntroSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_EndIntroSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_EndOutroSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_EndOutroSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_EndOutroSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "EndOutroSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_EndOutroSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_EndOutroSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_EndOutroSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_EndOutroSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromLevelStream_Statics
	{
		struct SBZLevelScriptActor_eventGetRandomBoolWithWeightFromLevelStream_Parms
		{
			float Weight;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromLevelStream_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventGetRandomBoolWithWeightFromLevelStream_Parms, Weight), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromLevelStream_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLevelScriptActor_eventGetRandomBoolWithWeightFromLevelStream_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromLevelStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLevelScriptActor_eventGetRandomBoolWithWeightFromLevelStream_Parms), &Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromLevelStream_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromLevelStream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromLevelStream_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromLevelStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromLevelStream_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromLevelStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "GetRandomBoolWithWeightFromLevelStream", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventGetRandomBoolWithWeightFromLevelStream_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromLevelStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromLevelStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromLevelStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromLevelStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromLevelStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromLevelStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed_Statics
	{
		struct SBZLevelScriptActor_eventGetRandomBoolWithWeightFromStreamMixed_Parms
		{
			float Weight;
			int32 MixedSeed;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MixedSeed;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventGetRandomBoolWithWeightFromStreamMixed_Parms, Weight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed_Statics::NewProp_MixedSeed = { "MixedSeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventGetRandomBoolWithWeightFromStreamMixed_Parms, MixedSeed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLevelScriptActor_eventGetRandomBoolWithWeightFromStreamMixed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLevelScriptActor_eventGetRandomBoolWithWeightFromStreamMixed_Parms), &Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed_Statics::NewProp_MixedSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "GetRandomBoolWithWeightFromStreamMixed", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventGetRandomBoolWithWeightFromStreamMixed_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromLevelStream_Statics
	{
		struct SBZLevelScriptActor_eventGetRandomIntegerFromLevelStream_Parms
		{
			int32 Max;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromLevelStream_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventGetRandomIntegerFromLevelStream_Parms, Max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromLevelStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventGetRandomIntegerFromLevelStream_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromLevelStream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromLevelStream_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromLevelStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromLevelStream_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromLevelStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "GetRandomIntegerFromLevelStream", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventGetRandomIntegerFromLevelStream_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromLevelStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromLevelStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromLevelStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromLevelStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromLevelStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromLevelStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromStreamMixed_Statics
	{
		struct SBZLevelScriptActor_eventGetRandomIntegerFromStreamMixed_Parms
		{
			int32 Max;
			int32 MixedSeed;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MixedSeed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromStreamMixed_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventGetRandomIntegerFromStreamMixed_Parms, Max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromStreamMixed_Statics::NewProp_MixedSeed = { "MixedSeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventGetRandomIntegerFromStreamMixed_Parms, MixedSeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromStreamMixed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventGetRandomIntegerFromStreamMixed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromStreamMixed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromStreamMixed_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromStreamMixed_Statics::NewProp_MixedSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromStreamMixed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromStreamMixed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromStreamMixed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "GetRandomIntegerFromStreamMixed", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventGetRandomIntegerFromStreamMixed_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromStreamMixed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromStreamMixed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromStreamMixed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromStreamMixed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromStreamMixed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromStreamMixed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_HandleActionPhaseStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_HandleActionPhaseStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_HandleActionPhaseStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "HandleActionPhaseStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_HandleActionPhaseStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_HandleActionPhaseStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_HandleActionPhaseStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_HandleActionPhaseStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_HandleBlackScreenStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_HandleBlackScreenStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_HandleBlackScreenStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "HandleBlackScreenStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_HandleBlackScreenStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_HandleBlackScreenStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_HandleBlackScreenStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_HandleBlackScreenStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_HandleIntroSequenceChanged_Statics
	{
		struct SBZLevelScriptActor_eventHandleIntroSequenceChanged_Parms
		{
			bool bIsStarted;
		};
		static void NewProp_bIsStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStarted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZLevelScriptActor_HandleIntroSequenceChanged_Statics::NewProp_bIsStarted_SetBit(void* Obj)
	{
		((SBZLevelScriptActor_eventHandleIntroSequenceChanged_Parms*)Obj)->bIsStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_HandleIntroSequenceChanged_Statics::NewProp_bIsStarted = { "bIsStarted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLevelScriptActor_eventHandleIntroSequenceChanged_Parms), &Z_Construct_UFunction_ASBZLevelScriptActor_HandleIntroSequenceChanged_Statics::NewProp_bIsStarted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_HandleIntroSequenceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_HandleIntroSequenceChanged_Statics::NewProp_bIsStarted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_HandleIntroSequenceChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_HandleIntroSequenceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "HandleIntroSequenceChanged", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventHandleIntroSequenceChanged_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_HandleIntroSequenceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_HandleIntroSequenceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_HandleIntroSequenceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_HandleIntroSequenceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_HandleIntroSequenceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_HandleIntroSequenceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_HandleOutroSequenceStarted_Statics
	{
		struct SBZLevelScriptActor_eventHandleOutroSequenceStarted_Parms
		{
			int32 OutroVariation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutroVariation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutroVariation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_HandleOutroSequenceStarted_Statics::NewProp_OutroVariation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_HandleOutroSequenceStarted_Statics::NewProp_OutroVariation = { "OutroVariation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventHandleOutroSequenceStarted_Parms, OutroVariation), METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_HandleOutroSequenceStarted_Statics::NewProp_OutroVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_HandleOutroSequenceStarted_Statics::NewProp_OutroVariation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_HandleOutroSequenceStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_HandleOutroSequenceStarted_Statics::NewProp_OutroVariation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_HandleOutroSequenceStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_HandleOutroSequenceStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "HandleOutroSequenceStarted", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventHandleOutroSequenceStarted_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_HandleOutroSequenceStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_HandleOutroSequenceStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_HandleOutroSequenceStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_HandleOutroSequenceStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_HandleOutroSequenceStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_HandleOutroSequenceStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldHeistState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldHeistState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentHeistState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentHeistState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged_Statics::NewProp_OldHeistState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged_Statics::NewProp_OldHeistState = { "OldHeistState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventHeistStateChanged_Parms, OldHeistState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged_Statics::NewProp_CurrentHeistState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged_Statics::NewProp_CurrentHeistState = { "CurrentHeistState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventHeistStateChanged_Parms, CurrentHeistState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged_Statics::NewProp_OldHeistState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged_Statics::NewProp_OldHeistState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged_Statics::NewProp_CurrentHeistState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged_Statics::NewProp_CurrentHeistState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "HeistStateChanged", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventHeistStateChanged_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_IntroSequenceChanged_Statics
	{
		static void NewProp_bIsStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStarted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZLevelScriptActor_IntroSequenceChanged_Statics::NewProp_bIsStarted_SetBit(void* Obj)
	{
		((SBZLevelScriptActor_eventIntroSequenceChanged_Parms*)Obj)->bIsStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_IntroSequenceChanged_Statics::NewProp_bIsStarted = { "bIsStarted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLevelScriptActor_eventIntroSequenceChanged_Parms), &Z_Construct_UFunction_ASBZLevelScriptActor_IntroSequenceChanged_Statics::NewProp_bIsStarted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_IntroSequenceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_IntroSequenceChanged_Statics::NewProp_bIsStarted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_IntroSequenceChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_IntroSequenceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "IntroSequenceChanged", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventIntroSequenceChanged_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_IntroSequenceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_IntroSequenceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_IntroSequenceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_IntroSequenceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_IntroSequenceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_IntroSequenceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_OnAllBagSecured_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecuredCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnAllBagSecured_Statics::NewProp_SecuredCount = { "SecuredCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventOnAllBagSecured_Parms, SecuredCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_OnAllBagSecured_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnAllBagSecured_Statics::NewProp_SecuredCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OnAllBagSecured_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_OnAllBagSecured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "OnAllBagSecured", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventOnAllBagSecured_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_OnAllBagSecured_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnAllBagSecured_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OnAllBagSecured_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnAllBagSecured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_OnAllBagSecured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_OnAllBagSecured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_OnAllRandomizedRoomsPlaced_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OnAllRandomizedRoomsPlaced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_OnAllRandomizedRoomsPlaced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "OnAllRandomizedRoomsPlaced", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OnAllRandomizedRoomsPlaced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnAllRandomizedRoomsPlaced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_OnAllRandomizedRoomsPlaced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_OnAllRandomizedRoomsPlaced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BagHandle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecuredCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalLeftToSecure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured_Statics::NewProp_BagHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured_Statics::NewProp_BagHandle = { "BagHandle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventOnBagSecured_Parms, BagHandle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured_Statics::NewProp_BagHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured_Statics::NewProp_BagHandle_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured_Statics::NewProp_SecuredCount = { "SecuredCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventOnBagSecured_Parms, SecuredCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured_Statics::NewProp_TotalLeftToSecure = { "TotalLeftToSecure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventOnBagSecured_Parms, TotalLeftToSecure), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured_Statics::NewProp_BagHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured_Statics::NewProp_SecuredCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured_Statics::NewProp_TotalLeftToSecure,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "OnBagSecured", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventOnBagSecured_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_OnDifficultyModifierApplied_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InDifficulty_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InDifficulty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnDifficultyModifierApplied_Statics::NewProp_InDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnDifficultyModifierApplied_Statics::NewProp_InDifficulty = { "InDifficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventOnDifficultyModifierApplied_Parms, InDifficulty), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_OnDifficultyModifierApplied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnDifficultyModifierApplied_Statics::NewProp_InDifficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnDifficultyModifierApplied_Statics::NewProp_InDifficulty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OnDifficultyModifierApplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_OnDifficultyModifierApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "OnDifficultyModifierApplied", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventOnDifficultyModifierApplied_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_OnDifficultyModifierApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnDifficultyModifierApplied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OnDifficultyModifierApplied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnDifficultyModifierApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_OnDifficultyModifierApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_OnDifficultyModifierApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InDifficulty_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InDifficulty;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCompanies_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InCompanies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCompanies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InCompanies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::NewProp_InDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::NewProp_InDifficulty = { "InDifficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventOnLevelModifiersApplied_Parms, InDifficulty), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::NewProp_InCompanies_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::NewProp_InCompanies_Inner = { "InCompanies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::NewProp_InCompanies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::NewProp_InCompanies = { "InCompanies", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventOnLevelModifiersApplied_Parms, InCompanies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::NewProp_InCompanies_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::NewProp_InCompanies_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::NewProp_InDifficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::NewProp_InDifficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::NewProp_InCompanies_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::NewProp_InCompanies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::NewProp_InCompanies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "OnLevelModifiersApplied", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventOnLevelModifiersApplied_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_OnOptionalObjectiveComplete_Statics
	{
		struct SBZLevelScriptActor_eventOnOptionalObjectiveComplete_Parms
		{
			int32 ObjectiveNumber;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ObjectiveNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OnOptionalObjectiveComplete_Statics::NewProp_ObjectiveNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnOptionalObjectiveComplete_Statics::NewProp_ObjectiveNumber = { "ObjectiveNumber", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventOnOptionalObjectiveComplete_Parms, ObjectiveNumber), METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OnOptionalObjectiveComplete_Statics::NewProp_ObjectiveNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnOptionalObjectiveComplete_Statics::NewProp_ObjectiveNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_OnOptionalObjectiveComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnOptionalObjectiveComplete_Statics::NewProp_ObjectiveNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OnOptionalObjectiveComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_OnOptionalObjectiveComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "OnOptionalObjectiveComplete", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventOnOptionalObjectiveComplete_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_OnOptionalObjectiveComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnOptionalObjectiveComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OnOptionalObjectiveComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnOptionalObjectiveComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_OnOptionalObjectiveComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_OnOptionalObjectiveComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_OnOverkillWeaponRequested_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OnOverkillWeaponRequested_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_OnOverkillWeaponRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "OnOverkillWeaponRequested", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OnOverkillWeaponRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnOverkillWeaponRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_OnOverkillWeaponRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_OnOverkillWeaponRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldDefeatState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldDefeatState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefeatState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefeatState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventOnPlayerDefeatStateChanged_Parms, PlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics::NewProp_OldDefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics::NewProp_OldDefeatState = { "OldDefeatState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventOnPlayerDefeatStateChanged_Parms, OldDefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics::NewProp_DefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics::NewProp_DefeatState = { "DefeatState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventOnPlayerDefeatStateChanged_Parms, DefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics::NewProp_OldDefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics::NewProp_OldDefeatState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics::NewProp_DefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics::NewProp_DefeatState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "OnPlayerDefeatStateChanged", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventOnPlayerDefeatStateChanged_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerInstantLootTaken_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstantLoot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TakenByPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerInstantLootTaken_Statics::NewProp_InstantLoot = { "InstantLoot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventOnPlayerInstantLootTaken_Parms, InstantLoot), Z_Construct_UClass_ASBZInstantLoot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerInstantLootTaken_Statics::NewProp_TakenByPlayer = { "TakenByPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventOnPlayerInstantLootTaken_Parms, TakenByPlayer), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerInstantLootTaken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerInstantLootTaken_Statics::NewProp_InstantLoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerInstantLootTaken_Statics::NewProp_TakenByPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerInstantLootTaken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerInstantLootTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "OnPlayerInstantLootTaken", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventOnPlayerInstantLootTaken_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerInstantLootTaken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerInstantLootTaken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerInstantLootTaken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerInstantLootTaken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerInstantLootTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerInstantLootTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerPickedUpBag_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BagHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerPickedUpBag_Statics::NewProp_BagHandle = { "BagHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventOnPlayerPickedUpBag_Parms, BagHandle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerPickedUpBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerPickedUpBag_Statics::NewProp_BagHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerPickedUpBag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerPickedUpBag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "OnPlayerPickedUpBag", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventOnPlayerPickedUpBag_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerPickedUpBag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerPickedUpBag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerPickedUpBag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerPickedUpBag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerPickedUpBag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerPickedUpBag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_OnPreplanningAssetsTagsApplied_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreplanningTagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreplanningTagContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OnPreplanningAssetsTagsApplied_Statics::NewProp_PreplanningTagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OnPreplanningAssetsTagsApplied_Statics::NewProp_PreplanningTagContainer = { "PreplanningTagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventOnPreplanningAssetsTagsApplied_Parms, PreplanningTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OnPreplanningAssetsTagsApplied_Statics::NewProp_PreplanningTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnPreplanningAssetsTagsApplied_Statics::NewProp_PreplanningTagContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_OnPreplanningAssetsTagsApplied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OnPreplanningAssetsTagsApplied_Statics::NewProp_PreplanningTagContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OnPreplanningAssetsTagsApplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_OnPreplanningAssetsTagsApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "OnPreplanningAssetsTagsApplied", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventOnPreplanningAssetsTagsApplied_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_OnPreplanningAssetsTagsApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnPreplanningAssetsTagsApplied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OnPreplanningAssetsTagsApplied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnPreplanningAssetsTagsApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_OnPreplanningAssetsTagsApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_OnPreplanningAssetsTagsApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomizedRoomShown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomizedRoomShown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomizedRoomShown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "OnRandomizedRoomShown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomizedRoomShown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomizedRoomShown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomizedRoomShown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomizedRoomShown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomPlacementStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomPlacementStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomPlacementStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "OnRandomPlacementStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomPlacementStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomPlacementStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomPlacementStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomPlacementStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomSublevelPlaced_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomSublevelPlaced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomSublevelPlaced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "OnRandomSublevelPlaced", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomSublevelPlaced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomSublevelPlaced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomSublevelPlaced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomSublevelPlaced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_OutroSequenceStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutroVariation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutroVariation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OutroSequenceStarted_Statics::NewProp_OutroVariation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_OutroSequenceStarted_Statics::NewProp_OutroVariation = { "OutroVariation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventOutroSequenceStarted_Parms, OutroVariation), METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OutroSequenceStarted_Statics::NewProp_OutroVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OutroSequenceStarted_Statics::NewProp_OutroVariation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_OutroSequenceStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_OutroSequenceStarted_Statics::NewProp_OutroVariation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_OutroSequenceStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_OutroSequenceStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "OutroSequenceStarted", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventOutroSequenceStarted_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_OutroSequenceStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OutroSequenceStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_OutroSequenceStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_OutroSequenceStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_OutroSequenceStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_OutroSequenceStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_RandomPlacementStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomStream;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_RandomPlacementStarted_Statics::NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_RandomPlacementStarted_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventRandomPlacementStarted_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_RandomPlacementStarted_Statics::NewProp_RandomStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_RandomPlacementStarted_Statics::NewProp_RandomStream_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_RandomPlacementStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_RandomPlacementStarted_Statics::NewProp_RandomStream,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_RandomPlacementStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_RandomPlacementStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "RandomPlacementStarted", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventRandomPlacementStarted_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_RandomPlacementStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_RandomPlacementStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_RandomPlacementStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_RandomPlacementStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_RandomPlacementStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_RandomPlacementStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics
	{
		struct SBZLevelScriptActor_eventSBZPlaceRandomSublevel_Parms
		{
			UObject* WorldContextObject;
			FString LevelName;
			FVector Location;
			FRotator Rotation;
			bool bOutSuccess;
			ULevelStreamingDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static void NewProp_bOutSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventSBZPlaceRandomSublevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_LevelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventSBZPlaceRandomSublevel_Parms, LevelName), METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_LevelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventSBZPlaceRandomSublevel_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventSBZPlaceRandomSublevel_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_Rotation_MetaData)) };
	void Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((SBZLevelScriptActor_eventSBZPlaceRandomSublevel_Parms*)Obj)->bOutSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLevelScriptActor_eventSBZPlaceRandomSublevel_Parms), &Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventSBZPlaceRandomSublevel_Parms, ReturnValue), Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_bOutSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "SBZPlaceRandomSublevel", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventSBZPlaceRandomSublevel_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics
	{
		struct SBZLevelScriptActor_eventSBZPlaceRandomSublevelBySoftObjectPtr_Parms
		{
			UObject* WorldContextObject;
			TSoftObjectPtr<UWorld> Level;
			FTransform RoomTransform;
			bool bOutSuccess;
			ULevelStreamingDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoomTransform;
		static void NewProp_bOutSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventSBZPlaceRandomSublevelBySoftObjectPtr_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventSBZPlaceRandomSublevelBySoftObjectPtr_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::NewProp_RoomTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::NewProp_RoomTransform = { "RoomTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventSBZPlaceRandomSublevelBySoftObjectPtr_Parms, RoomTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::NewProp_RoomTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::NewProp_RoomTransform_MetaData)) };
	void Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((SBZLevelScriptActor_eventSBZPlaceRandomSublevelBySoftObjectPtr_Parms*)Obj)->bOutSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLevelScriptActor_eventSBZPlaceRandomSublevelBySoftObjectPtr_Parms), &Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventSBZPlaceRandomSublevelBySoftObjectPtr_Parms, ReturnValue), Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::NewProp_RoomTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::NewProp_bOutSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "SBZPlaceRandomSublevelBySoftObjectPtr", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventSBZPlaceRandomSublevelBySoftObjectPtr_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType_Statics
	{
		struct SBZLevelScriptActor_eventSetBagMarkerEnabledByBagType_Parms
		{
			const USBZBagType* BagType;
			bool bEnabled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagType;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType_Statics::NewProp_BagType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType_Statics::NewProp_BagType = { "BagType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventSetBagMarkerEnabledByBagType_Parms, BagType), Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType_Statics::NewProp_BagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType_Statics::NewProp_BagType_MetaData)) };
	void Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZLevelScriptActor_eventSetBagMarkerEnabledByBagType_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLevelScriptActor_eventSetBagMarkerEnabledByBagType_Parms), &Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType_Statics::NewProp_BagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "SetBagMarkerEnabledByBagType", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventSetBagMarkerEnabledByBagType_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags_Statics
	{
		struct SBZLevelScriptActor_eventSetBagMarkerEnabledByTags_Parms
		{
			FGameplayTagContainer BagGameplayTagContainer;
			bool bEnabled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagGameplayTagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BagGameplayTagContainer;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags_Statics::NewProp_BagGameplayTagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags_Statics::NewProp_BagGameplayTagContainer = { "BagGameplayTagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActor_eventSetBagMarkerEnabledByTags_Parms, BagGameplayTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags_Statics::NewProp_BagGameplayTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags_Statics::NewProp_BagGameplayTagContainer_MetaData)) };
	void Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZLevelScriptActor_eventSetBagMarkerEnabledByTags_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLevelScriptActor_eventSetBagMarkerEnabledByTags_Parms), &Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags_Statics::NewProp_BagGameplayTagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActor, nullptr, "SetBagMarkerEnabledByTags", nullptr, nullptr, sizeof(SBZLevelScriptActor_eventSetBagMarkerEnabledByTags_Parms), Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZLevelScriptActor_NoRegister()
	{
		return ASBZLevelScriptActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZLevelScriptActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZLevelScriptActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZLevelScriptActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZLevelScriptActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_ActionPhaseStarted, "ActionPhaseStarted" }, // 2586100453
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_BlackScreenStarted, "BlackScreenStarted" }, // 3380384135
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_CallPlaced, "CallPlaced" }, // 3945994252
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_CriteriaObjectiveComplete, "CriteriaObjectiveComplete" }, // 1063115855
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_EndIntroSequence, "EndIntroSequence" }, // 1970990542
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_EndOutroSequence, "EndOutroSequence" }, // 431310488
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromLevelStream, "GetRandomBoolWithWeightFromLevelStream" }, // 2827546777
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomBoolWithWeightFromStreamMixed, "GetRandomBoolWithWeightFromStreamMixed" }, // 3858104416
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromLevelStream, "GetRandomIntegerFromLevelStream" }, // 3360894548
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_GetRandomIntegerFromStreamMixed, "GetRandomIntegerFromStreamMixed" }, // 1688614633
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_HandleActionPhaseStarted, "HandleActionPhaseStarted" }, // 1895075177
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_HandleBlackScreenStarted, "HandleBlackScreenStarted" }, // 327069409
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_HandleIntroSequenceChanged, "HandleIntroSequenceChanged" }, // 267420325
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_HandleOutroSequenceStarted, "HandleOutroSequenceStarted" }, // 3219854337
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_HeistStateChanged, "HeistStateChanged" }, // 523153910
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_IntroSequenceChanged, "IntroSequenceChanged" }, // 1983313722
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_OnAllBagSecured, "OnAllBagSecured" }, // 2649375377
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_OnAllRandomizedRoomsPlaced, "OnAllRandomizedRoomsPlaced" }, // 1040687282
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_OnBagSecured, "OnBagSecured" }, // 756147855
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_OnDifficultyModifierApplied, "OnDifficultyModifierApplied" }, // 1337034488
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_OnLevelModifiersApplied, "OnLevelModifiersApplied" }, // 2842269702
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_OnOptionalObjectiveComplete, "OnOptionalObjectiveComplete" }, // 1928324564
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_OnOverkillWeaponRequested, "OnOverkillWeaponRequested" }, // 1369395665
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerDefeatStateChanged, "OnPlayerDefeatStateChanged" }, // 3587567901
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerInstantLootTaken, "OnPlayerInstantLootTaken" }, // 2543734482
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_OnPlayerPickedUpBag, "OnPlayerPickedUpBag" }, // 3694663239
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_OnPreplanningAssetsTagsApplied, "OnPreplanningAssetsTagsApplied" }, // 1816147972
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomizedRoomShown, "OnRandomizedRoomShown" }, // 634106681
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomPlacementStarted, "OnRandomPlacementStarted" }, // 1267923534
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_OnRandomSublevelPlaced, "OnRandomSublevelPlaced" }, // 2655888025
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_OutroSequenceStarted, "OutroSequenceStarted" }, // 3020993275
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_RandomPlacementStarted, "RandomPlacementStarted" }, // 2892811445
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevel, "SBZPlaceRandomSublevel" }, // 2522097834
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_SBZPlaceRandomSublevelBySoftObjectPtr, "SBZPlaceRandomSublevelBySoftObjectPtr" }, // 1555242947
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByBagType, "SetBagMarkerEnabledByBagType" }, // 427708231
		{ &Z_Construct_UFunction_ASBZLevelScriptActor_SetBagMarkerEnabledByTags, "SetBagMarkerEnabledByTags" }, // 4003129112
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLevelScriptActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZLevelScriptActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLevelScriptActor_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLevelScriptActor" },
		{ "ModuleRelativePath", "Public/SBZLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZLevelScriptActor_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLevelScriptActor, Seed), METADATA_PARAMS(Z_Construct_UClass_ASBZLevelScriptActor_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLevelScriptActor_Statics::NewProp_Seed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZLevelScriptActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLevelScriptActor_Statics::NewProp_Seed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZLevelScriptActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZLevelScriptActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZLevelScriptActor_Statics::ClassParams = {
		&ASBZLevelScriptActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZLevelScriptActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLevelScriptActor_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZLevelScriptActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLevelScriptActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZLevelScriptActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZLevelScriptActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZLevelScriptActor, 1518463696);
	template<> STARBREEZE_API UClass* StaticClass<ASBZLevelScriptActor>()
	{
		return ASBZLevelScriptActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZLevelScriptActor(Z_Construct_UClass_ASBZLevelScriptActor, &ASBZLevelScriptActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZLevelScriptActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZLevelScriptActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
