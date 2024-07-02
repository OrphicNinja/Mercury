// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInstantLoot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInstantLoot() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZInstantLoot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZInstantLoot();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZLootedSignature__DelegateSignature();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZInstantLoot::execHandleAckComplete)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InteractableComp);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAckComplete(Z_Param_InteractableComp,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZInstantLoot::execHandleAckRejectedPredicted)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAckRejectedPredicted(Z_Param_InInteractable,Z_Param_InInteractor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZInstantLoot::execHandlePredictedEnd)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePredictedEnd(Z_Param_InInteractable,Z_Param_InInteractor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZInstantLoot::execOnRep_IsLooted)
	{
		P_GET_UBOOL(Z_Param_bOldIsLooted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsLooted(Z_Param_bOldIsLooted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZInstantLoot::execSetInteractionEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionEnabled(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZInstantLoot_OnLooted = FName(TEXT("OnLooted"));
	void ASBZInstantLoot::OnLooted(bool bDoCosmetics)
	{
		SBZInstantLoot_eventOnLooted_Parms Parms;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZInstantLoot_OnLooted),&Parms);
	}
	void ASBZInstantLoot::StaticRegisterNativesASBZInstantLoot()
	{
		UClass* Class = ASBZInstantLoot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleAckComplete", &ASBZInstantLoot::execHandleAckComplete },
			{ "HandleAckRejectedPredicted", &ASBZInstantLoot::execHandleAckRejectedPredicted },
			{ "HandlePredictedEnd", &ASBZInstantLoot::execHandlePredictedEnd },
			{ "OnRep_IsLooted", &ASBZInstantLoot::execOnRep_IsLooted },
			{ "SetInteractionEnabled", &ASBZInstantLoot::execSetInteractionEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics
	{
		struct SBZInstantLoot_eventHandleAckComplete_Parms
		{
			USBZBaseInteractableComponent* InteractableComp;
			USBZInteractorComponent* Interactor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComp;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::NewProp_InteractableComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::NewProp_InteractableComp = { "InteractableComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInstantLoot_eventHandleAckComplete_Parms, InteractableComp), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::NewProp_InteractableComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::NewProp_InteractableComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInstantLoot_eventHandleAckComplete_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZInstantLoot_eventHandleAckComplete_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInstantLoot_eventHandleAckComplete_Parms), &Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::NewProp_InteractableComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInstantLoot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZInstantLoot, nullptr, "HandleAckComplete", nullptr, nullptr, sizeof(SBZInstantLoot_eventHandleAckComplete_Parms), Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics
	{
		struct SBZInstantLoot_eventHandleAckRejectedPredicted_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* InInteractor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInstantLoot_eventHandleAckRejectedPredicted_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInstantLoot_eventHandleAckRejectedPredicted_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZInstantLoot_eventHandleAckRejectedPredicted_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInstantLoot_eventHandleAckRejectedPredicted_Parms), &Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInstantLoot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZInstantLoot, nullptr, "HandleAckRejectedPredicted", nullptr, nullptr, sizeof(SBZInstantLoot_eventHandleAckRejectedPredicted_Parms), Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics
	{
		struct SBZInstantLoot_eventHandlePredictedEnd_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* InInteractor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInstantLoot_eventHandlePredictedEnd_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInstantLoot_eventHandlePredictedEnd_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZInstantLoot_eventHandlePredictedEnd_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInstantLoot_eventHandlePredictedEnd_Parms), &Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInstantLoot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZInstantLoot, nullptr, "HandlePredictedEnd", nullptr, nullptr, sizeof(SBZInstantLoot_eventHandlePredictedEnd_Parms), Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZInstantLoot_OnLooted_Statics
	{
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZInstantLoot_OnLooted_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZInstantLoot_eventOnLooted_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZInstantLoot_OnLooted_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInstantLoot_eventOnLooted_Parms), &Z_Construct_UFunction_ASBZInstantLoot_OnLooted_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZInstantLoot_OnLooted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInstantLoot_OnLooted_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInstantLoot_OnLooted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInstantLoot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZInstantLoot_OnLooted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZInstantLoot, nullptr, "OnLooted", nullptr, nullptr, sizeof(SBZInstantLoot_eventOnLooted_Parms), Z_Construct_UFunction_ASBZInstantLoot_OnLooted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInstantLoot_OnLooted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZInstantLoot_OnLooted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInstantLoot_OnLooted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZInstantLoot_OnLooted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZInstantLoot_OnLooted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZInstantLoot_OnRep_IsLooted_Statics
	{
		struct SBZInstantLoot_eventOnRep_IsLooted_Parms
		{
			bool bOldIsLooted;
		};
		static void NewProp_bOldIsLooted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOldIsLooted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZInstantLoot_OnRep_IsLooted_Statics::NewProp_bOldIsLooted_SetBit(void* Obj)
	{
		((SBZInstantLoot_eventOnRep_IsLooted_Parms*)Obj)->bOldIsLooted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZInstantLoot_OnRep_IsLooted_Statics::NewProp_bOldIsLooted = { "bOldIsLooted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInstantLoot_eventOnRep_IsLooted_Parms), &Z_Construct_UFunction_ASBZInstantLoot_OnRep_IsLooted_Statics::NewProp_bOldIsLooted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZInstantLoot_OnRep_IsLooted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInstantLoot_OnRep_IsLooted_Statics::NewProp_bOldIsLooted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInstantLoot_OnRep_IsLooted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInstantLoot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZInstantLoot_OnRep_IsLooted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZInstantLoot, nullptr, "OnRep_IsLooted", nullptr, nullptr, sizeof(SBZInstantLoot_eventOnRep_IsLooted_Parms), Z_Construct_UFunction_ASBZInstantLoot_OnRep_IsLooted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInstantLoot_OnRep_IsLooted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZInstantLoot_OnRep_IsLooted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInstantLoot_OnRep_IsLooted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZInstantLoot_OnRep_IsLooted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZInstantLoot_OnRep_IsLooted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZInstantLoot_SetInteractionEnabled_Statics
	{
		struct SBZInstantLoot_eventSetInteractionEnabled_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZInstantLoot_SetInteractionEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((SBZInstantLoot_eventSetInteractionEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZInstantLoot_SetInteractionEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInstantLoot_eventSetInteractionEnabled_Parms), &Z_Construct_UFunction_ASBZInstantLoot_SetInteractionEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZInstantLoot_SetInteractionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInstantLoot_SetInteractionEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInstantLoot_SetInteractionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInstantLoot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZInstantLoot_SetInteractionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZInstantLoot, nullptr, "SetInteractionEnabled", nullptr, nullptr, sizeof(SBZInstantLoot_eventSetInteractionEnabled_Parms), Z_Construct_UFunction_ASBZInstantLoot_SetInteractionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInstantLoot_SetInteractionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZInstantLoot_SetInteractionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInstantLoot_SetInteractionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZInstantLoot_SetInteractionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZInstantLoot_SetInteractionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZInstantLoot_NoRegister()
	{
		return ASBZInstantLoot::StaticClass();
	}
	struct Z_Construct_UClass_ASBZInstantLoot_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLootedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLootedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDestroyOnLooted_MetaData[];
#endif
		static void NewProp_bIsDestroyOnLooted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDestroyOnLooted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLootedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnLootedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLooted_MetaData[];
#endif
		static void NewProp_bIsLooted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLooted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZInstantLoot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZInstantLoot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZInstantLoot_HandleAckComplete, "HandleAckComplete" }, // 4052048395
		{ &Z_Construct_UFunction_ASBZInstantLoot_HandleAckRejectedPredicted, "HandleAckRejectedPredicted" }, // 1740688397
		{ &Z_Construct_UFunction_ASBZInstantLoot_HandlePredictedEnd, "HandlePredictedEnd" }, // 2435133622
		{ &Z_Construct_UFunction_ASBZInstantLoot_OnLooted, "OnLooted" }, // 2242603068
		{ &Z_Construct_UFunction_ASBZInstantLoot_OnRep_IsLooted, "OnRep_IsLooted" }, // 364601675
		{ &Z_Construct_UFunction_ASBZInstantLoot_SetInteractionEnabled, "SetInteractionEnabled" }, // 4180691190
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInstantLoot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInstantLoot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInstantLoot.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_Interactable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInstantLoot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZInstantLoot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZInstantLoot, Interactable), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_OutlineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInstantLoot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZInstantLoot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_OutlineComponent = { "OutlineComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZInstantLoot, OutlineComponent), Z_Construct_UClass_USBZOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_OutlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_OutlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_OnLootedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInstantLoot" },
		{ "ModuleRelativePath", "Public/SBZInstantLoot.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_OnLootedDelegate = { "OnLootedDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZInstantLoot, OnLootedDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZLootedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_OnLootedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_OnLootedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_bIsDestroyOnLooted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInstantLoot" },
		{ "ModuleRelativePath", "Public/SBZInstantLoot.h" },
	};
#endif
	void Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_bIsDestroyOnLooted_SetBit(void* Obj)
	{
		((ASBZInstantLoot*)Obj)->bIsDestroyOnLooted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_bIsDestroyOnLooted = { "bIsDestroyOnLooted", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZInstantLoot), &Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_bIsDestroyOnLooted_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_bIsDestroyOnLooted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_bIsDestroyOnLooted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_OnLootedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInstantLoot" },
		{ "ModuleRelativePath", "Public/SBZInstantLoot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_OnLootedEvent = { "OnLootedEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZInstantLoot, OnLootedEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_OnLootedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_OnLootedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_bIsLooted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInstantLoot" },
		{ "ModuleRelativePath", "Public/SBZInstantLoot.h" },
	};
#endif
	void Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_bIsLooted_SetBit(void* Obj)
	{
		((ASBZInstantLoot*)Obj)->bIsLooted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_bIsLooted = { "bIsLooted", "OnRep_IsLooted", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZInstantLoot), &Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_bIsLooted_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_bIsLooted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_bIsLooted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZInstantLoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_OutlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_OnLootedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_bIsDestroyOnLooted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_OnLootedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZInstantLoot_Statics::NewProp_bIsLooted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZInstantLoot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZInstantLoot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZInstantLoot_Statics::ClassParams = {
		&ASBZInstantLoot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZInstantLoot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInstantLoot_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZInstantLoot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInstantLoot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZInstantLoot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZInstantLoot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZInstantLoot, 197929589);
	template<> STARBREEZE_API UClass* StaticClass<ASBZInstantLoot>()
	{
		return ASBZInstantLoot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZInstantLoot(Z_Construct_UClass_ASBZInstantLoot, &ASBZInstantLoot::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZInstantLoot"), false, nullptr, nullptr, nullptr);

	void ASBZInstantLoot::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsLooted(TEXT("bIsLooted"));

		const bool bIsValid = true
			&& Name_bIsLooted == ClassReps[(int32)ENetFields_Private::bIsLooted].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZInstantLoot"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZInstantLoot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
