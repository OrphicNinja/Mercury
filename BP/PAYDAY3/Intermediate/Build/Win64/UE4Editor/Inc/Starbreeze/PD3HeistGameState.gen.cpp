// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3HeistGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3HeistGameState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_APD3HeistGameState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_APD3HeistGameState();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMissionState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZNegotiationTradeType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficControl();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZECMCountData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZStealthBranch();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PD3HeistStateChangedDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PD3NegotiationEndTimeChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PD3HostageDemandChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PD3NegotiationTradeTypeChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PD3SuspenseValueChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PD3AnswerPagerValueChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_PD3ECMCountChangedDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3GameIntensityAnalyzer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3Dispatcher_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomPathFinder_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnedCarryData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3PagerHeistData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableWeapon_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICrewCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableCharges_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APD3HeistGameState::execDifficultyBranch)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM_REF(ESBZDifficulty,Z_Param_Out_OutputPins);
		P_FINISH;
		P_NATIVE_BEGIN;
		APD3HeistGameState::DifficultyBranch(Z_Param_WorldContextObject,(ESBZDifficulty&)(Z_Param_Out_OutputPins));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execGetCurrentHeistState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPD3HeistState*)Z_Param__Result=P_THIS->GetCurrentHeistState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execGetHostageDemand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetHostageDemand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execGetNegotiationEndTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNegotiationEndTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execGetNegotiationTradeType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZNegotiationTradeType*)Z_Param__Result=P_THIS->GetNegotiationTradeType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execHeistStateBranch)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM_REF(EPD3HeistState,Z_Param_Out_OutputPins);
		P_FINISH;
		P_NATIVE_BEGIN;
		APD3HeistGameState::HeistStateBranch(Z_Param_WorldContextObject,(EPD3HeistState&)(Z_Param_Out_OutputPins));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execIncreaseSuspense)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		APD3HeistGameState::IncreaseSuspense(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execIsActiveAssaultState)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActiveAssaultState(EPD3HeistState(Z_Param_State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execIsAssaultActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAssaultActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execMulticast_ProcessTrafficControls)
	{
		P_GET_TARRAY(FSBZTrafficControl,Z_Param_TrafficControlArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ProcessTrafficControls_Implementation(Z_Param_TrafficControlArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execMulticast_SetCurrentECMJammerCount)
	{
		P_GET_STRUCT(FSBZECMCountData,Z_Param_InCountData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetCurrentECMJammerCount_Implementation(Z_Param_InCountData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execMulticast_SetHeistState)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_HeistState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetHeistState_Implementation(EPD3HeistState(Z_Param_HeistState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execMulticast_SetHostagesDemand)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetHostagesDemand_Implementation(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execMulticast_SetNegotiationEndTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetNegotiationEndTime_Implementation(Z_Param_EndTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execMulticast_SetNegotiationTradeType)
	{
		P_GET_ENUM(ESBZNegotiationTradeType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetNegotiationTradeType_Implementation(ESBZNegotiationTradeType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execMulticast_SetPagerEnabled)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_NetID);
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_GET_UBOOL(Z_Param_bIsTimedOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetPagerEnabled_Implementation(Z_Param_NetID,Z_Param_bIsEnabled,Z_Param_bIsTimedOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execMulticast_SuspenseValueChanged)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewSuspenseValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SuspenseValueChanged_Implementation(Z_Param_NewSuspenseValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execOnRep_CurrentHeistState)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldHeistState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentHeistState(EPD3HeistState(Z_Param_OldHeistState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execOnRep_ECMCountData)
	{
		P_GET_STRUCT_REF(FSBZECMCountData,Z_Param_Out_OldCountData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ECMCountData(Z_Param_Out_OldCountData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execOnRep_NegotiationEndTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OldEndTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_NegotiationEndTime(Z_Param_OldEndTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execOnRep_NegotiationTradeType)
	{
		P_GET_ENUM(ESBZNegotiationTradeType,Z_Param_OldType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_NegotiationTradeType(ESBZNegotiationTradeType(Z_Param_OldType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execOnRep_NrHostagesDemand)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_OldDemand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_NrHostagesDemand(Z_Param_OldDemand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execOnRep_SpawnedCarryDataArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SpawnedCarryDataArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execOnStateMachineStateLeft)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateMachineStateLeft(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execSetHeistState)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_HeistState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeistState(EPD3HeistState(Z_Param_HeistState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3HeistGameState::execStealthBranch)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM_REF(ESBZStealthBranch,Z_Param_Out_OutputPins);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPD3HeistState*)Z_Param__Result=APD3HeistGameState::StealthBranch(Z_Param_WorldContextObject,(ESBZStealthBranch&)(Z_Param_Out_OutputPins));
		P_NATIVE_END;
	}
	static FName NAME_APD3HeistGameState_Multicast_ProcessTrafficControls = FName(TEXT("Multicast_ProcessTrafficControls"));
	void APD3HeistGameState::Multicast_ProcessTrafficControls(TArray<FSBZTrafficControl> const& TrafficControlArray)
	{
		PD3HeistGameState_eventMulticast_ProcessTrafficControls_Parms Parms;
		Parms.TrafficControlArray=TrafficControlArray;
		ProcessEvent(FindFunctionChecked(NAME_APD3HeistGameState_Multicast_ProcessTrafficControls),&Parms);
	}
	static FName NAME_APD3HeistGameState_Multicast_SetCurrentECMJammerCount = FName(TEXT("Multicast_SetCurrentECMJammerCount"));
	void APD3HeistGameState::Multicast_SetCurrentECMJammerCount(FSBZECMCountData const& InCountData)
	{
		PD3HeistGameState_eventMulticast_SetCurrentECMJammerCount_Parms Parms;
		Parms.InCountData=InCountData;
		ProcessEvent(FindFunctionChecked(NAME_APD3HeistGameState_Multicast_SetCurrentECMJammerCount),&Parms);
	}
	static FName NAME_APD3HeistGameState_Multicast_SetHeistState = FName(TEXT("Multicast_SetHeistState"));
	void APD3HeistGameState::Multicast_SetHeistState(EPD3HeistState HeistState)
	{
		PD3HeistGameState_eventMulticast_SetHeistState_Parms Parms;
		Parms.HeistState=HeistState;
		ProcessEvent(FindFunctionChecked(NAME_APD3HeistGameState_Multicast_SetHeistState),&Parms);
	}
	static FName NAME_APD3HeistGameState_Multicast_SetHostagesDemand = FName(TEXT("Multicast_SetHostagesDemand"));
	void APD3HeistGameState::Multicast_SetHostagesDemand(uint8 Count)
	{
		PD3HeistGameState_eventMulticast_SetHostagesDemand_Parms Parms;
		Parms.Count=Count;
		ProcessEvent(FindFunctionChecked(NAME_APD3HeistGameState_Multicast_SetHostagesDemand),&Parms);
	}
	static FName NAME_APD3HeistGameState_Multicast_SetNegotiationEndTime = FName(TEXT("Multicast_SetNegotiationEndTime"));
	void APD3HeistGameState::Multicast_SetNegotiationEndTime(float EndTime)
	{
		PD3HeistGameState_eventMulticast_SetNegotiationEndTime_Parms Parms;
		Parms.EndTime=EndTime;
		ProcessEvent(FindFunctionChecked(NAME_APD3HeistGameState_Multicast_SetNegotiationEndTime),&Parms);
	}
	static FName NAME_APD3HeistGameState_Multicast_SetNegotiationTradeType = FName(TEXT("Multicast_SetNegotiationTradeType"));
	void APD3HeistGameState::Multicast_SetNegotiationTradeType(ESBZNegotiationTradeType Type)
	{
		PD3HeistGameState_eventMulticast_SetNegotiationTradeType_Parms Parms;
		Parms.Type=Type;
		ProcessEvent(FindFunctionChecked(NAME_APD3HeistGameState_Multicast_SetNegotiationTradeType),&Parms);
	}
	static FName NAME_APD3HeistGameState_Multicast_SetPagerEnabled = FName(TEXT("Multicast_SetPagerEnabled"));
	void APD3HeistGameState::Multicast_SetPagerEnabled(uint32 NetID, bool bIsEnabled, bool bIsTimedOut)
	{
		PD3HeistGameState_eventMulticast_SetPagerEnabled_Parms Parms;
		Parms.NetID=NetID;
		Parms.bIsEnabled=bIsEnabled ? true : false;
		Parms.bIsTimedOut=bIsTimedOut ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APD3HeistGameState_Multicast_SetPagerEnabled),&Parms);
	}
	static FName NAME_APD3HeistGameState_Multicast_SuspenseValueChanged = FName(TEXT("Multicast_SuspenseValueChanged"));
	void APD3HeistGameState::Multicast_SuspenseValueChanged(uint8 NewSuspenseValue)
	{
		PD3HeistGameState_eventMulticast_SuspenseValueChanged_Parms Parms;
		Parms.NewSuspenseValue=NewSuspenseValue;
		ProcessEvent(FindFunctionChecked(NAME_APD3HeistGameState_Multicast_SuspenseValueChanged),&Parms);
	}
	void APD3HeistGameState::StaticRegisterNativesAPD3HeistGameState()
	{
		UClass* Class = APD3HeistGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DifficultyBranch", &APD3HeistGameState::execDifficultyBranch },
			{ "GetCurrentHeistState", &APD3HeistGameState::execGetCurrentHeistState },
			{ "GetHostageDemand", &APD3HeistGameState::execGetHostageDemand },
			{ "GetNegotiationEndTime", &APD3HeistGameState::execGetNegotiationEndTime },
			{ "GetNegotiationTradeType", &APD3HeistGameState::execGetNegotiationTradeType },
			{ "HeistStateBranch", &APD3HeistGameState::execHeistStateBranch },
			{ "IncreaseSuspense", &APD3HeistGameState::execIncreaseSuspense },
			{ "IsActiveAssaultState", &APD3HeistGameState::execIsActiveAssaultState },
			{ "IsAssaultActive", &APD3HeistGameState::execIsAssaultActive },
			{ "Multicast_ProcessTrafficControls", &APD3HeistGameState::execMulticast_ProcessTrafficControls },
			{ "Multicast_SetCurrentECMJammerCount", &APD3HeistGameState::execMulticast_SetCurrentECMJammerCount },
			{ "Multicast_SetHeistState", &APD3HeistGameState::execMulticast_SetHeistState },
			{ "Multicast_SetHostagesDemand", &APD3HeistGameState::execMulticast_SetHostagesDemand },
			{ "Multicast_SetNegotiationEndTime", &APD3HeistGameState::execMulticast_SetNegotiationEndTime },
			{ "Multicast_SetNegotiationTradeType", &APD3HeistGameState::execMulticast_SetNegotiationTradeType },
			{ "Multicast_SetPagerEnabled", &APD3HeistGameState::execMulticast_SetPagerEnabled },
			{ "Multicast_SuspenseValueChanged", &APD3HeistGameState::execMulticast_SuspenseValueChanged },
			{ "OnRep_CurrentHeistState", &APD3HeistGameState::execOnRep_CurrentHeistState },
			{ "OnRep_ECMCountData", &APD3HeistGameState::execOnRep_ECMCountData },
			{ "OnRep_NegotiationEndTime", &APD3HeistGameState::execOnRep_NegotiationEndTime },
			{ "OnRep_NegotiationTradeType", &APD3HeistGameState::execOnRep_NegotiationTradeType },
			{ "OnRep_NrHostagesDemand", &APD3HeistGameState::execOnRep_NrHostagesDemand },
			{ "OnRep_SpawnedCarryDataArray", &APD3HeistGameState::execOnRep_SpawnedCarryDataArray },
			{ "OnStateMachineStateLeft", &APD3HeistGameState::execOnStateMachineStateLeft },
			{ "SetHeistState", &APD3HeistGameState::execSetHeistState },
			{ "StealthBranch", &APD3HeistGameState::execStealthBranch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APD3HeistGameState_DifficultyBranch_Statics
	{
		struct PD3HeistGameState_eventDifficultyBranch_Parms
		{
			UObject* WorldContextObject;
			ESBZDifficulty OutputPins;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputPins_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutputPins;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APD3HeistGameState_DifficultyBranch_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventDifficultyBranch_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APD3HeistGameState_DifficultyBranch_Statics::NewProp_OutputPins_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APD3HeistGameState_DifficultyBranch_Statics::NewProp_OutputPins = { "OutputPins", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventDifficultyBranch_Parms, OutputPins), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_DifficultyBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_DifficultyBranch_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_DifficultyBranch_Statics::NewProp_OutputPins_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_DifficultyBranch_Statics::NewProp_OutputPins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_DifficultyBranch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_DifficultyBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "DifficultyBranch", nullptr, nullptr, sizeof(PD3HeistGameState_eventDifficultyBranch_Parms), Z_Construct_UFunction_APD3HeistGameState_DifficultyBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_DifficultyBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_DifficultyBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_DifficultyBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_DifficultyBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_DifficultyBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_GetCurrentHeistState_Statics
	{
		struct PD3HeistGameState_eventGetCurrentHeistState_Parms
		{
			EPD3HeistState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APD3HeistGameState_GetCurrentHeistState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APD3HeistGameState_GetCurrentHeistState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventGetCurrentHeistState_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_GetCurrentHeistState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_GetCurrentHeistState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_GetCurrentHeistState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_GetCurrentHeistState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_GetCurrentHeistState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "GetCurrentHeistState", nullptr, nullptr, sizeof(PD3HeistGameState_eventGetCurrentHeistState_Parms), Z_Construct_UFunction_APD3HeistGameState_GetCurrentHeistState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_GetCurrentHeistState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_GetCurrentHeistState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_GetCurrentHeistState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_GetCurrentHeistState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_GetCurrentHeistState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_GetHostageDemand_Statics
	{
		struct PD3HeistGameState_eventGetHostageDemand_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APD3HeistGameState_GetHostageDemand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventGetHostageDemand_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_GetHostageDemand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_GetHostageDemand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_GetHostageDemand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_GetHostageDemand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "GetHostageDemand", nullptr, nullptr, sizeof(PD3HeistGameState_eventGetHostageDemand_Parms), Z_Construct_UFunction_APD3HeistGameState_GetHostageDemand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_GetHostageDemand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_GetHostageDemand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_GetHostageDemand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_GetHostageDemand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_GetHostageDemand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_GetNegotiationEndTime_Statics
	{
		struct PD3HeistGameState_eventGetNegotiationEndTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APD3HeistGameState_GetNegotiationEndTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventGetNegotiationEndTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_GetNegotiationEndTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_GetNegotiationEndTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_GetNegotiationEndTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_GetNegotiationEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "GetNegotiationEndTime", nullptr, nullptr, sizeof(PD3HeistGameState_eventGetNegotiationEndTime_Parms), Z_Construct_UFunction_APD3HeistGameState_GetNegotiationEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_GetNegotiationEndTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_GetNegotiationEndTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_GetNegotiationEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_GetNegotiationEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_GetNegotiationEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_GetNegotiationTradeType_Statics
	{
		struct PD3HeistGameState_eventGetNegotiationTradeType_Parms
		{
			ESBZNegotiationTradeType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APD3HeistGameState_GetNegotiationTradeType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APD3HeistGameState_GetNegotiationTradeType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventGetNegotiationTradeType_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZNegotiationTradeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_GetNegotiationTradeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_GetNegotiationTradeType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_GetNegotiationTradeType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_GetNegotiationTradeType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_GetNegotiationTradeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "GetNegotiationTradeType", nullptr, nullptr, sizeof(PD3HeistGameState_eventGetNegotiationTradeType_Parms), Z_Construct_UFunction_APD3HeistGameState_GetNegotiationTradeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_GetNegotiationTradeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_GetNegotiationTradeType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_GetNegotiationTradeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_GetNegotiationTradeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_GetNegotiationTradeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_HeistStateBranch_Statics
	{
		struct PD3HeistGameState_eventHeistStateBranch_Parms
		{
			UObject* WorldContextObject;
			EPD3HeistState OutputPins;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputPins_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutputPins;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APD3HeistGameState_HeistStateBranch_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventHeistStateBranch_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APD3HeistGameState_HeistStateBranch_Statics::NewProp_OutputPins_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APD3HeistGameState_HeistStateBranch_Statics::NewProp_OutputPins = { "OutputPins", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventHeistStateBranch_Parms, OutputPins), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_HeistStateBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_HeistStateBranch_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_HeistStateBranch_Statics::NewProp_OutputPins_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_HeistStateBranch_Statics::NewProp_OutputPins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_HeistStateBranch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_HeistStateBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "HeistStateBranch", nullptr, nullptr, sizeof(PD3HeistGameState_eventHeistStateBranch_Parms), Z_Construct_UFunction_APD3HeistGameState_HeistStateBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_HeistStateBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_HeistStateBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_HeistStateBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_HeistStateBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_HeistStateBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_IncreaseSuspense_Statics
	{
		struct PD3HeistGameState_eventIncreaseSuspense_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APD3HeistGameState_IncreaseSuspense_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventIncreaseSuspense_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_IncreaseSuspense_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_IncreaseSuspense_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_IncreaseSuspense_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_IncreaseSuspense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "IncreaseSuspense", nullptr, nullptr, sizeof(PD3HeistGameState_eventIncreaseSuspense_Parms), Z_Construct_UFunction_APD3HeistGameState_IncreaseSuspense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_IncreaseSuspense_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_IncreaseSuspense_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_IncreaseSuspense_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_IncreaseSuspense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_IncreaseSuspense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics
	{
		struct PD3HeistGameState_eventIsActiveAssaultState_Parms
		{
			EPD3HeistState State;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventIsActiveAssaultState_Parms, State), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::NewProp_State_MetaData)) };
	void Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PD3HeistGameState_eventIsActiveAssaultState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3HeistGameState_eventIsActiveAssaultState_Parms), &Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "IsActiveAssaultState", nullptr, nullptr, sizeof(PD3HeistGameState_eventIsActiveAssaultState_Parms), Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_IsAssaultActive_Statics
	{
		struct PD3HeistGameState_eventIsAssaultActive_Parms
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
	void Z_Construct_UFunction_APD3HeistGameState_IsAssaultActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PD3HeistGameState_eventIsAssaultActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APD3HeistGameState_IsAssaultActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3HeistGameState_eventIsAssaultActive_Parms), &Z_Construct_UFunction_APD3HeistGameState_IsAssaultActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_IsAssaultActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_IsAssaultActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_IsAssaultActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_IsAssaultActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "IsAssaultActive", nullptr, nullptr, sizeof(PD3HeistGameState_eventIsAssaultActive_Parms), Z_Construct_UFunction_APD3HeistGameState_IsAssaultActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_IsAssaultActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_IsAssaultActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_IsAssaultActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_IsAssaultActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_IsAssaultActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_Multicast_ProcessTrafficControls_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrafficControlArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrafficControlArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrafficControlArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APD3HeistGameState_Multicast_ProcessTrafficControls_Statics::NewProp_TrafficControlArray_Inner = { "TrafficControlArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZTrafficControl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_Multicast_ProcessTrafficControls_Statics::NewProp_TrafficControlArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APD3HeistGameState_Multicast_ProcessTrafficControls_Statics::NewProp_TrafficControlArray = { "TrafficControlArray", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventMulticast_ProcessTrafficControls_Parms, TrafficControlArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_Multicast_ProcessTrafficControls_Statics::NewProp_TrafficControlArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_Multicast_ProcessTrafficControls_Statics::NewProp_TrafficControlArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_Multicast_ProcessTrafficControls_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_Multicast_ProcessTrafficControls_Statics::NewProp_TrafficControlArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_Multicast_ProcessTrafficControls_Statics::NewProp_TrafficControlArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_Multicast_ProcessTrafficControls_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_Multicast_ProcessTrafficControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "Multicast_ProcessTrafficControls", nullptr, nullptr, sizeof(PD3HeistGameState_eventMulticast_ProcessTrafficControls_Parms), Z_Construct_UFunction_APD3HeistGameState_Multicast_ProcessTrafficControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_Multicast_ProcessTrafficControls_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_Multicast_ProcessTrafficControls_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_Multicast_ProcessTrafficControls_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_Multicast_ProcessTrafficControls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_Multicast_ProcessTrafficControls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_Multicast_SetCurrentECMJammerCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCountData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCountData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_Multicast_SetCurrentECMJammerCount_Statics::NewProp_InCountData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APD3HeistGameState_Multicast_SetCurrentECMJammerCount_Statics::NewProp_InCountData = { "InCountData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventMulticast_SetCurrentECMJammerCount_Parms, InCountData), Z_Construct_UScriptStruct_FSBZECMCountData, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetCurrentECMJammerCount_Statics::NewProp_InCountData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetCurrentECMJammerCount_Statics::NewProp_InCountData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_Multicast_SetCurrentECMJammerCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_Multicast_SetCurrentECMJammerCount_Statics::NewProp_InCountData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_Multicast_SetCurrentECMJammerCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_Multicast_SetCurrentECMJammerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "Multicast_SetCurrentECMJammerCount", nullptr, nullptr, sizeof(PD3HeistGameState_eventMulticast_SetCurrentECMJammerCount_Parms), Z_Construct_UFunction_APD3HeistGameState_Multicast_SetCurrentECMJammerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetCurrentECMJammerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetCurrentECMJammerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetCurrentECMJammerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_Multicast_SetCurrentECMJammerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_Multicast_SetCurrentECMJammerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHeistState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HeistState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HeistState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHeistState_Statics::NewProp_HeistState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHeistState_Statics::NewProp_HeistState = { "HeistState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventMulticast_SetHeistState_Parms, HeistState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHeistState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHeistState_Statics::NewProp_HeistState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHeistState_Statics::NewProp_HeistState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHeistState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHeistState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "Multicast_SetHeistState", nullptr, nullptr, sizeof(PD3HeistGameState_eventMulticast_SetHeistState_Parms), Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHeistState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHeistState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHeistState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHeistState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHeistState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHeistState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHostagesDemand_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHostagesDemand_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventMulticast_SetHostagesDemand_Parms, Count), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHostagesDemand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHostagesDemand_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHostagesDemand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHostagesDemand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "Multicast_SetHostagesDemand", nullptr, nullptr, sizeof(PD3HeistGameState_eventMulticast_SetHostagesDemand_Parms), Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHostagesDemand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHostagesDemand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHostagesDemand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHostagesDemand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHostagesDemand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHostagesDemand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationEndTime_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationEndTime_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventMulticast_SetNegotiationEndTime_Parms, EndTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationEndTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationEndTime_Statics::NewProp_EndTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationEndTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "Multicast_SetNegotiationEndTime", nullptr, nullptr, sizeof(PD3HeistGameState_eventMulticast_SetNegotiationEndTime_Parms), Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationEndTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationEndTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationTradeType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationTradeType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationTradeType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventMulticast_SetNegotiationTradeType_Parms, Type), Z_Construct_UEnum_Starbreeze_ESBZNegotiationTradeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationTradeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationTradeType_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationTradeType_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationTradeType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationTradeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "Multicast_SetNegotiationTradeType", nullptr, nullptr, sizeof(PD3HeistGameState_eventMulticast_SetNegotiationTradeType_Parms), Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationTradeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationTradeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationTradeType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationTradeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationTradeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationTradeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics
	{
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NetID;
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static void NewProp_bIsTimedOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTimedOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics::NewProp_NetID = { "NetID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventMulticast_SetPagerEnabled_Parms, NetID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((PD3HeistGameState_eventMulticast_SetPagerEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3HeistGameState_eventMulticast_SetPagerEnabled_Parms), &Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics::NewProp_bIsTimedOut_SetBit(void* Obj)
	{
		((PD3HeistGameState_eventMulticast_SetPagerEnabled_Parms*)Obj)->bIsTimedOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics::NewProp_bIsTimedOut = { "bIsTimedOut", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3HeistGameState_eventMulticast_SetPagerEnabled_Parms), &Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics::NewProp_bIsTimedOut_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics::NewProp_NetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics::NewProp_bIsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics::NewProp_bIsTimedOut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "Multicast_SetPagerEnabled", nullptr, nullptr, sizeof(PD3HeistGameState_eventMulticast_SetPagerEnabled_Parms), Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_Multicast_SuspenseValueChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewSuspenseValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APD3HeistGameState_Multicast_SuspenseValueChanged_Statics::NewProp_NewSuspenseValue = { "NewSuspenseValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventMulticast_SuspenseValueChanged_Parms, NewSuspenseValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_Multicast_SuspenseValueChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_Multicast_SuspenseValueChanged_Statics::NewProp_NewSuspenseValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_Multicast_SuspenseValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_Multicast_SuspenseValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "Multicast_SuspenseValueChanged", nullptr, nullptr, sizeof(PD3HeistGameState_eventMulticast_SuspenseValueChanged_Parms), Z_Construct_UFunction_APD3HeistGameState_Multicast_SuspenseValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_Multicast_SuspenseValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_Multicast_SuspenseValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_Multicast_SuspenseValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_Multicast_SuspenseValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_Multicast_SuspenseValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_OnRep_CurrentHeistState_Statics
	{
		struct PD3HeistGameState_eventOnRep_CurrentHeistState_Parms
		{
			EPD3HeistState OldHeistState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldHeistState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldHeistState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APD3HeistGameState_OnRep_CurrentHeistState_Statics::NewProp_OldHeistState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APD3HeistGameState_OnRep_CurrentHeistState_Statics::NewProp_OldHeistState = { "OldHeistState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventOnRep_CurrentHeistState_Parms, OldHeistState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_OnRep_CurrentHeistState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_OnRep_CurrentHeistState_Statics::NewProp_OldHeistState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_OnRep_CurrentHeistState_Statics::NewProp_OldHeistState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_OnRep_CurrentHeistState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_OnRep_CurrentHeistState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "OnRep_CurrentHeistState", nullptr, nullptr, sizeof(PD3HeistGameState_eventOnRep_CurrentHeistState_Parms), Z_Construct_UFunction_APD3HeistGameState_OnRep_CurrentHeistState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_OnRep_CurrentHeistState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_OnRep_CurrentHeistState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_OnRep_CurrentHeistState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_OnRep_CurrentHeistState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_OnRep_CurrentHeistState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_OnRep_ECMCountData_Statics
	{
		struct PD3HeistGameState_eventOnRep_ECMCountData_Parms
		{
			FSBZECMCountData OldCountData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldCountData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldCountData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_OnRep_ECMCountData_Statics::NewProp_OldCountData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APD3HeistGameState_OnRep_ECMCountData_Statics::NewProp_OldCountData = { "OldCountData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventOnRep_ECMCountData_Parms, OldCountData), Z_Construct_UScriptStruct_FSBZECMCountData, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_OnRep_ECMCountData_Statics::NewProp_OldCountData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_OnRep_ECMCountData_Statics::NewProp_OldCountData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_OnRep_ECMCountData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_OnRep_ECMCountData_Statics::NewProp_OldCountData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_OnRep_ECMCountData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_OnRep_ECMCountData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "OnRep_ECMCountData", nullptr, nullptr, sizeof(PD3HeistGameState_eventOnRep_ECMCountData_Parms), Z_Construct_UFunction_APD3HeistGameState_OnRep_ECMCountData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_OnRep_ECMCountData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_OnRep_ECMCountData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_OnRep_ECMCountData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_OnRep_ECMCountData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_OnRep_ECMCountData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationEndTime_Statics
	{
		struct PD3HeistGameState_eventOnRep_NegotiationEndTime_Parms
		{
			float OldEndTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldEndTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationEndTime_Statics::NewProp_OldEndTime = { "OldEndTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventOnRep_NegotiationEndTime_Parms, OldEndTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationEndTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationEndTime_Statics::NewProp_OldEndTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationEndTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "OnRep_NegotiationEndTime", nullptr, nullptr, sizeof(PD3HeistGameState_eventOnRep_NegotiationEndTime_Parms), Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationEndTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationEndTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationTradeType_Statics
	{
		struct PD3HeistGameState_eventOnRep_NegotiationTradeType_Parms
		{
			ESBZNegotiationTradeType OldType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationTradeType_Statics::NewProp_OldType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationTradeType_Statics::NewProp_OldType = { "OldType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventOnRep_NegotiationTradeType_Parms, OldType), Z_Construct_UEnum_Starbreeze_ESBZNegotiationTradeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationTradeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationTradeType_Statics::NewProp_OldType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationTradeType_Statics::NewProp_OldType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationTradeType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationTradeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "OnRep_NegotiationTradeType", nullptr, nullptr, sizeof(PD3HeistGameState_eventOnRep_NegotiationTradeType_Parms), Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationTradeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationTradeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationTradeType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationTradeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationTradeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationTradeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_OnRep_NrHostagesDemand_Statics
	{
		struct PD3HeistGameState_eventOnRep_NrHostagesDemand_Parms
		{
			uint8 OldDemand;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldDemand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APD3HeistGameState_OnRep_NrHostagesDemand_Statics::NewProp_OldDemand = { "OldDemand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventOnRep_NrHostagesDemand_Parms, OldDemand), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_OnRep_NrHostagesDemand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_OnRep_NrHostagesDemand_Statics::NewProp_OldDemand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_OnRep_NrHostagesDemand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_OnRep_NrHostagesDemand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "OnRep_NrHostagesDemand", nullptr, nullptr, sizeof(PD3HeistGameState_eventOnRep_NrHostagesDemand_Parms), Z_Construct_UFunction_APD3HeistGameState_OnRep_NrHostagesDemand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_OnRep_NrHostagesDemand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_OnRep_NrHostagesDemand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_OnRep_NrHostagesDemand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_OnRep_NrHostagesDemand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_OnRep_NrHostagesDemand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_OnRep_SpawnedCarryDataArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_OnRep_SpawnedCarryDataArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_OnRep_SpawnedCarryDataArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "OnRep_SpawnedCarryDataArray", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_OnRep_SpawnedCarryDataArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_OnRep_SpawnedCarryDataArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_OnRep_SpawnedCarryDataArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_OnRep_SpawnedCarryDataArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_OnStateMachineStateLeft_Statics
	{
		struct PD3HeistGameState_eventOnStateMachineStateLeft_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APD3HeistGameState_OnStateMachineStateLeft_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventOnStateMachineStateLeft_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_OnStateMachineStateLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_OnStateMachineStateLeft_Statics::NewProp_StateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_OnStateMachineStateLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_OnStateMachineStateLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "OnStateMachineStateLeft", nullptr, nullptr, sizeof(PD3HeistGameState_eventOnStateMachineStateLeft_Parms), Z_Construct_UFunction_APD3HeistGameState_OnStateMachineStateLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_OnStateMachineStateLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_OnStateMachineStateLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_OnStateMachineStateLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_OnStateMachineStateLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_OnStateMachineStateLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_SetHeistState_Statics
	{
		struct PD3HeistGameState_eventSetHeistState_Parms
		{
			EPD3HeistState HeistState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HeistState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HeistState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APD3HeistGameState_SetHeistState_Statics::NewProp_HeistState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APD3HeistGameState_SetHeistState_Statics::NewProp_HeistState = { "HeistState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventSetHeistState_Parms, HeistState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_SetHeistState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_SetHeistState_Statics::NewProp_HeistState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_SetHeistState_Statics::NewProp_HeistState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_SetHeistState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_SetHeistState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "SetHeistState", nullptr, nullptr, sizeof(PD3HeistGameState_eventSetHeistState_Parms), Z_Construct_UFunction_APD3HeistGameState_SetHeistState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_SetHeistState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_SetHeistState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_SetHeistState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_SetHeistState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_SetHeistState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics
	{
		struct PD3HeistGameState_eventStealthBranch_Parms
		{
			UObject* WorldContextObject;
			ESBZStealthBranch OutputPins;
			EPD3HeistState ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputPins_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutputPins;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventStealthBranch_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics::NewProp_OutputPins_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics::NewProp_OutputPins = { "OutputPins", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventStealthBranch_Parms, OutputPins), Z_Construct_UEnum_Starbreeze_ESBZStealthBranch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameState_eventStealthBranch_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics::NewProp_OutputPins_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics::NewProp_OutputPins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameState, nullptr, "StealthBranch", nullptr, nullptr, sizeof(PD3HeistGameState_eventStealthBranch_Parms), Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameState_StealthBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameState_StealthBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APD3HeistGameState_NoRegister()
	{
		return APD3HeistGameState::StaticClass();
	}
	struct Z_Construct_UClass_APD3HeistGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHeistStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHeistStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNegotiationEndTimeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNegotiationEndTimeChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHostagesDemandChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHostagesDemandChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNegotiationTradeTypeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNegotiationTradeTypeChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuspenseValueChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuspenseValueChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAnswerPagerValueChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnswerPagerValueChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnECMCountChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnECMCountChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSuspenseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentSuspenseValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentThreatLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentThreatLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentHeistState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHeistState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentHeistState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameIntensityAnalyzer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameIntensityAnalyzer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomPathFinder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomPathFinder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionFailedTimeoutSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MissionFailedTimeoutSeconds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnedCarryDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedCarryDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnedCarryDataArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingUsingCarryMap_ValueProp;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PendingUsingCarryMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingUsingCarryMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PendingUsingCarryMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedCarryActorMap_ValueProp;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SpawnedCarryActorMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedCarryActorMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SpawnedCarryActorMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegotiationEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NegotiationEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NrHostagesDemand_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NrHostagesDemand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnswerPagerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnswerPagerCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PagerHeistDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PagerHeistDataArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponBoxClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultWeaponBoxClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCrewCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCrewCount;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AICrewCharacterClassSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AICrewCharacterClassSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_AICrewCharacterClassSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalMaterialParameterCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlobalMaterialParameterCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalNiagaraParameterCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlobalNiagaraParameterCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlarmThreatLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlarmThreatLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegotiationThreatLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NegotiationThreatLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssaultThreatLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AssaultThreatLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssaultThreatLevelIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AssaultThreatLevelIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPositionUpdateFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerPositionUpdateFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalMaterialCollectionInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlobalMaterialCollectionInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalNiagaraCollectionInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlobalNiagaraCollectionInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAICrewSpawned_MetaData[];
#endif
		static void NewProp_bIsAICrewSpawned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAICrewSpawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAssaultStarted_MetaData[];
#endif
		static void NewProp_bIsAssaultStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAssaultStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedCustodyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SavedCustodyTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostageDemandReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HostageDemandReduction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NegotiationTradeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegotiationTradeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NegotiationTradeType;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TradeHostagePickupAssetArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TradeHostagePickupAssetArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TradeHostagePickupAssetArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ECMCountData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ECMCountData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JammerTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JammerTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ECMJammerRadioBasePercentageIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ECMJammerRadioBasePercentageIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ECMJammerCameraBasePercentageIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ECMJammerCameraBasePercentageIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ECMJammerPagerBasePercentageIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ECMJammerPagerBasePercentageIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ECMJammerAdditionalIncreasePercentagePerJammer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ECMJammerAdditionalIncreasePercentagePerJammer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APD3HeistGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZMissionState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APD3HeistGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APD3HeistGameState_DifficultyBranch, "DifficultyBranch" }, // 452791247
		{ &Z_Construct_UFunction_APD3HeistGameState_GetCurrentHeistState, "GetCurrentHeistState" }, // 898931052
		{ &Z_Construct_UFunction_APD3HeistGameState_GetHostageDemand, "GetHostageDemand" }, // 2821832463
		{ &Z_Construct_UFunction_APD3HeistGameState_GetNegotiationEndTime, "GetNegotiationEndTime" }, // 963188638
		{ &Z_Construct_UFunction_APD3HeistGameState_GetNegotiationTradeType, "GetNegotiationTradeType" }, // 4256179377
		{ &Z_Construct_UFunction_APD3HeistGameState_HeistStateBranch, "HeistStateBranch" }, // 4001018901
		{ &Z_Construct_UFunction_APD3HeistGameState_IncreaseSuspense, "IncreaseSuspense" }, // 2805186866
		{ &Z_Construct_UFunction_APD3HeistGameState_IsActiveAssaultState, "IsActiveAssaultState" }, // 517058680
		{ &Z_Construct_UFunction_APD3HeistGameState_IsAssaultActive, "IsAssaultActive" }, // 3187138611
		{ &Z_Construct_UFunction_APD3HeistGameState_Multicast_ProcessTrafficControls, "Multicast_ProcessTrafficControls" }, // 1040232342
		{ &Z_Construct_UFunction_APD3HeistGameState_Multicast_SetCurrentECMJammerCount, "Multicast_SetCurrentECMJammerCount" }, // 1848907073
		{ &Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHeistState, "Multicast_SetHeistState" }, // 3553543041
		{ &Z_Construct_UFunction_APD3HeistGameState_Multicast_SetHostagesDemand, "Multicast_SetHostagesDemand" }, // 2798346838
		{ &Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationEndTime, "Multicast_SetNegotiationEndTime" }, // 787799954
		{ &Z_Construct_UFunction_APD3HeistGameState_Multicast_SetNegotiationTradeType, "Multicast_SetNegotiationTradeType" }, // 3108789619
		{ &Z_Construct_UFunction_APD3HeistGameState_Multicast_SetPagerEnabled, "Multicast_SetPagerEnabled" }, // 3850167183
		{ &Z_Construct_UFunction_APD3HeistGameState_Multicast_SuspenseValueChanged, "Multicast_SuspenseValueChanged" }, // 2009147235
		{ &Z_Construct_UFunction_APD3HeistGameState_OnRep_CurrentHeistState, "OnRep_CurrentHeistState" }, // 1891493280
		{ &Z_Construct_UFunction_APD3HeistGameState_OnRep_ECMCountData, "OnRep_ECMCountData" }, // 2980688514
		{ &Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationEndTime, "OnRep_NegotiationEndTime" }, // 462984104
		{ &Z_Construct_UFunction_APD3HeistGameState_OnRep_NegotiationTradeType, "OnRep_NegotiationTradeType" }, // 4190310448
		{ &Z_Construct_UFunction_APD3HeistGameState_OnRep_NrHostagesDemand, "OnRep_NrHostagesDemand" }, // 1924080368
		{ &Z_Construct_UFunction_APD3HeistGameState_OnRep_SpawnedCarryDataArray, "OnRep_SpawnedCarryDataArray" }, // 1597819128
		{ &Z_Construct_UFunction_APD3HeistGameState_OnStateMachineStateLeft, "OnStateMachineStateLeft" }, // 613837079
		{ &Z_Construct_UFunction_APD3HeistGameState_SetHeistState, "SetHeistState" }, // 740215161
		{ &Z_Construct_UFunction_APD3HeistGameState_StealthBranch, "StealthBranch" }, // 1549956907
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PD3HeistGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnHeistStateChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnHeistStateChanged = { "OnHeistStateChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, OnHeistStateChanged), Z_Construct_UDelegateFunction_Starbreeze_PD3HeistStateChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnHeistStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnHeistStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnNegotiationEndTimeChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnNegotiationEndTimeChanged = { "OnNegotiationEndTimeChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, OnNegotiationEndTimeChanged), Z_Construct_UDelegateFunction_Starbreeze_PD3NegotiationEndTimeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnNegotiationEndTimeChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnNegotiationEndTimeChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnHostagesDemandChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnHostagesDemandChanged = { "OnHostagesDemandChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, OnHostagesDemandChanged), Z_Construct_UDelegateFunction_Starbreeze_PD3HostageDemandChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnHostagesDemandChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnHostagesDemandChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnNegotiationTradeTypeChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnNegotiationTradeTypeChanged = { "OnNegotiationTradeTypeChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, OnNegotiationTradeTypeChanged), Z_Construct_UDelegateFunction_Starbreeze_PD3NegotiationTradeTypeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnNegotiationTradeTypeChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnNegotiationTradeTypeChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnSuspenseValueChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnSuspenseValueChanged = { "OnSuspenseValueChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, OnSuspenseValueChanged), Z_Construct_UDelegateFunction_Starbreeze_PD3SuspenseValueChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnSuspenseValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnSuspenseValueChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnAnswerPagerValueChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnAnswerPagerValueChanged = { "OnAnswerPagerValueChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, OnAnswerPagerValueChanged), Z_Construct_UDelegateFunction_Starbreeze_PD3AnswerPagerValueChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnAnswerPagerValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnAnswerPagerValueChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnECMCountChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnECMCountChanged = { "OnECMCountChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, OnECMCountChanged), Z_Construct_UDelegateFunction_Starbreeze_PD3ECMCountChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnECMCountChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnECMCountChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_CurrentSuspenseValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_CurrentSuspenseValue = { "CurrentSuspenseValue", nullptr, (EPropertyFlags)0x0010000000002025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, CurrentSuspenseValue), nullptr, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_CurrentSuspenseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_CurrentSuspenseValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_CurrentThreatLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_CurrentThreatLevel = { "CurrentThreatLevel", nullptr, (EPropertyFlags)0x0010000000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, CurrentThreatLevel), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_CurrentThreatLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_CurrentThreatLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_CurrentHeistState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_CurrentHeistState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_CurrentHeistState = { "CurrentHeistState", "OnRep_CurrentHeistState", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, CurrentHeistState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_CurrentHeistState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_CurrentHeistState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GameIntensityAnalyzer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GameIntensityAnalyzer = { "GameIntensityAnalyzer", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, GameIntensityAnalyzer), Z_Construct_UClass_UPD3GameIntensityAnalyzer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GameIntensityAnalyzer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GameIntensityAnalyzer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_Dispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_Dispatcher = { "Dispatcher", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, Dispatcher), Z_Construct_UClass_UPD3Dispatcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_Dispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_Dispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_RoomPathFinder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_RoomPathFinder = { "RoomPathFinder", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, RoomPathFinder), Z_Construct_UClass_USBZRoomPathFinder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_RoomPathFinder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_RoomPathFinder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_MissionFailedTimeoutSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_MissionFailedTimeoutSeconds = { "MissionFailedTimeoutSeconds", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, MissionFailedTimeoutSeconds), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_MissionFailedTimeoutSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_MissionFailedTimeoutSeconds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SpawnedCarryDataArray_Inner = { "SpawnedCarryDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSpawnedCarryData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SpawnedCarryDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SpawnedCarryDataArray = { "SpawnedCarryDataArray", "OnRep_SpawnedCarryDataArray", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, SpawnedCarryDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SpawnedCarryDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SpawnedCarryDataArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PendingUsingCarryMap_ValueProp = { "PendingUsingCarryMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PendingUsingCarryMap_Key_KeyProp = { "PendingUsingCarryMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PendingUsingCarryMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PendingUsingCarryMap = { "PendingUsingCarryMap", nullptr, (EPropertyFlags)0x0040000000002001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, PendingUsingCarryMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PendingUsingCarryMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PendingUsingCarryMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SpawnedCarryActorMap_ValueProp = { "SpawnedCarryActorMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SpawnedCarryActorMap_Key_KeyProp = { "SpawnedCarryActorMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SpawnedCarryActorMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SpawnedCarryActorMap = { "SpawnedCarryActorMap", nullptr, (EPropertyFlags)0x0040000000002001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, SpawnedCarryActorMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SpawnedCarryActorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SpawnedCarryActorMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NegotiationEndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NegotiationEndTime = { "NegotiationEndTime", "OnRep_NegotiationEndTime", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, NegotiationEndTime), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NegotiationEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NegotiationEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NrHostagesDemand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NrHostagesDemand = { "NrHostagesDemand", "OnRep_NrHostagesDemand", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, NrHostagesDemand), nullptr, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NrHostagesDemand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NrHostagesDemand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AnswerPagerCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AnswerPagerCount = { "AnswerPagerCount", nullptr, (EPropertyFlags)0x0040000000002025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, AnswerPagerCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AnswerPagerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AnswerPagerCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PagerHeistDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PagerHeistDataArray = { "PagerHeistDataArray", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(PagerHeistDataArray, APD3HeistGameState), STRUCT_OFFSET(APD3HeistGameState, PagerHeistDataArray), Z_Construct_UScriptStruct_FPD3PagerHeistData, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PagerHeistDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PagerHeistDataArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_DefaultWeaponBoxClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_DefaultWeaponBoxClass = { "DefaultWeaponBoxClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, DefaultWeaponBoxClass), Z_Construct_UClass_ASBZPlaceableWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_DefaultWeaponBoxClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_DefaultWeaponBoxClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_MaxCrewCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_MaxCrewCount = { "MaxCrewCount", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, MaxCrewCount), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_MaxCrewCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_MaxCrewCount_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AICrewCharacterClassSet_ElementProp = { "AICrewCharacterClassSet", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZAICrewCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AICrewCharacterClassSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AICrewCharacterClassSet = { "AICrewCharacterClassSet", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, AICrewCharacterClassSet), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AICrewCharacterClassSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AICrewCharacterClassSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalMaterialParameterCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalMaterialParameterCollection = { "GlobalMaterialParameterCollection", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, GlobalMaterialParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalMaterialParameterCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalMaterialParameterCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalNiagaraParameterCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalNiagaraParameterCollection = { "GlobalNiagaraParameterCollection", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, GlobalNiagaraParameterCollection), Z_Construct_UClass_UNiagaraParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalNiagaraParameterCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalNiagaraParameterCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AlarmThreatLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AlarmThreatLevel = { "AlarmThreatLevel", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, AlarmThreatLevel), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AlarmThreatLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AlarmThreatLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NegotiationThreatLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NegotiationThreatLevel = { "NegotiationThreatLevel", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, NegotiationThreatLevel), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NegotiationThreatLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NegotiationThreatLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AssaultThreatLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AssaultThreatLevel = { "AssaultThreatLevel", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, AssaultThreatLevel), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AssaultThreatLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AssaultThreatLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AssaultThreatLevelIncrease_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AssaultThreatLevelIncrease = { "AssaultThreatLevelIncrease", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, AssaultThreatLevelIncrease), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AssaultThreatLevelIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AssaultThreatLevelIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PlayerPositionUpdateFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PlayerPositionUpdateFrequency = { "PlayerPositionUpdateFrequency", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, PlayerPositionUpdateFrequency), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PlayerPositionUpdateFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PlayerPositionUpdateFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalMaterialCollectionInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalMaterialCollectionInstance = { "GlobalMaterialCollectionInstance", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, GlobalMaterialCollectionInstance), Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalMaterialCollectionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalMaterialCollectionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalNiagaraCollectionInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalNiagaraCollectionInstance = { "GlobalNiagaraCollectionInstance", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, GlobalNiagaraCollectionInstance), Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalNiagaraCollectionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalNiagaraCollectionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_bIsAICrewSpawned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	void Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_bIsAICrewSpawned_SetBit(void* Obj)
	{
		((APD3HeistGameState*)Obj)->bIsAICrewSpawned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_bIsAICrewSpawned = { "bIsAICrewSpawned", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APD3HeistGameState), &Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_bIsAICrewSpawned_SetBit, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_bIsAICrewSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_bIsAICrewSpawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_bIsAssaultStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	void Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_bIsAssaultStarted_SetBit(void* Obj)
	{
		((APD3HeistGameState*)Obj)->bIsAssaultStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_bIsAssaultStarted = { "bIsAssaultStarted", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APD3HeistGameState), &Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_bIsAssaultStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_bIsAssaultStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_bIsAssaultStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SavedCustodyTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SavedCustodyTime = { "SavedCustodyTime", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, SavedCustodyTime), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SavedCustodyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SavedCustodyTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_HostageDemandReduction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_HostageDemandReduction = { "HostageDemandReduction", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, HostageDemandReduction), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_HostageDemandReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_HostageDemandReduction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NegotiationTradeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NegotiationTradeType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NegotiationTradeType = { "NegotiationTradeType", "OnRep_NegotiationTradeType", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, NegotiationTradeType), Z_Construct_UEnum_Starbreeze_ESBZNegotiationTradeType, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NegotiationTradeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NegotiationTradeType_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_TradeHostagePickupAssetArray_Inner = { "TradeHostagePickupAssetArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPlaceableCharges_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_TradeHostagePickupAssetArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_TradeHostagePickupAssetArray = { "TradeHostagePickupAssetArray", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, TradeHostagePickupAssetArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_TradeHostagePickupAssetArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_TradeHostagePickupAssetArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMCountData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMCountData = { "ECMCountData", "OnRep_ECMCountData", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, ECMCountData), Z_Construct_UScriptStruct_FSBZECMCountData, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMCountData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMCountData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_JammerTimeSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_JammerTimeSeconds = { "JammerTimeSeconds", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, JammerTimeSeconds), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_JammerTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_JammerTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerRadioBasePercentageIncrease_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerRadioBasePercentageIncrease = { "ECMJammerRadioBasePercentageIncrease", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, ECMJammerRadioBasePercentageIncrease), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerRadioBasePercentageIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerRadioBasePercentageIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerCameraBasePercentageIncrease_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerCameraBasePercentageIncrease = { "ECMJammerCameraBasePercentageIncrease", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, ECMJammerCameraBasePercentageIncrease), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerCameraBasePercentageIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerCameraBasePercentageIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerPagerBasePercentageIncrease_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerPagerBasePercentageIncrease = { "ECMJammerPagerBasePercentageIncrease", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, ECMJammerPagerBasePercentageIncrease), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerPagerBasePercentageIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerPagerBasePercentageIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerAdditionalIncreasePercentagePerJammer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameState" },
		{ "ModuleRelativePath", "Public/PD3HeistGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerAdditionalIncreasePercentagePerJammer = { "ECMJammerAdditionalIncreasePercentagePerJammer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameState, ECMJammerAdditionalIncreasePercentagePerJammer), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerAdditionalIncreasePercentagePerJammer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerAdditionalIncreasePercentagePerJammer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APD3HeistGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnHeistStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnNegotiationEndTimeChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnHostagesDemandChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnNegotiationTradeTypeChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnSuspenseValueChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnAnswerPagerValueChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_OnECMCountChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_CurrentSuspenseValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_CurrentThreatLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_CurrentHeistState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_CurrentHeistState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GameIntensityAnalyzer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_Dispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_RoomPathFinder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_MissionFailedTimeoutSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SpawnedCarryDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SpawnedCarryDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PendingUsingCarryMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PendingUsingCarryMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PendingUsingCarryMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SpawnedCarryActorMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SpawnedCarryActorMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SpawnedCarryActorMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NegotiationEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NrHostagesDemand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AnswerPagerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PagerHeistDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_DefaultWeaponBoxClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_MaxCrewCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AICrewCharacterClassSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AICrewCharacterClassSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalMaterialParameterCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalNiagaraParameterCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AlarmThreatLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NegotiationThreatLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AssaultThreatLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_AssaultThreatLevelIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_PlayerPositionUpdateFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalMaterialCollectionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_GlobalNiagaraCollectionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_bIsAICrewSpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_bIsAssaultStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_SavedCustodyTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_HostageDemandReduction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NegotiationTradeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_NegotiationTradeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_TradeHostagePickupAssetArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_TradeHostagePickupAssetArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMCountData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_JammerTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerRadioBasePercentageIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerCameraBasePercentageIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerPagerBasePercentageIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameState_Statics::NewProp_ECMJammerAdditionalIncreasePercentagePerJammer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APD3HeistGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APD3HeistGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APD3HeistGameState_Statics::ClassParams = {
		&APD3HeistGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APD3HeistGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APD3HeistGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APD3HeistGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APD3HeistGameState, 3603972598);
	template<> STARBREEZE_API UClass* StaticClass<APD3HeistGameState>()
	{
		return APD3HeistGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APD3HeistGameState(Z_Construct_UClass_APD3HeistGameState, &APD3HeistGameState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("APD3HeistGameState"), false, nullptr, nullptr, nullptr);

	void APD3HeistGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentSuspenseValue(TEXT("CurrentSuspenseValue"));
		static const FName Name_CurrentThreatLevel(TEXT("CurrentThreatLevel"));
		static const FName Name_CurrentHeistState(TEXT("CurrentHeistState"));
		static const FName Name_SpawnedCarryDataArray(TEXT("SpawnedCarryDataArray"));
		static const FName Name_NegotiationEndTime(TEXT("NegotiationEndTime"));
		static const FName Name_NrHostagesDemand(TEXT("NrHostagesDemand"));
		static const FName Name_AnswerPagerCount(TEXT("AnswerPagerCount"));
		static const FName Name_NegotiationTradeType(TEXT("NegotiationTradeType"));
		static const FName Name_ECMCountData(TEXT("ECMCountData"));

		const bool bIsValid = true
			&& Name_CurrentSuspenseValue == ClassReps[(int32)ENetFields_Private::CurrentSuspenseValue].Property->GetFName()
			&& Name_CurrentThreatLevel == ClassReps[(int32)ENetFields_Private::CurrentThreatLevel].Property->GetFName()
			&& Name_CurrentHeistState == ClassReps[(int32)ENetFields_Private::CurrentHeistState].Property->GetFName()
			&& Name_SpawnedCarryDataArray == ClassReps[(int32)ENetFields_Private::SpawnedCarryDataArray].Property->GetFName()
			&& Name_NegotiationEndTime == ClassReps[(int32)ENetFields_Private::NegotiationEndTime].Property->GetFName()
			&& Name_NrHostagesDemand == ClassReps[(int32)ENetFields_Private::NrHostagesDemand].Property->GetFName()
			&& Name_AnswerPagerCount == ClassReps[(int32)ENetFields_Private::AnswerPagerCount].Property->GetFName()
			&& Name_NegotiationTradeType == ClassReps[(int32)ENetFields_Private::NegotiationTradeType].Property->GetFName()
			&& Name_ECMCountData == ClassReps[(int32)ENetFields_Private::ECMCountData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APD3HeistGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APD3HeistGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
