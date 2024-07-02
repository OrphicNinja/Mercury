// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWinch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWinch() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWinch_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWinch();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBreachingEquipmentBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWinchState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZBreachingEquipmentDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSabotagePoint_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
	DEFINE_FUNCTION(ASBZWinch::execMulticast_SetWinchState)
	{
		P_GET_ENUM(ESBZWinchState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetWinchState_Implementation(ESBZWinchState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWinch::execOnAckActivationInteractionComplete)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckActivationInteractionComplete(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWinch::execOnAckHookAttachInteractionComplete)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckHookAttachInteractionComplete(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWinch::execOnAckHookInteractionComplete)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckHookInteractionComplete(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWinch::execOnRep_WinchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_WinchState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWinch::execOnWinchSabotaged)
	{
		P_GET_UBOOL(Z_Param_bIsSabotaged);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWinchSabotaged(Z_Param_bIsSabotaged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWinch::execSetWinchEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWinchEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZWinch_BP_OnWinchStateChanged = FName(TEXT("BP_OnWinchStateChanged"));
	void ASBZWinch::BP_OnWinchStateChanged(ESBZWinchState OldState, ESBZWinchState NewState, bool bDoCosmetics)
	{
		SBZWinch_eventBP_OnWinchStateChanged_Parms Parms;
		Parms.OldState=OldState;
		Parms.NewState=NewState;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZWinch_BP_OnWinchStateChanged),&Parms);
	}
	static FName NAME_ASBZWinch_Multicast_SetWinchState = FName(TEXT("Multicast_SetWinchState"));
	void ASBZWinch::Multicast_SetWinchState(ESBZWinchState NewState)
	{
		SBZWinch_eventMulticast_SetWinchState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZWinch_Multicast_SetWinchState),&Parms);
	}
	void ASBZWinch::StaticRegisterNativesASBZWinch()
	{
		UClass* Class = ASBZWinch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetWinchState", &ASBZWinch::execMulticast_SetWinchState },
			{ "OnAckActivationInteractionComplete", &ASBZWinch::execOnAckActivationInteractionComplete },
			{ "OnAckHookAttachInteractionComplete", &ASBZWinch::execOnAckHookAttachInteractionComplete },
			{ "OnAckHookInteractionComplete", &ASBZWinch::execOnAckHookInteractionComplete },
			{ "OnRep_WinchState", &ASBZWinch::execOnRep_WinchState },
			{ "OnWinchSabotaged", &ASBZWinch::execOnWinchSabotaged },
			{ "SetWinchEnabled", &ASBZWinch::execSetWinchEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWinch_eventBP_OnWinchStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_ESBZWinchState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWinch_eventBP_OnWinchStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZWinchState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZWinch_eventBP_OnWinchStateChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZWinch_eventBP_OnWinchStateChanged_Parms), &Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWinch, nullptr, "BP_OnWinchStateChanged", nullptr, nullptr, sizeof(SBZWinch_eventBP_OnWinchStateChanged_Parms), Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWinch_Multicast_SetWinchState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZWinch_Multicast_SetWinchState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZWinch_Multicast_SetWinchState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWinch_eventMulticast_SetWinchState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZWinchState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWinch_Multicast_SetWinchState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWinch_Multicast_SetWinchState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWinch_Multicast_SetWinchState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWinch_Multicast_SetWinchState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWinch_Multicast_SetWinchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWinch, nullptr, "Multicast_SetWinchState", nullptr, nullptr, sizeof(SBZWinch_eventMulticast_SetWinchState_Parms), Z_Construct_UFunction_ASBZWinch_Multicast_SetWinchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_Multicast_SetWinchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWinch_Multicast_SetWinchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_Multicast_SetWinchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWinch_Multicast_SetWinchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWinch_Multicast_SetWinchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics
	{
		struct SBZWinch_eventOnAckActivationInteractionComplete_Parms
		{
			USBZBaseInteractableComponent* Interactable;
			USBZInteractorComponent* Interactor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWinch_eventOnAckActivationInteractionComplete_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWinch_eventOnAckActivationInteractionComplete_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZWinch_eventOnAckActivationInteractionComplete_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZWinch_eventOnAckActivationInteractionComplete_Parms), &Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWinch, nullptr, "OnAckActivationInteractionComplete", nullptr, nullptr, sizeof(SBZWinch_eventOnAckActivationInteractionComplete_Parms), Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics
	{
		struct SBZWinch_eventOnAckHookAttachInteractionComplete_Parms
		{
			USBZBaseInteractableComponent* Interactable;
			USBZInteractorComponent* Interactor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWinch_eventOnAckHookAttachInteractionComplete_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWinch_eventOnAckHookAttachInteractionComplete_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZWinch_eventOnAckHookAttachInteractionComplete_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZWinch_eventOnAckHookAttachInteractionComplete_Parms), &Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWinch, nullptr, "OnAckHookAttachInteractionComplete", nullptr, nullptr, sizeof(SBZWinch_eventOnAckHookAttachInteractionComplete_Parms), Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics
	{
		struct SBZWinch_eventOnAckHookInteractionComplete_Parms
		{
			USBZBaseInteractableComponent* Interactable;
			USBZInteractorComponent* Interactor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWinch_eventOnAckHookInteractionComplete_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWinch_eventOnAckHookInteractionComplete_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZWinch_eventOnAckHookInteractionComplete_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZWinch_eventOnAckHookInteractionComplete_Parms), &Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWinch, nullptr, "OnAckHookInteractionComplete", nullptr, nullptr, sizeof(SBZWinch_eventOnAckHookInteractionComplete_Parms), Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWinch_OnRep_WinchState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWinch_OnRep_WinchState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWinch_OnRep_WinchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWinch, nullptr, "OnRep_WinchState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWinch_OnRep_WinchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_OnRep_WinchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWinch_OnRep_WinchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWinch_OnRep_WinchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWinch_OnWinchSabotaged_Statics
	{
		struct SBZWinch_eventOnWinchSabotaged_Parms
		{
			bool bIsSabotaged;
		};
		static void NewProp_bIsSabotaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSabotaged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZWinch_OnWinchSabotaged_Statics::NewProp_bIsSabotaged_SetBit(void* Obj)
	{
		((SBZWinch_eventOnWinchSabotaged_Parms*)Obj)->bIsSabotaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZWinch_OnWinchSabotaged_Statics::NewProp_bIsSabotaged = { "bIsSabotaged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZWinch_eventOnWinchSabotaged_Parms), &Z_Construct_UFunction_ASBZWinch_OnWinchSabotaged_Statics::NewProp_bIsSabotaged_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWinch_OnWinchSabotaged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWinch_OnWinchSabotaged_Statics::NewProp_bIsSabotaged,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWinch_OnWinchSabotaged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWinch_OnWinchSabotaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWinch, nullptr, "OnWinchSabotaged", nullptr, nullptr, sizeof(SBZWinch_eventOnWinchSabotaged_Parms), Z_Construct_UFunction_ASBZWinch_OnWinchSabotaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_OnWinchSabotaged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWinch_OnWinchSabotaged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_OnWinchSabotaged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWinch_OnWinchSabotaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWinch_OnWinchSabotaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWinch_SetWinchEnabled_Statics
	{
		struct SBZWinch_eventSetWinchEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZWinch_SetWinchEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZWinch_eventSetWinchEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZWinch_SetWinchEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZWinch_eventSetWinchEnabled_Parms), &Z_Construct_UFunction_ASBZWinch_SetWinchEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWinch_SetWinchEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWinch_SetWinchEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWinch_SetWinchEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWinch_SetWinchEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWinch, nullptr, "SetWinchEnabled", nullptr, nullptr, sizeof(SBZWinch_eventSetWinchEnabled_Parms), Z_Construct_UFunction_ASBZWinch_SetWinchEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_SetWinchEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWinch_SetWinchEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWinch_SetWinchEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWinch_SetWinchEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWinch_SetWinchEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZWinch_NoRegister()
	{
		return ASBZWinch::StaticClass();
	}
	struct Z_Construct_UClass_ASBZWinch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWinchNeedsAdjusting_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWinchNeedsAdjusting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachInteraction;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SabotagePointArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SabotagePointArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SabotagePointArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInterruptedExternally_MetaData[];
#endif
		static void NewProp_bIsInterruptedExternally_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInterruptedExternally;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterruptionInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterruptionInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSabotagePointsOnNeedsAdjusting_MetaData[];
#endif
		static void NewProp_bEnableSabotagePointsOnNeedsAdjusting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSabotagePointsOnNeedsAdjusting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentWinchState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWinchState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentWinchState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenInterrupted_MetaData[];
#endif
		static void NewProp_bHasBeenInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenInterrupted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsExternallySabotaged_MetaData[];
#endif
		static void NewProp_bIsExternallySabotaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExternallySabotaged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZWinch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZBreachingEquipmentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZWinch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZWinch_BP_OnWinchStateChanged, "BP_OnWinchStateChanged" }, // 100637502
		{ &Z_Construct_UFunction_ASBZWinch_Multicast_SetWinchState, "Multicast_SetWinchState" }, // 3754091700
		{ &Z_Construct_UFunction_ASBZWinch_OnAckActivationInteractionComplete, "OnAckActivationInteractionComplete" }, // 531456153
		{ &Z_Construct_UFunction_ASBZWinch_OnAckHookAttachInteractionComplete, "OnAckHookAttachInteractionComplete" }, // 4162101818
		{ &Z_Construct_UFunction_ASBZWinch_OnAckHookInteractionComplete, "OnAckHookInteractionComplete" }, // 31608235
		{ &Z_Construct_UFunction_ASBZWinch_OnRep_WinchState, "OnRep_WinchState" }, // 2881143233
		{ &Z_Construct_UFunction_ASBZWinch_OnWinchSabotaged, "OnWinchSabotaged" }, // 441136370
		{ &Z_Construct_UFunction_ASBZWinch_SetWinchEnabled, "SetWinchEnabled" }, // 856644282
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWinch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWinch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWinch_Statics::NewProp_OnWinchNeedsAdjusting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWinch" },
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZWinch_Statics::NewProp_OnWinchNeedsAdjusting = { "OnWinchNeedsAdjusting", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWinch, OnWinchNeedsAdjusting), Z_Construct_UDelegateFunction_Starbreeze_SBZBreachingEquipmentDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZWinch_Statics::NewProp_OnWinchNeedsAdjusting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWinch_Statics::NewProp_OnWinchNeedsAdjusting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWinch_Statics::NewProp_StartInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWinch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWinch_Statics::NewProp_StartInteraction = { "StartInteraction", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWinch, StartInteraction), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZWinch_Statics::NewProp_StartInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWinch_Statics::NewProp_StartInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWinch_Statics::NewProp_GrabInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWinch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWinch_Statics::NewProp_GrabInteraction = { "GrabInteraction", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWinch, GrabInteraction), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZWinch_Statics::NewProp_GrabInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWinch_Statics::NewProp_GrabInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWinch_Statics::NewProp_AttachInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWinch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWinch_Statics::NewProp_AttachInteraction = { "AttachInteraction", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWinch, AttachInteraction), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZWinch_Statics::NewProp_AttachInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWinch_Statics::NewProp_AttachInteraction_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWinch_Statics::NewProp_SabotagePointArray_Inner = { "SabotagePointArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSabotagePoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWinch_Statics::NewProp_SabotagePointArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWinch" },
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZWinch_Statics::NewProp_SabotagePointArray = { "SabotagePointArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWinch, SabotagePointArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZWinch_Statics::NewProp_SabotagePointArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWinch_Statics::NewProp_SabotagePointArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWinch_Statics::NewProp_bIsInterruptedExternally_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWinch" },
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	void Z_Construct_UClass_ASBZWinch_Statics::NewProp_bIsInterruptedExternally_SetBit(void* Obj)
	{
		((ASBZWinch*)Obj)->bIsInterruptedExternally = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZWinch_Statics::NewProp_bIsInterruptedExternally = { "bIsInterruptedExternally", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZWinch), &Z_Construct_UClass_ASBZWinch_Statics::NewProp_bIsInterruptedExternally_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZWinch_Statics::NewProp_bIsInterruptedExternally_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWinch_Statics::NewProp_bIsInterruptedExternally_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWinch_Statics::NewProp_InterruptionInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWinch" },
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZWinch_Statics::NewProp_InterruptionInterval = { "InterruptionInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWinch, InterruptionInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_ASBZWinch_Statics::NewProp_InterruptionInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWinch_Statics::NewProp_InterruptionInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWinch_Statics::NewProp_bEnableSabotagePointsOnNeedsAdjusting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWinch" },
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	void Z_Construct_UClass_ASBZWinch_Statics::NewProp_bEnableSabotagePointsOnNeedsAdjusting_SetBit(void* Obj)
	{
		((ASBZWinch*)Obj)->bEnableSabotagePointsOnNeedsAdjusting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZWinch_Statics::NewProp_bEnableSabotagePointsOnNeedsAdjusting = { "bEnableSabotagePointsOnNeedsAdjusting", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZWinch), &Z_Construct_UClass_ASBZWinch_Statics::NewProp_bEnableSabotagePointsOnNeedsAdjusting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZWinch_Statics::NewProp_bEnableSabotagePointsOnNeedsAdjusting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWinch_Statics::NewProp_bEnableSabotagePointsOnNeedsAdjusting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWinch_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWinch" },
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZWinch_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWinch, Seed), METADATA_PARAMS(Z_Construct_UClass_ASBZWinch_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWinch_Statics::NewProp_Seed_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZWinch_Statics::NewProp_CurrentWinchState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWinch_Statics::NewProp_CurrentWinchState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWinch" },
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZWinch_Statics::NewProp_CurrentWinchState = { "CurrentWinchState", "OnRep_WinchState", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWinch, CurrentWinchState), Z_Construct_UEnum_Starbreeze_ESBZWinchState, METADATA_PARAMS(Z_Construct_UClass_ASBZWinch_Statics::NewProp_CurrentWinchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWinch_Statics::NewProp_CurrentWinchState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWinch_Statics::NewProp_bHasBeenInterrupted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWinch" },
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	void Z_Construct_UClass_ASBZWinch_Statics::NewProp_bHasBeenInterrupted_SetBit(void* Obj)
	{
		((ASBZWinch*)Obj)->bHasBeenInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZWinch_Statics::NewProp_bHasBeenInterrupted = { "bHasBeenInterrupted", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZWinch), &Z_Construct_UClass_ASBZWinch_Statics::NewProp_bHasBeenInterrupted_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZWinch_Statics::NewProp_bHasBeenInterrupted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWinch_Statics::NewProp_bHasBeenInterrupted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWinch_Statics::NewProp_bIsExternallySabotaged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWinch" },
		{ "ModuleRelativePath", "Public/SBZWinch.h" },
	};
#endif
	void Z_Construct_UClass_ASBZWinch_Statics::NewProp_bIsExternallySabotaged_SetBit(void* Obj)
	{
		((ASBZWinch*)Obj)->bIsExternallySabotaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZWinch_Statics::NewProp_bIsExternallySabotaged = { "bIsExternallySabotaged", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZWinch), &Z_Construct_UClass_ASBZWinch_Statics::NewProp_bIsExternallySabotaged_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZWinch_Statics::NewProp_bIsExternallySabotaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWinch_Statics::NewProp_bIsExternallySabotaged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZWinch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWinch_Statics::NewProp_OnWinchNeedsAdjusting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWinch_Statics::NewProp_StartInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWinch_Statics::NewProp_GrabInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWinch_Statics::NewProp_AttachInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWinch_Statics::NewProp_SabotagePointArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWinch_Statics::NewProp_SabotagePointArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWinch_Statics::NewProp_bIsInterruptedExternally,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWinch_Statics::NewProp_InterruptionInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWinch_Statics::NewProp_bEnableSabotagePointsOnNeedsAdjusting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWinch_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWinch_Statics::NewProp_CurrentWinchState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWinch_Statics::NewProp_CurrentWinchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWinch_Statics::NewProp_bHasBeenInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWinch_Statics::NewProp_bIsExternallySabotaged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZWinch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZWinch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZWinch_Statics::ClassParams = {
		&ASBZWinch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZWinch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWinch_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZWinch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWinch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZWinch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZWinch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZWinch, 905286351);
	template<> STARBREEZE_API UClass* StaticClass<ASBZWinch>()
	{
		return ASBZWinch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZWinch(Z_Construct_UClass_ASBZWinch, &ASBZWinch::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZWinch"), false, nullptr, nullptr, nullptr);

	void ASBZWinch::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentWinchState(TEXT("CurrentWinchState"));

		const bool bIsValid = true
			&& Name_CurrentWinchState == ClassReps[(int32)ENetFields_Private::CurrentWinchState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZWinch"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZWinch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
