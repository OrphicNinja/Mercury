// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBaseInteractableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBaseInteractableComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameplayEffectData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractRequirement_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnInteractableStateChangedDelegate__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractableModeData();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAnimatedInteractionData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZBaseInteractableComponent::execGetCurrentModeIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentModeIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBaseInteractableComponent::execGetGameplayEffectsOnInteract)
	{
		P_GET_TARRAY_REF(FSBZGameplayEffectData,Z_Param_Out_GameplayEffects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGameplayEffectsOnInteract(Z_Param_Out_GameplayEffects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBaseInteractableComponent::execIsInteractionIllegal)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InModeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInteractionIllegal(Z_Param_InModeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBaseInteractableComponent::execOnFocusChanged)
	{
		P_GET_UBOOL(Z_Param_bInNewFocusState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFocusChanged_Implementation(Z_Param_bInNewFocusState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBaseInteractableComponent::execSetGameplayEffectsOnInteract)
	{
		P_GET_TARRAY(FSBZGameplayEffectData,Z_Param_GameplayEffects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameplayEffectsOnInteract(Z_Param_GameplayEffects);
		P_NATIVE_END;
	}
	static FName NAME_USBZBaseInteractableComponent_OnFocusChanged = FName(TEXT("OnFocusChanged"));
	void USBZBaseInteractableComponent::OnFocusChanged(bool bInNewFocusState)
	{
		SBZBaseInteractableComponent_eventOnFocusChanged_Parms Parms;
		Parms.bInNewFocusState=bInNewFocusState ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZBaseInteractableComponent_OnFocusChanged),&Parms);
	}
	void USBZBaseInteractableComponent::StaticRegisterNativesUSBZBaseInteractableComponent()
	{
		UClass* Class = USBZBaseInteractableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentModeIndex", &USBZBaseInteractableComponent::execGetCurrentModeIndex },
			{ "GetGameplayEffectsOnInteract", &USBZBaseInteractableComponent::execGetGameplayEffectsOnInteract },
			{ "IsInteractionIllegal", &USBZBaseInteractableComponent::execIsInteractionIllegal },
			{ "OnFocusChanged", &USBZBaseInteractableComponent::execOnFocusChanged },
			{ "SetGameplayEffectsOnInteract", &USBZBaseInteractableComponent::execSetGameplayEffectsOnInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBaseInteractableComponent_GetCurrentModeIndex_Statics
	{
		struct SBZBaseInteractableComponent_eventGetCurrentModeIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZBaseInteractableComponent_GetCurrentModeIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBaseInteractableComponent_eventGetCurrentModeIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBaseInteractableComponent_GetCurrentModeIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInteractableComponent_GetCurrentModeIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseInteractableComponent_GetCurrentModeIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBaseInteractableComponent_GetCurrentModeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBaseInteractableComponent, nullptr, "GetCurrentModeIndex", nullptr, nullptr, sizeof(SBZBaseInteractableComponent_eventGetCurrentModeIndex_Parms), Z_Construct_UFunction_USBZBaseInteractableComponent_GetCurrentModeIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInteractableComponent_GetCurrentModeIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseInteractableComponent_GetCurrentModeIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInteractableComponent_GetCurrentModeIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBaseInteractableComponent_GetCurrentModeIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBaseInteractableComponent_GetCurrentModeIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBaseInteractableComponent_GetGameplayEffectsOnInteract_Statics
	{
		struct SBZBaseInteractableComponent_eventGetGameplayEffectsOnInteract_Parms
		{
			TArray<FSBZGameplayEffectData> GameplayEffects;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayEffects_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayEffects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBaseInteractableComponent_GetGameplayEffectsOnInteract_Statics::NewProp_GameplayEffects_Inner = { "GameplayEffects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZGameplayEffectData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZBaseInteractableComponent_GetGameplayEffectsOnInteract_Statics::NewProp_GameplayEffects = { "GameplayEffects", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBaseInteractableComponent_eventGetGameplayEffectsOnInteract_Parms, GameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBaseInteractableComponent_GetGameplayEffectsOnInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInteractableComponent_GetGameplayEffectsOnInteract_Statics::NewProp_GameplayEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInteractableComponent_GetGameplayEffectsOnInteract_Statics::NewProp_GameplayEffects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseInteractableComponent_GetGameplayEffectsOnInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBaseInteractableComponent_GetGameplayEffectsOnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBaseInteractableComponent, nullptr, "GetGameplayEffectsOnInteract", nullptr, nullptr, sizeof(SBZBaseInteractableComponent_eventGetGameplayEffectsOnInteract_Parms), Z_Construct_UFunction_USBZBaseInteractableComponent_GetGameplayEffectsOnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInteractableComponent_GetGameplayEffectsOnInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseInteractableComponent_GetGameplayEffectsOnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInteractableComponent_GetGameplayEffectsOnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBaseInteractableComponent_GetGameplayEffectsOnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBaseInteractableComponent_GetGameplayEffectsOnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBaseInteractableComponent_IsInteractionIllegal_Statics
	{
		struct SBZBaseInteractableComponent_eventIsInteractionIllegal_Parms
		{
			int32 InModeIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InModeIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZBaseInteractableComponent_IsInteractionIllegal_Statics::NewProp_InModeIndex = { "InModeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBaseInteractableComponent_eventIsInteractionIllegal_Parms, InModeIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZBaseInteractableComponent_IsInteractionIllegal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBaseInteractableComponent_eventIsInteractionIllegal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBaseInteractableComponent_IsInteractionIllegal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBaseInteractableComponent_eventIsInteractionIllegal_Parms), &Z_Construct_UFunction_USBZBaseInteractableComponent_IsInteractionIllegal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBaseInteractableComponent_IsInteractionIllegal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInteractableComponent_IsInteractionIllegal_Statics::NewProp_InModeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInteractableComponent_IsInteractionIllegal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseInteractableComponent_IsInteractionIllegal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBaseInteractableComponent_IsInteractionIllegal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBaseInteractableComponent, nullptr, "IsInteractionIllegal", nullptr, nullptr, sizeof(SBZBaseInteractableComponent_eventIsInteractionIllegal_Parms), Z_Construct_UFunction_USBZBaseInteractableComponent_IsInteractionIllegal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInteractableComponent_IsInteractionIllegal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseInteractableComponent_IsInteractionIllegal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInteractableComponent_IsInteractionIllegal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBaseInteractableComponent_IsInteractionIllegal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBaseInteractableComponent_IsInteractionIllegal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBaseInteractableComponent_OnFocusChanged_Statics
	{
		static void NewProp_bInNewFocusState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInNewFocusState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZBaseInteractableComponent_OnFocusChanged_Statics::NewProp_bInNewFocusState_SetBit(void* Obj)
	{
		((SBZBaseInteractableComponent_eventOnFocusChanged_Parms*)Obj)->bInNewFocusState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBaseInteractableComponent_OnFocusChanged_Statics::NewProp_bInNewFocusState = { "bInNewFocusState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBaseInteractableComponent_eventOnFocusChanged_Parms), &Z_Construct_UFunction_USBZBaseInteractableComponent_OnFocusChanged_Statics::NewProp_bInNewFocusState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBaseInteractableComponent_OnFocusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInteractableComponent_OnFocusChanged_Statics::NewProp_bInNewFocusState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseInteractableComponent_OnFocusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBaseInteractableComponent_OnFocusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBaseInteractableComponent, nullptr, "OnFocusChanged", nullptr, nullptr, sizeof(SBZBaseInteractableComponent_eventOnFocusChanged_Parms), Z_Construct_UFunction_USBZBaseInteractableComponent_OnFocusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInteractableComponent_OnFocusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseInteractableComponent_OnFocusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInteractableComponent_OnFocusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBaseInteractableComponent_OnFocusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBaseInteractableComponent_OnFocusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBaseInteractableComponent_SetGameplayEffectsOnInteract_Statics
	{
		struct SBZBaseInteractableComponent_eventSetGameplayEffectsOnInteract_Parms
		{
			TArray<FSBZGameplayEffectData> GameplayEffects;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayEffects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBaseInteractableComponent_SetGameplayEffectsOnInteract_Statics::NewProp_GameplayEffects_Inner = { "GameplayEffects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZGameplayEffectData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseInteractableComponent_SetGameplayEffectsOnInteract_Statics::NewProp_GameplayEffects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZBaseInteractableComponent_SetGameplayEffectsOnInteract_Statics::NewProp_GameplayEffects = { "GameplayEffects", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBaseInteractableComponent_eventSetGameplayEffectsOnInteract_Parms, GameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseInteractableComponent_SetGameplayEffectsOnInteract_Statics::NewProp_GameplayEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInteractableComponent_SetGameplayEffectsOnInteract_Statics::NewProp_GameplayEffects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBaseInteractableComponent_SetGameplayEffectsOnInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInteractableComponent_SetGameplayEffectsOnInteract_Statics::NewProp_GameplayEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseInteractableComponent_SetGameplayEffectsOnInteract_Statics::NewProp_GameplayEffects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseInteractableComponent_SetGameplayEffectsOnInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBaseInteractableComponent_SetGameplayEffectsOnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBaseInteractableComponent, nullptr, "SetGameplayEffectsOnInteract", nullptr, nullptr, sizeof(SBZBaseInteractableComponent_eventSetGameplayEffectsOnInteract_Parms), Z_Construct_UFunction_USBZBaseInteractableComponent_SetGameplayEffectsOnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInteractableComponent_SetGameplayEffectsOnInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseInteractableComponent_SetGameplayEffectsOnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseInteractableComponent_SetGameplayEffectsOnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBaseInteractableComponent_SetGameplayEffectsOnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBaseInteractableComponent_SetGameplayEffectsOnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister()
	{
		return USBZBaseInteractableComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZBaseInteractableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreDistanceValidation_MetaData[];
#endif
		static void NewProp_bIgnoreDistanceValidation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreDistanceValidation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shapes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shapes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Shapes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapeTraceLocationsArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeTraceLocationsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShapeTraceLocationsArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Requirement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Requirement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NativeRequirement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NativeRequirement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFocusChangedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFocusChangedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInputConsumed_MetaData[];
#endif
		static void NewProp_bIsInputConsumed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInputConsumed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsScreenInteract_MetaData[];
#endif
		static void NewProp_bIsScreenInteract_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsScreenInteract;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSignalInteract_MetaData[];
#endif
		static void NewProp_bIsSignalInteract_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSignalInteract;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideScreenInteractDistance_MetaData[];
#endif
		static void NewProp_bOverrideScreenInteractDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideScreenInteractDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideScreenInteractAngle_MetaData[];
#endif
		static void NewProp_bOverrideScreenInteractAngle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideScreenInteractAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideScreenInteractPendingDelay_MetaData[];
#endif
		static void NewProp_bOverrideScreenInteractPendingDelay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideScreenInteractPendingDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRequirementsCheckedEveryTick_MetaData[];
#endif
		static void NewProp_bIsRequirementsCheckedEveryTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRequirementsCheckedEveryTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenInteractDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenInteractDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinScreenInteractDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinScreenInteractDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinScreenInteractDot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinScreenInteractDot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingOnScreenDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PendingOnScreenDelay;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayEffectsOnInteract_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectsOnInteract_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayEffectsOnInteract;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlternativeModeData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternativeModeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AlternativeModeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStart2DAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnStart2DAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStart3DAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnStart3DAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinish2DAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnFinish2DAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinish3DAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnFinish3DAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCancel2DAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnCancel2DAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCancel3DAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnCancel3DAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompletedComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CancelComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_ModeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimationName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimatedInteractionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimatedInteractionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsScramblerAffected_MetaData[];
#endif
		static void NewProp_bIsScramblerAffected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsScramblerAffected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBaseInteractableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBaseInteractableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBaseInteractableComponent_GetCurrentModeIndex, "GetCurrentModeIndex" }, // 1046582516
		{ &Z_Construct_UFunction_USBZBaseInteractableComponent_GetGameplayEffectsOnInteract, "GetGameplayEffectsOnInteract" }, // 1446777017
		{ &Z_Construct_UFunction_USBZBaseInteractableComponent_IsInteractionIllegal, "IsInteractionIllegal" }, // 4173821477
		{ &Z_Construct_UFunction_USBZBaseInteractableComponent_OnFocusChanged, "OnFocusChanged" }, // 1552947964
		{ &Z_Construct_UFunction_USBZBaseInteractableComponent_SetGameplayEffectsOnInteract, "SetGameplayEffectsOnInteract" }, // 15137806
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZBaseInteractableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_NormalDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_NormalDistance = { "NormalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, NormalDistance), METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_NormalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_NormalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_PitchDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_PitchDistance = { "PitchDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, PitchDistance), METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_PitchDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_PitchDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIgnoreDistanceValidation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIgnoreDistanceValidation_SetBit(void* Obj)
	{
		((USBZBaseInteractableComponent*)Obj)->bIgnoreDistanceValidation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIgnoreDistanceValidation = { "bIgnoreDistanceValidation", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBaseInteractableComponent), &Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIgnoreDistanceValidation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIgnoreDistanceValidation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIgnoreDistanceValidation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Shapes_Inner = { "Shapes", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Shapes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Shapes = { "Shapes", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, Shapes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Shapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Shapes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_ShapeTraceLocationsArray_Inner = { "ShapeTraceLocationsArray", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_ShapeTraceLocationsArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_ShapeTraceLocationsArray = { "ShapeTraceLocationsArray", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, ShapeTraceLocationsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_ShapeTraceLocationsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_ShapeTraceLocationsArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Requirement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Requirement = { "Requirement", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, Requirement), Z_Construct_UClass_USBZBaseInteractRequirement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Requirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Requirement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_NativeRequirement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_NativeRequirement = { "NativeRequirement", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, NativeRequirement), Z_Construct_UClass_USBZBaseInteractRequirement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_NativeRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_NativeRequirement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnFocusChangedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnFocusChangedDelegate = { "OnFocusChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, OnFocusChangedDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZOnInteractableStateChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnFocusChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnFocusChangedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, Duration), METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Text_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, Text), METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsInputConsumed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsInputConsumed_SetBit(void* Obj)
	{
		((USBZBaseInteractableComponent*)Obj)->bIsInputConsumed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsInputConsumed = { "bIsInputConsumed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZBaseInteractableComponent), &Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsInputConsumed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsInputConsumed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsInputConsumed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsScreenInteract_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsScreenInteract_SetBit(void* Obj)
	{
		((USBZBaseInteractableComponent*)Obj)->bIsScreenInteract = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsScreenInteract = { "bIsScreenInteract", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZBaseInteractableComponent), &Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsScreenInteract_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsScreenInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsScreenInteract_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsSignalInteract_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsSignalInteract_SetBit(void* Obj)
	{
		((USBZBaseInteractableComponent*)Obj)->bIsSignalInteract = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsSignalInteract = { "bIsSignalInteract", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZBaseInteractableComponent), &Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsSignalInteract_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsSignalInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsSignalInteract_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractDistance_SetBit(void* Obj)
	{
		((USBZBaseInteractableComponent*)Obj)->bOverrideScreenInteractDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractDistance = { "bOverrideScreenInteractDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZBaseInteractableComponent), &Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractAngle_SetBit(void* Obj)
	{
		((USBZBaseInteractableComponent*)Obj)->bOverrideScreenInteractAngle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractAngle = { "bOverrideScreenInteractAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZBaseInteractableComponent), &Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractAngle_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractPendingDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractPendingDelay_SetBit(void* Obj)
	{
		((USBZBaseInteractableComponent*)Obj)->bOverrideScreenInteractPendingDelay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractPendingDelay = { "bOverrideScreenInteractPendingDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZBaseInteractableComponent), &Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractPendingDelay_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractPendingDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractPendingDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsRequirementsCheckedEveryTick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsRequirementsCheckedEveryTick_SetBit(void* Obj)
	{
		((USBZBaseInteractableComponent*)Obj)->bIsRequirementsCheckedEveryTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsRequirementsCheckedEveryTick = { "bIsRequirementsCheckedEveryTick", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZBaseInteractableComponent), &Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsRequirementsCheckedEveryTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsRequirementsCheckedEveryTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsRequirementsCheckedEveryTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_ScreenInteractDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_ScreenInteractDistance = { "ScreenInteractDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, ScreenInteractDistance), METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_ScreenInteractDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_ScreenInteractDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_MinScreenInteractDegrees_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_MinScreenInteractDegrees = { "MinScreenInteractDegrees", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, MinScreenInteractDegrees), METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_MinScreenInteractDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_MinScreenInteractDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_MinScreenInteractDot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_MinScreenInteractDot = { "MinScreenInteractDot", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, MinScreenInteractDot), METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_MinScreenInteractDot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_MinScreenInteractDot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_PendingOnScreenDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_PendingOnScreenDelay = { "PendingOnScreenDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, PendingOnScreenDelay), METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_PendingOnScreenDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_PendingOnScreenDelay_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_GameplayEffectsOnInteract_Inner = { "GameplayEffectsOnInteract", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZGameplayEffectData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_GameplayEffectsOnInteract_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_GameplayEffectsOnInteract = { "GameplayEffectsOnInteract", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, GameplayEffectsOnInteract), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_GameplayEffectsOnInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_GameplayEffectsOnInteract_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_AlternativeModeData_Inner = { "AlternativeModeData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZInteractableModeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_AlternativeModeData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_AlternativeModeData = { "AlternativeModeData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, AlternativeModeData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_AlternativeModeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_AlternativeModeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnStart2DAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnStart2DAudioEvent = { "OnStart2DAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, OnStart2DAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnStart2DAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnStart2DAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnStart3DAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnStart3DAudioEvent = { "OnStart3DAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, OnStart3DAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnStart3DAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnStart3DAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnFinish2DAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnFinish2DAudioEvent = { "OnFinish2DAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, OnFinish2DAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnFinish2DAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnFinish2DAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnFinish3DAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnFinish3DAudioEvent = { "OnFinish3DAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, OnFinish3DAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnFinish3DAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnFinish3DAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnCancel2DAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnCancel2DAudioEvent = { "OnCancel2DAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, OnCancel2DAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnCancel2DAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnCancel2DAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnCancel3DAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnCancel3DAudioEvent = { "OnCancel3DAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, OnCancel3DAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnCancel3DAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnCancel3DAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_StartComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_StartComment = { "StartComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, StartComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_StartComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_StartComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_CompletedComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_CompletedComment = { "CompletedComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, CompletedComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_CompletedComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_CompletedComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_CancelComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_CancelComment = { "CancelComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, CancelComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_CancelComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_CancelComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_LastInteractor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_LastInteractor = { "LastInteractor", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, LastInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_LastInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_LastInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_ModeIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_ModeIndex = { "ModeIndex", nullptr, (EPropertyFlags)0x0020080000002001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, ModeIndex), METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_ModeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_ModeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_AnimationName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, AnimationName), METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_AnimationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_AnimationName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_AnimatedInteractionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_AnimatedInteractionData = { "AnimatedInteractionData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseInteractableComponent, AnimatedInteractionData), Z_Construct_UClass_USBZAnimatedInteractionData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_AnimatedInteractionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_AnimatedInteractionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsScramblerAffected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseInteractableComponent" },
		{ "ModuleRelativePath", "Public/SBZBaseInteractableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsScramblerAffected_SetBit(void* Obj)
	{
		((USBZBaseInteractableComponent*)Obj)->bIsScramblerAffected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsScramblerAffected = { "bIsScramblerAffected", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBaseInteractableComponent), &Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsScramblerAffected_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsScramblerAffected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsScramblerAffected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBaseInteractableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_NormalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_PitchDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIgnoreDistanceValidation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Shapes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Shapes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_ShapeTraceLocationsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_ShapeTraceLocationsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Requirement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_NativeRequirement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnFocusChangedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsInputConsumed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsScreenInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsSignalInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bOverrideScreenInteractPendingDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsRequirementsCheckedEveryTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_ScreenInteractDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_MinScreenInteractDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_MinScreenInteractDot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_PendingOnScreenDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_GameplayEffectsOnInteract_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_GameplayEffectsOnInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_AlternativeModeData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_AlternativeModeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnStart2DAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnStart3DAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnFinish2DAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnFinish3DAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnCancel2DAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_OnCancel3DAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_StartComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_CompletedComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_CancelComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_LastInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_ModeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_AnimationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_AnimatedInteractionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseInteractableComponent_Statics::NewProp_bIsScramblerAffected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBaseInteractableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBaseInteractableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBaseInteractableComponent_Statics::ClassParams = {
		&USBZBaseInteractableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBaseInteractableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::PropPointers),
		0,
		0x00A000A5u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseInteractableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBaseInteractableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBaseInteractableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBaseInteractableComponent, 3655459827);
	template<> STARBREEZE_API UClass* StaticClass<USBZBaseInteractableComponent>()
	{
		return USBZBaseInteractableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBaseInteractableComponent(Z_Construct_UClass_USBZBaseInteractableComponent, &USBZBaseInteractableComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBaseInteractableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBaseInteractableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
