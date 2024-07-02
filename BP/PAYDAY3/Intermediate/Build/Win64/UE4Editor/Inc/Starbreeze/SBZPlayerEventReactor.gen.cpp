// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerEventReactor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerEventReactor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerEventReactor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerEventReactor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZReactionType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEventReactorState();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAudioScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEventReactionData();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkStateValue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPlayerEventReactor::execMulticast_PlayAudioReaction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AudioScreenIndex);
		P_GET_ENUM(ESBZReactionType,Z_Param_ReactionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_PlayAudioReaction_Implementation(Z_Param_AudioScreenIndex,ESBZReactionType(Z_Param_ReactionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerEventReactor::execMulticast_SetState)
	{
		P_GET_ENUM(ESBZEventReactorState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetState_Implementation(ESBZEventReactorState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerEventReactor::execOnECMJammerCountChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_OldCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AddedTime);
		P_GET_UBOOL(Z_Param_bInIsSignalScanActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnECMJammerCountChanged(Z_Param_NewCount,Z_Param_OldCount,Z_Param_AddedTime,Z_Param_bInIsSignalScanActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerEventReactor::execOnPlayerDefeatStateChanged)
	{
		P_GET_STRUCT_REF(FSBZPlayerDefeatStateChangedData,Z_Param_Out_DefeatStateData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerDefeatStateChanged(Z_Param_Out_DefeatStateData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerEventReactor::execOnRep_CurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerEventReactor::execSetState)
	{
		P_GET_ENUM(ESBZEventReactorState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(ESBZEventReactorState(Z_Param_NewState));
		P_NATIVE_END;
	}
	static FName NAME_ASBZPlayerEventReactor_Multicast_PlayAudioReaction = FName(TEXT("Multicast_PlayAudioReaction"));
	void ASBZPlayerEventReactor::Multicast_PlayAudioReaction(const int32 AudioScreenIndex, ESBZReactionType ReactionType)
	{
		SBZPlayerEventReactor_eventMulticast_PlayAudioReaction_Parms Parms;
		Parms.AudioScreenIndex=AudioScreenIndex;
		Parms.ReactionType=ReactionType;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerEventReactor_Multicast_PlayAudioReaction),&Parms);
	}
	static FName NAME_ASBZPlayerEventReactor_Multicast_SetState = FName(TEXT("Multicast_SetState"));
	void ASBZPlayerEventReactor::Multicast_SetState(ESBZEventReactorState NewState)
	{
		SBZPlayerEventReactor_eventMulticast_SetState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerEventReactor_Multicast_SetState),&Parms);
	}
	void ASBZPlayerEventReactor::StaticRegisterNativesASBZPlayerEventReactor()
	{
		UClass* Class = ASBZPlayerEventReactor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_PlayAudioReaction", &ASBZPlayerEventReactor::execMulticast_PlayAudioReaction },
			{ "Multicast_SetState", &ASBZPlayerEventReactor::execMulticast_SetState },
			{ "OnECMJammerCountChanged", &ASBZPlayerEventReactor::execOnECMJammerCountChanged },
			{ "OnPlayerDefeatStateChanged", &ASBZPlayerEventReactor::execOnPlayerDefeatStateChanged },
			{ "OnRep_CurrentState", &ASBZPlayerEventReactor::execOnRep_CurrentState },
			{ "SetState", &ASBZPlayerEventReactor::execSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioScreenIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioScreenIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReactionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReactionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction_Statics::NewProp_AudioScreenIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction_Statics::NewProp_AudioScreenIndex = { "AudioScreenIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerEventReactor_eventMulticast_PlayAudioReaction_Parms, AudioScreenIndex), METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction_Statics::NewProp_AudioScreenIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction_Statics::NewProp_AudioScreenIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction_Statics::NewProp_ReactionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction_Statics::NewProp_ReactionType = { "ReactionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerEventReactor_eventMulticast_PlayAudioReaction_Parms, ReactionType), Z_Construct_UEnum_Starbreeze_ESBZReactionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction_Statics::NewProp_AudioScreenIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction_Statics::NewProp_ReactionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction_Statics::NewProp_ReactionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerEventReactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerEventReactor, nullptr, "Multicast_PlayAudioReaction", nullptr, nullptr, sizeof(SBZPlayerEventReactor_eventMulticast_PlayAudioReaction_Parms), Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_SetState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerEventReactor_eventMulticast_SetState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZEventReactorState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_SetState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_SetState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerEventReactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerEventReactor, nullptr, "Multicast_SetState", nullptr, nullptr, sizeof(SBZPlayerEventReactor_eventMulticast_SetState_Parms), Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics
	{
		struct SBZPlayerEventReactor_eventOnECMJammerCountChanged_Parms
		{
			int32 NewCount;
			int32 OldCount;
			float AddedTime;
			bool bInIsSignalScanActive;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldCount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddedTime;
		static void NewProp_bInIsSignalScanActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsSignalScanActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerEventReactor_eventOnECMJammerCountChanged_Parms, NewCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics::NewProp_OldCount = { "OldCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerEventReactor_eventOnECMJammerCountChanged_Parms, OldCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics::NewProp_AddedTime = { "AddedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerEventReactor_eventOnECMJammerCountChanged_Parms, AddedTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics::NewProp_bInIsSignalScanActive_SetBit(void* Obj)
	{
		((SBZPlayerEventReactor_eventOnECMJammerCountChanged_Parms*)Obj)->bInIsSignalScanActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics::NewProp_bInIsSignalScanActive = { "bInIsSignalScanActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerEventReactor_eventOnECMJammerCountChanged_Parms), &Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics::NewProp_bInIsSignalScanActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics::NewProp_NewCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics::NewProp_OldCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics::NewProp_AddedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics::NewProp_bInIsSignalScanActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerEventReactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerEventReactor, nullptr, "OnECMJammerCountChanged", nullptr, nullptr, sizeof(SBZPlayerEventReactor_eventOnECMJammerCountChanged_Parms), Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerEventReactor_OnPlayerDefeatStateChanged_Statics
	{
		struct SBZPlayerEventReactor_eventOnPlayerDefeatStateChanged_Parms
		{
			FSBZPlayerDefeatStateChangedData DefeatStateData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefeatStateData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefeatStateData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerEventReactor_OnPlayerDefeatStateChanged_Statics::NewProp_DefeatStateData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlayerEventReactor_OnPlayerDefeatStateChanged_Statics::NewProp_DefeatStateData = { "DefeatStateData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerEventReactor_eventOnPlayerDefeatStateChanged_Parms, DefeatStateData), Z_Construct_UScriptStruct_FSBZPlayerDefeatStateChangedData, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerEventReactor_OnPlayerDefeatStateChanged_Statics::NewProp_DefeatStateData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerEventReactor_OnPlayerDefeatStateChanged_Statics::NewProp_DefeatStateData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerEventReactor_OnPlayerDefeatStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerEventReactor_OnPlayerDefeatStateChanged_Statics::NewProp_DefeatStateData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerEventReactor_OnPlayerDefeatStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerEventReactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerEventReactor_OnPlayerDefeatStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerEventReactor, nullptr, "OnPlayerDefeatStateChanged", nullptr, nullptr, sizeof(SBZPlayerEventReactor_eventOnPlayerDefeatStateChanged_Parms), Z_Construct_UFunction_ASBZPlayerEventReactor_OnPlayerDefeatStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerEventReactor_OnPlayerDefeatStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerEventReactor_OnPlayerDefeatStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerEventReactor_OnPlayerDefeatStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerEventReactor_OnPlayerDefeatStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerEventReactor_OnPlayerDefeatStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerEventReactor_OnRep_CurrentState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerEventReactor_OnRep_CurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerEventReactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerEventReactor_OnRep_CurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerEventReactor, nullptr, "OnRep_CurrentState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerEventReactor_OnRep_CurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerEventReactor_OnRep_CurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerEventReactor_OnRep_CurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerEventReactor_OnRep_CurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerEventReactor_SetState_Statics
	{
		struct SBZPlayerEventReactor_eventSetState_Parms
		{
			ESBZEventReactorState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlayerEventReactor_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPlayerEventReactor_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerEventReactor_eventSetState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZEventReactorState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerEventReactor_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerEventReactor_SetState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerEventReactor_SetState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerEventReactor_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerEventReactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerEventReactor_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerEventReactor, nullptr, "SetState", nullptr, nullptr, sizeof(SBZPlayerEventReactor_eventSetState_Parms), Z_Construct_UFunction_ASBZPlayerEventReactor_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerEventReactor_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerEventReactor_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerEventReactor_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerEventReactor_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerEventReactor_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPlayerEventReactor_NoRegister()
	{
		return ASBZPlayerEventReactor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlayerEventReactor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioScreenArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioScreenArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioScreenArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStateArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStateArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerStateArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EventCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPlayedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastPlayedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventReactionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventReactionArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactorStateArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReactorStateArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCommentDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerCommentDelay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlayerEventReactor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPlayerEventReactor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_PlayAudioReaction, "Multicast_PlayAudioReaction" }, // 3738414878
		{ &Z_Construct_UFunction_ASBZPlayerEventReactor_Multicast_SetState, "Multicast_SetState" }, // 2114320296
		{ &Z_Construct_UFunction_ASBZPlayerEventReactor_OnECMJammerCountChanged, "OnECMJammerCountChanged" }, // 450975152
		{ &Z_Construct_UFunction_ASBZPlayerEventReactor_OnPlayerDefeatStateChanged, "OnPlayerDefeatStateChanged" }, // 3910918196
		{ &Z_Construct_UFunction_ASBZPlayerEventReactor_OnRep_CurrentState, "OnRep_CurrentState" }, // 1854526632
		{ &Z_Construct_UFunction_ASBZPlayerEventReactor_SetState, "SetState" }, // 626288738
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerEventReactor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerEventReactor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerEventReactor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_AudioScreenArray_Inner = { "AudioScreenArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZAudioScreen_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_AudioScreenArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEventReactor" },
		{ "ModuleRelativePath", "Public/SBZPlayerEventReactor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_AudioScreenArray = { "AudioScreenArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerEventReactor, AudioScreenArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_AudioScreenArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_AudioScreenArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_PlayerStateArray_Inner = { "PlayerStateArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_PlayerStateArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEventReactor" },
		{ "ModuleRelativePath", "Public/SBZPlayerEventReactor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_PlayerStateArray = { "PlayerStateArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerEventReactor, PlayerStateArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_PlayerStateArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_PlayerStateArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_EventCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEventReactor" },
		{ "ModuleRelativePath", "Public/SBZPlayerEventReactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_EventCooldown = { "EventCooldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerEventReactor, EventCooldown), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_EventCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_EventCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_LastPlayedTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEventReactor" },
		{ "ModuleRelativePath", "Public/SBZPlayerEventReactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_LastPlayedTime = { "LastPlayedTime", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerEventReactor, LastPlayedTime), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_LastPlayedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_LastPlayedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_EventReactionArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEventReactor" },
		{ "ModuleRelativePath", "Public/SBZPlayerEventReactor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_EventReactionArray = { "EventReactionArray", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(EventReactionArray, ASBZPlayerEventReactor), STRUCT_OFFSET(ASBZPlayerEventReactor, EventReactionArray), Z_Construct_UScriptStruct_FSBZEventReactionData, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_EventReactionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_EventReactionArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_ReactorStateArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEventReactor" },
		{ "ModuleRelativePath", "Public/SBZPlayerEventReactor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_ReactorStateArray = { "ReactorStateArray", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ReactorStateArray, ASBZPlayerEventReactor), STRUCT_OFFSET(ASBZPlayerEventReactor, ReactorStateArray), Z_Construct_UClass_UAkStateValue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_ReactorStateArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_ReactorStateArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_PlayerCommentDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEventReactor" },
		{ "ModuleRelativePath", "Public/SBZPlayerEventReactor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_PlayerCommentDelay = { "PlayerCommentDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerEventReactor, PlayerCommentDelay), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_PlayerCommentDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_PlayerCommentDelay_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_CurrentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEventReactor" },
		{ "ModuleRelativePath", "Public/SBZPlayerEventReactor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_CurrentState = { "CurrentState", "OnRep_CurrentState", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerEventReactor, CurrentState), Z_Construct_UEnum_Starbreeze_ESBZEventReactorState, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_CurrentState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPlayerEventReactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_AudioScreenArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_AudioScreenArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_PlayerStateArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_PlayerStateArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_EventCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_LastPlayedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_EventReactionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_ReactorStateArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_PlayerCommentDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_CurrentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerEventReactor_Statics::NewProp_CurrentState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlayerEventReactor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlayerEventReactor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlayerEventReactor_Statics::ClassParams = {
		&ASBZPlayerEventReactor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPlayerEventReactor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerEventReactor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlayerEventReactor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlayerEventReactor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlayerEventReactor, 2730818585);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlayerEventReactor>()
	{
		return ASBZPlayerEventReactor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlayerEventReactor(Z_Construct_UClass_ASBZPlayerEventReactor, &ASBZPlayerEventReactor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlayerEventReactor"), false, nullptr, nullptr, nullptr);

	void ASBZPlayerEventReactor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentState(TEXT("CurrentState"));

		const bool bIsValid = true
			&& Name_CurrentState == ClassReps[(int32)ENetFields_Private::CurrentState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZPlayerEventReactor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlayerEventReactor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
