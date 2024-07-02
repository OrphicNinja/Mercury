// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLootProcessorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLootProcessorBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLootProcessorBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLootProcessorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagType_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZLootProcessorState();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnLootProcessorStateChangedDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSabotagePoint_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagFilter();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagHandle();
// End Cross Module References
	DEFINE_FUNCTION(ASBZLootProcessorBase::execMulticast_SetCurrentProcessingIndex)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetCurrentProcessingIndex_Implementation(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLootProcessorBase::execMulticast_SetState)
	{
		P_GET_ENUM(ESBZLootProcessorState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetState_Implementation(ESBZLootProcessorState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLootProcessorBase::execMulticast_UpdateBagCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewBagCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_UpdateBagCount_Implementation(Z_Param_NewBagCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLootProcessorBase::execOnBagBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBagBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLootProcessorBase::execOnInteractionEnabledStateChanged)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InteractableComponent);
		P_GET_UBOOL(Z_Param_bInNewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractionEnabledStateChanged(Z_Param_InteractableComponent,Z_Param_bInNewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLootProcessorBase::execOnRep_BagCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BagCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLootProcessorBase::execOnRep_CurrentProcessingIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentProcessingIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLootProcessorBase::execOnRep_CurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLootProcessorBase::execOnSabotagedStateChanged)
	{
		P_GET_UBOOL(Z_Param_bSabotaged);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSabotagedStateChanged(Z_Param_bSabotaged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLootProcessorBase::execOnServerClaimBagInteractComplete)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerClaimBagInteractComplete(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLootProcessorBase::execPauseProcessing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseProcessing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLootProcessorBase::execResumeProcessing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeProcessing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLootProcessorBase::execSetInteractionEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZLootProcessorBase_BP_BagCountUpdated = FName(TEXT("BP_BagCountUpdated"));
	void ASBZLootProcessorBase::BP_BagCountUpdated(int32 NumOfBags)
	{
		SBZLootProcessorBase_eventBP_BagCountUpdated_Parms Parms;
		Parms.NumOfBags=NumOfBags;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLootProcessorBase_BP_BagCountUpdated),&Parms);
	}
	static FName NAME_ASBZLootProcessorBase_BP_OnBagProcessed = FName(TEXT("BP_OnBagProcessed"));
	void ASBZLootProcessorBase::BP_OnBagProcessed(const USBZBagType* OldBagType, const USBZBagType* NewBagType)
	{
		SBZLootProcessorBase_eventBP_OnBagProcessed_Parms Parms;
		Parms.OldBagType=OldBagType;
		Parms.NewBagType=NewBagType;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLootProcessorBase_BP_OnBagProcessed),&Parms);
	}
	static FName NAME_ASBZLootProcessorBase_BP_OnRunningStateChanged = FName(TEXT("BP_OnRunningStateChanged"));
	void ASBZLootProcessorBase::BP_OnRunningStateChanged(ESBZLootProcessorState NewState, bool bDoCosmetics, bool bIsDedicatedServer)
	{
		SBZLootProcessorBase_eventBP_OnRunningStateChanged_Parms Parms;
		Parms.NewState=NewState;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		Parms.bIsDedicatedServer=bIsDedicatedServer ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLootProcessorBase_BP_OnRunningStateChanged),&Parms);
	}
	static FName NAME_ASBZLootProcessorBase_Multicast_SetCurrentProcessingIndex = FName(TEXT("Multicast_SetCurrentProcessingIndex"));
	void ASBZLootProcessorBase::Multicast_SetCurrentProcessingIndex(uint8 Index)
	{
		SBZLootProcessorBase_eventMulticast_SetCurrentProcessingIndex_Parms Parms;
		Parms.Index=Index;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLootProcessorBase_Multicast_SetCurrentProcessingIndex),&Parms);
	}
	static FName NAME_ASBZLootProcessorBase_Multicast_SetState = FName(TEXT("Multicast_SetState"));
	void ASBZLootProcessorBase::Multicast_SetState(ESBZLootProcessorState NewState)
	{
		SBZLootProcessorBase_eventMulticast_SetState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLootProcessorBase_Multicast_SetState),&Parms);
	}
	static FName NAME_ASBZLootProcessorBase_Multicast_UpdateBagCount = FName(TEXT("Multicast_UpdateBagCount"));
	void ASBZLootProcessorBase::Multicast_UpdateBagCount(int32 NewBagCount)
	{
		SBZLootProcessorBase_eventMulticast_UpdateBagCount_Parms Parms;
		Parms.NewBagCount=NewBagCount;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLootProcessorBase_Multicast_UpdateBagCount),&Parms);
	}
	void ASBZLootProcessorBase::StaticRegisterNativesASBZLootProcessorBase()
	{
		UClass* Class = ASBZLootProcessorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetCurrentProcessingIndex", &ASBZLootProcessorBase::execMulticast_SetCurrentProcessingIndex },
			{ "Multicast_SetState", &ASBZLootProcessorBase::execMulticast_SetState },
			{ "Multicast_UpdateBagCount", &ASBZLootProcessorBase::execMulticast_UpdateBagCount },
			{ "OnBagBeginOverlap", &ASBZLootProcessorBase::execOnBagBeginOverlap },
			{ "OnInteractionEnabledStateChanged", &ASBZLootProcessorBase::execOnInteractionEnabledStateChanged },
			{ "OnRep_BagCount", &ASBZLootProcessorBase::execOnRep_BagCount },
			{ "OnRep_CurrentProcessingIndex", &ASBZLootProcessorBase::execOnRep_CurrentProcessingIndex },
			{ "OnRep_CurrentState", &ASBZLootProcessorBase::execOnRep_CurrentState },
			{ "OnSabotagedStateChanged", &ASBZLootProcessorBase::execOnSabotagedStateChanged },
			{ "OnServerClaimBagInteractComplete", &ASBZLootProcessorBase::execOnServerClaimBagInteractComplete },
			{ "PauseProcessing", &ASBZLootProcessorBase::execPauseProcessing },
			{ "ResumeProcessing", &ASBZLootProcessorBase::execResumeProcessing },
			{ "SetInteractionEnabled", &ASBZLootProcessorBase::execSetInteractionEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZLootProcessorBase_BP_BagCountUpdated_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOfBags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_BP_BagCountUpdated_Statics::NewProp_NumOfBags = { "NumOfBags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLootProcessorBase_eventBP_BagCountUpdated_Parms, NumOfBags), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLootProcessorBase_BP_BagCountUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_BP_BagCountUpdated_Statics::NewProp_NumOfBags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_BP_BagCountUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLootProcessorBase_BP_BagCountUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLootProcessorBase, nullptr, "BP_BagCountUpdated", nullptr, nullptr, sizeof(SBZLootProcessorBase_eventBP_BagCountUpdated_Parms), Z_Construct_UFunction_ASBZLootProcessorBase_BP_BagCountUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_BP_BagCountUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_BP_BagCountUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_BP_BagCountUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLootProcessorBase_BP_BagCountUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLootProcessorBase_BP_BagCountUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldBagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldBagType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewBagType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics::NewProp_OldBagType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics::NewProp_OldBagType = { "OldBagType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLootProcessorBase_eventBP_OnBagProcessed_Parms, OldBagType), Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics::NewProp_OldBagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics::NewProp_OldBagType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics::NewProp_NewBagType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics::NewProp_NewBagType = { "NewBagType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLootProcessorBase_eventBP_OnBagProcessed_Parms, NewBagType), Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics::NewProp_NewBagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics::NewProp_NewBagType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics::NewProp_OldBagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics::NewProp_NewBagType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLootProcessorBase, nullptr, "BP_OnBagProcessed", nullptr, nullptr, sizeof(SBZLootProcessorBase_eventBP_OnBagProcessed_Parms), Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static void NewProp_bIsDedicatedServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDedicatedServer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLootProcessorBase_eventBP_OnRunningStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZLootProcessorState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZLootProcessorBase_eventBP_OnRunningStateChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLootProcessorBase_eventBP_OnRunningStateChanged_Parms), &Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::NewProp_bIsDedicatedServer_SetBit(void* Obj)
	{
		((SBZLootProcessorBase_eventBP_OnRunningStateChanged_Parms*)Obj)->bIsDedicatedServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::NewProp_bIsDedicatedServer = { "bIsDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLootProcessorBase_eventBP_OnRunningStateChanged_Parms), &Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::NewProp_bIsDedicatedServer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::NewProp_bDoCosmetics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::NewProp_bIsDedicatedServer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLootProcessorBase, nullptr, "BP_OnRunningStateChanged", nullptr, nullptr, sizeof(SBZLootProcessorBase_eventBP_OnRunningStateChanged_Parms), Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetCurrentProcessingIndex_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetCurrentProcessingIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLootProcessorBase_eventMulticast_SetCurrentProcessingIndex_Parms, Index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetCurrentProcessingIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetCurrentProcessingIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetCurrentProcessingIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetCurrentProcessingIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLootProcessorBase, nullptr, "Multicast_SetCurrentProcessingIndex", nullptr, nullptr, sizeof(SBZLootProcessorBase_eventMulticast_SetCurrentProcessingIndex_Parms), Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetCurrentProcessingIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetCurrentProcessingIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetCurrentProcessingIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetCurrentProcessingIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetCurrentProcessingIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetCurrentProcessingIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLootProcessorBase_eventMulticast_SetState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZLootProcessorState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLootProcessorBase, nullptr, "Multicast_SetState", nullptr, nullptr, sizeof(SBZLootProcessorBase_eventMulticast_SetState_Parms), Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_UpdateBagCount_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewBagCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_UpdateBagCount_Statics::NewProp_NewBagCount = { "NewBagCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLootProcessorBase_eventMulticast_UpdateBagCount_Parms, NewBagCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_UpdateBagCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_UpdateBagCount_Statics::NewProp_NewBagCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_UpdateBagCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_UpdateBagCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLootProcessorBase, nullptr, "Multicast_UpdateBagCount", nullptr, nullptr, sizeof(SBZLootProcessorBase_eventMulticast_UpdateBagCount_Parms), Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_UpdateBagCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_UpdateBagCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_UpdateBagCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_UpdateBagCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_UpdateBagCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_UpdateBagCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics
	{
		struct SBZLootProcessorBase_eventOnBagBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLootProcessorBase_eventOnBagBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLootProcessorBase_eventOnBagBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLootProcessorBase_eventOnBagBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLootProcessorBase_eventOnBagBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SBZLootProcessorBase_eventOnBagBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLootProcessorBase_eventOnBagBeginOverlap_Parms), &Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLootProcessorBase_eventOnBagBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLootProcessorBase, nullptr, "OnBagBeginOverlap", nullptr, nullptr, sizeof(SBZLootProcessorBase_eventOnBagBeginOverlap_Parms), Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged_Statics
	{
		struct SBZLootProcessorBase_eventOnInteractionEnabledStateChanged_Parms
		{
			const USBZBaseInteractableComponent* InteractableComponent;
			bool bInNewState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
		static void NewProp_bInNewState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInNewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLootProcessorBase_eventOnInteractionEnabledStateChanged_Parms, InteractableComponent), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent_MetaData)) };
	void Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged_Statics::NewProp_bInNewState_SetBit(void* Obj)
	{
		((SBZLootProcessorBase_eventOnInteractionEnabledStateChanged_Parms*)Obj)->bInNewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged_Statics::NewProp_bInNewState = { "bInNewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLootProcessorBase_eventOnInteractionEnabledStateChanged_Parms), &Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged_Statics::NewProp_bInNewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged_Statics::NewProp_bInNewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLootProcessorBase, nullptr, "OnInteractionEnabledStateChanged", nullptr, nullptr, sizeof(SBZLootProcessorBase_eventOnInteractionEnabledStateChanged_Parms), Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_BagCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_BagCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_BagCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLootProcessorBase, nullptr, "OnRep_BagCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_BagCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_BagCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_BagCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_BagCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_CurrentProcessingIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_CurrentProcessingIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_CurrentProcessingIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLootProcessorBase, nullptr, "OnRep_CurrentProcessingIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_CurrentProcessingIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_CurrentProcessingIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_CurrentProcessingIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_CurrentProcessingIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_CurrentState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_CurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_CurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLootProcessorBase, nullptr, "OnRep_CurrentState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_CurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_CurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_CurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_CurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLootProcessorBase_OnSabotagedStateChanged_Statics
	{
		struct SBZLootProcessorBase_eventOnSabotagedStateChanged_Parms
		{
			bool bSabotaged;
		};
		static void NewProp_bSabotaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSabotaged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZLootProcessorBase_OnSabotagedStateChanged_Statics::NewProp_bSabotaged_SetBit(void* Obj)
	{
		((SBZLootProcessorBase_eventOnSabotagedStateChanged_Parms*)Obj)->bSabotaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_OnSabotagedStateChanged_Statics::NewProp_bSabotaged = { "bSabotaged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLootProcessorBase_eventOnSabotagedStateChanged_Parms), &Z_Construct_UFunction_ASBZLootProcessorBase_OnSabotagedStateChanged_Statics::NewProp_bSabotaged_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLootProcessorBase_OnSabotagedStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_OnSabotagedStateChanged_Statics::NewProp_bSabotaged,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_OnSabotagedStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLootProcessorBase_OnSabotagedStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLootProcessorBase, nullptr, "OnSabotagedStateChanged", nullptr, nullptr, sizeof(SBZLootProcessorBase_eventOnSabotagedStateChanged_Parms), Z_Construct_UFunction_ASBZLootProcessorBase_OnSabotagedStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_OnSabotagedStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_OnSabotagedStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_OnSabotagedStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLootProcessorBase_OnSabotagedStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLootProcessorBase_OnSabotagedStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics
	{
		struct SBZLootProcessorBase_eventOnServerClaimBagInteractComplete_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLootProcessorBase_eventOnServerClaimBagInteractComplete_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLootProcessorBase_eventOnServerClaimBagInteractComplete_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZLootProcessorBase_eventOnServerClaimBagInteractComplete_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLootProcessorBase_eventOnServerClaimBagInteractComplete_Parms), &Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLootProcessorBase, nullptr, "OnServerClaimBagInteractComplete", nullptr, nullptr, sizeof(SBZLootProcessorBase_eventOnServerClaimBagInteractComplete_Parms), Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLootProcessorBase_PauseProcessing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_PauseProcessing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLootProcessorBase_PauseProcessing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLootProcessorBase, nullptr, "PauseProcessing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_PauseProcessing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_PauseProcessing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLootProcessorBase_PauseProcessing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLootProcessorBase_PauseProcessing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLootProcessorBase_ResumeProcessing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_ResumeProcessing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLootProcessorBase_ResumeProcessing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLootProcessorBase, nullptr, "ResumeProcessing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_ResumeProcessing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_ResumeProcessing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLootProcessorBase_ResumeProcessing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLootProcessorBase_ResumeProcessing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLootProcessorBase_SetInteractionEnabled_Statics
	{
		struct SBZLootProcessorBase_eventSetInteractionEnabled_Parms
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
	void Z_Construct_UFunction_ASBZLootProcessorBase_SetInteractionEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZLootProcessorBase_eventSetInteractionEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLootProcessorBase_SetInteractionEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLootProcessorBase_eventSetInteractionEnabled_Parms), &Z_Construct_UFunction_ASBZLootProcessorBase_SetInteractionEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLootProcessorBase_SetInteractionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLootProcessorBase_SetInteractionEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessorBase_SetInteractionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLootProcessorBase_SetInteractionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLootProcessorBase, nullptr, "SetInteractionEnabled", nullptr, nullptr, sizeof(SBZLootProcessorBase_eventSetInteractionEnabled_Parms), Z_Construct_UFunction_ASBZLootProcessorBase_SetInteractionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_SetInteractionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessorBase_SetInteractionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessorBase_SetInteractionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLootProcessorBase_SetInteractionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLootProcessorBase_SetInteractionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZLootProcessorBase_NoRegister()
	{
		return ASBZLootProcessorBase::StaticClass();
	}
	struct Z_Construct_UClass_ASBZLootProcessorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateChangedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateChangedDelegate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagTypeMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagTypeMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagTypeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BagTypeMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProcessDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanQueueProcessing_MetaData[];
#endif
		static void NewProp_bCanQueueProcessing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanQueueProcessing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClaimBagInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClaimBagInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BagCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentProcessingIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_CurrentProcessingIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SabotagePointArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SabotagePointArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SabotagePointArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SabotagePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SabotagePoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SabotageRestoreState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SabotageRestoreState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SabotageRestoreState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagTypeToReturn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagTypeToReturn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MarkerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerComponentSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MarkerComponentSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BagFilter;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BagHandleQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagHandleQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BagHandleQueue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentBag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllowedBagTypeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedBagTypeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedBagTypeArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZLootProcessorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZLootProcessorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZLootProcessorBase_BP_BagCountUpdated, "BP_BagCountUpdated" }, // 2595781374
		{ &Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnBagProcessed, "BP_OnBagProcessed" }, // 2034317702
		{ &Z_Construct_UFunction_ASBZLootProcessorBase_BP_OnRunningStateChanged, "BP_OnRunningStateChanged" }, // 1076433237
		{ &Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetCurrentProcessingIndex, "Multicast_SetCurrentProcessingIndex" }, // 1029824516
		{ &Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_SetState, "Multicast_SetState" }, // 2242365621
		{ &Z_Construct_UFunction_ASBZLootProcessorBase_Multicast_UpdateBagCount, "Multicast_UpdateBagCount" }, // 2473466644
		{ &Z_Construct_UFunction_ASBZLootProcessorBase_OnBagBeginOverlap, "OnBagBeginOverlap" }, // 3114525842
		{ &Z_Construct_UFunction_ASBZLootProcessorBase_OnInteractionEnabledStateChanged, "OnInteractionEnabledStateChanged" }, // 1137347048
		{ &Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_BagCount, "OnRep_BagCount" }, // 537373613
		{ &Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_CurrentProcessingIndex, "OnRep_CurrentProcessingIndex" }, // 2882397551
		{ &Z_Construct_UFunction_ASBZLootProcessorBase_OnRep_CurrentState, "OnRep_CurrentState" }, // 3574177844
		{ &Z_Construct_UFunction_ASBZLootProcessorBase_OnSabotagedStateChanged, "OnSabotagedStateChanged" }, // 685073132
		{ &Z_Construct_UFunction_ASBZLootProcessorBase_OnServerClaimBagInteractComplete, "OnServerClaimBagInteractComplete" }, // 719224366
		{ &Z_Construct_UFunction_ASBZLootProcessorBase_PauseProcessing, "PauseProcessing" }, // 1177985723
		{ &Z_Construct_UFunction_ASBZLootProcessorBase_ResumeProcessing, "ResumeProcessing" }, // 3689053819
		{ &Z_Construct_UFunction_ASBZLootProcessorBase_SetInteractionEnabled, "SetInteractionEnabled" }, // 1281161403
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLootProcessorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_OnStateChangedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_OnStateChangedDelegate = { "OnStateChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, OnStateChangedDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZOnLootProcessorStateChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_OnStateChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_OnStateChangedDelegate_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagTypeMap_ValueProp = { "BagTypeMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagTypeMap_Key_KeyProp = { "BagTypeMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagTypeMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagTypeMap = { "BagTypeMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, BagTypeMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagTypeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagTypeMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_ProcessDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_ProcessDuration = { "ProcessDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, ProcessDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_ProcessDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_ProcessDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_bCanQueueProcessing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_bCanQueueProcessing_SetBit(void* Obj)
	{
		((ASBZLootProcessorBase*)Obj)->bCanQueueProcessing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_bCanQueueProcessing = { "bCanQueueProcessing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZLootProcessorBase), &Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_bCanQueueProcessing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_bCanQueueProcessing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_bCanQueueProcessing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerAsset = { "MarkerAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, MarkerAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_ClaimBagInteractable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_ClaimBagInteractable = { "ClaimBagInteractable", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, ClaimBagInteractable), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_ClaimBagInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_ClaimBagInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BoxComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_CurrentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_CurrentState = { "CurrentState", "OnRep_CurrentState", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, CurrentState), Z_Construct_UEnum_Starbreeze_ESBZLootProcessorState, METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_CurrentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagCount = { "BagCount", "OnRep_BagCount", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, BagCount), METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_CurrentProcessingIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_CurrentProcessingIndex = { "CurrentProcessingIndex", "OnRep_CurrentProcessingIndex", (EPropertyFlags)0x0020080100002021, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, CurrentProcessingIndex), METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_CurrentProcessingIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_CurrentProcessingIndex_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotagePointArray_Inner = { "SabotagePointArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSabotagePoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotagePointArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotagePointArray = { "SabotagePointArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, SabotagePointArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotagePointArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotagePointArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotagePoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotagePoint = { "SabotagePoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, SabotagePoint), Z_Construct_UClass_ASBZSabotagePoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotagePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotagePoint_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotageRestoreState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotageRestoreState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotageRestoreState = { "SabotageRestoreState", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, SabotageRestoreState), Z_Construct_UEnum_Starbreeze_ESBZLootProcessorState, METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotageRestoreState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotageRestoreState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagTypeToReturn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagTypeToReturn = { "BagTypeToReturn", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, BagTypeToReturn), Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagTypeToReturn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagTypeToReturn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerID = { "MarkerID", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, MarkerID), METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerComponentSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerComponentSelector = { "MarkerComponentSelector", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, MarkerComponentSelector), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerComponentSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerComponentSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerComponent = { "MarkerComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, MarkerComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagFilter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagFilter = { "BagFilter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, BagFilter), Z_Construct_UScriptStruct_FSBZBagFilter, METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagFilter_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagHandleQueue_Inner = { "BagHandleQueue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagHandleQueue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagHandleQueue = { "BagHandleQueue", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, BagHandleQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagHandleQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagHandleQueue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_CurrentBag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_CurrentBag = { "CurrentBag", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, CurrentBag), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_CurrentBag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_CurrentBag_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_AllowedBagTypeArray_Inner = { "AllowedBagTypeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_AllowedBagTypeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootProcessorBase" },
		{ "ModuleRelativePath", "Public/SBZLootProcessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_AllowedBagTypeArray = { "AllowedBagTypeArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLootProcessorBase, AllowedBagTypeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_AllowedBagTypeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_AllowedBagTypeArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZLootProcessorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_OnStateChangedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagTypeMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagTypeMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagTypeMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_ProcessDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_bCanQueueProcessing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_ClaimBagInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_CurrentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_CurrentProcessingIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotagePointArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotagePointArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotagePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotageRestoreState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_SabotageRestoreState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagTypeToReturn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerComponentSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_MarkerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagHandleQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_BagHandleQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_CurrentBag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_AllowedBagTypeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLootProcessorBase_Statics::NewProp_AllowedBagTypeArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZLootProcessorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZLootProcessorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZLootProcessorBase_Statics::ClassParams = {
		&ASBZLootProcessorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZLootProcessorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZLootProcessorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZLootProcessorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZLootProcessorBase, 4244419942);
	template<> STARBREEZE_API UClass* StaticClass<ASBZLootProcessorBase>()
	{
		return ASBZLootProcessorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZLootProcessorBase(Z_Construct_UClass_ASBZLootProcessorBase, &ASBZLootProcessorBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZLootProcessorBase"), false, nullptr, nullptr, nullptr);

	void ASBZLootProcessorBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentState(TEXT("CurrentState"));
		static const FName Name_BagCount(TEXT("BagCount"));
		static const FName Name_CurrentProcessingIndex(TEXT("CurrentProcessingIndex"));

		const bool bIsValid = true
			&& Name_CurrentState == ClassReps[(int32)ENetFields_Private::CurrentState].Property->GetFName()
			&& Name_BagCount == ClassReps[(int32)ENetFields_Private::BagCount].Property->GetFName()
			&& Name_CurrentProcessingIndex == ClassReps[(int32)ENetFields_Private::CurrentProcessingIndex].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZLootProcessorBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZLootProcessorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
