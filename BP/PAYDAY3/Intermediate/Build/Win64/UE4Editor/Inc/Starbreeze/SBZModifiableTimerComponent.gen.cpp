// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModifiableTimerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModifiableTimerComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModifiableTimerComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModifiableTimerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZTimerState();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSabotagePoint_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZTimerComponentDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZTimerProgressionReachedDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZTimerComponentStateDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZModifiableTimerComponent::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZTimerState*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModifiableTimerComponent::execGetDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModifiableTimerComponent::execGetProgressMade)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProgressMade();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModifiableTimerComponent::execGetTimeElapsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeElapsed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModifiableTimerComponent::execGetTimeRemaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeRemaining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModifiableTimerComponent::execGetTimerSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimerSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModifiableTimerComponent::execMulticast_ResetTimer)
	{
		P_GET_UBOOL(Z_Param_bStartTimer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ResetTimer_Implementation(Z_Param_bStartTimer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModifiableTimerComponent::execMulticast_SetTimerSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetTimerSpeed_Implementation(Z_Param_NewSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModifiableTimerComponent::execMulticast_SetTimerState)
	{
		P_GET_ENUM(ESBZTimerState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetTimerState_Implementation(ESBZTimerState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModifiableTimerComponent::execOnRep_CurrentSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModifiableTimerComponent::execOnRep_NextProgressionValueIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_NextProgressionValueIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModifiableTimerComponent::execOnRep_TimerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TimerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModifiableTimerComponent::execServerPauseTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPauseTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModifiableTimerComponent::execServerResetTimer)
	{
		P_GET_UBOOL(Z_Param_bStartTimer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerResetTimer(Z_Param_bStartTimer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModifiableTimerComponent::execServerSetTimerSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetTimerSpeed(Z_Param_NewSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModifiableTimerComponent::execServerStartTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStartTimer();
		P_NATIVE_END;
	}
	static FName NAME_USBZModifiableTimerComponent_Multicast_ResetTimer = FName(TEXT("Multicast_ResetTimer"));
	void USBZModifiableTimerComponent::Multicast_ResetTimer(bool bStartTimer)
	{
		SBZModifiableTimerComponent_eventMulticast_ResetTimer_Parms Parms;
		Parms.bStartTimer=bStartTimer ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZModifiableTimerComponent_Multicast_ResetTimer),&Parms);
	}
	static FName NAME_USBZModifiableTimerComponent_Multicast_SetTimerSpeed = FName(TEXT("Multicast_SetTimerSpeed"));
	void USBZModifiableTimerComponent::Multicast_SetTimerSpeed(float NewSpeed)
	{
		SBZModifiableTimerComponent_eventMulticast_SetTimerSpeed_Parms Parms;
		Parms.NewSpeed=NewSpeed;
		ProcessEvent(FindFunctionChecked(NAME_USBZModifiableTimerComponent_Multicast_SetTimerSpeed),&Parms);
	}
	static FName NAME_USBZModifiableTimerComponent_Multicast_SetTimerState = FName(TEXT("Multicast_SetTimerState"));
	void USBZModifiableTimerComponent::Multicast_SetTimerState(ESBZTimerState NewState)
	{
		SBZModifiableTimerComponent_eventMulticast_SetTimerState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_USBZModifiableTimerComponent_Multicast_SetTimerState),&Parms);
	}
	void USBZModifiableTimerComponent::StaticRegisterNativesUSBZModifiableTimerComponent()
	{
		UClass* Class = USBZModifiableTimerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &USBZModifiableTimerComponent::execGetCurrentState },
			{ "GetDuration", &USBZModifiableTimerComponent::execGetDuration },
			{ "GetProgressMade", &USBZModifiableTimerComponent::execGetProgressMade },
			{ "GetTimeElapsed", &USBZModifiableTimerComponent::execGetTimeElapsed },
			{ "GetTimeRemaining", &USBZModifiableTimerComponent::execGetTimeRemaining },
			{ "GetTimerSpeed", &USBZModifiableTimerComponent::execGetTimerSpeed },
			{ "Multicast_ResetTimer", &USBZModifiableTimerComponent::execMulticast_ResetTimer },
			{ "Multicast_SetTimerSpeed", &USBZModifiableTimerComponent::execMulticast_SetTimerSpeed },
			{ "Multicast_SetTimerState", &USBZModifiableTimerComponent::execMulticast_SetTimerState },
			{ "OnRep_CurrentSpeed", &USBZModifiableTimerComponent::execOnRep_CurrentSpeed },
			{ "OnRep_NextProgressionValueIndex", &USBZModifiableTimerComponent::execOnRep_NextProgressionValueIndex },
			{ "OnRep_TimerState", &USBZModifiableTimerComponent::execOnRep_TimerState },
			{ "ServerPauseTimer", &USBZModifiableTimerComponent::execServerPauseTimer },
			{ "ServerResetTimer", &USBZModifiableTimerComponent::execServerResetTimer },
			{ "ServerSetTimerSpeed", &USBZModifiableTimerComponent::execServerSetTimerSpeed },
			{ "ServerStartTimer", &USBZModifiableTimerComponent::execServerStartTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZModifiableTimerComponent_GetCurrentState_Statics
	{
		struct SBZModifiableTimerComponent_eventGetCurrentState_Parms
		{
			ESBZTimerState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZModifiableTimerComponent_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZModifiableTimerComponent_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimerComponent_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZTimerState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModifiableTimerComponent_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModifiableTimerComponent_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModifiableTimerComponent_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModifiableTimerComponent_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModifiableTimerComponent_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModifiableTimerComponent, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(SBZModifiableTimerComponent_eventGetCurrentState_Parms), Z_Construct_UFunction_USBZModifiableTimerComponent_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModifiableTimerComponent_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModifiableTimerComponent_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModifiableTimerComponent_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModifiableTimerComponent_GetDuration_Statics
	{
		struct SBZModifiableTimerComponent_eventGetDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZModifiableTimerComponent_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimerComponent_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModifiableTimerComponent_GetDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModifiableTimerComponent_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModifiableTimerComponent_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModifiableTimerComponent_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModifiableTimerComponent, nullptr, "GetDuration", nullptr, nullptr, sizeof(SBZModifiableTimerComponent_eventGetDuration_Parms), Z_Construct_UFunction_USBZModifiableTimerComponent_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModifiableTimerComponent_GetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModifiableTimerComponent_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModifiableTimerComponent_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModifiableTimerComponent_GetProgressMade_Statics
	{
		struct SBZModifiableTimerComponent_eventGetProgressMade_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZModifiableTimerComponent_GetProgressMade_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimerComponent_eventGetProgressMade_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModifiableTimerComponent_GetProgressMade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModifiableTimerComponent_GetProgressMade_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModifiableTimerComponent_GetProgressMade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModifiableTimerComponent_GetProgressMade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModifiableTimerComponent, nullptr, "GetProgressMade", nullptr, nullptr, sizeof(SBZModifiableTimerComponent_eventGetProgressMade_Parms), Z_Construct_UFunction_USBZModifiableTimerComponent_GetProgressMade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_GetProgressMade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModifiableTimerComponent_GetProgressMade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_GetProgressMade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModifiableTimerComponent_GetProgressMade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModifiableTimerComponent_GetProgressMade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeElapsed_Statics
	{
		struct SBZModifiableTimerComponent_eventGetTimeElapsed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeElapsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimerComponent_eventGetTimeElapsed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeElapsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeElapsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeElapsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModifiableTimerComponent, nullptr, "GetTimeElapsed", nullptr, nullptr, sizeof(SBZModifiableTimerComponent_eventGetTimeElapsed_Parms), Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeElapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeElapsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeElapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeElapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeElapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeElapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeRemaining_Statics
	{
		struct SBZModifiableTimerComponent_eventGetTimeRemaining_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimerComponent_eventGetTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeRemaining_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeRemaining_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeRemaining_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModifiableTimerComponent, nullptr, "GetTimeRemaining", nullptr, nullptr, sizeof(SBZModifiableTimerComponent_eventGetTimeRemaining_Parms), Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeRemaining_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimerSpeed_Statics
	{
		struct SBZModifiableTimerComponent_eventGetTimerSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimerSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimerComponent_eventGetTimerSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimerSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimerSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimerSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimerSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModifiableTimerComponent, nullptr, "GetTimerSpeed", nullptr, nullptr, sizeof(SBZModifiableTimerComponent_eventGetTimerSpeed_Parms), Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimerSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimerSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimerSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimerSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimerSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimerSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_ResetTimer_Statics
	{
		static void NewProp_bStartTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_ResetTimer_Statics::NewProp_bStartTimer_SetBit(void* Obj)
	{
		((SBZModifiableTimerComponent_eventMulticast_ResetTimer_Parms*)Obj)->bStartTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_ResetTimer_Statics::NewProp_bStartTimer = { "bStartTimer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZModifiableTimerComponent_eventMulticast_ResetTimer_Parms), &Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_ResetTimer_Statics::NewProp_bStartTimer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_ResetTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_ResetTimer_Statics::NewProp_bStartTimer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_ResetTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_ResetTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModifiableTimerComponent, nullptr, "Multicast_ResetTimer", nullptr, nullptr, sizeof(SBZModifiableTimerComponent_eventMulticast_ResetTimer_Parms), Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_ResetTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_ResetTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_ResetTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_ResetTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_ResetTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_ResetTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerSpeed_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerSpeed_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimerComponent_eventMulticast_SetTimerSpeed_Parms, NewSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerSpeed_Statics::NewProp_NewSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModifiableTimerComponent, nullptr, "Multicast_SetTimerSpeed", nullptr, nullptr, sizeof(SBZModifiableTimerComponent_eventMulticast_SetTimerSpeed_Parms), Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimerComponent_eventMulticast_SetTimerState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZTimerState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModifiableTimerComponent, nullptr, "Multicast_SetTimerState", nullptr, nullptr, sizeof(SBZModifiableTimerComponent_eventMulticast_SetTimerState_Parms), Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_CurrentSpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_CurrentSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_CurrentSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModifiableTimerComponent, nullptr, "OnRep_CurrentSpeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_CurrentSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_CurrentSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_CurrentSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_CurrentSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_NextProgressionValueIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_NextProgressionValueIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_NextProgressionValueIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModifiableTimerComponent, nullptr, "OnRep_NextProgressionValueIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_NextProgressionValueIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_NextProgressionValueIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_NextProgressionValueIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_NextProgressionValueIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_TimerState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_TimerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_TimerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModifiableTimerComponent, nullptr, "OnRep_TimerState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_TimerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_TimerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_TimerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_TimerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModifiableTimerComponent_ServerPauseTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModifiableTimerComponent_ServerPauseTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModifiableTimerComponent_ServerPauseTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModifiableTimerComponent, nullptr, "ServerPauseTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModifiableTimerComponent_ServerPauseTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_ServerPauseTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModifiableTimerComponent_ServerPauseTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModifiableTimerComponent_ServerPauseTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModifiableTimerComponent_ServerResetTimer_Statics
	{
		struct SBZModifiableTimerComponent_eventServerResetTimer_Parms
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
	void Z_Construct_UFunction_USBZModifiableTimerComponent_ServerResetTimer_Statics::NewProp_bStartTimer_SetBit(void* Obj)
	{
		((SBZModifiableTimerComponent_eventServerResetTimer_Parms*)Obj)->bStartTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZModifiableTimerComponent_ServerResetTimer_Statics::NewProp_bStartTimer = { "bStartTimer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZModifiableTimerComponent_eventServerResetTimer_Parms), &Z_Construct_UFunction_USBZModifiableTimerComponent_ServerResetTimer_Statics::NewProp_bStartTimer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModifiableTimerComponent_ServerResetTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModifiableTimerComponent_ServerResetTimer_Statics::NewProp_bStartTimer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModifiableTimerComponent_ServerResetTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModifiableTimerComponent_ServerResetTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModifiableTimerComponent, nullptr, "ServerResetTimer", nullptr, nullptr, sizeof(SBZModifiableTimerComponent_eventServerResetTimer_Parms), Z_Construct_UFunction_USBZModifiableTimerComponent_ServerResetTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_ServerResetTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModifiableTimerComponent_ServerResetTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_ServerResetTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModifiableTimerComponent_ServerResetTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModifiableTimerComponent_ServerResetTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModifiableTimerComponent_ServerSetTimerSpeed_Statics
	{
		struct SBZModifiableTimerComponent_eventServerSetTimerSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZModifiableTimerComponent_ServerSetTimerSpeed_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModifiableTimerComponent_eventServerSetTimerSpeed_Parms, NewSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModifiableTimerComponent_ServerSetTimerSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModifiableTimerComponent_ServerSetTimerSpeed_Statics::NewProp_NewSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModifiableTimerComponent_ServerSetTimerSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModifiableTimerComponent_ServerSetTimerSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModifiableTimerComponent, nullptr, "ServerSetTimerSpeed", nullptr, nullptr, sizeof(SBZModifiableTimerComponent_eventServerSetTimerSpeed_Parms), Z_Construct_UFunction_USBZModifiableTimerComponent_ServerSetTimerSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_ServerSetTimerSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModifiableTimerComponent_ServerSetTimerSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_ServerSetTimerSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModifiableTimerComponent_ServerSetTimerSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModifiableTimerComponent_ServerSetTimerSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModifiableTimerComponent_ServerStartTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModifiableTimerComponent_ServerStartTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModifiableTimerComponent_ServerStartTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModifiableTimerComponent, nullptr, "ServerStartTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModifiableTimerComponent_ServerStartTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModifiableTimerComponent_ServerStartTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModifiableTimerComponent_ServerStartTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModifiableTimerComponent_ServerStartTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZModifiableTimerComponent_NoRegister()
	{
		return USBZModifiableTimerComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZModifiableTimerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressionValuesToBroadcast_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionValuesToBroadcast_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProgressionValuesToBroadcast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SabotagePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SabotagePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextProgressionValueIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NextProgressionValueIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTimerSpeedChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerSpeedChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProgressionReached_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgressionReached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTimerStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerStateChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZModifiableTimerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZModifiableTimerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZModifiableTimerComponent_GetCurrentState, "GetCurrentState" }, // 626054569
		{ &Z_Construct_UFunction_USBZModifiableTimerComponent_GetDuration, "GetDuration" }, // 2241357466
		{ &Z_Construct_UFunction_USBZModifiableTimerComponent_GetProgressMade, "GetProgressMade" }, // 4184839119
		{ &Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeElapsed, "GetTimeElapsed" }, // 3347502009
		{ &Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimeRemaining, "GetTimeRemaining" }, // 2958606387
		{ &Z_Construct_UFunction_USBZModifiableTimerComponent_GetTimerSpeed, "GetTimerSpeed" }, // 3383301925
		{ &Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_ResetTimer, "Multicast_ResetTimer" }, // 964177066
		{ &Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerSpeed, "Multicast_SetTimerSpeed" }, // 1765510925
		{ &Z_Construct_UFunction_USBZModifiableTimerComponent_Multicast_SetTimerState, "Multicast_SetTimerState" }, // 2139188213
		{ &Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_CurrentSpeed, "OnRep_CurrentSpeed" }, // 1425300722
		{ &Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_NextProgressionValueIndex, "OnRep_NextProgressionValueIndex" }, // 644262372
		{ &Z_Construct_UFunction_USBZModifiableTimerComponent_OnRep_TimerState, "OnRep_TimerState" }, // 3022949755
		{ &Z_Construct_UFunction_USBZModifiableTimerComponent_ServerPauseTimer, "ServerPauseTimer" }, // 3252686328
		{ &Z_Construct_UFunction_USBZModifiableTimerComponent_ServerResetTimer, "ServerResetTimer" }, // 166583159
		{ &Z_Construct_UFunction_USBZModifiableTimerComponent_ServerSetTimerSpeed, "ServerSetTimerSpeed" }, // 2399484195
		{ &Z_Construct_UFunction_USBZModifiableTimerComponent_ServerStartTimer, "ServerStartTimer" }, // 2159374051
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModifiableTimerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZModifiableTimerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimerComponent" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModifiableTimerComponent, Duration), METADATA_PARAMS(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_ProgressionValuesToBroadcast_Inner = { "ProgressionValuesToBroadcast", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_ProgressionValuesToBroadcast_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimerComponent" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_ProgressionValuesToBroadcast = { "ProgressionValuesToBroadcast", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModifiableTimerComponent, ProgressionValuesToBroadcast), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_ProgressionValuesToBroadcast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_ProgressionValuesToBroadcast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_SabotagePoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimerComponent" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_SabotagePoint = { "SabotagePoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModifiableTimerComponent, SabotagePoint), Z_Construct_UClass_ASBZSabotagePoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_SabotagePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_SabotagePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_TimeElapsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimerComponent" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_TimeElapsed = { "TimeElapsed", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModifiableTimerComponent, TimeElapsed), METADATA_PARAMS(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_TimeElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_TimeElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_CurrentSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimerComponent" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", "OnRep_CurrentSpeed", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModifiableTimerComponent, CurrentSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_CurrentSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_CurrentSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_NextProgressionValueIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimerComponent" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_NextProgressionValueIndex = { "NextProgressionValueIndex", "OnRep_NextProgressionValueIndex", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModifiableTimerComponent, NextProgressionValueIndex), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_NextProgressionValueIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_NextProgressionValueIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_CurrentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimerComponent" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_CurrentState = { "CurrentState", "OnRep_TimerState", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModifiableTimerComponent, CurrentState), Z_Construct_UEnum_Starbreeze_ESBZTimerState, METADATA_PARAMS(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_CurrentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_OnTimerSpeedChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimerComponent" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_OnTimerSpeedChanged = { "OnTimerSpeedChanged", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModifiableTimerComponent, OnTimerSpeedChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZTimerComponentDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_OnTimerSpeedChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_OnTimerSpeedChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_OnProgressionReached_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimerComponent" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_OnProgressionReached = { "OnProgressionReached", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModifiableTimerComponent, OnProgressionReached), Z_Construct_UDelegateFunction_Starbreeze_SBZTimerProgressionReachedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_OnProgressionReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_OnProgressionReached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_OnTimerStateChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModifiableTimerComponent" },
		{ "ModuleRelativePath", "Public/SBZModifiableTimerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_OnTimerStateChanged = { "OnTimerStateChanged", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModifiableTimerComponent, OnTimerStateChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZTimerComponentStateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_OnTimerStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_OnTimerStateChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZModifiableTimerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_ProgressionValuesToBroadcast_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_ProgressionValuesToBroadcast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_SabotagePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_TimeElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_CurrentSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_NextProgressionValueIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_CurrentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_OnTimerSpeedChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_OnProgressionReached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModifiableTimerComponent_Statics::NewProp_OnTimerStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZModifiableTimerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZModifiableTimerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZModifiableTimerComponent_Statics::ClassParams = {
		&USBZModifiableTimerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZModifiableTimerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModifiableTimerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZModifiableTimerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZModifiableTimerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZModifiableTimerComponent, 197098065);
	template<> STARBREEZE_API UClass* StaticClass<USBZModifiableTimerComponent>()
	{
		return USBZModifiableTimerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZModifiableTimerComponent(Z_Construct_UClass_USBZModifiableTimerComponent, &USBZModifiableTimerComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZModifiableTimerComponent"), false, nullptr, nullptr, nullptr);

	void USBZModifiableTimerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TimeElapsed(TEXT("TimeElapsed"));
		static const FName Name_CurrentSpeed(TEXT("CurrentSpeed"));
		static const FName Name_NextProgressionValueIndex(TEXT("NextProgressionValueIndex"));
		static const FName Name_CurrentState(TEXT("CurrentState"));

		const bool bIsValid = true
			&& Name_TimeElapsed == ClassReps[(int32)ENetFields_Private::TimeElapsed].Property->GetFName()
			&& Name_CurrentSpeed == ClassReps[(int32)ENetFields_Private::CurrentSpeed].Property->GetFName()
			&& Name_NextProgressionValueIndex == ClassReps[(int32)ENetFields_Private::NextProgressionValueIndex].Property->GetFName()
			&& Name_CurrentState == ClassReps[(int32)ENetFields_Private::CurrentState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZModifiableTimerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZModifiableTimerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
