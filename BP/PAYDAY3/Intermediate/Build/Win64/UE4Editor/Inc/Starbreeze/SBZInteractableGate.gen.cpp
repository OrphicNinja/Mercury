// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractableGate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractableGate() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZInteractableGate_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZInteractableGate();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3MiniGameState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMiniGameComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuttableInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZInteractableGate::execOnAckAbortInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckAbortInteraction(Z_Param_InInteractable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZInteractableGate::execOnAckRejectedPredictedInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckRejectedPredictedInteraction(Z_Param_InInteractable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZInteractableGate::execOnMiniGameStateChanged)
	{
		P_GET_ENUM(EPD3MiniGameState,Z_Param_OldState);
		P_GET_ENUM(EPD3MiniGameState,Z_Param_NewState);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMiniGameStateChanged(EPD3MiniGameState(Z_Param_OldState),EPD3MiniGameState(Z_Param_NewState),Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZInteractableGate::execOnPredictedEndInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPredictedEndInteraction(Z_Param_InInteractable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZInteractableGate::execOnServerCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerCompleteInteraction(Z_Param_InInteractable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZInteractableGate::execOnStartInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartInteraction(Z_Param_InInteractable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	void ASBZInteractableGate::StaticRegisterNativesASBZInteractableGate()
	{
		UClass* Class = ASBZInteractableGate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAckAbortInteraction", &ASBZInteractableGate::execOnAckAbortInteraction },
			{ "OnAckRejectedPredictedInteraction", &ASBZInteractableGate::execOnAckRejectedPredictedInteraction },
			{ "OnMiniGameStateChanged", &ASBZInteractableGate::execOnMiniGameStateChanged },
			{ "OnPredictedEndInteraction", &ASBZInteractableGate::execOnPredictedEndInteraction },
			{ "OnServerCompleteInteraction", &ASBZInteractableGate::execOnServerCompleteInteraction },
			{ "OnStartInteraction", &ASBZInteractableGate::execOnStartInteraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics
	{
		struct SBZInteractableGate_eventOnAckAbortInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* Interactor;
			bool bIsLocallyControlledInteractor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledInteractor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractableGate_eventOnAckAbortInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractableGate_eventOnAckAbortInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZInteractableGate_eventOnAckAbortInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInteractableGate_eventOnAckAbortInteraction_Parms), &Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractableGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZInteractableGate, nullptr, "OnAckAbortInteraction", nullptr, nullptr, sizeof(SBZInteractableGate_eventOnAckAbortInteraction_Parms), Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics
	{
		struct SBZInteractableGate_eventOnAckRejectedPredictedInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* Interactor;
			bool bIsLocallyControlledInteractor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledInteractor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractableGate_eventOnAckRejectedPredictedInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractableGate_eventOnAckRejectedPredictedInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZInteractableGate_eventOnAckRejectedPredictedInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInteractableGate_eventOnAckRejectedPredictedInteraction_Parms), &Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractableGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZInteractableGate, nullptr, "OnAckRejectedPredictedInteraction", nullptr, nullptr, sizeof(SBZInteractableGate_eventOnAckRejectedPredictedInteraction_Parms), Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics
	{
		struct SBZInteractableGate_eventOnMiniGameStateChanged_Parms
		{
			EPD3MiniGameState OldState;
			EPD3MiniGameState NewState;
			bool bInIsLocallyControlled;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractableGate_eventOnMiniGameStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3MiniGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractableGate_eventOnMiniGameStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3MiniGameState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZInteractableGate_eventOnMiniGameStateChanged_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInteractableGate_eventOnMiniGameStateChanged_Parms), &Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractableGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZInteractableGate, nullptr, "OnMiniGameStateChanged", nullptr, nullptr, sizeof(SBZInteractableGate_eventOnMiniGameStateChanged_Parms), Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics
	{
		struct SBZInteractableGate_eventOnPredictedEndInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* Interactor;
			bool bIsLocallyControlledInteractor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledInteractor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractableGate_eventOnPredictedEndInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractableGate_eventOnPredictedEndInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZInteractableGate_eventOnPredictedEndInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInteractableGate_eventOnPredictedEndInteraction_Parms), &Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractableGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZInteractableGate, nullptr, "OnPredictedEndInteraction", nullptr, nullptr, sizeof(SBZInteractableGate_eventOnPredictedEndInteraction_Parms), Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics
	{
		struct SBZInteractableGate_eventOnServerCompleteInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* Interactor;
			bool bIsLocallyControlledInteractor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledInteractor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractableGate_eventOnServerCompleteInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractableGate_eventOnServerCompleteInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZInteractableGate_eventOnServerCompleteInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInteractableGate_eventOnServerCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractableGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZInteractableGate, nullptr, "OnServerCompleteInteraction", nullptr, nullptr, sizeof(SBZInteractableGate_eventOnServerCompleteInteraction_Parms), Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics
	{
		struct SBZInteractableGate_eventOnStartInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* Interactor;
			bool bIsLocallyControlledInteractor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledInteractor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractableGate_eventOnStartInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractableGate_eventOnStartInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZInteractableGate_eventOnStartInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInteractableGate_eventOnStartInteraction_Parms), &Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractableGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZInteractableGate, nullptr, "OnStartInteraction", nullptr, nullptr, sizeof(SBZInteractableGate_eventOnStartInteraction_Parms), Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZInteractableGate_NoRegister()
	{
		return ASBZInteractableGate::StaticClass();
	}
	struct Z_Construct_UClass_ASBZInteractableGate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniGameComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MiniGameComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMinigameIgnored_MetaData[];
#endif
		static void NewProp_bIsMinigameIgnored_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMinigameIgnored;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMinigameFrontOnly_MetaData[];
#endif
		static void NewProp_bIsMinigameFrontOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMinigameFrontOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZInteractableGate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZGate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZInteractableGate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZInteractableGate_OnAckAbortInteraction, "OnAckAbortInteraction" }, // 2697280471
		{ &Z_Construct_UFunction_ASBZInteractableGate_OnAckRejectedPredictedInteraction, "OnAckRejectedPredictedInteraction" }, // 1249235240
		{ &Z_Construct_UFunction_ASBZInteractableGate_OnMiniGameStateChanged, "OnMiniGameStateChanged" }, // 188769930
		{ &Z_Construct_UFunction_ASBZInteractableGate_OnPredictedEndInteraction, "OnPredictedEndInteraction" }, // 2883248171
		{ &Z_Construct_UFunction_ASBZInteractableGate_OnServerCompleteInteraction, "OnServerCompleteInteraction" }, // 304350551
		{ &Z_Construct_UFunction_ASBZInteractableGate_OnStartInteraction, "OnStartInteraction" }, // 2632282786
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInteractableGate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInteractableGate.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractableGate.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_Interactable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableGate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractableGate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZInteractableGate, Interactable), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_MiniGameComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableGate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractableGate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_MiniGameComponent = { "MiniGameComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZInteractableGate, MiniGameComponent), Z_Construct_UClass_USBZMiniGameComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_MiniGameComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_MiniGameComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_bIsMinigameIgnored_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableGate" },
		{ "ModuleRelativePath", "Public/SBZInteractableGate.h" },
	};
#endif
	void Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_bIsMinigameIgnored_SetBit(void* Obj)
	{
		((ASBZInteractableGate*)Obj)->bIsMinigameIgnored = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_bIsMinigameIgnored = { "bIsMinigameIgnored", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZInteractableGate), &Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_bIsMinigameIgnored_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_bIsMinigameIgnored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_bIsMinigameIgnored_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_bIsMinigameFrontOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableGate" },
		{ "ModuleRelativePath", "Public/SBZInteractableGate.h" },
	};
#endif
	void Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_bIsMinigameFrontOnly_SetBit(void* Obj)
	{
		((ASBZInteractableGate*)Obj)->bIsMinigameFrontOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_bIsMinigameFrontOnly = { "bIsMinigameFrontOnly", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZInteractableGate), &Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_bIsMinigameFrontOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_bIsMinigameFrontOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_bIsMinigameFrontOnly_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZInteractableGate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_MiniGameComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_bIsMinigameIgnored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZInteractableGate_Statics::NewProp_bIsMinigameFrontOnly,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZInteractableGate_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZCuttableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZInteractableGate, ISBZCuttableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZInteractableGate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZInteractableGate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZInteractableGate_Statics::ClassParams = {
		&ASBZInteractableGate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZInteractableGate_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInteractableGate_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZInteractableGate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInteractableGate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZInteractableGate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZInteractableGate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZInteractableGate, 1560069310);
	template<> STARBREEZE_API UClass* StaticClass<ASBZInteractableGate>()
	{
		return ASBZInteractableGate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZInteractableGate(Z_Construct_UClass_ASBZInteractableGate, &ASBZInteractableGate::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZInteractableGate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZInteractableGate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
