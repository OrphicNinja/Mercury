// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPocketDrill.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPocketDrill() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPocketDrill_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPocketDrill();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBreachingEquipmentBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionNotificationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPocketDrill::execMulticast_ReduceDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ReduceDuration_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPocketDrill::execOnActivationComplete)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActivationComplete(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPocketDrill::execOnAdjustInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAdjustInteraction(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPocketDrill::execOnAdjustInteractionAborted)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAdjustInteractionAborted(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPocketDrill::execOnAdjustInteractionStarted)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAdjustInteractionStarted(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPocketDrill::execOnRep_IsEnabled)
	{
		P_GET_UBOOL(Z_Param_bOldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsEnabled(Z_Param_bOldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPocketDrill::execOnUnjamInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnjamInteraction(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPocketDrill::execSetActive)
	{
		P_GET_UBOOL(Z_Param_bIsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param_bIsActive);
		P_NATIVE_END;
	}
	static FName NAME_ASBZPocketDrill_Multicast_ReduceDuration = FName(TEXT("Multicast_ReduceDuration"));
	void ASBZPocketDrill::Multicast_ReduceDuration()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPocketDrill_Multicast_ReduceDuration),NULL);
	}
	void ASBZPocketDrill::StaticRegisterNativesASBZPocketDrill()
	{
		UClass* Class = ASBZPocketDrill::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_ReduceDuration", &ASBZPocketDrill::execMulticast_ReduceDuration },
			{ "OnActivationComplete", &ASBZPocketDrill::execOnActivationComplete },
			{ "OnAdjustInteraction", &ASBZPocketDrill::execOnAdjustInteraction },
			{ "OnAdjustInteractionAborted", &ASBZPocketDrill::execOnAdjustInteractionAborted },
			{ "OnAdjustInteractionStarted", &ASBZPocketDrill::execOnAdjustInteractionStarted },
			{ "OnRep_IsEnabled", &ASBZPocketDrill::execOnRep_IsEnabled },
			{ "OnUnjamInteraction", &ASBZPocketDrill::execOnUnjamInteraction },
			{ "SetActive", &ASBZPocketDrill::execSetActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPocketDrill_Multicast_ReduceDuration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPocketDrill_Multicast_ReduceDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPocketDrill_Multicast_ReduceDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPocketDrill, nullptr, "Multicast_ReduceDuration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPocketDrill_Multicast_ReduceDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_Multicast_ReduceDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPocketDrill_Multicast_ReduceDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPocketDrill_Multicast_ReduceDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics
	{
		struct SBZPocketDrill_eventOnActivationComplete_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPocketDrill_eventOnActivationComplete_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPocketDrill_eventOnActivationComplete_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZPocketDrill_eventOnActivationComplete_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPocketDrill_eventOnActivationComplete_Parms), &Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPocketDrill, nullptr, "OnActivationComplete", nullptr, nullptr, sizeof(SBZPocketDrill_eventOnActivationComplete_Parms), Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics
	{
		struct SBZPocketDrill_eventOnAdjustInteraction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPocketDrill_eventOnAdjustInteraction_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPocketDrill_eventOnAdjustInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZPocketDrill_eventOnAdjustInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPocketDrill_eventOnAdjustInteraction_Parms), &Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPocketDrill, nullptr, "OnAdjustInteraction", nullptr, nullptr, sizeof(SBZPocketDrill_eventOnAdjustInteraction_Parms), Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics
	{
		struct SBZPocketDrill_eventOnAdjustInteractionAborted_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPocketDrill_eventOnAdjustInteractionAborted_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPocketDrill_eventOnAdjustInteractionAborted_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZPocketDrill_eventOnAdjustInteractionAborted_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPocketDrill_eventOnAdjustInteractionAborted_Parms), &Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPocketDrill, nullptr, "OnAdjustInteractionAborted", nullptr, nullptr, sizeof(SBZPocketDrill_eventOnAdjustInteractionAborted_Parms), Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics
	{
		struct SBZPocketDrill_eventOnAdjustInteractionStarted_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPocketDrill_eventOnAdjustInteractionStarted_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPocketDrill_eventOnAdjustInteractionStarted_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZPocketDrill_eventOnAdjustInteractionStarted_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPocketDrill_eventOnAdjustInteractionStarted_Parms), &Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPocketDrill, nullptr, "OnAdjustInteractionStarted", nullptr, nullptr, sizeof(SBZPocketDrill_eventOnAdjustInteractionStarted_Parms), Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPocketDrill_OnRep_IsEnabled_Statics
	{
		struct SBZPocketDrill_eventOnRep_IsEnabled_Parms
		{
			bool bOldValue;
		};
		static void NewProp_bOldValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPocketDrill_OnRep_IsEnabled_Statics::NewProp_bOldValue_SetBit(void* Obj)
	{
		((SBZPocketDrill_eventOnRep_IsEnabled_Parms*)Obj)->bOldValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPocketDrill_OnRep_IsEnabled_Statics::NewProp_bOldValue = { "bOldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPocketDrill_eventOnRep_IsEnabled_Parms), &Z_Construct_UFunction_ASBZPocketDrill_OnRep_IsEnabled_Statics::NewProp_bOldValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPocketDrill_OnRep_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPocketDrill_OnRep_IsEnabled_Statics::NewProp_bOldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPocketDrill_OnRep_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPocketDrill_OnRep_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPocketDrill, nullptr, "OnRep_IsEnabled", nullptr, nullptr, sizeof(SBZPocketDrill_eventOnRep_IsEnabled_Parms), Z_Construct_UFunction_ASBZPocketDrill_OnRep_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnRep_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPocketDrill_OnRep_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnRep_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPocketDrill_OnRep_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPocketDrill_OnRep_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics
	{
		struct SBZPocketDrill_eventOnUnjamInteraction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPocketDrill_eventOnUnjamInteraction_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPocketDrill_eventOnUnjamInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZPocketDrill_eventOnUnjamInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPocketDrill_eventOnUnjamInteraction_Parms), &Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPocketDrill, nullptr, "OnUnjamInteraction", nullptr, nullptr, sizeof(SBZPocketDrill_eventOnUnjamInteraction_Parms), Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPocketDrill_SetActive_Statics
	{
		struct SBZPocketDrill_eventSetActive_Parms
		{
			bool bIsActive;
		};
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPocketDrill_SetActive_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((SBZPocketDrill_eventSetActive_Parms*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPocketDrill_SetActive_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPocketDrill_eventSetActive_Parms), &Z_Construct_UFunction_ASBZPocketDrill_SetActive_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPocketDrill_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPocketDrill_SetActive_Statics::NewProp_bIsActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPocketDrill_SetActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPocketDrill_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPocketDrill, nullptr, "SetActive", nullptr, nullptr, sizeof(SBZPocketDrill_eventSetActive_Parms), Z_Construct_UFunction_ASBZPocketDrill_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPocketDrill_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPocketDrill_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPocketDrill_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPocketDrill_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPocketDrill_NoRegister()
	{
		return ASBZPocketDrill::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPocketDrill_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationAreaComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivationAreaComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotorMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MotorMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisassembleMarkerAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisassembleMarkerAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfNeededAdjusts_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfNeededAdjusts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SliceOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartActive_MetaData[];
#endif
		static void NewProp_bStartActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnjamInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnjamInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdjustInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivationInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlarmNotificationAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlarmNotificationAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotorEndingXPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MotorEndingXPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotorStartingXPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MotorStartingXPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustsReached_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AdjustsReached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrillMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrillMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressPerSecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPocketDrill_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZBreachingEquipmentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPocketDrill_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPocketDrill_Multicast_ReduceDuration, "Multicast_ReduceDuration" }, // 338508155
		{ &Z_Construct_UFunction_ASBZPocketDrill_OnActivationComplete, "OnActivationComplete" }, // 3250019120
		{ &Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteraction, "OnAdjustInteraction" }, // 27750403
		{ &Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionAborted, "OnAdjustInteractionAborted" }, // 2265166796
		{ &Z_Construct_UFunction_ASBZPocketDrill_OnAdjustInteractionStarted, "OnAdjustInteractionStarted" }, // 3590232720
		{ &Z_Construct_UFunction_ASBZPocketDrill_OnRep_IsEnabled, "OnRep_IsEnabled" }, // 1975535102
		{ &Z_Construct_UFunction_ASBZPocketDrill_OnUnjamInteraction, "OnUnjamInteraction" }, // 2381230488
		{ &Z_Construct_UFunction_ASBZPocketDrill_SetActive, "SetActive" }, // 3031721157
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPocketDrill.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_WidgetComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPocketDrill, WidgetComponent), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_WidgetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_WidgetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPocketDrill, MeshComponent), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_ActivationAreaComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_ActivationAreaComponent = { "ActivationAreaComponent", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPocketDrill, ActivationAreaComponent), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_ActivationAreaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_ActivationAreaComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MotorMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MotorMeshComponent = { "MotorMeshComponent", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPocketDrill, MotorMeshComponent), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MotorMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MotorMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_DisassembleMarkerAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_DisassembleMarkerAsset = { "DisassembleMarkerAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPocketDrill, DisassembleMarkerAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_DisassembleMarkerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_DisassembleMarkerAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_NumberOfNeededAdjusts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_NumberOfNeededAdjusts = { "NumberOfNeededAdjusts", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPocketDrill, NumberOfNeededAdjusts), METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_NumberOfNeededAdjusts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_NumberOfNeededAdjusts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_SliceOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_SliceOffset = { "SliceOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPocketDrill, SliceOffset), METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_SliceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_SliceOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AdjustTimeSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AdjustTimeSeconds = { "AdjustTimeSeconds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPocketDrill, AdjustTimeSeconds), METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AdjustTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AdjustTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_bStartActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_bStartActive_SetBit(void* Obj)
	{
		((ASBZPocketDrill*)Obj)->bStartActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_bStartActive = { "bStartActive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPocketDrill), &Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_bStartActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_bStartActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_bStartActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_UnjamInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_UnjamInteraction = { "UnjamInteraction", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPocketDrill, UnjamInteraction), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_UnjamInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_UnjamInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AdjustInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AdjustInteraction = { "AdjustInteraction", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPocketDrill, AdjustInteraction), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AdjustInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AdjustInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_ActivationInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_ActivationInteraction = { "ActivationInteraction", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPocketDrill, ActivationInteraction), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_ActivationInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_ActivationInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AlarmNotificationAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AlarmNotificationAsset = { "AlarmNotificationAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPocketDrill, AlarmNotificationAsset), Z_Construct_UClass_USBZActionNotificationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AlarmNotificationAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AlarmNotificationAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MotorEndingXPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MotorEndingXPosition = { "MotorEndingXPosition", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPocketDrill, MotorEndingXPosition), METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MotorEndingXPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MotorEndingXPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MotorStartingXPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MotorStartingXPosition = { "MotorStartingXPosition", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPocketDrill, MotorStartingXPosition), METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MotorStartingXPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MotorStartingXPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AdjustsReached_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AdjustsReached = { "AdjustsReached", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPocketDrill, AdjustsReached), METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AdjustsReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AdjustsReached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_DrillMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_DrillMesh = { "DrillMesh", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPocketDrill, DrillMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_DrillMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_DrillMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((ASBZPocketDrill*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_bIsEnabled = { "bIsEnabled", "OnRep_IsEnabled", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPocketDrill), &Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_ProgressPerSecond_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPocketDrill" },
		{ "ModuleRelativePath", "Public/SBZPocketDrill.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_ProgressPerSecond = { "ProgressPerSecond", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPocketDrill, ProgressPerSecond), METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_ProgressPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_ProgressPerSecond_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPocketDrill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_WidgetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_ActivationAreaComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MotorMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_DisassembleMarkerAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_NumberOfNeededAdjusts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_SliceOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AdjustTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_bStartActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_UnjamInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AdjustInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_ActivationInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AlarmNotificationAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MotorEndingXPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_MotorStartingXPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_AdjustsReached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_DrillMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_bIsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPocketDrill_Statics::NewProp_ProgressPerSecond,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPocketDrill_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPocketDrill>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPocketDrill_Statics::ClassParams = {
		&ASBZPocketDrill::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPocketDrill_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPocketDrill_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPocketDrill_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPocketDrill()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPocketDrill_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPocketDrill, 508616434);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPocketDrill>()
	{
		return ASBZPocketDrill::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPocketDrill(Z_Construct_UClass_ASBZPocketDrill, &ASBZPocketDrill::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPocketDrill"), false, nullptr, nullptr, nullptr);

	void ASBZPocketDrill::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsEnabled(TEXT("bIsEnabled"));

		const bool bIsValid = true
			&& Name_bIsEnabled == ClassReps[(int32)ENetFields_Private::bIsEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZPocketDrill"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPocketDrill);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
