// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModifiableTimer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModifiableTimer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZModifiableTimer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZModifiableTimer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZTimerState();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZTimerDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZProgressionReachedDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSabotagePoint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTimedObjectiveInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZModifiableTimer::execAddTimeElapsed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTimeElapsed(Z_Param_TimeToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModifiableTimer::execGetDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModifiableTimer::execGetProgressMade)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProgressMade();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModifiableTimer::execGetTimeElapsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeElapsed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModifiableTimer::execGetTimeRemaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeRemaining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModifiableTimer::execGetTimerSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimerSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModifiableTimer::execMulticast_ResetTimerAndPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ResetTimerAndPause_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModifiableTimer::execMulticast_ResetTimerAndStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ResetTimerAndStart_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModifiableTimer::execMulticast_SetDuration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetDuration_Implementation(Z_Param_NewDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModifiableTimer::execMulticast_SetTimeElapsed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewTimeElapsed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetTimeElapsed_Implementation(Z_Param_NewTimeElapsed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModifiableTimer::execMulticast_SetTimerSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetTimerSpeed_Implementation(Z_Param_NewSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModifiableTimer::execMulticast_SetTimerState)
	{
		P_GET_ENUM(ESBZTimerState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetTimerState_Implementation(ESBZTimerState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModifiableTimer::execOnRep_TimerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TimerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModifiableTimer::execOnSabotaged)
	{
		P_GET_UBOOL(Z_Param_bNewSabotagedState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSabotaged(Z_Param_bNewSabotagedState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModifiableTimer::execPauseTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModifiableTimer::execResetTimer)
	{
		P_GET_UBOOL(Z_Param_bStartTimer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTimer(Z_Param_bStartTimer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModifiableTimer::execSetTimerDuration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimerDuration(Z_Param_NewDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModifiableTimer::execSetTimerSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimerSpeed(Z_Param_NewSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModifiableTimer::execStartTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTimer();
		P_NATIVE_END;
	}
	static FName NAME_ASBZModifiableTimer_BP_DurationChanged = FName(TEXT("BP_DurationChanged"));
	void ASBZModifiableTimer::BP_DurationChanged(float NewDuration)
	{
		SBZModifiableTimer_eventBP_DurationChanged_Parms Parms;
		Parms.NewDuration=NewDuration;
		ProcessEvent(FindFunctionChecked(NAME_ASBZModifiableTimer_BP_DurationChanged),&Parms);
	}
	static FName NAME_ASBZModifiableTimer_BP_OnStateChanged = FName(TEXT("BP_OnStateChanged"));
	void ASBZModifiableTimer::BP_OnStateChanged(ESBZTimerState NewState, ESBZTimerState OldState, bool bDoCosmetics)
	{
		SBZModifiableTimer_eventBP_OnStateChanged_Parms Parms;
		Parms.NewState=NewState;
		Parms.OldState=OldState;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZModifiableTimer_BP_OnStateChanged),&Parms);
	}
	static FName NAME_ASBZModifiableTimer_BP_TimeElapsedChanged = FName(TEXT("BP_TimeElapsedChanged"));
	void ASBZModifiableTimer::BP_TimeElapsedChanged(float NewTimeElapsed)
	{
		SBZModifiableTimer_eventBP_TimeElapsedChanged_Parms Parms;
		Parms.NewTimeElapsed=NewTimeElapsed;
		ProcessEvent(FindFunctionChecked(NAME_ASBZModifiableTimer_BP_TimeElapsedChanged),&Parms);
	}
	static FName NAME_ASBZModifiableTimer_BP_TimerSpeedChanged = FName(TEXT("BP_TimerSpeedChanged"));
	void ASBZModifiableTimer::BP_TimerSpeedChanged(float NewSpeed)
	{
		SBZModifiableTimer_eventBP_TimerSpeedChanged_Parms Parms;
		Parms.NewSpeed=NewSpeed;
		ProcessEvent(FindFunctionChecked(NAME_ASBZModifiableTimer_BP_TimerSpeedChanged),&Parms);
	}
	static FName NAME_ASBZModifiableTimer_Multicast_ResetTimerAndPause = FName(TEXT("Multicast_ResetTimerAndPause"));
	void ASBZModifiableTimer::Multicast_ResetTimerAndPause()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZModifiableTimer_Multicast_ResetTimerAndPause),NULL);
	}
	static FName NAME_ASBZModifiableTimer_Multicast_ResetTimerAndStart = FName(TEXT("Multicast_ResetTimerAndStart"));
	void ASBZModifiableTimer::Multicast_ResetTimerAndStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZModifiableTimer_Multicast_ResetTimerAndStart),NULL);
	}
	static FName NAME_ASBZModifiableTimer_Multicast_SetDuration = FName(TEXT("Multicast_SetDuration"));
	void ASBZModifiableTimer::Multicast_SetDuration(float NewDuration)
	{
		SBZModifiableTimer_eventMulticast_SetDuration_Parms Parms;
		Parms.NewDuration=NewDuration;
		ProcessEvent(FindFunctionChecked(NAME_ASBZModifiableTimer_Multicast_SetDuration),&Parms);
	}
	static FName NAME_ASBZModifiableTimer_Multicast_SetTimeElapsed = FName(TEXT("Multicast_SetTimeElapsed"));
	void ASBZModifiableTimer::Multicast_SetTimeElapsed(float NewTimeElapsed)
	{
		SBZModifiableTimer_eventMulticast_SetTimeElapsed_Parms Parms;
		Parms.NewTimeElapsed=NewTimeElapsed;
		ProcessEvent(FindFunctionChecked(NAME_ASBZModifiableTimer_Multicast_SetTimeElapsed),&Parms);
	}
	static FName NAME_ASBZModifiableTimer_Multicast_SetTimerSpeed = FName(TEXT("Multicast_SetTimerSpeed"));
	void ASBZModifiableTimer::Multicast_SetTimerSpeed(float NewSpeed)
	{
		SBZModifiableTimer_eventMulticast_SetTimerSpeed_Parms Parms;
		Parms.NewSpeed=NewSpeed;
		ProcessEvent(FindFunctionChecked(NAME_ASBZModifiableTimer_Multicast_SetTimerSpeed),&Parms);
	}
	static FName NAME_ASBZModifiableTimer_Multicast_SetTimerState = FName(TEXT("Multicast_SetTimerState"));
	void ASBZModifiableTimer::Multicast_SetTimerState(ESBZTimerState NewState)
	{
		SBZModifiableTimer_eventMulticast_SetTimerState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZModifiableTimer_Multicast_SetTimerState),&Parms);
	}
	void ASBZModifiableTimer::StaticRegisterNativesASBZModifiableTimer()
	{
		UClass* Class = ASBZModifiableTimer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTimeElapsed", &ASBZModifiableTimer::execAddTimeElapsed },
			{ "GetDuration", &ASBZModifiableTimer::execGetDuration },
			{ "GetProgressMade", &ASBZModifiableTimer::execGetProgressMade },
			{ "GetTimeElapsed", &ASBZModifiableTimer::execGetTimeElapsed },
			{ "GetTimeRemaining", &ASBZModifiableTimer::execGetTimeRemaining },
			{ "GetTimerSpeed", &ASBZModifiableTimer::execGetTimerSpeed },
			{ "Multicast_ResetTimerAndPause", &ASBZModifiableTimer::execMulticast_ResetTimerAndPause },
			{ "Multicast_ResetTimerAndStart", &ASBZModifiableTimer::execMulticast_ResetTimerAndStart },
			{ "Multicast_SetDuration", &ASBZModifiableTimer::execMulticast_SetDuration },
			{ "Multicast_SetTimeElapsed", &ASBZModifiableTimer::execMulticast_SetTimeElapsed },
			{ "Multicast_SetTimerSpeed", &ASBZModifiableTimer::execMulticast_SetTimerSpeed },
			{ "Multicast_SetTimerState", &ASBZModifiableTimer::execMulticast_SetTimerState },
			{ "OnRep_TimerState", &ASBZModifiableTimer::execOnRep_TimerState },
			{ "OnSabotaged", &ASBZModifiableTimer::execOnSabotaged },
			{ "PauseTimer", &ASBZModifiableTimer::execPauseTimer },
			{ "ResetTimer", &ASBZModifiableTimer::execResetTimer },
			{ "SetTimerDuration", &ASBZModifiableTimer::execSetTimerDuration },
			{ "SetTimerSpeed", &ASBZModifiableTimer::execSetTimerSpeed },
			{ "StartTimer", &ASBZModifiableTimer::execStartTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_AddTimeElapsed_Statics
	{
		struct SBZModifiableTimer_eventAddTimeElapsed_Parms
		{
			float TimeToAdd;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_AddTimeElapsed_Statics::NewProp_TimeToAdd = { "TimeToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimer_eventAddTimeElapsed_Parms, TimeToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModifiableTimer_AddTimeElapsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_AddTimeElapsed_Statics::NewProp_TimeToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_AddTimeElapsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_AddTimeElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "AddTimeElapsed", nullptr, nullptr, sizeof(SBZModifiableTimer_eventAddTimeElapsed_Parms), Z_Construct_UFunction_ASBZModifiableTimer_AddTimeElapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_AddTimeElapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_AddTimeElapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_AddTimeElapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_AddTimeElapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_AddTimeElapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_BP_DurationChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_BP_DurationChanged_Statics::NewProp_NewDuration = { "NewDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimer_eventBP_DurationChanged_Parms, NewDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModifiableTimer_BP_DurationChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_BP_DurationChanged_Statics::NewProp_NewDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_BP_DurationChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_BP_DurationChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "BP_DurationChanged", nullptr, nullptr, sizeof(SBZModifiableTimer_eventBP_DurationChanged_Parms), Z_Construct_UFunction_ASBZModifiableTimer_BP_DurationChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_BP_DurationChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_BP_DurationChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_BP_DurationChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_BP_DurationChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_BP_DurationChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimer_eventBP_OnStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZTimerState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimer_eventBP_OnStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_ESBZTimerState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZModifiableTimer_eventBP_OnStateChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZModifiableTimer_eventBP_OnStateChanged_Parms), &Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "BP_OnStateChanged", nullptr, nullptr, sizeof(SBZModifiableTimer_eventBP_OnStateChanged_Parms), Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_BP_TimeElapsedChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewTimeElapsed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_BP_TimeElapsedChanged_Statics::NewProp_NewTimeElapsed = { "NewTimeElapsed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimer_eventBP_TimeElapsedChanged_Parms, NewTimeElapsed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModifiableTimer_BP_TimeElapsedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_BP_TimeElapsedChanged_Statics::NewProp_NewTimeElapsed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_BP_TimeElapsedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_BP_TimeElapsedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "BP_TimeElapsedChanged", nullptr, nullptr, sizeof(SBZModifiableTimer_eventBP_TimeElapsedChanged_Parms), Z_Construct_UFunction_ASBZModifiableTimer_BP_TimeElapsedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_BP_TimeElapsedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_BP_TimeElapsedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_BP_TimeElapsedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_BP_TimeElapsedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_BP_TimeElapsedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_BP_TimerSpeedChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_BP_TimerSpeedChanged_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimer_eventBP_TimerSpeedChanged_Parms, NewSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModifiableTimer_BP_TimerSpeedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_BP_TimerSpeedChanged_Statics::NewProp_NewSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_BP_TimerSpeedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_BP_TimerSpeedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "BP_TimerSpeedChanged", nullptr, nullptr, sizeof(SBZModifiableTimer_eventBP_TimerSpeedChanged_Parms), Z_Construct_UFunction_ASBZModifiableTimer_BP_TimerSpeedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_BP_TimerSpeedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_BP_TimerSpeedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_BP_TimerSpeedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_BP_TimerSpeedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_BP_TimerSpeedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_GetDuration_Statics
	{
		struct SBZModifiableTimer_eventGetDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimer_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModifiableTimer_GetDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "GetDuration", nullptr, nullptr, sizeof(SBZModifiableTimer_eventGetDuration_Parms), Z_Construct_UFunction_ASBZModifiableTimer_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_GetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_GetProgressMade_Statics
	{
		struct SBZModifiableTimer_eventGetProgressMade_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_GetProgressMade_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimer_eventGetProgressMade_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModifiableTimer_GetProgressMade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_GetProgressMade_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_GetProgressMade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_GetProgressMade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "GetProgressMade", nullptr, nullptr, sizeof(SBZModifiableTimer_eventGetProgressMade_Parms), Z_Construct_UFunction_ASBZModifiableTimer_GetProgressMade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_GetProgressMade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_GetProgressMade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_GetProgressMade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_GetProgressMade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_GetProgressMade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_GetTimeElapsed_Statics
	{
		struct SBZModifiableTimer_eventGetTimeElapsed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_GetTimeElapsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimer_eventGetTimeElapsed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModifiableTimer_GetTimeElapsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_GetTimeElapsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_GetTimeElapsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_GetTimeElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "GetTimeElapsed", nullptr, nullptr, sizeof(SBZModifiableTimer_eventGetTimeElapsed_Parms), Z_Construct_UFunction_ASBZModifiableTimer_GetTimeElapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_GetTimeElapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_GetTimeElapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_GetTimeElapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_GetTimeElapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_GetTimeElapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_GetTimeRemaining_Statics
	{
		struct SBZModifiableTimer_eventGetTimeRemaining_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_GetTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimer_eventGetTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModifiableTimer_GetTimeRemaining_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_GetTimeRemaining_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_GetTimeRemaining_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_GetTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "GetTimeRemaining", nullptr, nullptr, sizeof(SBZModifiableTimer_eventGetTimeRemaining_Parms), Z_Construct_UFunction_ASBZModifiableTimer_GetTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_GetTimeRemaining_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_GetTimeRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_GetTimeRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_GetTimeRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_GetTimeRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_GetTimerSpeed_Statics
	{
		struct SBZModifiableTimer_eventGetTimerSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_GetTimerSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimer_eventGetTimerSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModifiableTimer_GetTimerSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_GetTimerSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_GetTimerSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_GetTimerSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "GetTimerSpeed", nullptr, nullptr, sizeof(SBZModifiableTimer_eventGetTimerSpeed_Parms), Z_Construct_UFunction_ASBZModifiableTimer_GetTimerSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_GetTimerSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_GetTimerSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_GetTimerSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_GetTimerSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_GetTimerSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_Multicast_ResetTimerAndPause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_Multicast_ResetTimerAndPause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_Multicast_ResetTimerAndPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "Multicast_ResetTimerAndPause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_Multicast_ResetTimerAndPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_Multicast_ResetTimerAndPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_Multicast_ResetTimerAndPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_Multicast_ResetTimerAndPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_Multicast_ResetTimerAndStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_Multicast_ResetTimerAndStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_Multicast_ResetTimerAndStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "Multicast_ResetTimerAndStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_Multicast_ResetTimerAndStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_Multicast_ResetTimerAndStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_Multicast_ResetTimerAndStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_Multicast_ResetTimerAndStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetDuration_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetDuration_Statics::NewProp_NewDuration = { "NewDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimer_eventMulticast_SetDuration_Parms, NewDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetDuration_Statics::NewProp_NewDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "Multicast_SetDuration", nullptr, nullptr, sizeof(SBZModifiableTimer_eventMulticast_SetDuration_Parms), Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimeElapsed_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewTimeElapsed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimeElapsed_Statics::NewProp_NewTimeElapsed = { "NewTimeElapsed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimer_eventMulticast_SetTimeElapsed_Parms, NewTimeElapsed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimeElapsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimeElapsed_Statics::NewProp_NewTimeElapsed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimeElapsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimeElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "Multicast_SetTimeElapsed", nullptr, nullptr, sizeof(SBZModifiableTimer_eventMulticast_SetTimeElapsed_Parms), Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimeElapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimeElapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimeElapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimeElapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimeElapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimeElapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerSpeed_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerSpeed_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimer_eventMulticast_SetTimerSpeed_Parms, NewSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerSpeed_Statics::NewProp_NewSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "Multicast_SetTimerSpeed", nullptr, nullptr, sizeof(SBZModifiableTimer_eventMulticast_SetTimerSpeed_Parms), Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimer_eventMulticast_SetTimerState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZTimerState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "Multicast_SetTimerState", nullptr, nullptr, sizeof(SBZModifiableTimer_eventMulticast_SetTimerState_Parms), Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_OnRep_TimerState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_OnRep_TimerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_OnRep_TimerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "OnRep_TimerState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_OnRep_TimerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_OnRep_TimerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_OnRep_TimerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_OnRep_TimerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_OnSabotaged_Statics
	{
		struct SBZModifiableTimer_eventOnSabotaged_Parms
		{
			bool bNewSabotagedState;
		};
		static void NewProp_bNewSabotagedState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewSabotagedState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZModifiableTimer_OnSabotaged_Statics::NewProp_bNewSabotagedState_SetBit(void* Obj)
	{
		((SBZModifiableTimer_eventOnSabotaged_Parms*)Obj)->bNewSabotagedState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_OnSabotaged_Statics::NewProp_bNewSabotagedState = { "bNewSabotagedState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZModifiableTimer_eventOnSabotaged_Parms), &Z_Construct_UFunction_ASBZModifiableTimer_OnSabotaged_Statics::NewProp_bNewSabotagedState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModifiableTimer_OnSabotaged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_OnSabotaged_Statics::NewProp_bNewSabotagedState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_OnSabotaged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_OnSabotaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "OnSabotaged", nullptr, nullptr, sizeof(SBZModifiableTimer_eventOnSabotaged_Parms), Z_Construct_UFunction_ASBZModifiableTimer_OnSabotaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_OnSabotaged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_OnSabotaged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_OnSabotaged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_OnSabotaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_OnSabotaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_PauseTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_PauseTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_PauseTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "PauseTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_PauseTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_PauseTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_PauseTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_PauseTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_ResetTimer_Statics
	{
		struct SBZModifiableTimer_eventResetTimer_Parms
		{
			bool bStartTimer;
		};
		static void NewProp_bStartTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZModifiableTimer_ResetTimer_Statics::NewProp_bStartTimer_SetBit(void* Obj)
	{
		((SBZModifiableTimer_eventResetTimer_Parms*)Obj)->bStartTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_ResetTimer_Statics::NewProp_bStartTimer = { "bStartTimer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZModifiableTimer_eventResetTimer_Parms), &Z_Construct_UFunction_ASBZModifiableTimer_ResetTimer_Statics::NewProp_bStartTimer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModifiableTimer_ResetTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_ResetTimer_Statics::NewProp_bStartTimer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_ResetTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_ResetTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "ResetTimer", nullptr, nullptr, sizeof(SBZModifiableTimer_eventResetTimer_Parms), Z_Construct_UFunction_ASBZModifiableTimer_ResetTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_ResetTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_ResetTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_ResetTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_ResetTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_ResetTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_SetTimerDuration_Statics
	{
		struct SBZModifiableTimer_eventSetTimerDuration_Parms
		{
			float NewDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_SetTimerDuration_Statics::NewProp_NewDuration = { "NewDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimer_eventSetTimerDuration_Parms, NewDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModifiableTimer_SetTimerDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_SetTimerDuration_Statics::NewProp_NewDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_SetTimerDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_SetTimerDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "SetTimerDuration", nullptr, nullptr, sizeof(SBZModifiableTimer_eventSetTimerDuration_Parms), Z_Construct_UFunction_ASBZModifiableTimer_SetTimerDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_SetTimerDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_SetTimerDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_SetTimerDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_SetTimerDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_SetTimerDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_SetTimerSpeed_Statics
	{
		struct SBZModifiableTimer_eventSetTimerSpeed_Parms
		{
			float NewSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZModifiableTimer_SetTimerSpeed_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimer_eventSetTimerSpeed_Parms, NewSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModifiableTimer_SetTimerSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModifiableTimer_SetTimerSpeed_Statics::NewProp_NewSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_SetTimerSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_SetTimerSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "SetTimerSpeed", nullptr, nullptr, sizeof(SBZModifiableTimer_eventSetTimerSpeed_Parms), Z_Construct_UFunction_ASBZModifiableTimer_SetTimerSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_SetTimerSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_SetTimerSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_SetTimerSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_SetTimerSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_SetTimerSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModifiableTimer_StartTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModifiableTimer_StartTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModifiableTimer_StartTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModifiableTimer, nullptr, "StartTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModifiableTimer_StartTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModifiableTimer_StartTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModifiableTimer_StartTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModifiableTimer_StartTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZModifiableTimer_NoRegister()
	{
		return ASBZModifiableTimer::StaticClass();
	}
	struct Z_Construct_UClass_ASBZModifiableTimer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTimerDone_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerDone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTimerStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProgressionReached_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgressionReached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressionValuesToPost_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionValuesToPost_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProgressionValuesToPost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentTimerState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTimerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentTimerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SabotagePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SabotagePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextProgressionToPostIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextProgressionToPostIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZModifiableTimer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZModifiableTimer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZModifiableTimer_AddTimeElapsed, "AddTimeElapsed" }, // 2040053186
		{ &Z_Construct_UFunction_ASBZModifiableTimer_BP_DurationChanged, "BP_DurationChanged" }, // 1546519213
		{ &Z_Construct_UFunction_ASBZModifiableTimer_BP_OnStateChanged, "BP_OnStateChanged" }, // 809215629
		{ &Z_Construct_UFunction_ASBZModifiableTimer_BP_TimeElapsedChanged, "BP_TimeElapsedChanged" }, // 2412812033
		{ &Z_Construct_UFunction_ASBZModifiableTimer_BP_TimerSpeedChanged, "BP_TimerSpeedChanged" }, // 728445719
		{ &Z_Construct_UFunction_ASBZModifiableTimer_GetDuration, "GetDuration" }, // 298929386
		{ &Z_Construct_UFunction_ASBZModifiableTimer_GetProgressMade, "GetProgressMade" }, // 3220235921
		{ &Z_Construct_UFunction_ASBZModifiableTimer_GetTimeElapsed, "GetTimeElapsed" }, // 2212234398
		{ &Z_Construct_UFunction_ASBZModifiableTimer_GetTimeRemaining, "GetTimeRemaining" }, // 3117930274
		{ &Z_Construct_UFunction_ASBZModifiableTimer_GetTimerSpeed, "GetTimerSpeed" }, // 2710485570
		{ &Z_Construct_UFunction_ASBZModifiableTimer_Multicast_ResetTimerAndPause, "Multicast_ResetTimerAndPause" }, // 3798386460
		{ &Z_Construct_UFunction_ASBZModifiableTimer_Multicast_ResetTimerAndStart, "Multicast_ResetTimerAndStart" }, // 4051543910
		{ &Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetDuration, "Multicast_SetDuration" }, // 711668652
		{ &Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimeElapsed, "Multicast_SetTimeElapsed" }, // 2038792909
		{ &Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerSpeed, "Multicast_SetTimerSpeed" }, // 1657838429
		{ &Z_Construct_UFunction_ASBZModifiableTimer_Multicast_SetTimerState, "Multicast_SetTimerState" }, // 1163710868
		{ &Z_Construct_UFunction_ASBZModifiableTimer_OnRep_TimerState, "OnRep_TimerState" }, // 1359909787
		{ &Z_Construct_UFunction_ASBZModifiableTimer_OnSabotaged, "OnSabotaged" }, // 3617327027
		{ &Z_Construct_UFunction_ASBZModifiableTimer_PauseTimer, "PauseTimer" }, // 1714987665
		{ &Z_Construct_UFunction_ASBZModifiableTimer_ResetTimer, "ResetTimer" }, // 957914863
		{ &Z_Construct_UFunction_ASBZModifiableTimer_SetTimerDuration, "SetTimerDuration" }, // 2188789558
		{ &Z_Construct_UFunction_ASBZModifiableTimer_SetTimerSpeed, "SetTimerSpeed" }, // 718440976
		{ &Z_Construct_UFunction_ASBZModifiableTimer_StartTimer, "StartTimer" }, // 3352903915
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModifiableTimer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZModifiableTimer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_OnTimerDone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimer" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_OnTimerDone = { "OnTimerDone", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModifiableTimer, OnTimerDone), Z_Construct_UDelegateFunction_Starbreeze_SBZTimerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_OnTimerDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_OnTimerDone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_OnTimerStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimer" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_OnTimerStarted = { "OnTimerStarted", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModifiableTimer, OnTimerStarted), Z_Construct_UDelegateFunction_Starbreeze_SBZTimerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_OnTimerStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_OnTimerStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_OnProgressionReached_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimer" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_OnProgressionReached = { "OnProgressionReached", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModifiableTimer, OnProgressionReached), Z_Construct_UDelegateFunction_Starbreeze_SBZProgressionReachedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_OnProgressionReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_OnProgressionReached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimer" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModifiableTimer, Duration), METADATA_PARAMS(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_ProgressionValuesToPost_Inner = { "ProgressionValuesToPost", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_ProgressionValuesToPost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimer" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_ProgressionValuesToPost = { "ProgressionValuesToPost", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModifiableTimer, ProgressionValuesToPost), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_ProgressionValuesToPost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_ProgressionValuesToPost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_TimeElapsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimer" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_TimeElapsed = { "TimeElapsed", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModifiableTimer, TimeElapsed), METADATA_PARAMS(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_TimeElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_TimeElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_CurrentSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimer" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModifiableTimer, CurrentSpeed), METADATA_PARAMS(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_CurrentSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_CurrentSpeed_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_CurrentTimerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_CurrentTimerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimer" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_CurrentTimerState = { "CurrentTimerState", "OnRep_TimerState", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModifiableTimer, CurrentTimerState), Z_Construct_UEnum_Starbreeze_ESBZTimerState, METADATA_PARAMS(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_CurrentTimerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_CurrentTimerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_SabotagePoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimer" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_SabotagePoint = { "SabotagePoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModifiableTimer, SabotagePoint), Z_Construct_UClass_ASBZSabotagePoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_SabotagePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_SabotagePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_NextProgressionToPostIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimer" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_NextProgressionToPostIndex = { "NextProgressionToPostIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModifiableTimer, NextProgressionToPostIndex), METADATA_PARAMS(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_NextProgressionToPostIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_NextProgressionToPostIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZModifiableTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_OnTimerDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_OnTimerStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_OnProgressionReached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_ProgressionValuesToPost_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_ProgressionValuesToPost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_TimeElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_CurrentSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_CurrentTimerState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_CurrentTimerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_SabotagePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModifiableTimer_Statics::NewProp_NextProgressionToPostIndex,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZModifiableTimer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZTimedObjectiveInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZModifiableTimer, ISBZTimedObjectiveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZModifiableTimer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZModifiableTimer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZModifiableTimer_Statics::ClassParams = {
		&ASBZModifiableTimer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZModifiableTimer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModifiableTimer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZModifiableTimer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModifiableTimer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZModifiableTimer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZModifiableTimer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZModifiableTimer, 1673521719);
	template<> STARBREEZE_API UClass* StaticClass<ASBZModifiableTimer>()
	{
		return ASBZModifiableTimer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZModifiableTimer(Z_Construct_UClass_ASBZModifiableTimer, &ASBZModifiableTimer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZModifiableTimer"), false, nullptr, nullptr, nullptr);

	void ASBZModifiableTimer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Duration(TEXT("Duration"));
		static const FName Name_TimeElapsed(TEXT("TimeElapsed"));
		static const FName Name_CurrentSpeed(TEXT("CurrentSpeed"));
		static const FName Name_CurrentTimerState(TEXT("CurrentTimerState"));

		const bool bIsValid = true
			&& Name_Duration == ClassReps[(int32)ENetFields_Private::Duration].Property->GetFName()
			&& Name_TimeElapsed == ClassReps[(int32)ENetFields_Private::TimeElapsed].Property->GetFName()
			&& Name_CurrentSpeed == ClassReps[(int32)ENetFields_Private::CurrentSpeed].Property->GetFName()
			&& Name_CurrentTimerState == ClassReps[(int32)ENetFields_Private::CurrentTimerState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZModifiableTimer"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZModifiableTimer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
