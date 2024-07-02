// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHackableActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHackableActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHackableActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHackableActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHackableActorState();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHackableActorInterruptReason();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHackableActorUnlockMode();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZHackableActorDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZHackableActorInterruptedDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionInstance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionSlot_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShoutTargetComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbilityQuery_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameplayEffectData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHackableProgressData();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHackableDisplayText();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionInteractableInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCodeViewerInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectiveInformationInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZHackableActor::execSetAttractorInstigator)
	{
		P_GET_OBJECT(APawn,Z_Param_NewInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttractorInstigator(Z_Param_NewInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execActivateHackableActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateHackableActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execAddDisplayText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDisplayText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execInterruptHacking)
	{
		P_GET_ENUM(ESBZHackableActorInterruptReason,Z_Param_InReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InterruptHacking(ESBZHackableActorInterruptReason(Z_Param_InReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execMulticast_AddDisplayText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_AddDisplayText_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execMulticast_ResetHackableActor)
	{
		P_GET_UBOOL(Z_Param_bKeepCustomMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ResetHackableActor_Implementation(Z_Param_bKeepCustomMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execMulticast_SetState)
	{
		P_GET_ENUM(ESBZHackableActorState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetState_Implementation(ESBZHackableActorState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execMulticast_SetUnlockMode)
	{
		P_GET_ENUM(ESBZHackableActorUnlockMode,Z_Param_InUnlockMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetUnlockMode_Implementation(ESBZHackableActorUnlockMode(Z_Param_InUnlockMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execMulticast_SetUpdateFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewUpdateFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetUpdateFrequency_Implementation(Z_Param_NewUpdateFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execOnAckCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckCompleteInteraction(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execOnInteractionStateChanged)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractableComponent);
		P_GET_UBOOL(Z_Param_bInNewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractionStateChanged(Z_Param_InInteractableComponent,Z_Param_bInNewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execOnRep_CurrentState)
	{
		P_GET_ENUM(ESBZHackableActorState,Z_Param_OldState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentState(ESBZHackableActorState(Z_Param_OldState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execOnRep_DisplayTextIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DisplayTextIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execOnRep_IsDisplayTextAdded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsDisplayTextAdded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execOnRep_ProgressData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ProgressData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execOnRep_UnlockMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_UnlockMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execResetHackableActor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDuration);
		P_GET_UBOOL(Z_Param_bKeepCustomMessage);
		P_GET_ENUM(ESBZHackableActorState,Z_Param_ResetState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetHackableActor(Z_Param_InDuration,Z_Param_bKeepCustomMessage,ESBZHackableActorState(Z_Param_ResetState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execSetInteractionEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execSetUnlockMode)
	{
		P_GET_ENUM(ESBZHackableActorUnlockMode,Z_Param_InUnlockMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUnlockMode(ESBZHackableActorUnlockMode(Z_Param_InUnlockMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackableActor::execUpdateDisplayTextImportantInformation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IndexToUpdate);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDisplayTextImportantInformation(Z_Param_IndexToUpdate,Z_Param_Out_InText);
		P_NATIVE_END;
	}
	static FName NAME_ASBZHackableActor_BP_DisplayTextIndexChanged = FName(TEXT("BP_DisplayTextIndexChanged"));
	void ASBZHackableActor::BP_DisplayTextIndexChanged(const int32 NewIndex)
	{
		SBZHackableActor_eventBP_DisplayTextIndexChanged_Parms Parms;
		Parms.NewIndex=NewIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASBZHackableActor_BP_DisplayTextIndexChanged),&Parms);
	}
	static FName NAME_ASBZHackableActor_BP_GainedAccess = FName(TEXT("BP_GainedAccess"));
	void ASBZHackableActor::BP_GainedAccess()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZHackableActor_BP_GainedAccess),NULL);
	}
	static FName NAME_ASBZHackableActor_BP_OnHackingStarted = FName(TEXT("BP_OnHackingStarted"));
	void ASBZHackableActor::BP_OnHackingStarted(FText const& ProcessText)
	{
		SBZHackableActor_eventBP_OnHackingStarted_Parms Parms;
		Parms.ProcessText=ProcessText;
		ProcessEvent(FindFunctionChecked(NAME_ASBZHackableActor_BP_OnHackingStarted),&Parms);
	}
	static FName NAME_ASBZHackableActor_BP_OnStateChanged = FName(TEXT("BP_OnStateChanged"));
	void ASBZHackableActor::BP_OnStateChanged(ESBZHackableActorState OldState, ESBZHackableActorState NewState)
	{
		SBZHackableActor_eventBP_OnStateChanged_Parms Parms;
		Parms.OldState=OldState;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZHackableActor_BP_OnStateChanged),&Parms);
	}
	static FName NAME_ASBZHackableActor_BP_OnUnlocked = FName(TEXT("BP_OnUnlocked"));
	void ASBZHackableActor::BP_OnUnlocked()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZHackableActor_BP_OnUnlocked),NULL);
	}
	static FName NAME_ASBZHackableActor_BP_UpdateCustomSuccessText = FName(TEXT("BP_UpdateCustomSuccessText"));
	void ASBZHackableActor::BP_UpdateCustomSuccessText(FText const& SucessText)
	{
		SBZHackableActor_eventBP_UpdateCustomSuccessText_Parms Parms;
		Parms.SucessText=SucessText;
		ProcessEvent(FindFunctionChecked(NAME_ASBZHackableActor_BP_UpdateCustomSuccessText),&Parms);
	}
	static FName NAME_ASBZHackableActor_BP_UpdateProgressBar = FName(TEXT("BP_UpdateProgressBar"));
	void ASBZHackableActor::BP_UpdateProgressBar(int32 ProgressDone)
	{
		SBZHackableActor_eventBP_UpdateProgressBar_Parms Parms;
		Parms.ProgressDone=ProgressDone;
		ProcessEvent(FindFunctionChecked(NAME_ASBZHackableActor_BP_UpdateProgressBar),&Parms);
	}
	static FName NAME_ASBZHackableActor_Multicast_AddDisplayText = FName(TEXT("Multicast_AddDisplayText"));
	void ASBZHackableActor::Multicast_AddDisplayText()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZHackableActor_Multicast_AddDisplayText),NULL);
	}
	static FName NAME_ASBZHackableActor_Multicast_ResetHackableActor = FName(TEXT("Multicast_ResetHackableActor"));
	void ASBZHackableActor::Multicast_ResetHackableActor(bool bKeepCustomMessage)
	{
		SBZHackableActor_eventMulticast_ResetHackableActor_Parms Parms;
		Parms.bKeepCustomMessage=bKeepCustomMessage ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZHackableActor_Multicast_ResetHackableActor),&Parms);
	}
	static FName NAME_ASBZHackableActor_Multicast_SetState = FName(TEXT("Multicast_SetState"));
	void ASBZHackableActor::Multicast_SetState(ESBZHackableActorState NewState)
	{
		SBZHackableActor_eventMulticast_SetState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZHackableActor_Multicast_SetState),&Parms);
	}
	static FName NAME_ASBZHackableActor_Multicast_SetUnlockMode = FName(TEXT("Multicast_SetUnlockMode"));
	void ASBZHackableActor::Multicast_SetUnlockMode(ESBZHackableActorUnlockMode InUnlockMode)
	{
		SBZHackableActor_eventMulticast_SetUnlockMode_Parms Parms;
		Parms.InUnlockMode=InUnlockMode;
		ProcessEvent(FindFunctionChecked(NAME_ASBZHackableActor_Multicast_SetUnlockMode),&Parms);
	}
	static FName NAME_ASBZHackableActor_Multicast_SetUpdateFrequency = FName(TEXT("Multicast_SetUpdateFrequency"));
	void ASBZHackableActor::Multicast_SetUpdateFrequency(float NewUpdateFrequency)
	{
		SBZHackableActor_eventMulticast_SetUpdateFrequency_Parms Parms;
		Parms.NewUpdateFrequency=NewUpdateFrequency;
		ProcessEvent(FindFunctionChecked(NAME_ASBZHackableActor_Multicast_SetUpdateFrequency),&Parms);
	}
	static FName NAME_ASBZHackableActor_VisionPredicate = FName(TEXT("VisionPredicate"));
	bool ASBZHackableActor::VisionPredicate(const AActor* Viewer) const
	{
		SBZHackableActor_eventVisionPredicate_Parms Parms;
		Parms.Viewer=Viewer;
		const_cast<ASBZHackableActor*>(this)->ProcessEvent(FindFunctionChecked(NAME_ASBZHackableActor_VisionPredicate),&Parms);
		return !!Parms.ReturnValue;
	}
	void ASBZHackableActor::StaticRegisterNativesASBZHackableActor()
	{
		UClass* Class = ASBZHackableActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateHackableActor", &ASBZHackableActor::execActivateHackableActor },
			{ "AddDisplayText", &ASBZHackableActor::execAddDisplayText },
			{ "InterruptHacking", &ASBZHackableActor::execInterruptHacking },
			{ "Multicast_AddDisplayText", &ASBZHackableActor::execMulticast_AddDisplayText },
			{ "Multicast_ResetHackableActor", &ASBZHackableActor::execMulticast_ResetHackableActor },
			{ "Multicast_SetState", &ASBZHackableActor::execMulticast_SetState },
			{ "Multicast_SetUnlockMode", &ASBZHackableActor::execMulticast_SetUnlockMode },
			{ "Multicast_SetUpdateFrequency", &ASBZHackableActor::execMulticast_SetUpdateFrequency },
			{ "OnAckCompleteInteraction", &ASBZHackableActor::execOnAckCompleteInteraction },
			{ "OnInteractionStateChanged", &ASBZHackableActor::execOnInteractionStateChanged },
			{ "OnRep_CurrentState", &ASBZHackableActor::execOnRep_CurrentState },
			{ "OnRep_DisplayTextIndex", &ASBZHackableActor::execOnRep_DisplayTextIndex },
			{ "OnRep_IsDisplayTextAdded", &ASBZHackableActor::execOnRep_IsDisplayTextAdded },
			{ "OnRep_ProgressData", &ASBZHackableActor::execOnRep_ProgressData },
			{ "OnRep_UnlockMode", &ASBZHackableActor::execOnRep_UnlockMode },
			{ "ResetHackableActor", &ASBZHackableActor::execResetHackableActor },
			{ "SetAttractorInstigator", &ASBZHackableActor::execSetAttractorInstigator },
			{ "SetEnabled", &ASBZHackableActor::execSetEnabled },
			{ "SetInteractionEnabled", &ASBZHackableActor::execSetInteractionEnabled },
			{ "SetUnlockMode", &ASBZHackableActor::execSetUnlockMode },
			{ "UpdateDisplayTextImportantInformation", &ASBZHackableActor::execUpdateDisplayTextImportantInformation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZHackableActor_ActivateHackableActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_ActivateHackableActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_ActivateHackableActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "ActivateHackableActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_ActivateHackableActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_ActivateHackableActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_ActivateHackableActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_ActivateHackableActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_AddDisplayText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_AddDisplayText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_AddDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "AddDisplayText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_AddDisplayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_AddDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_AddDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_AddDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_BP_DisplayTextIndexChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_BP_DisplayTextIndexChanged_Statics::NewProp_NewIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZHackableActor_BP_DisplayTextIndexChanged_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventBP_DisplayTextIndexChanged_Parms, NewIndex), METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_BP_DisplayTextIndexChanged_Statics::NewProp_NewIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_BP_DisplayTextIndexChanged_Statics::NewProp_NewIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_BP_DisplayTextIndexChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_BP_DisplayTextIndexChanged_Statics::NewProp_NewIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_BP_DisplayTextIndexChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_BP_DisplayTextIndexChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "BP_DisplayTextIndexChanged", nullptr, nullptr, sizeof(SBZHackableActor_eventBP_DisplayTextIndexChanged_Parms), Z_Construct_UFunction_ASBZHackableActor_BP_DisplayTextIndexChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_BP_DisplayTextIndexChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_BP_DisplayTextIndexChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_BP_DisplayTextIndexChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_BP_DisplayTextIndexChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_BP_DisplayTextIndexChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_BP_GainedAccess_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_BP_GainedAccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_BP_GainedAccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "BP_GainedAccess", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_BP_GainedAccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_BP_GainedAccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_BP_GainedAccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_BP_GainedAccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_BP_OnHackingStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ProcessText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_BP_OnHackingStarted_Statics::NewProp_ProcessText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ASBZHackableActor_BP_OnHackingStarted_Statics::NewProp_ProcessText = { "ProcessText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventBP_OnHackingStarted_Parms, ProcessText), METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_BP_OnHackingStarted_Statics::NewProp_ProcessText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_BP_OnHackingStarted_Statics::NewProp_ProcessText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_BP_OnHackingStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_BP_OnHackingStarted_Statics::NewProp_ProcessText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_BP_OnHackingStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_BP_OnHackingStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "BP_OnHackingStarted", nullptr, nullptr, sizeof(SBZHackableActor_eventBP_OnHackingStarted_Parms), Z_Construct_UFunction_ASBZHackableActor_BP_OnHackingStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_BP_OnHackingStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_BP_OnHackingStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_BP_OnHackingStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_BP_OnHackingStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_BP_OnHackingStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventBP_OnStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_ESBZHackableActorState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventBP_OnStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZHackableActorState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "BP_OnStateChanged", nullptr, nullptr, sizeof(SBZHackableActor_eventBP_OnStateChanged_Parms), Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_BP_OnUnlocked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_BP_OnUnlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_BP_OnUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "BP_OnUnlocked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_BP_OnUnlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_BP_OnUnlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_BP_OnUnlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_BP_OnUnlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_BP_UpdateCustomSuccessText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SucessText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SucessText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_BP_UpdateCustomSuccessText_Statics::NewProp_SucessText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ASBZHackableActor_BP_UpdateCustomSuccessText_Statics::NewProp_SucessText = { "SucessText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventBP_UpdateCustomSuccessText_Parms, SucessText), METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_BP_UpdateCustomSuccessText_Statics::NewProp_SucessText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_BP_UpdateCustomSuccessText_Statics::NewProp_SucessText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_BP_UpdateCustomSuccessText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_BP_UpdateCustomSuccessText_Statics::NewProp_SucessText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_BP_UpdateCustomSuccessText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_BP_UpdateCustomSuccessText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "BP_UpdateCustomSuccessText", nullptr, nullptr, sizeof(SBZHackableActor_eventBP_UpdateCustomSuccessText_Parms), Z_Construct_UFunction_ASBZHackableActor_BP_UpdateCustomSuccessText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_BP_UpdateCustomSuccessText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_BP_UpdateCustomSuccessText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_BP_UpdateCustomSuccessText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_BP_UpdateCustomSuccessText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_BP_UpdateCustomSuccessText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_BP_UpdateProgressBar_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProgressDone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZHackableActor_BP_UpdateProgressBar_Statics::NewProp_ProgressDone = { "ProgressDone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventBP_UpdateProgressBar_Parms, ProgressDone), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_BP_UpdateProgressBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_BP_UpdateProgressBar_Statics::NewProp_ProgressDone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_BP_UpdateProgressBar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_BP_UpdateProgressBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "BP_UpdateProgressBar", nullptr, nullptr, sizeof(SBZHackableActor_eventBP_UpdateProgressBar_Parms), Z_Construct_UFunction_ASBZHackableActor_BP_UpdateProgressBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_BP_UpdateProgressBar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_BP_UpdateProgressBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_BP_UpdateProgressBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_BP_UpdateProgressBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_BP_UpdateProgressBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_InterruptHacking_Statics
	{
		struct SBZHackableActor_eventInterruptHacking_Parms
		{
			ESBZHackableActorInterruptReason InReason;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZHackableActor_InterruptHacking_Statics::NewProp_InReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZHackableActor_InterruptHacking_Statics::NewProp_InReason = { "InReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventInterruptHacking_Parms, InReason), Z_Construct_UEnum_Starbreeze_ESBZHackableActorInterruptReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_InterruptHacking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_InterruptHacking_Statics::NewProp_InReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_InterruptHacking_Statics::NewProp_InReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_InterruptHacking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_InterruptHacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "InterruptHacking", nullptr, nullptr, sizeof(SBZHackableActor_eventInterruptHacking_Parms), Z_Construct_UFunction_ASBZHackableActor_InterruptHacking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_InterruptHacking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_InterruptHacking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_InterruptHacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_InterruptHacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_InterruptHacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_Multicast_AddDisplayText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_Multicast_AddDisplayText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_Multicast_AddDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "Multicast_AddDisplayText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_Multicast_AddDisplayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_Multicast_AddDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_Multicast_AddDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_Multicast_AddDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_Multicast_ResetHackableActor_Statics
	{
		static void NewProp_bKeepCustomMessage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepCustomMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZHackableActor_Multicast_ResetHackableActor_Statics::NewProp_bKeepCustomMessage_SetBit(void* Obj)
	{
		((SBZHackableActor_eventMulticast_ResetHackableActor_Parms*)Obj)->bKeepCustomMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHackableActor_Multicast_ResetHackableActor_Statics::NewProp_bKeepCustomMessage = { "bKeepCustomMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHackableActor_eventMulticast_ResetHackableActor_Parms), &Z_Construct_UFunction_ASBZHackableActor_Multicast_ResetHackableActor_Statics::NewProp_bKeepCustomMessage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_Multicast_ResetHackableActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_Multicast_ResetHackableActor_Statics::NewProp_bKeepCustomMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_Multicast_ResetHackableActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_Multicast_ResetHackableActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "Multicast_ResetHackableActor", nullptr, nullptr, sizeof(SBZHackableActor_eventMulticast_ResetHackableActor_Parms), Z_Construct_UFunction_ASBZHackableActor_Multicast_ResetHackableActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_Multicast_ResetHackableActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_Multicast_ResetHackableActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_Multicast_ResetHackableActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_Multicast_ResetHackableActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_Multicast_ResetHackableActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_Multicast_SetState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZHackableActor_Multicast_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZHackableActor_Multicast_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventMulticast_SetState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZHackableActorState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_Multicast_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_Multicast_SetState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_Multicast_SetState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_Multicast_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_Multicast_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "Multicast_SetState", nullptr, nullptr, sizeof(SBZHackableActor_eventMulticast_SetState_Parms), Z_Construct_UFunction_ASBZHackableActor_Multicast_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_Multicast_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_Multicast_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_Multicast_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_Multicast_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_Multicast_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUnlockMode_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InUnlockMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InUnlockMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUnlockMode_Statics::NewProp_InUnlockMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUnlockMode_Statics::NewProp_InUnlockMode = { "InUnlockMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventMulticast_SetUnlockMode_Parms, InUnlockMode), Z_Construct_UEnum_Starbreeze_ESBZHackableActorUnlockMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUnlockMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUnlockMode_Statics::NewProp_InUnlockMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUnlockMode_Statics::NewProp_InUnlockMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUnlockMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUnlockMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "Multicast_SetUnlockMode", nullptr, nullptr, sizeof(SBZHackableActor_eventMulticast_SetUnlockMode_Parms), Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUnlockMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUnlockMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUnlockMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUnlockMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUnlockMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUnlockMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUpdateFrequency_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewUpdateFrequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUpdateFrequency_Statics::NewProp_NewUpdateFrequency = { "NewUpdateFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventMulticast_SetUpdateFrequency_Parms, NewUpdateFrequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUpdateFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUpdateFrequency_Statics::NewProp_NewUpdateFrequency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUpdateFrequency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUpdateFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "Multicast_SetUpdateFrequency", nullptr, nullptr, sizeof(SBZHackableActor_eventMulticast_SetUpdateFrequency_Parms), Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUpdateFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUpdateFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUpdateFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUpdateFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUpdateFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUpdateFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics
	{
		struct SBZHackableActor_eventOnAckCompleteInteraction_Parms
		{
			USBZBaseInteractableComponent* Interactable;
			USBZInteractorComponent* Interactor;
			bool bIsLocallyControlledInteractor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventOnAckCompleteInteraction_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventOnAckCompleteInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZHackableActor_eventOnAckCompleteInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHackableActor_eventOnAckCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "OnAckCompleteInteraction", nullptr, nullptr, sizeof(SBZHackableActor_eventOnAckCompleteInteraction_Parms), Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged_Statics
	{
		struct SBZHackableActor_eventOnInteractionStateChanged_Parms
		{
			const USBZBaseInteractableComponent* InInteractableComponent;
			bool bInNewState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractableComponent;
		static void NewProp_bInNewState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInNewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged_Statics::NewProp_InInteractableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged_Statics::NewProp_InInteractableComponent = { "InInteractableComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventOnInteractionStateChanged_Parms, InInteractableComponent), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged_Statics::NewProp_InInteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged_Statics::NewProp_InInteractableComponent_MetaData)) };
	void Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged_Statics::NewProp_bInNewState_SetBit(void* Obj)
	{
		((SBZHackableActor_eventOnInteractionStateChanged_Parms*)Obj)->bInNewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged_Statics::NewProp_bInNewState = { "bInNewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHackableActor_eventOnInteractionStateChanged_Parms), &Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged_Statics::NewProp_bInNewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged_Statics::NewProp_InInteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged_Statics::NewProp_bInNewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "OnInteractionStateChanged", nullptr, nullptr, sizeof(SBZHackableActor_eventOnInteractionStateChanged_Parms), Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_OnRep_CurrentState_Statics
	{
		struct SBZHackableActor_eventOnRep_CurrentState_Parms
		{
			ESBZHackableActorState OldState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZHackableActor_OnRep_CurrentState_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZHackableActor_OnRep_CurrentState_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventOnRep_CurrentState_Parms, OldState), Z_Construct_UEnum_Starbreeze_ESBZHackableActorState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_OnRep_CurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_OnRep_CurrentState_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_OnRep_CurrentState_Statics::NewProp_OldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_OnRep_CurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_OnRep_CurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "OnRep_CurrentState", nullptr, nullptr, sizeof(SBZHackableActor_eventOnRep_CurrentState_Parms), Z_Construct_UFunction_ASBZHackableActor_OnRep_CurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_OnRep_CurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_OnRep_CurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_OnRep_CurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_OnRep_CurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_OnRep_CurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_OnRep_DisplayTextIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_OnRep_DisplayTextIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_OnRep_DisplayTextIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "OnRep_DisplayTextIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_OnRep_DisplayTextIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_OnRep_DisplayTextIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_OnRep_DisplayTextIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_OnRep_DisplayTextIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_OnRep_IsDisplayTextAdded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_OnRep_IsDisplayTextAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_OnRep_IsDisplayTextAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "OnRep_IsDisplayTextAdded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_OnRep_IsDisplayTextAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_OnRep_IsDisplayTextAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_OnRep_IsDisplayTextAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_OnRep_IsDisplayTextAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_OnRep_ProgressData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_OnRep_ProgressData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_OnRep_ProgressData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "OnRep_ProgressData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_OnRep_ProgressData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_OnRep_ProgressData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_OnRep_ProgressData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_OnRep_ProgressData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_OnRep_UnlockMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_OnRep_UnlockMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_OnRep_UnlockMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "OnRep_UnlockMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_OnRep_UnlockMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_OnRep_UnlockMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_OnRep_UnlockMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_OnRep_UnlockMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics
	{
		struct SBZHackableActor_eventResetHackableActor_Parms
		{
			float InDuration;
			bool bKeepCustomMessage;
			ESBZHackableActorState ResetState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDuration;
		static void NewProp_bKeepCustomMessage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepCustomMessage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResetState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResetState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::NewProp_InDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::NewProp_InDuration = { "InDuration", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventResetHackableActor_Parms, InDuration), METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::NewProp_InDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::NewProp_InDuration_MetaData)) };
	void Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::NewProp_bKeepCustomMessage_SetBit(void* Obj)
	{
		((SBZHackableActor_eventResetHackableActor_Parms*)Obj)->bKeepCustomMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::NewProp_bKeepCustomMessage = { "bKeepCustomMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHackableActor_eventResetHackableActor_Parms), &Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::NewProp_bKeepCustomMessage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::NewProp_ResetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::NewProp_ResetState = { "ResetState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventResetHackableActor_Parms, ResetState), Z_Construct_UEnum_Starbreeze_ESBZHackableActorState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::NewProp_InDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::NewProp_bKeepCustomMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::NewProp_ResetState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::NewProp_ResetState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "ResetHackableActor", nullptr, nullptr, sizeof(SBZHackableActor_eventResetHackableActor_Parms), Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_SetAttractorInstigator_Statics
	{
		struct SBZHackableActor_eventSetAttractorInstigator_Parms
		{
			APawn* NewInstigator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZHackableActor_SetAttractorInstigator_Statics::NewProp_NewInstigator = { "NewInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventSetAttractorInstigator_Parms, NewInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_SetAttractorInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_SetAttractorInstigator_Statics::NewProp_NewInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_SetAttractorInstigator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_SetAttractorInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "SetAttractorInstigator", nullptr, nullptr, sizeof(SBZHackableActor_eventSetAttractorInstigator_Parms), Z_Construct_UFunction_ASBZHackableActor_SetAttractorInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_SetAttractorInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_SetAttractorInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_SetAttractorInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_SetAttractorInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_SetAttractorInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_SetEnabled_Statics
	{
		struct SBZHackableActor_eventSetEnabled_Parms
		{
			bool bEnabled;
			bool ReturnValue;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZHackableActor_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZHackableActor_eventSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHackableActor_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHackableActor_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZHackableActor_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZHackableActor_SetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZHackableActor_eventSetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHackableActor_SetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHackableActor_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZHackableActor_SetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_SetEnabled_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_SetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Fix for true pure virtual functions not being implemented\n" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
		{ "ToolTip", "Fix for true pure virtual functions not being implemented" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZHackableActor_eventSetEnabled_Parms), Z_Construct_UFunction_ASBZHackableActor_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_SetInteractionEnabled_Statics
	{
		struct SBZHackableActor_eventSetInteractionEnabled_Parms
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
	void Z_Construct_UFunction_ASBZHackableActor_SetInteractionEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZHackableActor_eventSetInteractionEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHackableActor_SetInteractionEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHackableActor_eventSetInteractionEnabled_Parms), &Z_Construct_UFunction_ASBZHackableActor_SetInteractionEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_SetInteractionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_SetInteractionEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_SetInteractionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_SetInteractionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "SetInteractionEnabled", nullptr, nullptr, sizeof(SBZHackableActor_eventSetInteractionEnabled_Parms), Z_Construct_UFunction_ASBZHackableActor_SetInteractionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_SetInteractionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_SetInteractionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_SetInteractionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_SetInteractionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_SetInteractionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_SetUnlockMode_Statics
	{
		struct SBZHackableActor_eventSetUnlockMode_Parms
		{
			ESBZHackableActorUnlockMode InUnlockMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InUnlockMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InUnlockMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZHackableActor_SetUnlockMode_Statics::NewProp_InUnlockMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZHackableActor_SetUnlockMode_Statics::NewProp_InUnlockMode = { "InUnlockMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventSetUnlockMode_Parms, InUnlockMode), Z_Construct_UEnum_Starbreeze_ESBZHackableActorUnlockMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_SetUnlockMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_SetUnlockMode_Statics::NewProp_InUnlockMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_SetUnlockMode_Statics::NewProp_InUnlockMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_SetUnlockMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_SetUnlockMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "SetUnlockMode", nullptr, nullptr, sizeof(SBZHackableActor_eventSetUnlockMode_Parms), Z_Construct_UFunction_ASBZHackableActor_SetUnlockMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_SetUnlockMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_SetUnlockMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_SetUnlockMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_SetUnlockMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_SetUnlockMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics
	{
		struct SBZHackableActor_eventUpdateDisplayTextImportantInformation_Parms
		{
			int32 IndexToUpdate;
			FText InText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexToUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndexToUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics::NewProp_IndexToUpdate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics::NewProp_IndexToUpdate = { "IndexToUpdate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventUpdateDisplayTextImportantInformation_Parms, IndexToUpdate), METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics::NewProp_IndexToUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics::NewProp_IndexToUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventUpdateDisplayTextImportantInformation_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics::NewProp_IndexToUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "UpdateDisplayTextImportantInformation", nullptr, nullptr, sizeof(SBZHackableActor_eventUpdateDisplayTextImportantInformation_Parms), Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackableActor_VisionPredicate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Viewer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Viewer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_VisionPredicate_Statics::NewProp_Viewer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZHackableActor_VisionPredicate_Statics::NewProp_Viewer = { "Viewer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackableActor_eventVisionPredicate_Parms, Viewer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_VisionPredicate_Statics::NewProp_Viewer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_VisionPredicate_Statics::NewProp_Viewer_MetaData)) };
	void Z_Construct_UFunction_ASBZHackableActor_VisionPredicate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZHackableActor_eventVisionPredicate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHackableActor_VisionPredicate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHackableActor_eventVisionPredicate_Parms), &Z_Construct_UFunction_ASBZHackableActor_VisionPredicate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackableActor_VisionPredicate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_VisionPredicate_Statics::NewProp_Viewer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackableActor_VisionPredicate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackableActor_VisionPredicate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackableActor_VisionPredicate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackableActor, nullptr, "VisionPredicate", nullptr, nullptr, sizeof(SBZHackableActor_eventVisionPredicate_Parms), Z_Construct_UFunction_ASBZHackableActor_VisionPredicate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_VisionPredicate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackableActor_VisionPredicate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackableActor_VisionPredicate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackableActor_VisionPredicate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackableActor_VisionPredicate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZHackableActor_NoRegister()
	{
		return ASBZHackableActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZHackableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHackingStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHackingStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHackingResumed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHackingResumed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHackingUnlocked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHackingUnlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHackingComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHackingComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHackingInterrupted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHackingInterrupted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttractorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeActionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeActionInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeActionSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoutTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShoutTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionMarker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FixMarker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackingMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HackingMarker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartActive_MetaData[];
#endif
		static void NewProp_bStartActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartActive;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UnlockMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UnlockMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemUnlockGameplayInteractionQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemUnlockGameplayInteractionQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectOnInteract_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayEffectOnInteract;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWillInterrupt_MetaData[];
#endif
		static void NewProp_bWillInterrupt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWillInterrupt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterruptionTimeInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterruptionTimeInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomProcessText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CustomProcessText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSuccessText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CustomSuccessText;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgressData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomVolumes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomVolumes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayTextArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTextArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisplayTextArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalDisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalDisplayText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalDisplayTextIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AdditionalDisplayTextIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOverwritingIndex_MetaData[];
#endif
		static void NewProp_bIsOverwritingIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOverwritingIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfCodesToView_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfCodesToView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CodeEmailIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CodeEmailIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDisplayTextIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentDisplayTextIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDisplayTextAdded_MetaData[];
#endif
		static void NewProp_bIsDisplayTextAdded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDisplayTextAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ObjectiveInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZHackableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZHackableActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZHackableActor_ActivateHackableActor, "ActivateHackableActor" }, // 3557893830
		{ &Z_Construct_UFunction_ASBZHackableActor_AddDisplayText, "AddDisplayText" }, // 2973221673
		{ &Z_Construct_UFunction_ASBZHackableActor_BP_DisplayTextIndexChanged, "BP_DisplayTextIndexChanged" }, // 2400691248
		{ &Z_Construct_UFunction_ASBZHackableActor_BP_GainedAccess, "BP_GainedAccess" }, // 1249452486
		{ &Z_Construct_UFunction_ASBZHackableActor_BP_OnHackingStarted, "BP_OnHackingStarted" }, // 442600909
		{ &Z_Construct_UFunction_ASBZHackableActor_BP_OnStateChanged, "BP_OnStateChanged" }, // 1864012105
		{ &Z_Construct_UFunction_ASBZHackableActor_BP_OnUnlocked, "BP_OnUnlocked" }, // 2261413600
		{ &Z_Construct_UFunction_ASBZHackableActor_BP_UpdateCustomSuccessText, "BP_UpdateCustomSuccessText" }, // 3971788723
		{ &Z_Construct_UFunction_ASBZHackableActor_BP_UpdateProgressBar, "BP_UpdateProgressBar" }, // 315256624
		{ &Z_Construct_UFunction_ASBZHackableActor_InterruptHacking, "InterruptHacking" }, // 741637453
		{ &Z_Construct_UFunction_ASBZHackableActor_Multicast_AddDisplayText, "Multicast_AddDisplayText" }, // 196538181
		{ &Z_Construct_UFunction_ASBZHackableActor_Multicast_ResetHackableActor, "Multicast_ResetHackableActor" }, // 2397720749
		{ &Z_Construct_UFunction_ASBZHackableActor_Multicast_SetState, "Multicast_SetState" }, // 3866777966
		{ &Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUnlockMode, "Multicast_SetUnlockMode" }, // 1103827517
		{ &Z_Construct_UFunction_ASBZHackableActor_Multicast_SetUpdateFrequency, "Multicast_SetUpdateFrequency" }, // 4051183546
		{ &Z_Construct_UFunction_ASBZHackableActor_OnAckCompleteInteraction, "OnAckCompleteInteraction" }, // 717433442
		{ &Z_Construct_UFunction_ASBZHackableActor_OnInteractionStateChanged, "OnInteractionStateChanged" }, // 811767374
		{ &Z_Construct_UFunction_ASBZHackableActor_OnRep_CurrentState, "OnRep_CurrentState" }, // 1828100769
		{ &Z_Construct_UFunction_ASBZHackableActor_OnRep_DisplayTextIndex, "OnRep_DisplayTextIndex" }, // 4070732421
		{ &Z_Construct_UFunction_ASBZHackableActor_OnRep_IsDisplayTextAdded, "OnRep_IsDisplayTextAdded" }, // 19942675
		{ &Z_Construct_UFunction_ASBZHackableActor_OnRep_ProgressData, "OnRep_ProgressData" }, // 4093853296
		{ &Z_Construct_UFunction_ASBZHackableActor_OnRep_UnlockMode, "OnRep_UnlockMode" }, // 4141269526
		{ &Z_Construct_UFunction_ASBZHackableActor_ResetHackableActor, "ResetHackableActor" }, // 1490165287
		{ &Z_Construct_UFunction_ASBZHackableActor_SetAttractorInstigator, "SetAttractorInstigator" }, // 2196126308
		{ &Z_Construct_UFunction_ASBZHackableActor_SetEnabled, "SetEnabled" }, // 1115438745
		{ &Z_Construct_UFunction_ASBZHackableActor_SetInteractionEnabled, "SetInteractionEnabled" }, // 3227594785
		{ &Z_Construct_UFunction_ASBZHackableActor_SetUnlockMode, "SetUnlockMode" }, // 3531033635
		{ &Z_Construct_UFunction_ASBZHackableActor_UpdateDisplayTextImportantInformation, "UpdateDisplayTextImportantInformation" }, // 1616460605
		{ &Z_Construct_UFunction_ASBZHackableActor_VisionPredicate, "VisionPredicate" }, // 1529453820
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHackableActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingStarted = { "OnHackingStarted", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, OnHackingStarted), Z_Construct_UDelegateFunction_Starbreeze_SBZHackableActorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingResumed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingResumed = { "OnHackingResumed", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, OnHackingResumed), Z_Construct_UDelegateFunction_Starbreeze_SBZHackableActorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingResumed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingResumed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingUnlocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingUnlocked = { "OnHackingUnlocked", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, OnHackingUnlocked), Z_Construct_UDelegateFunction_Starbreeze_SBZHackableActorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingUnlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingComplete = { "OnHackingComplete", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, OnHackingComplete), Z_Construct_UDelegateFunction_Starbreeze_SBZHackableActorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingInterrupted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingInterrupted = { "OnHackingInterrupted", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, OnHackingInterrupted), Z_Construct_UDelegateFunction_Starbreeze_SBZHackableActorInterruptedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingInterrupted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingInterrupted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_InteractableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, InteractableComponent), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_InteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_InteractableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OutlineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OutlineComponent = { "OutlineComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, OutlineComponent), Z_Construct_UClass_USBZOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OutlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OutlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_AttractorComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_AttractorComponent = { "AttractorComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, AttractorComponent), Z_Construct_UClass_USBZAIAttractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_AttractorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_AttractorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_LifeActionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_LifeActionComponent = { "LifeActionComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, LifeActionComponent), Z_Construct_UClass_USBZLifeActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_LifeActionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_LifeActionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_LifeActionInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_LifeActionInstance = { "LifeActionInstance", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, LifeActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_LifeActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_LifeActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_LifeActionSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_LifeActionSlot = { "LifeActionSlot", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, LifeActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_LifeActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_LifeActionSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ShoutTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ShoutTarget = { "ShoutTarget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, ShoutTarget), Z_Construct_UClass_USBZShoutTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ShoutTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ShoutTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_InteractionMarker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_InteractionMarker = { "InteractionMarker", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, InteractionMarker), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_InteractionMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_InteractionMarker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_FixMarker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_FixMarker = { "FixMarker", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, FixMarker), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_FixMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_FixMarker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_HackingMarker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_HackingMarker = { "HackingMarker", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, HackingMarker), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_HackingMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_HackingMarker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bStartActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bStartActive_SetBit(void* Obj)
	{
		((ASBZHackableActor*)Obj)->bStartActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bStartActive = { "bStartActive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZHackableActor), &Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bStartActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bStartActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bStartActive_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_UnlockMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_UnlockMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_UnlockMode = { "UnlockMode", "OnRep_UnlockMode", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, UnlockMode), Z_Construct_UEnum_Starbreeze_ESBZHackableActorUnlockMode, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_UnlockMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_UnlockMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_DurationSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_DurationSeconds = { "DurationSeconds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, DurationSeconds), METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_DurationSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_DurationSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ItemUnlockGameplayInteractionQuery_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ItemUnlockGameplayInteractionQuery = { "ItemUnlockGameplayInteractionQuery", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, ItemUnlockGameplayInteractionQuery), Z_Construct_UClass_USBZGameplayAbilityQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ItemUnlockGameplayInteractionQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ItemUnlockGameplayInteractionQuery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_GameplayEffectOnInteract_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_GameplayEffectOnInteract = { "GameplayEffectOnInteract", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, GameplayEffectOnInteract), Z_Construct_UScriptStruct_FSBZGameplayEffectData, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_GameplayEffectOnInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_GameplayEffectOnInteract_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bWillInterrupt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bWillInterrupt_SetBit(void* Obj)
	{
		((ASBZHackableActor*)Obj)->bWillInterrupt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bWillInterrupt = { "bWillInterrupt", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZHackableActor), &Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bWillInterrupt_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bWillInterrupt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bWillInterrupt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_InterruptionTimeInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_InterruptionTimeInterval = { "InterruptionTimeInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, InterruptionTimeInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_InterruptionTimeInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_InterruptionTimeInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CustomProcessText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CustomProcessText = { "CustomProcessText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, CustomProcessText), METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CustomProcessText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CustomProcessText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CustomSuccessText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CustomSuccessText = { "CustomSuccessText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, CustomSuccessText), METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CustomSuccessText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CustomSuccessText_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CurrentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CurrentState = { "CurrentState", "OnRep_CurrentState", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, CurrentState), Z_Construct_UEnum_Starbreeze_ESBZHackableActorState, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CurrentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ProgressData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ProgressData = { "ProgressData", "OnRep_ProgressData", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, ProgressData), Z_Construct_UScriptStruct_FSBZHackableProgressData, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ProgressData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ProgressData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_RoomVolumes_Inner = { "RoomVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_RoomVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_RoomVolumes = { "RoomVolumes", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, RoomVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_RoomVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_RoomVolumes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_DisplayTextArray_Inner = { "DisplayTextArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZHackableDisplayText, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_DisplayTextArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_DisplayTextArray = { "DisplayTextArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, DisplayTextArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_DisplayTextArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_DisplayTextArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_AdditionalDisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_AdditionalDisplayText = { "AdditionalDisplayText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, AdditionalDisplayText), Z_Construct_UScriptStruct_FSBZHackableDisplayText, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_AdditionalDisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_AdditionalDisplayText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_AdditionalDisplayTextIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_AdditionalDisplayTextIndex = { "AdditionalDisplayTextIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, AdditionalDisplayTextIndex), METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_AdditionalDisplayTextIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_AdditionalDisplayTextIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bIsOverwritingIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bIsOverwritingIndex_SetBit(void* Obj)
	{
		((ASBZHackableActor*)Obj)->bIsOverwritingIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bIsOverwritingIndex = { "bIsOverwritingIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZHackableActor), &Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bIsOverwritingIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bIsOverwritingIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bIsOverwritingIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_NumberOfCodesToView_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_NumberOfCodesToView = { "NumberOfCodesToView", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, NumberOfCodesToView), METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_NumberOfCodesToView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_NumberOfCodesToView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CodeEmailIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CodeEmailIndex = { "CodeEmailIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, CodeEmailIndex), METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CodeEmailIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CodeEmailIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CurrentDisplayTextIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CurrentDisplayTextIndex = { "CurrentDisplayTextIndex", "OnRep_DisplayTextIndex", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, CurrentDisplayTextIndex), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CurrentDisplayTextIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CurrentDisplayTextIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bIsDisplayTextAdded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bIsDisplayTextAdded_SetBit(void* Obj)
	{
		((ASBZHackableActor*)Obj)->bIsDisplayTextAdded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bIsDisplayTextAdded = { "bIsDisplayTextAdded", "OnRep_IsDisplayTextAdded", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZHackableActor), &Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bIsDisplayTextAdded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bIsDisplayTextAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bIsDisplayTextAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ObjectiveInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableActor" },
		{ "ModuleRelativePath", "Public/SBZHackableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ObjectiveInfo = { "ObjectiveInfo", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackableActor, ObjectiveInfo), METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ObjectiveInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ObjectiveInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZHackableActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingResumed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingUnlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OnHackingInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_InteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_OutlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_AttractorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_LifeActionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_LifeActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_LifeActionSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ShoutTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_InteractionMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_FixMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_HackingMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bStartActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_UnlockMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_UnlockMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_DurationSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ItemUnlockGameplayInteractionQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_GameplayEffectOnInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bWillInterrupt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_InterruptionTimeInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CustomProcessText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CustomSuccessText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CurrentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ProgressData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_RoomVolumes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_RoomVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_DisplayTextArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_DisplayTextArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_AdditionalDisplayText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_AdditionalDisplayTextIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bIsOverwritingIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_NumberOfCodesToView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CodeEmailIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_CurrentDisplayTextIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_bIsDisplayTextAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackableActor_Statics::NewProp_ObjectiveInfo,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZHackableActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAIActionInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZHackableActor, ISBZAIActionInteractableInterface), false },
			{ Z_Construct_UClass_UAISightTargetInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZHackableActor, IAISightTargetInterface), false },
			{ Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZHackableActor, ISBZRoomVolumeInterface), false },
			{ Z_Construct_UClass_USBZCodeViewerInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZHackableActor, ISBZCodeViewerInterface), false },
			{ Z_Construct_UClass_USBZObjectiveInformationInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZHackableActor, ISBZObjectiveInformationInterface), false },
			{ Z_Construct_UClass_USBZAIAttractorInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZHackableActor, ISBZAIAttractorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZHackableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZHackableActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZHackableActor_Statics::ClassParams = {
		&ASBZHackableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZHackableActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZHackableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZHackableActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZHackableActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZHackableActor, 3517508132);
	template<> STARBREEZE_API UClass* StaticClass<ASBZHackableActor>()
	{
		return ASBZHackableActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZHackableActor(Z_Construct_UClass_ASBZHackableActor, &ASBZHackableActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZHackableActor"), false, nullptr, nullptr, nullptr);

	void ASBZHackableActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_UnlockMode(TEXT("UnlockMode"));
		static const FName Name_CurrentState(TEXT("CurrentState"));
		static const FName Name_ProgressData(TEXT("ProgressData"));
		static const FName Name_CurrentDisplayTextIndex(TEXT("CurrentDisplayTextIndex"));
		static const FName Name_bIsDisplayTextAdded(TEXT("bIsDisplayTextAdded"));

		const bool bIsValid = true
			&& Name_UnlockMode == ClassReps[(int32)ENetFields_Private::UnlockMode].Property->GetFName()
			&& Name_CurrentState == ClassReps[(int32)ENetFields_Private::CurrentState].Property->GetFName()
			&& Name_ProgressData == ClassReps[(int32)ENetFields_Private::ProgressData].Property->GetFName()
			&& Name_CurrentDisplayTextIndex == ClassReps[(int32)ENetFields_Private::CurrentDisplayTextIndex].Property->GetFName()
			&& Name_bIsDisplayTextAdded == ClassReps[(int32)ENetFields_Private::bIsDisplayTextAdded].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZHackableActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZHackableActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
