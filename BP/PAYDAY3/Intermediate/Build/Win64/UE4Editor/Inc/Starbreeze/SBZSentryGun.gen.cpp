// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSentryGun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSentryGun() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSentryGun_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSentryGun();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZArmedPawn();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosionResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryGunAttributeSet_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDamageDistance();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIDrone_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosive_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZSentryGun::execMulticast_Fall)
	{
		P_GET_STRUCT(FVector,Z_Param_InStartLocation);
		P_GET_STRUCT(FVector,Z_Param_InTargetLocation);
		P_GET_STRUCT(FQuat,Z_Param_InTargetQuat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_Fall_Implementation(Z_Param_InStartLocation,Z_Param_InTargetLocation,Z_Param_InTargetQuat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSentryGun::execMulticast_ReachedTargetLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_InTargetLocation);
		P_GET_STRUCT(FRotator,Z_Param_InTargetRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ReachedTargetLocation_Implementation(Z_Param_InTargetLocation,Z_Param_InTargetRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSentryGun::execMulticast_ReplicateExplosion)
	{
		P_GET_STRUCT(FSBZExplosionResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ReplicateExplosion_Implementation(Z_Param_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSentryGun::execMulticast_SetCurrentTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_NewCurrentTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetCurrentTarget_Implementation(Z_Param_NewCurrentTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSentryGun::execOnAckCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckCompleteInteraction(Z_Param_InInteractable,Z_Param_InInteractor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSentryGun::execOnOwnerEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOwnerEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSentryGun::execOnParentActorEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_OldAttachParentActor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnParentActorEndPlay(Z_Param_OldAttachParentActor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSentryGun::execOnRep_OwnerPlayerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OwnerPlayerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSentryGun::execOnRep_TargetLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TargetLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSentryGun::execOnRep_YawRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_YawRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSentryGun::execOnSentryEnemyMarked)
	{
		P_GET_OBJECT(APawn,Z_Param_InPawn);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSentryEnemyMarked(Z_Param_InPawn,Z_Param_InDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSentryGun::execOnServerCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerCompleteInteraction(Z_Param_InInteractable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	static FName NAME_ASBZSentryGun_Multicast_Fall = FName(TEXT("Multicast_Fall"));
	void ASBZSentryGun::Multicast_Fall(FVector const& InStartLocation, FVector const& InTargetLocation, FQuat const& InTargetQuat)
	{
		SBZSentryGun_eventMulticast_Fall_Parms Parms;
		Parms.InStartLocation=InStartLocation;
		Parms.InTargetLocation=InTargetLocation;
		Parms.InTargetQuat=InTargetQuat;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSentryGun_Multicast_Fall),&Parms);
	}
	static FName NAME_ASBZSentryGun_Multicast_ReachedTargetLocation = FName(TEXT("Multicast_ReachedTargetLocation"));
	void ASBZSentryGun::Multicast_ReachedTargetLocation(FVector const& InTargetLocation, FRotator const& InTargetRotation)
	{
		SBZSentryGun_eventMulticast_ReachedTargetLocation_Parms Parms;
		Parms.InTargetLocation=InTargetLocation;
		Parms.InTargetRotation=InTargetRotation;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSentryGun_Multicast_ReachedTargetLocation),&Parms);
	}
	static FName NAME_ASBZSentryGun_Multicast_ReplicateExplosion = FName(TEXT("Multicast_ReplicateExplosion"));
	void ASBZSentryGun::Multicast_ReplicateExplosion(FSBZExplosionResult const& Result)
	{
		SBZSentryGun_eventMulticast_ReplicateExplosion_Parms Parms;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSentryGun_Multicast_ReplicateExplosion),&Parms);
	}
	static FName NAME_ASBZSentryGun_Multicast_SetCurrentTarget = FName(TEXT("Multicast_SetCurrentTarget"));
	void ASBZSentryGun::Multicast_SetCurrentTarget(AActor* NewCurrentTarget)
	{
		SBZSentryGun_eventMulticast_SetCurrentTarget_Parms Parms;
		Parms.NewCurrentTarget=NewCurrentTarget;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSentryGun_Multicast_SetCurrentTarget),&Parms);
	}
	static FName NAME_ASBZSentryGun_OnOverheatDamageTaken = FName(TEXT("OnOverheatDamageTaken"));
	void ASBZSentryGun::OnOverheatDamageTaken(float InHealth)
	{
		SBZSentryGun_eventOnOverheatDamageTaken_Parms Parms;
		Parms.InHealth=InHealth;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSentryGun_OnOverheatDamageTaken),&Parms);
	}
	static FName NAME_ASBZSentryGun_OnOverheated = FName(TEXT("OnOverheated"));
	void ASBZSentryGun::OnOverheated()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZSentryGun_OnOverheated),NULL);
	}
	void ASBZSentryGun::StaticRegisterNativesASBZSentryGun()
	{
		UClass* Class = ASBZSentryGun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_Fall", &ASBZSentryGun::execMulticast_Fall },
			{ "Multicast_ReachedTargetLocation", &ASBZSentryGun::execMulticast_ReachedTargetLocation },
			{ "Multicast_ReplicateExplosion", &ASBZSentryGun::execMulticast_ReplicateExplosion },
			{ "Multicast_SetCurrentTarget", &ASBZSentryGun::execMulticast_SetCurrentTarget },
			{ "OnAckCompleteInteraction", &ASBZSentryGun::execOnAckCompleteInteraction },
			{ "OnOwnerEndPlay", &ASBZSentryGun::execOnOwnerEndPlay },
			{ "OnParentActorEndPlay", &ASBZSentryGun::execOnParentActorEndPlay },
			{ "OnRep_OwnerPlayerState", &ASBZSentryGun::execOnRep_OwnerPlayerState },
			{ "OnRep_TargetLocation", &ASBZSentryGun::execOnRep_TargetLocation },
			{ "OnRep_YawRotation", &ASBZSentryGun::execOnRep_YawRotation },
			{ "OnSentryEnemyMarked", &ASBZSentryGun::execOnSentryEnemyMarked },
			{ "OnServerCompleteInteraction", &ASBZSentryGun::execOnServerCompleteInteraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InStartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTargetQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTargetQuat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::NewProp_InStartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::NewProp_InStartLocation = { "InStartLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSentryGun_eventMulticast_Fall_Parms, InStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::NewProp_InStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::NewProp_InStartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::NewProp_InTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::NewProp_InTargetLocation = { "InTargetLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSentryGun_eventMulticast_Fall_Parms, InTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::NewProp_InTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::NewProp_InTargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::NewProp_InTargetQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::NewProp_InTargetQuat = { "InTargetQuat", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSentryGun_eventMulticast_Fall_Parms, InTargetQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::NewProp_InTargetQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::NewProp_InTargetQuat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::NewProp_InStartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::NewProp_InTargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::NewProp_InTargetQuat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSentryGun, nullptr, "Multicast_Fall", nullptr, nullptr, sizeof(SBZSentryGun_eventMulticast_Fall_Parms), Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTargetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTargetRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetLocation = { "InTargetLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSentryGun_eventMulticast_ReachedTargetLocation_Parms, InTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetRotation = { "InTargetRotation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSentryGun_eventMulticast_ReachedTargetLocation_Parms, InTargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSentryGun, nullptr, "Multicast_ReachedTargetLocation", nullptr, nullptr, sizeof(SBZSentryGun_eventMulticast_ReachedTargetLocation_Parms), Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSentryGun_Multicast_ReplicateExplosion_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSentryGun_Multicast_ReplicateExplosion_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSentryGun_eventMulticast_ReplicateExplosion_Parms, Result), Z_Construct_UScriptStruct_FSBZExplosionResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSentryGun_Multicast_ReplicateExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_Multicast_ReplicateExplosion_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSentryGun_Multicast_ReplicateExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSentryGun, nullptr, "Multicast_ReplicateExplosion", nullptr, nullptr, sizeof(SBZSentryGun_eventMulticast_ReplicateExplosion_Parms), Z_Construct_UFunction_ASBZSentryGun_Multicast_ReplicateExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_Multicast_ReplicateExplosion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSentryGun_Multicast_ReplicateExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSentryGun_Multicast_ReplicateExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSentryGun_Multicast_SetCurrentTarget_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCurrentTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSentryGun_Multicast_SetCurrentTarget_Statics::NewProp_NewCurrentTarget = { "NewCurrentTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSentryGun_eventMulticast_SetCurrentTarget_Parms, NewCurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSentryGun_Multicast_SetCurrentTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_Multicast_SetCurrentTarget_Statics::NewProp_NewCurrentTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_Multicast_SetCurrentTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSentryGun_Multicast_SetCurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSentryGun, nullptr, "Multicast_SetCurrentTarget", nullptr, nullptr, sizeof(SBZSentryGun_eventMulticast_SetCurrentTarget_Parms), Z_Construct_UFunction_ASBZSentryGun_Multicast_SetCurrentTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_Multicast_SetCurrentTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_Multicast_SetCurrentTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_Multicast_SetCurrentTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSentryGun_Multicast_SetCurrentTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSentryGun_Multicast_SetCurrentTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics
	{
		struct SBZSentryGun_eventOnAckCompleteInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* InInteractor;
			bool bIsLocallyControlledInteractor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledInteractor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSentryGun_eventOnAckCompleteInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSentryGun_eventOnAckCompleteInteraction_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZSentryGun_eventOnAckCompleteInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSentryGun_eventOnAckCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSentryGun, nullptr, "OnAckCompleteInteraction", nullptr, nullptr, sizeof(SBZSentryGun_eventOnAckCompleteInteraction_Parms), Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSentryGun_OnOverheatDamageTaken_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZSentryGun_OnOverheatDamageTaken_Statics::NewProp_InHealth = { "InHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSentryGun_eventOnOverheatDamageTaken_Parms, InHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSentryGun_OnOverheatDamageTaken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_OnOverheatDamageTaken_Statics::NewProp_InHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_OnOverheatDamageTaken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSentryGun_OnOverheatDamageTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSentryGun, nullptr, "OnOverheatDamageTaken", nullptr, nullptr, sizeof(SBZSentryGun_eventOnOverheatDamageTaken_Parms), Z_Construct_UFunction_ASBZSentryGun_OnOverheatDamageTaken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnOverheatDamageTaken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_OnOverheatDamageTaken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnOverheatDamageTaken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSentryGun_OnOverheatDamageTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSentryGun_OnOverheatDamageTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSentryGun_OnOverheated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_OnOverheated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSentryGun_OnOverheated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSentryGun, nullptr, "OnOverheated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_OnOverheated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnOverheated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSentryGun_OnOverheated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSentryGun_OnOverheated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSentryGun_OnOwnerEndPlay_Statics
	{
		struct SBZSentryGun_eventOnOwnerEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSentryGun_OnOwnerEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSentryGun_eventOnOwnerEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZSentryGun_OnOwnerEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSentryGun_eventOnOwnerEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSentryGun_OnOwnerEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_OnOwnerEndPlay_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_OnOwnerEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_OnOwnerEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSentryGun_OnOwnerEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSentryGun, nullptr, "OnOwnerEndPlay", nullptr, nullptr, sizeof(SBZSentryGun_eventOnOwnerEndPlay_Parms), Z_Construct_UFunction_ASBZSentryGun_OnOwnerEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnOwnerEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_OnOwnerEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnOwnerEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSentryGun_OnOwnerEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSentryGun_OnOwnerEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSentryGun_OnParentActorEndPlay_Statics
	{
		struct SBZSentryGun_eventOnParentActorEndPlay_Parms
		{
			AActor* OldAttachParentActor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldAttachParentActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSentryGun_OnParentActorEndPlay_Statics::NewProp_OldAttachParentActor = { "OldAttachParentActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSentryGun_eventOnParentActorEndPlay_Parms, OldAttachParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZSentryGun_OnParentActorEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSentryGun_eventOnParentActorEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSentryGun_OnParentActorEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_OnParentActorEndPlay_Statics::NewProp_OldAttachParentActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_OnParentActorEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_OnParentActorEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSentryGun_OnParentActorEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSentryGun, nullptr, "OnParentActorEndPlay", nullptr, nullptr, sizeof(SBZSentryGun_eventOnParentActorEndPlay_Parms), Z_Construct_UFunction_ASBZSentryGun_OnParentActorEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnParentActorEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_OnParentActorEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnParentActorEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSentryGun_OnParentActorEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSentryGun_OnParentActorEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSentryGun_OnRep_OwnerPlayerState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_OnRep_OwnerPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSentryGun_OnRep_OwnerPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSentryGun, nullptr, "OnRep_OwnerPlayerState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_OnRep_OwnerPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnRep_OwnerPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSentryGun_OnRep_OwnerPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSentryGun_OnRep_OwnerPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSentryGun_OnRep_TargetLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_OnRep_TargetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSentryGun_OnRep_TargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSentryGun, nullptr, "OnRep_TargetLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_OnRep_TargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnRep_TargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSentryGun_OnRep_TargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSentryGun_OnRep_TargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSentryGun_OnRep_YawRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_OnRep_YawRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSentryGun_OnRep_YawRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSentryGun, nullptr, "OnRep_YawRotation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_OnRep_YawRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnRep_YawRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSentryGun_OnRep_YawRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSentryGun_OnRep_YawRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSentryGun_OnSentryEnemyMarked_Statics
	{
		struct SBZSentryGun_eventOnSentryEnemyMarked_Parms
		{
			APawn* InPawn;
			float InDuration;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPawn;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSentryGun_OnSentryEnemyMarked_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSentryGun_eventOnSentryEnemyMarked_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZSentryGun_OnSentryEnemyMarked_Statics::NewProp_InDuration = { "InDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSentryGun_eventOnSentryEnemyMarked_Parms, InDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSentryGun_OnSentryEnemyMarked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_OnSentryEnemyMarked_Statics::NewProp_InPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_OnSentryEnemyMarked_Statics::NewProp_InDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_OnSentryEnemyMarked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSentryGun_OnSentryEnemyMarked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSentryGun, nullptr, "OnSentryEnemyMarked", nullptr, nullptr, sizeof(SBZSentryGun_eventOnSentryEnemyMarked_Parms), Z_Construct_UFunction_ASBZSentryGun_OnSentryEnemyMarked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnSentryEnemyMarked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_OnSentryEnemyMarked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnSentryEnemyMarked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSentryGun_OnSentryEnemyMarked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSentryGun_OnSentryEnemyMarked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics
	{
		struct SBZSentryGun_eventOnServerCompleteInteraction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSentryGun_eventOnServerCompleteInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSentryGun_eventOnServerCompleteInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZSentryGun_eventOnServerCompleteInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSentryGun_eventOnServerCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSentryGun, nullptr, "OnServerCompleteInteraction", nullptr, nullptr, sizeof(SBZSentryGun_eventOnServerCompleteInteraction_Parms), Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZSentryGun_NoRegister()
	{
		return ASBZSentryGun::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSentryGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfOverheatDamagePerShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfOverheatDamagePerShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeployMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeployMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMarkedTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentMarkedTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentScanTargetDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentScanTargetDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RotationEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationStopEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RotationStopEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverheatEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverheatEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetonationEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetonationEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerPlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSentryRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentSentryRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSentryRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastSentryRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSentryRotationCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSentryRotationCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocallyControlledOutline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocallyControlledOutline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetonationEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetonationEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageGameplayEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageGameplayEffectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalplayerFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LocalplayerFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerFeedbackCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerFeedbackCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtReactionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HurtReactionData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageDistanceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageDistanceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DamageDistanceArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyPlayerDamageScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FriendlyPlayerDamageScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInstigatorPlayerDamageScale_MetaData[];
#endif
		static void NewProp_bUseInstigatorPlayerDamageScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInstigatorPlayerDamageScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorPlayerDamageScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstigatorPlayerDamageScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionArmorPenetration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionArmorPenetration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostDamagePhysicsEffectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostDamagePhysicsEffectData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutOfBoundsBoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutOfBoundsBoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidTargetTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InvalidTargetTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackingDrone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HackingDrone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSentryGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZArmedPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZSentryGun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZSentryGun_Multicast_Fall, "Multicast_Fall" }, // 950262293
		{ &Z_Construct_UFunction_ASBZSentryGun_Multicast_ReachedTargetLocation, "Multicast_ReachedTargetLocation" }, // 3550188094
		{ &Z_Construct_UFunction_ASBZSentryGun_Multicast_ReplicateExplosion, "Multicast_ReplicateExplosion" }, // 3507188234
		{ &Z_Construct_UFunction_ASBZSentryGun_Multicast_SetCurrentTarget, "Multicast_SetCurrentTarget" }, // 4137484879
		{ &Z_Construct_UFunction_ASBZSentryGun_OnAckCompleteInteraction, "OnAckCompleteInteraction" }, // 595860605
		{ &Z_Construct_UFunction_ASBZSentryGun_OnOverheatDamageTaken, "OnOverheatDamageTaken" }, // 2787301539
		{ &Z_Construct_UFunction_ASBZSentryGun_OnOverheated, "OnOverheated" }, // 3888875333
		{ &Z_Construct_UFunction_ASBZSentryGun_OnOwnerEndPlay, "OnOwnerEndPlay" }, // 4073719134
		{ &Z_Construct_UFunction_ASBZSentryGun_OnParentActorEndPlay, "OnParentActorEndPlay" }, // 4037877952
		{ &Z_Construct_UFunction_ASBZSentryGun_OnRep_OwnerPlayerState, "OnRep_OwnerPlayerState" }, // 3406853106
		{ &Z_Construct_UFunction_ASBZSentryGun_OnRep_TargetLocation, "OnRep_TargetLocation" }, // 3743633449
		{ &Z_Construct_UFunction_ASBZSentryGun_OnRep_YawRotation, "OnRep_YawRotation" }, // 4090382443
		{ &Z_Construct_UFunction_ASBZSentryGun_OnSentryEnemyMarked, "OnSentryEnemyMarked" }, // 579671304
		{ &Z_Construct_UFunction_ASBZSentryGun_OnServerCompleteInteraction, "OnServerCompleteInteraction" }, // 3553218841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SBZSentryGun.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_FireCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_FireCooldown = { "FireCooldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, FireCooldown), METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_FireCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_FireCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_FireTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_FireTime = { "FireTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, FireTime), METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_FireTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_FireTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_YawRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_YawRotation = { "YawRotation", "OnRep_YawRotation", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, YawRotation), METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_YawRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_YawRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationCooldown = { "RotationCooldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, RotationCooldown), METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_SelfOverheatDamagePerShot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_SelfOverheatDamagePerShot = { "SelfOverheatDamagePerShot", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, SelfOverheatDamagePerShot), METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_SelfOverheatDamagePerShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_SelfOverheatDamagePerShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DeployMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DeployMontage = { "DeployMontage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, DeployMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DeployMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DeployMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LastTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LastTarget = { "LastTarget", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, LastTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LastTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LastTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentMarkedTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentMarkedTarget = { "CurrentMarkedTarget", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, CurrentMarkedTarget), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentMarkedTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentMarkedTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentScanTargetDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentScanTargetDirection = { "CurrentScanTargetDirection", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, CurrentScanTargetDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentScanTargetDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentScanTargetDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, AttributeSet), Z_Construct_UClass_USBZSentryGunAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, AudioComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationEvent = { "RotationEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, RotationEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationStopEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationStopEvent = { "RotationStopEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, RotationStopEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationStopEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationStopEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_OverheatEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_OverheatEvent = { "OverheatEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, OverheatEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_OverheatEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_OverheatEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DetonationEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DetonationEvent = { "DetonationEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, DetonationEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DetonationEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DetonationEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_Interactable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, Interactable), Z_Construct_UClass_USBZSentryInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_OwnerPlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_OwnerPlayerState = { "OwnerPlayerState", "OnRep_OwnerPlayerState", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, OwnerPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_OwnerPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_OwnerPlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentSentryRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentSentryRotation = { "CurrentSentryRotation", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, CurrentSentryRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentSentryRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentSentryRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LastSentryRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LastSentryRotation = { "LastSentryRotation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, LastSentryRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LastSentryRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LastSentryRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentSentryRotationCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentSentryRotationCooldown = { "CurrentSentryRotationCooldown", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, CurrentSentryRotationCooldown), METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentSentryRotationCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentSentryRotationCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LocallyControlledOutline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LocallyControlledOutline = { "LocallyControlledOutline", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, LocallyControlledOutline), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LocallyControlledOutline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LocallyControlledOutline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_ExplosionRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_ExplosionRange = { "ExplosionRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, ExplosionRange), METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_ExplosionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_ExplosionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DetonationEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DetonationEffect = { "DetonationEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, DetonationEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DetonationEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DetonationEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DamageGameplayEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DamageGameplayEffectClass = { "DamageGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, DamageGameplayEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DamageGameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DamageGameplayEffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DamageTypeClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, DamageTypeClass), Z_Construct_UClass_USBZDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DamageTypeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DamageTypeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LocalplayerFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LocalplayerFeedback = { "LocalplayerFeedback", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, LocalplayerFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LocalplayerFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LocalplayerFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_PlayerFeedbackCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_PlayerFeedbackCurve = { "PlayerFeedbackCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, PlayerFeedbackCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_PlayerFeedbackCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_PlayerFeedbackCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_HurtReactionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_HurtReactionData = { "HurtReactionData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, HurtReactionData), Z_Construct_UScriptStruct_FSBZHurtReactionData, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_HurtReactionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_HurtReactionData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DamageDistanceArray_Inner = { "DamageDistanceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZDamageDistance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DamageDistanceArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DamageDistanceArray = { "DamageDistanceArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, DamageDistanceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DamageDistanceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DamageDistanceArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_FriendlyPlayerDamageScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_FriendlyPlayerDamageScale = { "FriendlyPlayerDamageScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, FriendlyPlayerDamageScale), METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_FriendlyPlayerDamageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_FriendlyPlayerDamageScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_bUseInstigatorPlayerDamageScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_bUseInstigatorPlayerDamageScale_SetBit(void* Obj)
	{
		((ASBZSentryGun*)Obj)->bUseInstigatorPlayerDamageScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_bUseInstigatorPlayerDamageScale = { "bUseInstigatorPlayerDamageScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSentryGun), &Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_bUseInstigatorPlayerDamageScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_bUseInstigatorPlayerDamageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_bUseInstigatorPlayerDamageScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_InstigatorPlayerDamageScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_InstigatorPlayerDamageScale = { "InstigatorPlayerDamageScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, InstigatorPlayerDamageScale), METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_InstigatorPlayerDamageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_InstigatorPlayerDamageScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_ExplosionArmorPenetration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_ExplosionArmorPenetration = { "ExplosionArmorPenetration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, ExplosionArmorPenetration), METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_ExplosionArmorPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_ExplosionArmorPenetration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_PostDamagePhysicsEffectData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_PostDamagePhysicsEffectData = { "PostDamagePhysicsEffectData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, PostDamagePhysicsEffectData), Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_PostDamagePhysicsEffectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_PostDamagePhysicsEffectData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_OutOfBoundsBoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_OutOfBoundsBoxComponent = { "OutOfBoundsBoxComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, OutOfBoundsBoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_OutOfBoundsBoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_OutOfBoundsBoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_ProjectileMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_ProjectileMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_InvalidTargetTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_InvalidTargetTags = { "InvalidTargetTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, InvalidTargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_InvalidTargetTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_InvalidTargetTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_TargetLocation = { "TargetLocation", "OnRep_TargetLocation", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_HackingDrone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSentryGun" },
		{ "ModuleRelativePath", "Public/SBZSentryGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_HackingDrone = { "HackingDrone", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSentryGun, HackingDrone), Z_Construct_UClass_ASBZAIDrone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_HackingDrone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_HackingDrone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZSentryGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_FireCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_FireTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_YawRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_SelfOverheatDamagePerShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DeployMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LastTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentMarkedTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentScanTargetDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_AttributeSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_RotationStopEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_OverheatEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DetonationEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_OwnerPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentSentryRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LastSentryRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_CurrentSentryRotationCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LocallyControlledOutline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_ExplosionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DetonationEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DamageGameplayEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_LocalplayerFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_PlayerFeedbackCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_HurtReactionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DamageDistanceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_DamageDistanceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_FriendlyPlayerDamageScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_bUseInstigatorPlayerDamageScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_InstigatorPlayerDamageScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_ExplosionArmorPenetration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_PostDamagePhysicsEffectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_OutOfBoundsBoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_ProjectileMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_InvalidTargetTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSentryGun_Statics::NewProp_HackingDrone,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZSentryGun_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZExplosive_NoRegister, (int32)VTABLE_OFFSET(ASBZSentryGun, ISBZExplosive), false },
			{ Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSentryGun, ISBZHurtReactionDataInterface), false },
			{ Z_Construct_UClass_UAISightTargetInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSentryGun, IAISightTargetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSentryGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSentryGun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSentryGun_Statics::ClassParams = {
		&ASBZSentryGun::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZSentryGun_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSentryGun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSentryGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSentryGun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSentryGun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSentryGun, 1498566464);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSentryGun>()
	{
		return ASBZSentryGun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSentryGun(Z_Construct_UClass_ASBZSentryGun, &ASBZSentryGun::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSentryGun"), false, nullptr, nullptr, nullptr);

	void ASBZSentryGun::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_YawRotation(TEXT("YawRotation"));
		static const FName Name_CurrentScanTargetDirection(TEXT("CurrentScanTargetDirection"));
		static const FName Name_OwnerPlayerState(TEXT("OwnerPlayerState"));
		static const FName Name_CurrentSentryRotation(TEXT("CurrentSentryRotation"));
		static const FName Name_CurrentSentryRotationCooldown(TEXT("CurrentSentryRotationCooldown"));
		static const FName Name_TargetLocation(TEXT("TargetLocation"));

		const bool bIsValid = true
			&& Name_YawRotation == ClassReps[(int32)ENetFields_Private::YawRotation].Property->GetFName()
			&& Name_CurrentScanTargetDirection == ClassReps[(int32)ENetFields_Private::CurrentScanTargetDirection].Property->GetFName()
			&& Name_OwnerPlayerState == ClassReps[(int32)ENetFields_Private::OwnerPlayerState].Property->GetFName()
			&& Name_CurrentSentryRotation == ClassReps[(int32)ENetFields_Private::CurrentSentryRotation].Property->GetFName()
			&& Name_CurrentSentryRotationCooldown == ClassReps[(int32)ENetFields_Private::CurrentSentryRotationCooldown].Property->GetFName()
			&& Name_TargetLocation == ClassReps[(int32)ENetFields_Private::TargetLocation].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZSentryGun"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSentryGun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
