// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGate() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGate_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGate();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAkAcousticPortal_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIBaseCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosionResult();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGateState();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZGateStateChangedDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGateExplosionData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGateMeshData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGateNavLinkComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGateNavLinkAgilityComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolSnapData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorComponent_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGateSoundReduction();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosive_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkHostInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionInteractableInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolSnapInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilityObstacleInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZGate::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGate::execGetAllowPortalStateChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllowPortalStateChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGate::execGetPortalObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZAkAcousticPortal**)Z_Param__Result=P_THIS->GetPortalObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGate::execIsOpenForwardFromDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOpenForwardFromDirection(Z_Param_Out_Direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGate::execIsOpenForwardFromLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOpenForwardFromLocation(Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGate::execMulticast_HandleAgilityTagEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagEvent);
		P_GET_OBJECT(ASBZAIBaseCharacter,Z_Param_AICharacterInstigator);
		P_GET_STRUCT(FVector,Z_Param_InstigatorLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_HandleAgilityTagEvent_Implementation(Z_Param_TagEvent,Z_Param_AICharacterInstigator,Z_Param_InstigatorLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGate::execMulticast_OnAddIgnoreMoveActor)
	{
		P_GET_OBJECT(APawn,Z_Param_InPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnAddIgnoreMoveActor_Implementation(Z_Param_InPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGate::execMulticast_OnUnlockingLinkMoveEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnUnlockingLinkMoveEnded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGate::execMulticast_OnUnlockingLinkMoveStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnUnlockingLinkMoveStarted_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGate::execMulticast_ReplicateExplosion)
	{
		P_GET_STRUCT(FSBZExplosionResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ReplicateExplosion_Implementation(Z_Param_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGate::execMulticast_SetState)
	{
		P_GET_ENUM(ESBZGateState,Z_Param_InState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetState_Implementation(ESBZGateState(Z_Param_InState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGate::execOnRep_State)
	{
		P_GET_ENUM(ESBZGateState,Z_Param_OldState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_State(ESBZGateState(Z_Param_OldState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGate::execOnStateDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGate::execSetAllowPortalStateChange)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowPortalStateChange(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGate::execSetAttractorInstigator)
	{
		P_GET_OBJECT(APawn,Z_Param_InInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttractorInstigator(Z_Param_InInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGate::execSetState)
	{
		P_GET_ENUM(ESBZGateState,Z_Param_InState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetState(ESBZGateState(Z_Param_InState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGate::execSetYaw)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Mesh);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InYaw);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetYaw(Z_Param_Mesh,Z_Param_InYaw);
		P_NATIVE_END;
	}
	static FName NAME_ASBZGate_Multicast_HandleAgilityTagEvent = FName(TEXT("Multicast_HandleAgilityTagEvent"));
	void ASBZGate::Multicast_HandleAgilityTagEvent(FGameplayTag const& TagEvent, ASBZAIBaseCharacter* AICharacterInstigator, FVector const& InstigatorLocation)
	{
		SBZGate_eventMulticast_HandleAgilityTagEvent_Parms Parms;
		Parms.TagEvent=TagEvent;
		Parms.AICharacterInstigator=AICharacterInstigator;
		Parms.InstigatorLocation=InstigatorLocation;
		ProcessEvent(FindFunctionChecked(NAME_ASBZGate_Multicast_HandleAgilityTagEvent),&Parms);
	}
	static FName NAME_ASBZGate_Multicast_OnAddIgnoreMoveActor = FName(TEXT("Multicast_OnAddIgnoreMoveActor"));
	void ASBZGate::Multicast_OnAddIgnoreMoveActor(APawn* InPawn)
	{
		SBZGate_eventMulticast_OnAddIgnoreMoveActor_Parms Parms;
		Parms.InPawn=InPawn;
		ProcessEvent(FindFunctionChecked(NAME_ASBZGate_Multicast_OnAddIgnoreMoveActor),&Parms);
	}
	static FName NAME_ASBZGate_Multicast_OnUnlockingLinkMoveEnded = FName(TEXT("Multicast_OnUnlockingLinkMoveEnded"));
	void ASBZGate::Multicast_OnUnlockingLinkMoveEnded()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZGate_Multicast_OnUnlockingLinkMoveEnded),NULL);
	}
	static FName NAME_ASBZGate_Multicast_OnUnlockingLinkMoveStarted = FName(TEXT("Multicast_OnUnlockingLinkMoveStarted"));
	void ASBZGate::Multicast_OnUnlockingLinkMoveStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZGate_Multicast_OnUnlockingLinkMoveStarted),NULL);
	}
	static FName NAME_ASBZGate_Multicast_ReplicateExplosion = FName(TEXT("Multicast_ReplicateExplosion"));
	void ASBZGate::Multicast_ReplicateExplosion(FSBZExplosionResult const& Result)
	{
		SBZGate_eventMulticast_ReplicateExplosion_Parms Parms;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_ASBZGate_Multicast_ReplicateExplosion),&Parms);
	}
	static FName NAME_ASBZGate_Multicast_SetState = FName(TEXT("Multicast_SetState"));
	void ASBZGate::Multicast_SetState(ESBZGateState InState)
	{
		SBZGate_eventMulticast_SetState_Parms Parms;
		Parms.InState=InState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZGate_Multicast_SetState),&Parms);
	}
	static FName NAME_ASBZGate_OnStateChanged = FName(TEXT("OnStateChanged"));
	void ASBZGate::OnStateChanged(ESBZGateState OldState, ESBZGateState NewState, bool bIsInitialStateChange)
	{
		SBZGate_eventOnStateChanged_Parms Parms;
		Parms.OldState=OldState;
		Parms.NewState=NewState;
		Parms.bIsInitialStateChange=bIsInitialStateChange ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZGate_OnStateChanged),&Parms);
	}
	void ASBZGate::StaticRegisterNativesASBZGate()
	{
		UClass* Class = ASBZGate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllowPortalStateChange", &ASBZGate::execGetAllowPortalStateChange },
			{ "GetPortalObject", &ASBZGate::execGetPortalObject },
			{ "IsOpenForwardFromDirection", &ASBZGate::execIsOpenForwardFromDirection },
			{ "IsOpenForwardFromLocation", &ASBZGate::execIsOpenForwardFromLocation },
			{ "Multicast_HandleAgilityTagEvent", &ASBZGate::execMulticast_HandleAgilityTagEvent },
			{ "Multicast_OnAddIgnoreMoveActor", &ASBZGate::execMulticast_OnAddIgnoreMoveActor },
			{ "Multicast_OnUnlockingLinkMoveEnded", &ASBZGate::execMulticast_OnUnlockingLinkMoveEnded },
			{ "Multicast_OnUnlockingLinkMoveStarted", &ASBZGate::execMulticast_OnUnlockingLinkMoveStarted },
			{ "Multicast_ReplicateExplosion", &ASBZGate::execMulticast_ReplicateExplosion },
			{ "Multicast_SetState", &ASBZGate::execMulticast_SetState },
			{ "OnRep_State", &ASBZGate::execOnRep_State },
			{ "OnStateDone", &ASBZGate::execOnStateDone },
			{ "SetAllowPortalStateChange", &ASBZGate::execSetAllowPortalStateChange },
			{ "SetAttractorInstigator", &ASBZGate::execSetAttractorInstigator },
			{ "SetEnabled", &ASBZGate::execSetEnabled },
			{ "SetState", &ASBZGate::execSetState },
			{ "SetYaw", &ASBZGate::execSetYaw },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZGate_GetAllowPortalStateChange_Statics
	{
		struct SBZGate_eventGetAllowPortalStateChange_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZGate_GetAllowPortalStateChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGate_eventGetAllowPortalStateChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZGate_GetAllowPortalStateChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGate_eventGetAllowPortalStateChange_Parms), &Z_Construct_UFunction_ASBZGate_GetAllowPortalStateChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGate_GetAllowPortalStateChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_GetAllowPortalStateChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_GetAllowPortalStateChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGate_GetAllowPortalStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGate, nullptr, "GetAllowPortalStateChange", nullptr, nullptr, sizeof(SBZGate_eventGetAllowPortalStateChange_Parms), Z_Construct_UFunction_ASBZGate_GetAllowPortalStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_GetAllowPortalStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_GetAllowPortalStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_GetAllowPortalStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGate_GetAllowPortalStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGate_GetAllowPortalStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGate_GetPortalObject_Statics
	{
		struct SBZGate_eventGetPortalObject_Parms
		{
			ASBZAkAcousticPortal* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGate_GetPortalObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGate_eventGetPortalObject_Parms, ReturnValue), Z_Construct_UClass_ASBZAkAcousticPortal_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGate_GetPortalObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_GetPortalObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_GetPortalObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGate_GetPortalObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGate, nullptr, "GetPortalObject", nullptr, nullptr, sizeof(SBZGate_eventGetPortalObject_Parms), Z_Construct_UFunction_ASBZGate_GetPortalObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_GetPortalObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_GetPortalObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_GetPortalObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGate_GetPortalObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGate_GetPortalObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection_Statics
	{
		struct SBZGate_eventIsOpenForwardFromDirection_Parms
		{
			FVector Direction;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGate_eventIsOpenForwardFromDirection_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection_Statics::NewProp_Direction_MetaData)) };
	void Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGate_eventIsOpenForwardFromDirection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGate_eventIsOpenForwardFromDirection_Parms), &Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGate, nullptr, "IsOpenForwardFromDirection", nullptr, nullptr, sizeof(SBZGate_eventIsOpenForwardFromDirection_Parms), Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation_Statics
	{
		struct SBZGate_eventIsOpenForwardFromLocation_Parms
		{
			FVector Location;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGate_eventIsOpenForwardFromLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation_Statics::NewProp_Location_MetaData)) };
	void Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGate_eventIsOpenForwardFromLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGate_eventIsOpenForwardFromLocation_Parms), &Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGate, nullptr, "IsOpenForwardFromLocation", nullptr, nullptr, sizeof(SBZGate_eventIsOpenForwardFromLocation_Parms), Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AICharacterInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstigatorLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::NewProp_TagEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::NewProp_TagEvent = { "TagEvent", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGate_eventMulticast_HandleAgilityTagEvent_Parms, TagEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::NewProp_TagEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::NewProp_TagEvent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::NewProp_AICharacterInstigator = { "AICharacterInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGate_eventMulticast_HandleAgilityTagEvent_Parms, AICharacterInstigator), Z_Construct_UClass_ASBZAIBaseCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::NewProp_InstigatorLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::NewProp_InstigatorLocation = { "InstigatorLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGate_eventMulticast_HandleAgilityTagEvent_Parms, InstigatorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::NewProp_InstigatorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::NewProp_InstigatorLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::NewProp_TagEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::NewProp_AICharacterInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::NewProp_InstigatorLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGate, nullptr, "Multicast_HandleAgilityTagEvent", nullptr, nullptr, sizeof(SBZGate_eventMulticast_HandleAgilityTagEvent_Parms), Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGate_Multicast_OnAddIgnoreMoveActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGate_Multicast_OnAddIgnoreMoveActor_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGate_eventMulticast_OnAddIgnoreMoveActor_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGate_Multicast_OnAddIgnoreMoveActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_Multicast_OnAddIgnoreMoveActor_Statics::NewProp_InPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_Multicast_OnAddIgnoreMoveActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGate_Multicast_OnAddIgnoreMoveActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGate, nullptr, "Multicast_OnAddIgnoreMoveActor", nullptr, nullptr, sizeof(SBZGate_eventMulticast_OnAddIgnoreMoveActor_Parms), Z_Construct_UFunction_ASBZGate_Multicast_OnAddIgnoreMoveActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_Multicast_OnAddIgnoreMoveActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_Multicast_OnAddIgnoreMoveActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_Multicast_OnAddIgnoreMoveActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGate_Multicast_OnAddIgnoreMoveActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGate_Multicast_OnAddIgnoreMoveActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGate_Multicast_OnUnlockingLinkMoveEnded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_Multicast_OnUnlockingLinkMoveEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGate_Multicast_OnUnlockingLinkMoveEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGate, nullptr, "Multicast_OnUnlockingLinkMoveEnded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_Multicast_OnUnlockingLinkMoveEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_Multicast_OnUnlockingLinkMoveEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGate_Multicast_OnUnlockingLinkMoveEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGate_Multicast_OnUnlockingLinkMoveEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGate_Multicast_OnUnlockingLinkMoveStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_Multicast_OnUnlockingLinkMoveStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGate_Multicast_OnUnlockingLinkMoveStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGate, nullptr, "Multicast_OnUnlockingLinkMoveStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_Multicast_OnUnlockingLinkMoveStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_Multicast_OnUnlockingLinkMoveStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGate_Multicast_OnUnlockingLinkMoveStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGate_Multicast_OnUnlockingLinkMoveStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGate_Multicast_ReplicateExplosion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGate_Multicast_ReplicateExplosion_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGate_eventMulticast_ReplicateExplosion_Parms, Result), Z_Construct_UScriptStruct_FSBZExplosionResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGate_Multicast_ReplicateExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_Multicast_ReplicateExplosion_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGate_Multicast_ReplicateExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGate, nullptr, "Multicast_ReplicateExplosion", nullptr, nullptr, sizeof(SBZGate_eventMulticast_ReplicateExplosion_Parms), Z_Construct_UFunction_ASBZGate_Multicast_ReplicateExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_Multicast_ReplicateExplosion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGate_Multicast_ReplicateExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGate_Multicast_ReplicateExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGate_Multicast_SetState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZGate_Multicast_SetState_Statics::NewProp_InState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZGate_Multicast_SetState_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGate_eventMulticast_SetState_Parms, InState), Z_Construct_UEnum_Starbreeze_ESBZGateState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGate_Multicast_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_Multicast_SetState_Statics::NewProp_InState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_Multicast_SetState_Statics::NewProp_InState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_Multicast_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGate_Multicast_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGate, nullptr, "Multicast_SetState", nullptr, nullptr, sizeof(SBZGate_eventMulticast_SetState_Parms), Z_Construct_UFunction_ASBZGate_Multicast_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_Multicast_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_Multicast_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_Multicast_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGate_Multicast_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGate_Multicast_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGate_OnRep_State_Statics
	{
		struct SBZGate_eventOnRep_State_Parms
		{
			ESBZGateState OldState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZGate_OnRep_State_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZGate_OnRep_State_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGate_eventOnRep_State_Parms, OldState), Z_Construct_UEnum_Starbreeze_ESBZGateState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGate_OnRep_State_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_OnRep_State_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_OnRep_State_Statics::NewProp_OldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_OnRep_State_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGate_OnRep_State_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGate, nullptr, "OnRep_State", nullptr, nullptr, sizeof(SBZGate_eventOnRep_State_Parms), Z_Construct_UFunction_ASBZGate_OnRep_State_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_OnRep_State_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_OnRep_State_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_OnRep_State_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGate_OnRep_State()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGate_OnRep_State_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static void NewProp_bIsInitialStateChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInitialStateChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGate_eventOnStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_ESBZGateState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGate_eventOnStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZGateState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::NewProp_bIsInitialStateChange_SetBit(void* Obj)
	{
		((SBZGate_eventOnStateChanged_Parms*)Obj)->bIsInitialStateChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::NewProp_bIsInitialStateChange = { "bIsInitialStateChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGate_eventOnStateChanged_Parms), &Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::NewProp_bIsInitialStateChange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::NewProp_bIsInitialStateChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGate, nullptr, "OnStateChanged", nullptr, nullptr, sizeof(SBZGate_eventOnStateChanged_Parms), Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGate_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGate_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGate_OnStateDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_OnStateDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGate_OnStateDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGate, nullptr, "OnStateDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_OnStateDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_OnStateDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGate_OnStateDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGate_OnStateDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGate_SetAllowPortalStateChange_Statics
	{
		struct SBZGate_eventSetAllowPortalStateChange_Parms
		{
			bool bValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZGate_SetAllowPortalStateChange_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SBZGate_eventSetAllowPortalStateChange_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZGate_SetAllowPortalStateChange_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGate_eventSetAllowPortalStateChange_Parms), &Z_Construct_UFunction_ASBZGate_SetAllowPortalStateChange_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGate_SetAllowPortalStateChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_SetAllowPortalStateChange_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_SetAllowPortalStateChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGate_SetAllowPortalStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGate, nullptr, "SetAllowPortalStateChange", nullptr, nullptr, sizeof(SBZGate_eventSetAllowPortalStateChange_Parms), Z_Construct_UFunction_ASBZGate_SetAllowPortalStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_SetAllowPortalStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_SetAllowPortalStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_SetAllowPortalStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGate_SetAllowPortalStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGate_SetAllowPortalStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGate_SetAttractorInstigator_Statics
	{
		struct SBZGate_eventSetAttractorInstigator_Parms
		{
			APawn* InInstigator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGate_SetAttractorInstigator_Statics::NewProp_InInstigator = { "InInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGate_eventSetAttractorInstigator_Parms, InInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGate_SetAttractorInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_SetAttractorInstigator_Statics::NewProp_InInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_SetAttractorInstigator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGate_SetAttractorInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGate, nullptr, "SetAttractorInstigator", nullptr, nullptr, sizeof(SBZGate_eventSetAttractorInstigator_Parms), Z_Construct_UFunction_ASBZGate_SetAttractorInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_SetAttractorInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_SetAttractorInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_SetAttractorInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGate_SetAttractorInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGate_SetAttractorInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGate_SetEnabled_Statics
	{
		struct SBZGate_eventSetEnabled_Parms
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
	void Z_Construct_UFunction_ASBZGate_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZGate_eventSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZGate_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGate_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZGate_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZGate_SetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGate_eventSetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZGate_SetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGate_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZGate_SetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGate_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_SetEnabled_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_SetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Fix for true pure virtual functions not being implemented\n" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
		{ "ToolTip", "Fix for true pure virtual functions not being implemented" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGate_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGate, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZGate_eventSetEnabled_Parms), Z_Construct_UFunction_ASBZGate_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGate_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGate_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGate_SetState_Statics
	{
		struct SBZGate_eventSetState_Parms
		{
			ESBZGateState InState;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZGate_SetState_Statics::NewProp_InState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZGate_SetState_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGate_eventSetState_Parms, InState), Z_Construct_UEnum_Starbreeze_ESBZGateState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZGate_SetState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGate_eventSetState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZGate_SetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGate_eventSetState_Parms), &Z_Construct_UFunction_ASBZGate_SetState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGate_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_SetState_Statics::NewProp_InState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_SetState_Statics::NewProp_InState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_SetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGate_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGate, nullptr, "SetState", nullptr, nullptr, sizeof(SBZGate_eventSetState_Parms), Z_Construct_UFunction_ASBZGate_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGate_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGate_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGate_SetYaw_Statics
	{
		struct SBZGate_eventSetYaw_Parms
		{
			USceneComponent* Mesh;
			float InYaw;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InYaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_SetYaw_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGate_SetYaw_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGate_eventSetYaw_Parms, Mesh), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_SetYaw_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_SetYaw_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZGate_SetYaw_Statics::NewProp_InYaw = { "InYaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGate_eventSetYaw_Parms, InYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGate_SetYaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_SetYaw_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGate_SetYaw_Statics::NewProp_InYaw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGate_SetYaw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGate_SetYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGate, nullptr, "SetYaw", nullptr, nullptr, sizeof(SBZGate_eventSetYaw_Parms), Z_Construct_UFunction_ASBZGate_SetYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_SetYaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGate_SetYaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGate_SetYaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGate_SetYaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGate_SetYaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZGate_NoRegister()
	{
		return ASBZGate::StaticClass();
	}
	struct Z_Construct_UClass_ASBZGate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGateStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGateStateChanged;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InitialState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InitialState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinkMoveFinishedState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkMoveFinishedState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LinkMoveFinishedState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServerState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ServerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenForwardExplosionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OpenForwardExplosionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenBackwardExplosionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OpenBackwardExplosionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseForwardExplosionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CloseForwardExplosionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseBackwardExplosionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CloseBackwardExplosionData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshDataArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationBoundBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavigationBoundBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsNavigationLinkCalculated_MetaData[];
#endif
		static void NewProp_bIsNavigationLinkCalculated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNavigationLinkCalculated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLinkCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NavLinkCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavlinkEnabledMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_NavlinkEnabledMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLinkComponentArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavLinkComponentArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLinkComponentArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavLinkComponentArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLinkAgilityComponentArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavLinkAgilityComponentArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLinkAgilityComponentArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavLinkAgilityComponentArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOpenForward_MetaData[];
#endif
		static void NewProp_bIsOpenForward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOpenForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOpenBackwardAllowed_MetaData[];
#endif
		static void NewProp_bIsOpenBackwardAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOpenBackwardAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOpenFromFrontAllowed_MetaData[];
#endif
		static void NewProp_bIsOpenFromFrontAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOpenFromFrontAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLinkMoveFinishedStateSet_MetaData[];
#endif
		static void NewProp_bIsLinkMoveFinishedStateSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLinkMoveFinishedStateSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUnlockingLinkMove_MetaData[];
#endif
		static void NewProp_bIsUnlockingLinkMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUnlockingLinkMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUnlockingLinkMoveCooldown_MetaData[];
#endif
		static void NewProp_bIsUnlockingLinkMoveCooldown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUnlockingLinkMoveCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSliding_MetaData[];
#endif
		static void NewProp_bIsSliding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSliding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockingLinkMoveCooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnlockingLinkMoveCooldownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockingLinkMoveCooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnlockingLinkMoveCooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlammedClosedSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlammedClosedSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlammedOpenSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlammedOpenSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpenSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloseSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreachSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BreachSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnlockSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortalObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PortalObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBreachPOIandSound_MetaData[];
#endif
		static void NewProp_bUseBreachPOIandSound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBreachPOIandSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreachSoundTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BreachSoundTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavAreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NavAreaClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolSnapData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToolSnapData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SoundRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundRangeSlammedOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SoundRangeSlammedOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttractorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftNavlinkOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftNavlinkOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightNavlinkOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightNavlinkOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraversableBehaviorCategoryBitmask_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraversableBehaviorCategoryBitmask;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClosedGateSoundReduction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosedGateSoundReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ClosedGateSoundReduction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsServerRestoringState_MetaData[];
#endif
		static void NewProp_bIsServerRestoringState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsServerRestoringState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingMoveIgnorePawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PendingMoveIgnorePawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsNavigationLinksEnabled_MetaData[];
#endif
		static void NewProp_bIsNavigationLinksEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNavigationLinksEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZGate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZGate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZGate_GetAllowPortalStateChange, "GetAllowPortalStateChange" }, // 2564412115
		{ &Z_Construct_UFunction_ASBZGate_GetPortalObject, "GetPortalObject" }, // 2998161812
		{ &Z_Construct_UFunction_ASBZGate_IsOpenForwardFromDirection, "IsOpenForwardFromDirection" }, // 4080362388
		{ &Z_Construct_UFunction_ASBZGate_IsOpenForwardFromLocation, "IsOpenForwardFromLocation" }, // 1499077322
		{ &Z_Construct_UFunction_ASBZGate_Multicast_HandleAgilityTagEvent, "Multicast_HandleAgilityTagEvent" }, // 2435019814
		{ &Z_Construct_UFunction_ASBZGate_Multicast_OnAddIgnoreMoveActor, "Multicast_OnAddIgnoreMoveActor" }, // 2768347813
		{ &Z_Construct_UFunction_ASBZGate_Multicast_OnUnlockingLinkMoveEnded, "Multicast_OnUnlockingLinkMoveEnded" }, // 398731686
		{ &Z_Construct_UFunction_ASBZGate_Multicast_OnUnlockingLinkMoveStarted, "Multicast_OnUnlockingLinkMoveStarted" }, // 1082455820
		{ &Z_Construct_UFunction_ASBZGate_Multicast_ReplicateExplosion, "Multicast_ReplicateExplosion" }, // 4193698247
		{ &Z_Construct_UFunction_ASBZGate_Multicast_SetState, "Multicast_SetState" }, // 1174393938
		{ &Z_Construct_UFunction_ASBZGate_OnRep_State, "OnRep_State" }, // 3399460811
		{ &Z_Construct_UFunction_ASBZGate_OnStateChanged, "OnStateChanged" }, // 1247046880
		{ &Z_Construct_UFunction_ASBZGate_OnStateDone, "OnStateDone" }, // 1858297804
		{ &Z_Construct_UFunction_ASBZGate_SetAllowPortalStateChange, "SetAllowPortalStateChange" }, // 1054733975
		{ &Z_Construct_UFunction_ASBZGate_SetAttractorInstigator, "SetAttractorInstigator" }, // 3985862907
		{ &Z_Construct_UFunction_ASBZGate_SetEnabled, "SetEnabled" }, // 224104146
		{ &Z_Construct_UFunction_ASBZGate_SetState, "SetState" }, // 3131637548
		{ &Z_Construct_UFunction_ASBZGate_SetYaw, "SetYaw" }, // 767626471
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGate.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_OnGateStateChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_OnGateStateChanged = { "OnGateStateChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, OnGateStateChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZGateStateChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_OnGateStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_OnGateStateChanged_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_InitialState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_InitialState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_InitialState = { "InitialState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, InitialState), Z_Construct_UEnum_Starbreeze_ESBZGateState, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_InitialState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_InitialState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_State = { "State", "OnRep_State", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, State), Z_Construct_UEnum_Starbreeze_ESBZGateState, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_LinkMoveFinishedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_LinkMoveFinishedState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_LinkMoveFinishedState = { "LinkMoveFinishedState", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, LinkMoveFinishedState), Z_Construct_UEnum_Starbreeze_ESBZGateState, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_LinkMoveFinishedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_LinkMoveFinishedState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_ServerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_ServerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_ServerState = { "ServerState", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, ServerState), Z_Construct_UEnum_Starbreeze_ESBZGateState, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_ServerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_ServerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_ExplosionInstigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_ExplosionInstigator = { "ExplosionInstigator", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, ExplosionInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_ExplosionInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_ExplosionInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_OpenForwardExplosionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_OpenForwardExplosionData = { "OpenForwardExplosionData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, OpenForwardExplosionData), Z_Construct_UScriptStruct_FSBZGateExplosionData, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_OpenForwardExplosionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_OpenForwardExplosionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_OpenBackwardExplosionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_OpenBackwardExplosionData = { "OpenBackwardExplosionData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, OpenBackwardExplosionData), Z_Construct_UScriptStruct_FSBZGateExplosionData, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_OpenBackwardExplosionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_OpenBackwardExplosionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_CloseForwardExplosionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_CloseForwardExplosionData = { "CloseForwardExplosionData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, CloseForwardExplosionData), Z_Construct_UScriptStruct_FSBZGateExplosionData, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_CloseForwardExplosionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_CloseForwardExplosionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_CloseBackwardExplosionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_CloseBackwardExplosionData = { "CloseBackwardExplosionData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, CloseBackwardExplosionData), Z_Construct_UScriptStruct_FSBZGateExplosionData, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_CloseBackwardExplosionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_CloseBackwardExplosionData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_MeshDataArray_Inner = { "MeshDataArray", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZGateMeshData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_MeshDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_MeshDataArray = { "MeshDataArray", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, MeshDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_MeshDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_MeshDataArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_NavigationBoundBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_NavigationBoundBox = { "NavigationBoundBox", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, NavigationBoundBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_NavigationBoundBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_NavigationBoundBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsNavigationLinkCalculated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	void Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsNavigationLinkCalculated_SetBit(void* Obj)
	{
		((ASBZGate*)Obj)->bIsNavigationLinkCalculated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsNavigationLinkCalculated = { "bIsNavigationLinkCalculated", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZGate), &Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsNavigationLinkCalculated_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsNavigationLinkCalculated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsNavigationLinkCalculated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkCount = { "NavLinkCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, NavLinkCount), METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_NavlinkEnabledMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_NavlinkEnabledMask = { "NavlinkEnabledMask", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, NavlinkEnabledMask), METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_NavlinkEnabledMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_NavlinkEnabledMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkComponentArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkComponentArray_Inner = { "NavLinkComponentArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZGateNavLinkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkComponentArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkComponentArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkComponentArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkComponentArray = { "NavLinkComponentArray", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, NavLinkComponentArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkComponentArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkComponentArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkAgilityComponentArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkAgilityComponentArray_Inner = { "NavLinkAgilityComponentArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZGateNavLinkAgilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkAgilityComponentArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkAgilityComponentArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkAgilityComponentArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkAgilityComponentArray = { "NavLinkAgilityComponentArray", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, NavLinkAgilityComponentArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkAgilityComponentArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkAgilityComponentArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenForward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	void Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenForward_SetBit(void* Obj)
	{
		((ASBZGate*)Obj)->bIsOpenForward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenForward = { "bIsOpenForward", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZGate), &Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenForward_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenBackwardAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	void Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenBackwardAllowed_SetBit(void* Obj)
	{
		((ASBZGate*)Obj)->bIsOpenBackwardAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenBackwardAllowed = { "bIsOpenBackwardAllowed", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZGate), &Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenBackwardAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenBackwardAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenBackwardAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenFromFrontAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	void Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenFromFrontAllowed_SetBit(void* Obj)
	{
		((ASBZGate*)Obj)->bIsOpenFromFrontAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenFromFrontAllowed = { "bIsOpenFromFrontAllowed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZGate), &Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenFromFrontAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenFromFrontAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenFromFrontAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsLinkMoveFinishedStateSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	void Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsLinkMoveFinishedStateSet_SetBit(void* Obj)
	{
		((ASBZGate*)Obj)->bIsLinkMoveFinishedStateSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsLinkMoveFinishedStateSet = { "bIsLinkMoveFinishedStateSet", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZGate), &Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsLinkMoveFinishedStateSet_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsLinkMoveFinishedStateSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsLinkMoveFinishedStateSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsUnlockingLinkMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	void Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsUnlockingLinkMove_SetBit(void* Obj)
	{
		((ASBZGate*)Obj)->bIsUnlockingLinkMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsUnlockingLinkMove = { "bIsUnlockingLinkMove", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZGate), &Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsUnlockingLinkMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsUnlockingLinkMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsUnlockingLinkMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsUnlockingLinkMoveCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	void Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsUnlockingLinkMoveCooldown_SetBit(void* Obj)
	{
		((ASBZGate*)Obj)->bIsUnlockingLinkMoveCooldown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsUnlockingLinkMoveCooldown = { "bIsUnlockingLinkMoveCooldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZGate), &Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsUnlockingLinkMoveCooldown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsUnlockingLinkMoveCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsUnlockingLinkMoveCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsSliding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	void Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsSliding_SetBit(void* Obj)
	{
		((ASBZGate*)Obj)->bIsSliding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsSliding = { "bIsSliding", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZGate), &Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsSliding_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsSliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsSliding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_UnlockingLinkMoveCooldownDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_UnlockingLinkMoveCooldownDuration = { "UnlockingLinkMoveCooldownDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, UnlockingLinkMoveCooldownDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_UnlockingLinkMoveCooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_UnlockingLinkMoveCooldownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_UnlockingLinkMoveCooldownTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_UnlockingLinkMoveCooldownTime = { "UnlockingLinkMoveCooldownTime", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, UnlockingLinkMoveCooldownTime), METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_UnlockingLinkMoveCooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_UnlockingLinkMoveCooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_SlammedClosedSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_SlammedClosedSound = { "SlammedClosedSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, SlammedClosedSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_SlammedClosedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_SlammedClosedSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_SlammedOpenSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_SlammedOpenSound = { "SlammedOpenSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, SlammedOpenSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_SlammedOpenSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_SlammedOpenSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_OpenSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_OpenSound = { "OpenSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, OpenSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_OpenSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_OpenSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_CloseSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_CloseSound = { "CloseSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, CloseSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_CloseSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_CloseSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_BreachSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_BreachSound = { "BreachSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, BreachSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_BreachSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_BreachSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_UnlockSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_UnlockSound = { "UnlockSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, UnlockSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_UnlockSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_UnlockSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_PortalObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_PortalObject = { "PortalObject", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, PortalObject), Z_Construct_UClass_ASBZAkAcousticPortal_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_PortalObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_PortalObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_bUseBreachPOIandSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	void Z_Construct_UClass_ASBZGate_Statics::NewProp_bUseBreachPOIandSound_SetBit(void* Obj)
	{
		((ASBZGate*)Obj)->bUseBreachPOIandSound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_bUseBreachPOIandSound = { "bUseBreachPOIandSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZGate), &Z_Construct_UClass_ASBZGate_Statics::NewProp_bUseBreachPOIandSound_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_bUseBreachPOIandSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_bUseBreachPOIandSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_BreachSoundTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_BreachSoundTag = { "BreachSoundTag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, BreachSoundTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_BreachSoundTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_BreachSoundTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_NavAreaClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_NavAreaClass = { "NavAreaClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, NavAreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_NavAreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_NavAreaClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_ToolSnapData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_ToolSnapData = { "ToolSnapData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, ToolSnapData), Z_Construct_UClass_USBZToolSnapData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_ToolSnapData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_ToolSnapData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_SoundRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_SoundRange = { "SoundRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, SoundRange), METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_SoundRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_SoundRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_SoundRangeSlammedOpen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_SoundRangeSlammedOpen = { "SoundRangeSlammedOpen", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, SoundRangeSlammedOpen), METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_SoundRangeSlammedOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_SoundRangeSlammedOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_AttractorComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_AttractorComponent = { "AttractorComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, AttractorComponent), Z_Construct_UClass_USBZAIAttractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_AttractorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_AttractorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_LeftNavlinkOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_LeftNavlinkOffset = { "LeftNavlinkOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, LeftNavlinkOffset), METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_LeftNavlinkOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_LeftNavlinkOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_RightNavlinkOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_RightNavlinkOffset = { "RightNavlinkOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, RightNavlinkOffset), METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_RightNavlinkOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_RightNavlinkOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_TraversableBehaviorCategoryBitmask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_TraversableBehaviorCategoryBitmask = { "TraversableBehaviorCategoryBitmask", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, TraversableBehaviorCategoryBitmask), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_TraversableBehaviorCategoryBitmask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_TraversableBehaviorCategoryBitmask_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_ClosedGateSoundReduction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_ClosedGateSoundReduction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_ClosedGateSoundReduction = { "ClosedGateSoundReduction", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, ClosedGateSoundReduction), Z_Construct_UEnum_Starbreeze_ESBZGateSoundReduction, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_ClosedGateSoundReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_ClosedGateSoundReduction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsServerRestoringState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	void Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsServerRestoringState_SetBit(void* Obj)
	{
		((ASBZGate*)Obj)->bIsServerRestoringState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsServerRestoringState = { "bIsServerRestoringState", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZGate), &Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsServerRestoringState_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsServerRestoringState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsServerRestoringState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_PendingMoveIgnorePawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_PendingMoveIgnorePawn = { "PendingMoveIgnorePawn", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGate, PendingMoveIgnorePawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_PendingMoveIgnorePawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_PendingMoveIgnorePawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsNavigationLinksEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGate" },
		{ "ModuleRelativePath", "Public/SBZGate.h" },
	};
#endif
	void Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsNavigationLinksEnabled_SetBit(void* Obj)
	{
		((ASBZGate*)Obj)->bIsNavigationLinksEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsNavigationLinksEnabled = { "bIsNavigationLinksEnabled", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZGate), &Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsNavigationLinksEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsNavigationLinksEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsNavigationLinksEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZGate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_OnGateStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_InitialState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_InitialState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_LinkMoveFinishedState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_LinkMoveFinishedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_ServerState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_ServerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_ExplosionInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_OpenForwardExplosionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_OpenBackwardExplosionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_CloseForwardExplosionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_CloseBackwardExplosionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_MeshDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_MeshDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_NavigationBoundBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsNavigationLinkCalculated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_NavlinkEnabledMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkComponentArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkComponentArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkAgilityComponentArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_NavLinkAgilityComponentArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenBackwardAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsOpenFromFrontAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsLinkMoveFinishedStateSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsUnlockingLinkMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsUnlockingLinkMoveCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsSliding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_UnlockingLinkMoveCooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_UnlockingLinkMoveCooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_SlammedClosedSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_SlammedOpenSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_OpenSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_CloseSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_BreachSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_UnlockSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_PortalObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_bUseBreachPOIandSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_BreachSoundTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_NavAreaClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_ToolSnapData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_SoundRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_SoundRangeSlammedOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_AttractorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_LeftNavlinkOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_RightNavlinkOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_TraversableBehaviorCategoryBitmask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_ClosedGateSoundReduction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_ClosedGateSoundReduction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsServerRestoringState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_PendingMoveIgnorePawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGate_Statics::NewProp_bIsNavigationLinksEnabled,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZGate_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZExplosive_NoRegister, (int32)VTABLE_OFFSET(ASBZGate, ISBZExplosive), false },
			{ Z_Construct_UClass_UNavRelevantInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZGate, INavRelevantInterface), false },
			{ Z_Construct_UClass_UNavLinkHostInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZGate, INavLinkHostInterface), false },
			{ Z_Construct_UClass_USBZAIActionInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZGate, ISBZAIActionInteractableInterface), false },
			{ Z_Construct_UClass_UAISightTargetInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZGate, IAISightTargetInterface), false },
			{ Z_Construct_UClass_USBZToolSnapInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZGate, ISBZToolSnapInterface), false },
			{ Z_Construct_UClass_USBZAgilityObstacleInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZGate, ISBZAgilityObstacleInterface), false },
			{ Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZGate, ISBZHurtReactionDataInterface), false },
			{ Z_Construct_UClass_USBZAIAttractorInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZGate, ISBZAIAttractorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZGate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZGate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZGate_Statics::ClassParams = {
		&ASBZGate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZGate_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZGate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZGate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZGate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZGate, 3295535902);
	template<> STARBREEZE_API UClass* StaticClass<ASBZGate>()
	{
		return ASBZGate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZGate(Z_Construct_UClass_ASBZGate, &ASBZGate::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZGate"), false, nullptr, nullptr, nullptr);

	void ASBZGate::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_State(TEXT("State"));

		const bool bIsValid = true
			&& Name_State == ClassReps[(int32)ENetFields_Private::State].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZGate"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZGate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
