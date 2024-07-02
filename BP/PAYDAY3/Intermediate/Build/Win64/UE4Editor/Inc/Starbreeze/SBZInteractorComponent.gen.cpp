// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractorComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReplicatedInteractionData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(USBZInteractorComponent::execBP_GetModeIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->BP_GetModeIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractorComponent::execBP_GetProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->BP_GetProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractorComponent::execClient_Removed)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interaction);
		P_GET_PROPERTY(FIntProperty,Z_Param_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_Removed_Implementation(Z_Param_Interaction,Z_Param_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractorComponent::execClient_StopInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interaction);
		P_GET_PROPERTY(FIntProperty,Z_Param_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_StopInteraction_Implementation(Z_Param_Interaction,Z_Param_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractorComponent::execGetCurrentInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZBaseInteractableComponent**)Z_Param__Result=P_THIS->GetCurrentInteraction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractorComponent::execMulticast_AbortInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interaction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_AbortInteraction_Implementation(Z_Param_Interaction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractorComponent::execMulticast_CompletedInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interaction);
		P_GET_UBOOL(Z_Param_bIsInstant);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_CompletedInteraction_Implementation(Z_Param_Interaction,Z_Param_bIsInstant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractorComponent::execMulticast_StartSimulatedInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interaction);
		P_GET_PROPERTY(FInt8Property,Z_Param_InModeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StartSimulatedInteraction_Implementation(Z_Param_Interaction,Z_Param_InModeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractorComponent::execMulticast_StopSimulatedInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StopSimulatedInteraction_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractorComponent::execOnRep_ReplicatedData)
	{
		P_GET_STRUCT_REF(FSBZReplicatedInteractionData,Z_Param_Out_OldReplicatedData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedData(Z_Param_Out_OldReplicatedData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractorComponent::execServer_CompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interaction);
		P_GET_PROPERTY(FIntProperty,Z_Param_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_CompleteInteraction_Validate(Z_Param_Interaction,Z_Param_Id))
		{
			RPC_ValidateFailed(TEXT("Server_CompleteInteraction_Validate"));
			return;
		}
		P_THIS->Server_CompleteInteraction_Implementation(Z_Param_Interaction,Z_Param_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractorComponent::execServer_PredictionTimeout)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interaction);
		P_GET_PROPERTY(FIntProperty,Z_Param_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_PredictionTimeout_Implementation(Z_Param_Interaction,Z_Param_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractorComponent::execServer_StartInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interaction);
		P_GET_PROPERTY(FIntProperty,Z_Param_Id);
		P_GET_PROPERTY(FInt8Property,Z_Param_InModeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_StartInteraction_Implementation(Z_Param_Interaction,Z_Param_Id,Z_Param_InModeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInteractorComponent::execServer_StopInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interaction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_StopInteraction_Implementation(Z_Param_Interaction);
		P_NATIVE_END;
	}
	static FName NAME_USBZInteractorComponent_Client_Removed = FName(TEXT("Client_Removed"));
	void USBZInteractorComponent::Client_Removed(USBZBaseInteractableComponent* Interaction, int32 Id)
	{
		SBZInteractorComponent_eventClient_Removed_Parms Parms;
		Parms.Interaction=Interaction;
		Parms.Id=Id;
		ProcessEvent(FindFunctionChecked(NAME_USBZInteractorComponent_Client_Removed),&Parms);
	}
	static FName NAME_USBZInteractorComponent_Client_StopInteraction = FName(TEXT("Client_StopInteraction"));
	void USBZInteractorComponent::Client_StopInteraction(USBZBaseInteractableComponent* Interaction, int32 Id)
	{
		SBZInteractorComponent_eventClient_StopInteraction_Parms Parms;
		Parms.Interaction=Interaction;
		Parms.Id=Id;
		ProcessEvent(FindFunctionChecked(NAME_USBZInteractorComponent_Client_StopInteraction),&Parms);
	}
	static FName NAME_USBZInteractorComponent_Multicast_AbortInteraction = FName(TEXT("Multicast_AbortInteraction"));
	void USBZInteractorComponent::Multicast_AbortInteraction(USBZBaseInteractableComponent* Interaction)
	{
		SBZInteractorComponent_eventMulticast_AbortInteraction_Parms Parms;
		Parms.Interaction=Interaction;
		ProcessEvent(FindFunctionChecked(NAME_USBZInteractorComponent_Multicast_AbortInteraction),&Parms);
	}
	static FName NAME_USBZInteractorComponent_Multicast_CompletedInteraction = FName(TEXT("Multicast_CompletedInteraction"));
	void USBZInteractorComponent::Multicast_CompletedInteraction(USBZBaseInteractableComponent* Interaction, bool bIsInstant)
	{
		SBZInteractorComponent_eventMulticast_CompletedInteraction_Parms Parms;
		Parms.Interaction=Interaction;
		Parms.bIsInstant=bIsInstant ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZInteractorComponent_Multicast_CompletedInteraction),&Parms);
	}
	static FName NAME_USBZInteractorComponent_Multicast_StartSimulatedInteraction = FName(TEXT("Multicast_StartSimulatedInteraction"));
	void USBZInteractorComponent::Multicast_StartSimulatedInteraction(USBZBaseInteractableComponent* Interaction, int8 InModeIndex)
	{
		SBZInteractorComponent_eventMulticast_StartSimulatedInteraction_Parms Parms;
		Parms.Interaction=Interaction;
		Parms.InModeIndex=InModeIndex;
		ProcessEvent(FindFunctionChecked(NAME_USBZInteractorComponent_Multicast_StartSimulatedInteraction),&Parms);
	}
	static FName NAME_USBZInteractorComponent_Multicast_StopSimulatedInteraction = FName(TEXT("Multicast_StopSimulatedInteraction"));
	void USBZInteractorComponent::Multicast_StopSimulatedInteraction()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZInteractorComponent_Multicast_StopSimulatedInteraction),NULL);
	}
	static FName NAME_USBZInteractorComponent_Server_CompleteInteraction = FName(TEXT("Server_CompleteInteraction"));
	void USBZInteractorComponent::Server_CompleteInteraction(USBZBaseInteractableComponent* Interaction, int32 Id)
	{
		SBZInteractorComponent_eventServer_CompleteInteraction_Parms Parms;
		Parms.Interaction=Interaction;
		Parms.Id=Id;
		ProcessEvent(FindFunctionChecked(NAME_USBZInteractorComponent_Server_CompleteInteraction),&Parms);
	}
	static FName NAME_USBZInteractorComponent_Server_PredictionTimeout = FName(TEXT("Server_PredictionTimeout"));
	void USBZInteractorComponent::Server_PredictionTimeout(USBZBaseInteractableComponent* Interaction, int32 Id)
	{
		SBZInteractorComponent_eventServer_PredictionTimeout_Parms Parms;
		Parms.Interaction=Interaction;
		Parms.Id=Id;
		ProcessEvent(FindFunctionChecked(NAME_USBZInteractorComponent_Server_PredictionTimeout),&Parms);
	}
	static FName NAME_USBZInteractorComponent_Server_StartInteraction = FName(TEXT("Server_StartInteraction"));
	void USBZInteractorComponent::Server_StartInteraction(USBZBaseInteractableComponent* Interaction, int32 Id, int8 InModeIndex)
	{
		SBZInteractorComponent_eventServer_StartInteraction_Parms Parms;
		Parms.Interaction=Interaction;
		Parms.Id=Id;
		Parms.InModeIndex=InModeIndex;
		ProcessEvent(FindFunctionChecked(NAME_USBZInteractorComponent_Server_StartInteraction),&Parms);
	}
	static FName NAME_USBZInteractorComponent_Server_StopInteraction = FName(TEXT("Server_StopInteraction"));
	void USBZInteractorComponent::Server_StopInteraction(USBZBaseInteractableComponent* Interaction)
	{
		SBZInteractorComponent_eventServer_StopInteraction_Parms Parms;
		Parms.Interaction=Interaction;
		ProcessEvent(FindFunctionChecked(NAME_USBZInteractorComponent_Server_StopInteraction),&Parms);
	}
	void USBZInteractorComponent::StaticRegisterNativesUSBZInteractorComponent()
	{
		UClass* Class = USBZInteractorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_GetModeIndex", &USBZInteractorComponent::execBP_GetModeIndex },
			{ "BP_GetProgress", &USBZInteractorComponent::execBP_GetProgress },
			{ "Client_Removed", &USBZInteractorComponent::execClient_Removed },
			{ "Client_StopInteraction", &USBZInteractorComponent::execClient_StopInteraction },
			{ "GetCurrentInteraction", &USBZInteractorComponent::execGetCurrentInteraction },
			{ "Multicast_AbortInteraction", &USBZInteractorComponent::execMulticast_AbortInteraction },
			{ "Multicast_CompletedInteraction", &USBZInteractorComponent::execMulticast_CompletedInteraction },
			{ "Multicast_StartSimulatedInteraction", &USBZInteractorComponent::execMulticast_StartSimulatedInteraction },
			{ "Multicast_StopSimulatedInteraction", &USBZInteractorComponent::execMulticast_StopSimulatedInteraction },
			{ "OnRep_ReplicatedData", &USBZInteractorComponent::execOnRep_ReplicatedData },
			{ "Server_CompleteInteraction", &USBZInteractorComponent::execServer_CompleteInteraction },
			{ "Server_PredictionTimeout", &USBZInteractorComponent::execServer_PredictionTimeout },
			{ "Server_StartInteraction", &USBZInteractorComponent::execServer_StartInteraction },
			{ "Server_StopInteraction", &USBZInteractorComponent::execServer_StopInteraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZInteractorComponent_BP_GetModeIndex_Statics
	{
		struct SBZInteractorComponent_eventBP_GetModeIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInteractorComponent_BP_GetModeIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventBP_GetModeIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractorComponent_BP_GetModeIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_BP_GetModeIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_BP_GetModeIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractorComponent_BP_GetModeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractorComponent, nullptr, "BP_GetModeIndex", nullptr, nullptr, sizeof(SBZInteractorComponent_eventBP_GetModeIndex_Parms), Z_Construct_UFunction_USBZInteractorComponent_BP_GetModeIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_BP_GetModeIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_BP_GetModeIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_BP_GetModeIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractorComponent_BP_GetModeIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractorComponent_BP_GetModeIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractorComponent_BP_GetProgress_Statics
	{
		struct SBZInteractorComponent_eventBP_GetProgress_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZInteractorComponent_BP_GetProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventBP_GetProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractorComponent_BP_GetProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_BP_GetProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_BP_GetProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractorComponent_BP_GetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractorComponent, nullptr, "BP_GetProgress", nullptr, nullptr, sizeof(SBZInteractorComponent_eventBP_GetProgress_Parms), Z_Construct_UFunction_USBZInteractorComponent_BP_GetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_BP_GetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_BP_GetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_BP_GetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractorComponent_BP_GetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractorComponent_BP_GetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractorComponent_Client_Removed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interaction;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Client_Removed_Statics::NewProp_Interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInteractorComponent_Client_Removed_Statics::NewProp_Interaction = { "Interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventClient_Removed_Parms, Interaction), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Client_Removed_Statics::NewProp_Interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Client_Removed_Statics::NewProp_Interaction_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInteractorComponent_Client_Removed_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventClient_Removed_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractorComponent_Client_Removed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_Client_Removed_Statics::NewProp_Interaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_Client_Removed_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Client_Removed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractorComponent_Client_Removed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractorComponent, nullptr, "Client_Removed", nullptr, nullptr, sizeof(SBZInteractorComponent_eventClient_Removed_Parms), Z_Construct_UFunction_USBZInteractorComponent_Client_Removed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Client_Removed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Client_Removed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Client_Removed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractorComponent_Client_Removed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractorComponent_Client_Removed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractorComponent_Client_StopInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interaction;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Client_StopInteraction_Statics::NewProp_Interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInteractorComponent_Client_StopInteraction_Statics::NewProp_Interaction = { "Interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventClient_StopInteraction_Parms, Interaction), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Client_StopInteraction_Statics::NewProp_Interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Client_StopInteraction_Statics::NewProp_Interaction_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInteractorComponent_Client_StopInteraction_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventClient_StopInteraction_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractorComponent_Client_StopInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_Client_StopInteraction_Statics::NewProp_Interaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_Client_StopInteraction_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Client_StopInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractorComponent_Client_StopInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractorComponent, nullptr, "Client_StopInteraction", nullptr, nullptr, sizeof(SBZInteractorComponent_eventClient_StopInteraction_Parms), Z_Construct_UFunction_USBZInteractorComponent_Client_StopInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Client_StopInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Client_StopInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Client_StopInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractorComponent_Client_StopInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractorComponent_Client_StopInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractorComponent_GetCurrentInteraction_Statics
	{
		struct SBZInteractorComponent_eventGetCurrentInteraction_Parms
		{
			USBZBaseInteractableComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_GetCurrentInteraction_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInteractorComponent_GetCurrentInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventGetCurrentInteraction_Parms, ReturnValue), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_GetCurrentInteraction_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_GetCurrentInteraction_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractorComponent_GetCurrentInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_GetCurrentInteraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_GetCurrentInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractorComponent_GetCurrentInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractorComponent, nullptr, "GetCurrentInteraction", nullptr, nullptr, sizeof(SBZInteractorComponent_eventGetCurrentInteraction_Parms), Z_Construct_UFunction_USBZInteractorComponent_GetCurrentInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_GetCurrentInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_GetCurrentInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_GetCurrentInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractorComponent_GetCurrentInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractorComponent_GetCurrentInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractorComponent_Multicast_AbortInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interaction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Multicast_AbortInteraction_Statics::NewProp_Interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInteractorComponent_Multicast_AbortInteraction_Statics::NewProp_Interaction = { "Interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventMulticast_AbortInteraction_Parms, Interaction), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Multicast_AbortInteraction_Statics::NewProp_Interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Multicast_AbortInteraction_Statics::NewProp_Interaction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractorComponent_Multicast_AbortInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_Multicast_AbortInteraction_Statics::NewProp_Interaction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Multicast_AbortInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractorComponent_Multicast_AbortInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractorComponent, nullptr, "Multicast_AbortInteraction", nullptr, nullptr, sizeof(SBZInteractorComponent_eventMulticast_AbortInteraction_Parms), Z_Construct_UFunction_USBZInteractorComponent_Multicast_AbortInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Multicast_AbortInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Multicast_AbortInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Multicast_AbortInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractorComponent_Multicast_AbortInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractorComponent_Multicast_AbortInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interaction;
		static void NewProp_bIsInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInstant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction_Statics::NewProp_Interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction_Statics::NewProp_Interaction = { "Interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventMulticast_CompletedInteraction_Parms, Interaction), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction_Statics::NewProp_Interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction_Statics::NewProp_Interaction_MetaData)) };
	void Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction_Statics::NewProp_bIsInstant_SetBit(void* Obj)
	{
		((SBZInteractorComponent_eventMulticast_CompletedInteraction_Parms*)Obj)->bIsInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction_Statics::NewProp_bIsInstant = { "bIsInstant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInteractorComponent_eventMulticast_CompletedInteraction_Parms), &Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction_Statics::NewProp_bIsInstant_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction_Statics::NewProp_Interaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction_Statics::NewProp_bIsInstant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractorComponent, nullptr, "Multicast_CompletedInteraction", nullptr, nullptr, sizeof(SBZInteractorComponent_eventMulticast_CompletedInteraction_Parms), Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractorComponent_Multicast_StartSimulatedInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interaction;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_InModeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Multicast_StartSimulatedInteraction_Statics::NewProp_Interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInteractorComponent_Multicast_StartSimulatedInteraction_Statics::NewProp_Interaction = { "Interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventMulticast_StartSimulatedInteraction_Parms, Interaction), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Multicast_StartSimulatedInteraction_Statics::NewProp_Interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Multicast_StartSimulatedInteraction_Statics::NewProp_Interaction_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_USBZInteractorComponent_Multicast_StartSimulatedInteraction_Statics::NewProp_InModeIndex = { "InModeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventMulticast_StartSimulatedInteraction_Parms, InModeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractorComponent_Multicast_StartSimulatedInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_Multicast_StartSimulatedInteraction_Statics::NewProp_Interaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_Multicast_StartSimulatedInteraction_Statics::NewProp_InModeIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Multicast_StartSimulatedInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractorComponent_Multicast_StartSimulatedInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractorComponent, nullptr, "Multicast_StartSimulatedInteraction", nullptr, nullptr, sizeof(SBZInteractorComponent_eventMulticast_StartSimulatedInteraction_Parms), Z_Construct_UFunction_USBZInteractorComponent_Multicast_StartSimulatedInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Multicast_StartSimulatedInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Multicast_StartSimulatedInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Multicast_StartSimulatedInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractorComponent_Multicast_StartSimulatedInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractorComponent_Multicast_StartSimulatedInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractorComponent_Multicast_StopSimulatedInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Multicast_StopSimulatedInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractorComponent_Multicast_StopSimulatedInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractorComponent, nullptr, "Multicast_StopSimulatedInteraction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Multicast_StopSimulatedInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Multicast_StopSimulatedInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractorComponent_Multicast_StopSimulatedInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractorComponent_Multicast_StopSimulatedInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractorComponent_OnRep_ReplicatedData_Statics
	{
		struct SBZInteractorComponent_eventOnRep_ReplicatedData_Parms
		{
			FSBZReplicatedInteractionData OldReplicatedData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldReplicatedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldReplicatedData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_OnRep_ReplicatedData_Statics::NewProp_OldReplicatedData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZInteractorComponent_OnRep_ReplicatedData_Statics::NewProp_OldReplicatedData = { "OldReplicatedData", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventOnRep_ReplicatedData_Parms, OldReplicatedData), Z_Construct_UScriptStruct_FSBZReplicatedInteractionData, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_OnRep_ReplicatedData_Statics::NewProp_OldReplicatedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_OnRep_ReplicatedData_Statics::NewProp_OldReplicatedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractorComponent_OnRep_ReplicatedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_OnRep_ReplicatedData_Statics::NewProp_OldReplicatedData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_OnRep_ReplicatedData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractorComponent_OnRep_ReplicatedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractorComponent, nullptr, "OnRep_ReplicatedData", nullptr, nullptr, sizeof(SBZInteractorComponent_eventOnRep_ReplicatedData_Parms), Z_Construct_UFunction_USBZInteractorComponent_OnRep_ReplicatedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_OnRep_ReplicatedData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_OnRep_ReplicatedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_OnRep_ReplicatedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractorComponent_OnRep_ReplicatedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractorComponent_OnRep_ReplicatedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractorComponent_Server_CompleteInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interaction;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Server_CompleteInteraction_Statics::NewProp_Interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInteractorComponent_Server_CompleteInteraction_Statics::NewProp_Interaction = { "Interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventServer_CompleteInteraction_Parms, Interaction), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Server_CompleteInteraction_Statics::NewProp_Interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Server_CompleteInteraction_Statics::NewProp_Interaction_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInteractorComponent_Server_CompleteInteraction_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventServer_CompleteInteraction_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractorComponent_Server_CompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_Server_CompleteInteraction_Statics::NewProp_Interaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_Server_CompleteInteraction_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Server_CompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractorComponent_Server_CompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractorComponent, nullptr, "Server_CompleteInteraction", nullptr, nullptr, sizeof(SBZInteractorComponent_eventServer_CompleteInteraction_Parms), Z_Construct_UFunction_USBZInteractorComponent_Server_CompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Server_CompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Server_CompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Server_CompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractorComponent_Server_CompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractorComponent_Server_CompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractorComponent_Server_PredictionTimeout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interaction;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Server_PredictionTimeout_Statics::NewProp_Interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInteractorComponent_Server_PredictionTimeout_Statics::NewProp_Interaction = { "Interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventServer_PredictionTimeout_Parms, Interaction), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Server_PredictionTimeout_Statics::NewProp_Interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Server_PredictionTimeout_Statics::NewProp_Interaction_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInteractorComponent_Server_PredictionTimeout_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventServer_PredictionTimeout_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractorComponent_Server_PredictionTimeout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_Server_PredictionTimeout_Statics::NewProp_Interaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_Server_PredictionTimeout_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Server_PredictionTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractorComponent_Server_PredictionTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractorComponent, nullptr, "Server_PredictionTimeout", nullptr, nullptr, sizeof(SBZInteractorComponent_eventServer_PredictionTimeout_Parms), Z_Construct_UFunction_USBZInteractorComponent_Server_PredictionTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Server_PredictionTimeout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Server_PredictionTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Server_PredictionTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractorComponent_Server_PredictionTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractorComponent_Server_PredictionTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interaction;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_InModeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction_Statics::NewProp_Interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction_Statics::NewProp_Interaction = { "Interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventServer_StartInteraction_Parms, Interaction), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction_Statics::NewProp_Interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction_Statics::NewProp_Interaction_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventServer_StartInteraction_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction_Statics::NewProp_InModeIndex = { "InModeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventServer_StartInteraction_Parms, InModeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction_Statics::NewProp_Interaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction_Statics::NewProp_InModeIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractorComponent, nullptr, "Server_StartInteraction", nullptr, nullptr, sizeof(SBZInteractorComponent_eventServer_StartInteraction_Parms), Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractorComponent_Server_StopInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interaction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Server_StopInteraction_Statics::NewProp_Interaction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInteractorComponent_Server_StopInteraction_Statics::NewProp_Interaction = { "Interaction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractorComponent_eventServer_StopInteraction_Parms, Interaction), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Server_StopInteraction_Statics::NewProp_Interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Server_StopInteraction_Statics::NewProp_Interaction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractorComponent_Server_StopInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractorComponent_Server_StopInteraction_Statics::NewProp_Interaction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractorComponent_Server_StopInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractorComponent_Server_StopInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractorComponent, nullptr, "Server_StopInteraction", nullptr, nullptr, sizeof(SBZInteractorComponent_eventServer_StopInteraction_Parms), Z_Construct_UFunction_USBZInteractorComponent_Server_StopInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Server_StopInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractorComponent_Server_StopInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractorComponent_Server_StopInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractorComponent_Server_StopInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractorComponent_Server_StopInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister()
	{
		return USBZInteractorComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZInteractorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerCompletingInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerCompletingInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickCompleteDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickCompleteDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCompletePending_MetaData[];
#endif
		static void NewProp_bIsCompletePending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCompletePending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InteractId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_ModeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModeRaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModeRaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionTraceResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionTraceResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInteractionSignalRequired_MetaData[];
#endif
		static void NewProp_bIsInteractionSignalRequired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInteractionSignalRequired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsScreenInteraction_MetaData[];
#endif
		static void NewProp_bIsScreenInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsScreenInteraction;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocallyControlled_MetaData[];
#endif
		static void NewProp_bIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInteractorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZInteractorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZInteractorComponent_BP_GetModeIndex, "BP_GetModeIndex" }, // 2673091924
		{ &Z_Construct_UFunction_USBZInteractorComponent_BP_GetProgress, "BP_GetProgress" }, // 581328645
		{ &Z_Construct_UFunction_USBZInteractorComponent_Client_Removed, "Client_Removed" }, // 2494921746
		{ &Z_Construct_UFunction_USBZInteractorComponent_Client_StopInteraction, "Client_StopInteraction" }, // 4216811330
		{ &Z_Construct_UFunction_USBZInteractorComponent_GetCurrentInteraction, "GetCurrentInteraction" }, // 3051472825
		{ &Z_Construct_UFunction_USBZInteractorComponent_Multicast_AbortInteraction, "Multicast_AbortInteraction" }, // 1667228984
		{ &Z_Construct_UFunction_USBZInteractorComponent_Multicast_CompletedInteraction, "Multicast_CompletedInteraction" }, // 416642282
		{ &Z_Construct_UFunction_USBZInteractorComponent_Multicast_StartSimulatedInteraction, "Multicast_StartSimulatedInteraction" }, // 2036033289
		{ &Z_Construct_UFunction_USBZInteractorComponent_Multicast_StopSimulatedInteraction, "Multicast_StopSimulatedInteraction" }, // 3151711703
		{ &Z_Construct_UFunction_USBZInteractorComponent_OnRep_ReplicatedData, "OnRep_ReplicatedData" }, // 1633159647
		{ &Z_Construct_UFunction_USBZInteractorComponent_Server_CompleteInteraction, "Server_CompleteInteraction" }, // 1578996490
		{ &Z_Construct_UFunction_USBZInteractorComponent_Server_PredictionTimeout, "Server_PredictionTimeout" }, // 2225444783
		{ &Z_Construct_UFunction_USBZInteractorComponent_Server_StartInteraction, "Server_StartInteraction" }, // 3977517644
		{ &Z_Construct_UFunction_USBZInteractorComponent_Server_StopInteraction, "Server_StopInteraction" }, // 1657803027
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZInteractorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ReplicatedData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ReplicatedData = { "ReplicatedData", "OnRep_ReplicatedData", (EPropertyFlags)0x0020088100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractorComponent, ReplicatedData), Z_Construct_UScriptStruct_FSBZReplicatedInteractionData, METADATA_PARAMS(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ReplicatedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ReplicatedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_CurrentInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_CurrentInteraction = { "CurrentInteraction", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractorComponent, CurrentInteraction), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_CurrentInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_CurrentInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_LastInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_LastInteraction = { "LastInteraction", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractorComponent, LastInteraction), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_LastInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_LastInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ServerCompletingInteractable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ServerCompletingInteractable = { "ServerCompletingInteractable", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractorComponent, ServerCompletingInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ServerCompletingInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ServerCompletingInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_TickCompleteDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_TickCompleteDuration = { "TickCompleteDuration", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractorComponent, TickCompleteDuration), METADATA_PARAMS(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_TickCompleteDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_TickCompleteDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsCompletePending_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsCompletePending_SetBit(void* Obj)
	{
		((USBZInteractorComponent*)Obj)->bIsCompletePending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsCompletePending = { "bIsCompletePending", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZInteractorComponent), &Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsCompletePending_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsCompletePending_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsCompletePending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_InteractId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_InteractId = { "InteractId", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractorComponent, InteractId), METADATA_PARAMS(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_InteractId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_InteractId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ModeIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ModeIndex = { "ModeIndex", nullptr, (EPropertyFlags)0x0020080000002001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractorComponent, ModeIndex), METADATA_PARAMS(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ModeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ModeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ModeRaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ModeRaw = { "ModeRaw", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractorComponent, ModeRaw), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ModeRaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ModeRaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_InteractionTraceResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_InteractionTraceResult = { "InteractionTraceResult", nullptr, (EPropertyFlags)0x0020088000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractorComponent, InteractionTraceResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_InteractionTraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_InteractionTraceResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsInteractionSignalRequired_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsInteractionSignalRequired_SetBit(void* Obj)
	{
		((USBZInteractorComponent*)Obj)->bIsInteractionSignalRequired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsInteractionSignalRequired = { "bIsInteractionSignalRequired", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZInteractorComponent), &Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsInteractionSignalRequired_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsInteractionSignalRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsInteractionSignalRequired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsScreenInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsScreenInteraction_SetBit(void* Obj)
	{
		((USBZInteractorComponent*)Obj)->bIsScreenInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsScreenInteraction = { "bIsScreenInteraction", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZInteractorComponent), &Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsScreenInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsScreenInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsScreenInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ScreenInteractDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ScreenInteractDistance = { "ScreenInteractDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractorComponent, ScreenInteractDistance), METADATA_PARAMS(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ScreenInteractDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ScreenInteractDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_MinScreenInteractDegrees_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_MinScreenInteractDegrees = { "MinScreenInteractDegrees", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractorComponent, MinScreenInteractDegrees), METADATA_PARAMS(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_MinScreenInteractDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_MinScreenInteractDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_MinScreenInteractDot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_MinScreenInteractDot = { "MinScreenInteractDot", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInteractorComponent, MinScreenInteractDot), METADATA_PARAMS(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_MinScreenInteractDot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_MinScreenInteractDot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsLocallyControlled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZInteractorComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsLocallyControlled_SetBit(void* Obj)
	{
		((USBZInteractorComponent*)Obj)->bIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsLocallyControlled = { "bIsLocallyControlled", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZInteractorComponent), &Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsLocallyControlled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsLocallyControlled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsLocallyControlled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZInteractorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ReplicatedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_CurrentInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_LastInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ServerCompletingInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_TickCompleteDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsCompletePending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_InteractId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ModeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ModeRaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_InteractionTraceResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsInteractionSignalRequired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsScreenInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_ScreenInteractDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_MinScreenInteractDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_MinScreenInteractDot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInteractorComponent_Statics::NewProp_bIsLocallyControlled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInteractorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInteractorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInteractorComponent_Statics::ClassParams = {
		&USBZInteractorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZInteractorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZInteractorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInteractorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInteractorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInteractorComponent, 1898144548);
	template<> STARBREEZE_API UClass* StaticClass<USBZInteractorComponent>()
	{
		return USBZInteractorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInteractorComponent(Z_Construct_UClass_USBZInteractorComponent, &USBZInteractorComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInteractorComponent"), false, nullptr, nullptr, nullptr);

	void USBZInteractorComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedData(TEXT("ReplicatedData"));

		const bool bIsValid = true
			&& Name_ReplicatedData == ClassReps[(int32)ENetFields_Private::ReplicatedData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZInteractorComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInteractorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
