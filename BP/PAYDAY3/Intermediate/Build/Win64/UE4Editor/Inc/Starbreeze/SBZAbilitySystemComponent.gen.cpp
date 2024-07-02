// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAbilitySystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAbilitySystemComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAbilitySystemComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAbilitySystemComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSkillTriggeredHurtTargetData();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZProjectileTargetData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFallDamageTargetData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMeleeTargetData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActorMultiHitResult();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosionResult();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPredictionKey();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZQueuedAbilityData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVolumeDamageData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageType_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execClient_PredictedRagdollDenied)
	{
		P_GET_OBJECT(APawn,Z_Param_InPawn);
		P_GET_PROPERTY(FIntProperty,Z_Param_HurtReactionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_PredictedRagdollDenied_Implementation(Z_Param_InPawn,Z_Param_HurtReactionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execClient_RevertDamageAttributeSet)
	{
		P_GET_STRUCT(FSBZRevertDamageAttributeSetData,Z_Param_AttributeSetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_RevertDamageAttributeSet_Implementation(Z_Param_AttributeSetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execClient_RevertDamageAttributeSetArray)
	{
		P_GET_TARRAY(FSBZRevertDamageAttributeSetData,Z_Param_AttributeSetDataArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_RevertDamageAttributeSetArray_Implementation(Z_Param_AttributeSetDataArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execMulticast_AppliedSkillHurtReaction)
	{
		P_GET_STRUCT(FSBZSkillTriggeredHurtTargetData,Z_Param_SkillTriggeredHurtTargetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_AppliedSkillHurtReaction_Implementation(Z_Param_SkillTriggeredHurtTargetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execMulticast_ApplyGameplayEffectSpecToSelf)
	{
		P_GET_STRUCT(FGameplayEffectSpec,Z_Param_EffectSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ApplyGameplayEffectSpecToSelf_Implementation(Z_Param_EffectSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execMulticast_DebugApplyGameplayEffectSpecToSelf)
	{
		P_GET_STRUCT(FGameplayEffectSpec,Z_Param_EffectSpec);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FStrProperty,Z_Param_NameMagnitudeString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DebugApplyGameplayEffectSpecToSelf_Implementation(Z_Param_EffectSpec,Z_Param_Duration,Z_Param_NameMagnitudeString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execMulticast_EnterVolumeDamage)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_NetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_EnterVolumeDamage_Implementation(Z_Param_NetID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execMulticast_ExitVolumeDamage)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_NetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ExitVolumeDamage_Implementation(Z_Param_NetID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execMulticast_FireGrenadeProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_FireGrenadeProjectile_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execMulticast_FireProjectile)
	{
		P_GET_STRUCT(FSBZProjectileTargetData,Z_Param_TargetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_FireProjectile_Implementation(Z_Param_TargetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execMulticast_FireProjectileSentry)
	{
		P_GET_STRUCT(FSBZProjectileTargetData,Z_Param_TargetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_FireProjectileSentry_Implementation(Z_Param_TargetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execMulticast_Landed)
	{
		P_GET_STRUCT(FSBZFallDamageTargetData,Z_Param_TargetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_Landed_Implementation(Z_Param_TargetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execMulticast_MaskOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_MaskOn_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execMulticast_Melee)
	{
		P_GET_STRUCT(FSBZMeleeTargetData,Z_Param_TargetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_Melee_Implementation(Z_Param_TargetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execMulticast_ShoveHumanShield)
	{
		P_GET_STRUCT(FSBZActorMultiHitResult,Z_Param_ActorMultiHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ShoveHumanShield_Implementation(Z_Param_ActorMultiHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execOnMovementModeChanged)
	{
		P_GET_OBJECT(ACharacter,Z_Param_InCharacter);
		P_GET_PROPERTY(FByteProperty,Z_Param_PrevMovementMode);
		P_GET_PROPERTY(FByteProperty,Z_Param_PreviousCustomMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovementModeChanged(Z_Param_InCharacter,EMovementMode(Z_Param_PrevMovementMode),Z_Param_PreviousCustomMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execOnRep_AppliedVolumeDamageNetIDArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AppliedVolumeDamageNetIDArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execServer_MaskOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_MaskOn_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execServer_ReplicateCosmeticExplosion)
	{
		P_GET_OBJECT(UObject,Z_Param_ExplosiveObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_ReplicateCosmeticExplosion_Implementation(Z_Param_ExplosiveObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAbilitySystemComponent::execServer_ReplicateExplosion)
	{
		P_GET_OBJECT(UObject,Z_Param_ExplosiveObject);
		P_GET_STRUCT(FSBZExplosionResult,Z_Param_Result);
		P_GET_STRUCT(FPredictionKey,Z_Param_PredictionKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_ReplicateExplosion_Implementation(Z_Param_ExplosiveObject,Z_Param_Result,Z_Param_PredictionKey);
		P_NATIVE_END;
	}
	static FName NAME_USBZAbilitySystemComponent_Client_PredictedRagdollDenied = FName(TEXT("Client_PredictedRagdollDenied"));
	void USBZAbilitySystemComponent::Client_PredictedRagdollDenied(APawn* InPawn, int32 HurtReactionIndex)
	{
		SBZAbilitySystemComponent_eventClient_PredictedRagdollDenied_Parms Parms;
		Parms.InPawn=InPawn;
		Parms.HurtReactionIndex=HurtReactionIndex;
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilitySystemComponent_Client_PredictedRagdollDenied),&Parms);
	}
	static FName NAME_USBZAbilitySystemComponent_Client_RevertDamageAttributeSet = FName(TEXT("Client_RevertDamageAttributeSet"));
	void USBZAbilitySystemComponent::Client_RevertDamageAttributeSet(FSBZRevertDamageAttributeSetData const& AttributeSetData)
	{
		SBZAbilitySystemComponent_eventClient_RevertDamageAttributeSet_Parms Parms;
		Parms.AttributeSetData=AttributeSetData;
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilitySystemComponent_Client_RevertDamageAttributeSet),&Parms);
	}
	static FName NAME_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray = FName(TEXT("Client_RevertDamageAttributeSetArray"));
	void USBZAbilitySystemComponent::Client_RevertDamageAttributeSetArray(TArray<FSBZRevertDamageAttributeSetData> const& AttributeSetDataArray)
	{
		SBZAbilitySystemComponent_eventClient_RevertDamageAttributeSetArray_Parms Parms;
		Parms.AttributeSetDataArray=AttributeSetDataArray;
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray),&Parms);
	}
	static FName NAME_USBZAbilitySystemComponent_Multicast_AppliedSkillHurtReaction = FName(TEXT("Multicast_AppliedSkillHurtReaction"));
	void USBZAbilitySystemComponent::Multicast_AppliedSkillHurtReaction(FSBZSkillTriggeredHurtTargetData const& SkillTriggeredHurtTargetData)
	{
		SBZAbilitySystemComponent_eventMulticast_AppliedSkillHurtReaction_Parms Parms;
		Parms.SkillTriggeredHurtTargetData=SkillTriggeredHurtTargetData;
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilitySystemComponent_Multicast_AppliedSkillHurtReaction),&Parms);
	}
	static FName NAME_USBZAbilitySystemComponent_Multicast_ApplyGameplayEffectSpecToSelf = FName(TEXT("Multicast_ApplyGameplayEffectSpecToSelf"));
	void USBZAbilitySystemComponent::Multicast_ApplyGameplayEffectSpecToSelf(FGameplayEffectSpec const& EffectSpec)
	{
		SBZAbilitySystemComponent_eventMulticast_ApplyGameplayEffectSpecToSelf_Parms Parms;
		Parms.EffectSpec=EffectSpec;
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilitySystemComponent_Multicast_ApplyGameplayEffectSpecToSelf),&Parms);
	}
	static FName NAME_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf = FName(TEXT("Multicast_DebugApplyGameplayEffectSpecToSelf"));
	void USBZAbilitySystemComponent::Multicast_DebugApplyGameplayEffectSpecToSelf(FGameplayEffectSpec EffectSpec, float Duration, const FString& NameMagnitudeString)
	{
		SBZAbilitySystemComponent_eventMulticast_DebugApplyGameplayEffectSpecToSelf_Parms Parms;
		Parms.EffectSpec=EffectSpec;
		Parms.Duration=Duration;
		Parms.NameMagnitudeString=NameMagnitudeString;
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf),&Parms);
	}
	static FName NAME_USBZAbilitySystemComponent_Multicast_EnterVolumeDamage = FName(TEXT("Multicast_EnterVolumeDamage"));
	void USBZAbilitySystemComponent::Multicast_EnterVolumeDamage(uint32 NetID)
	{
		SBZAbilitySystemComponent_eventMulticast_EnterVolumeDamage_Parms Parms;
		Parms.NetID=NetID;
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilitySystemComponent_Multicast_EnterVolumeDamage),&Parms);
	}
	static FName NAME_USBZAbilitySystemComponent_Multicast_ExitVolumeDamage = FName(TEXT("Multicast_ExitVolumeDamage"));
	void USBZAbilitySystemComponent::Multicast_ExitVolumeDamage(uint32 NetID)
	{
		SBZAbilitySystemComponent_eventMulticast_ExitVolumeDamage_Parms Parms;
		Parms.NetID=NetID;
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilitySystemComponent_Multicast_ExitVolumeDamage),&Parms);
	}
	static FName NAME_USBZAbilitySystemComponent_Multicast_FireGrenadeProjectile = FName(TEXT("Multicast_FireGrenadeProjectile"));
	void USBZAbilitySystemComponent::Multicast_FireGrenadeProjectile()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilitySystemComponent_Multicast_FireGrenadeProjectile),NULL);
	}
	static FName NAME_USBZAbilitySystemComponent_Multicast_FireProjectile = FName(TEXT("Multicast_FireProjectile"));
	void USBZAbilitySystemComponent::Multicast_FireProjectile(FSBZProjectileTargetData const& TargetData)
	{
		SBZAbilitySystemComponent_eventMulticast_FireProjectile_Parms Parms;
		Parms.TargetData=TargetData;
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilitySystemComponent_Multicast_FireProjectile),&Parms);
	}
	static FName NAME_USBZAbilitySystemComponent_Multicast_FireProjectileSentry = FName(TEXT("Multicast_FireProjectileSentry"));
	void USBZAbilitySystemComponent::Multicast_FireProjectileSentry(FSBZProjectileTargetData const& TargetData)
	{
		SBZAbilitySystemComponent_eventMulticast_FireProjectileSentry_Parms Parms;
		Parms.TargetData=TargetData;
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilitySystemComponent_Multicast_FireProjectileSentry),&Parms);
	}
	static FName NAME_USBZAbilitySystemComponent_Multicast_Landed = FName(TEXT("Multicast_Landed"));
	void USBZAbilitySystemComponent::Multicast_Landed(FSBZFallDamageTargetData const& TargetData)
	{
		SBZAbilitySystemComponent_eventMulticast_Landed_Parms Parms;
		Parms.TargetData=TargetData;
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilitySystemComponent_Multicast_Landed),&Parms);
	}
	static FName NAME_USBZAbilitySystemComponent_Multicast_MaskOn = FName(TEXT("Multicast_MaskOn"));
	void USBZAbilitySystemComponent::Multicast_MaskOn()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilitySystemComponent_Multicast_MaskOn),NULL);
	}
	static FName NAME_USBZAbilitySystemComponent_Multicast_Melee = FName(TEXT("Multicast_Melee"));
	void USBZAbilitySystemComponent::Multicast_Melee(FSBZMeleeTargetData const& TargetData)
	{
		SBZAbilitySystemComponent_eventMulticast_Melee_Parms Parms;
		Parms.TargetData=TargetData;
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilitySystemComponent_Multicast_Melee),&Parms);
	}
	static FName NAME_USBZAbilitySystemComponent_Multicast_ShoveHumanShield = FName(TEXT("Multicast_ShoveHumanShield"));
	void USBZAbilitySystemComponent::Multicast_ShoveHumanShield(FSBZActorMultiHitResult const& ActorMultiHitResult)
	{
		SBZAbilitySystemComponent_eventMulticast_ShoveHumanShield_Parms Parms;
		Parms.ActorMultiHitResult=ActorMultiHitResult;
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilitySystemComponent_Multicast_ShoveHumanShield),&Parms);
	}
	static FName NAME_USBZAbilitySystemComponent_Server_MaskOn = FName(TEXT("Server_MaskOn"));
	void USBZAbilitySystemComponent::Server_MaskOn()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilitySystemComponent_Server_MaskOn),NULL);
	}
	static FName NAME_USBZAbilitySystemComponent_Server_ReplicateCosmeticExplosion = FName(TEXT("Server_ReplicateCosmeticExplosion"));
	void USBZAbilitySystemComponent::Server_ReplicateCosmeticExplosion(UObject* ExplosiveObject)
	{
		SBZAbilitySystemComponent_eventServer_ReplicateCosmeticExplosion_Parms Parms;
		Parms.ExplosiveObject=ExplosiveObject;
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilitySystemComponent_Server_ReplicateCosmeticExplosion),&Parms);
	}
	static FName NAME_USBZAbilitySystemComponent_Server_ReplicateExplosion = FName(TEXT("Server_ReplicateExplosion"));
	void USBZAbilitySystemComponent::Server_ReplicateExplosion(UObject* ExplosiveObject, FSBZExplosionResult const& Result, FPredictionKey PredictionKey)
	{
		SBZAbilitySystemComponent_eventServer_ReplicateExplosion_Parms Parms;
		Parms.ExplosiveObject=ExplosiveObject;
		Parms.Result=Result;
		Parms.PredictionKey=PredictionKey;
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilitySystemComponent_Server_ReplicateExplosion),&Parms);
	}
	void USBZAbilitySystemComponent::StaticRegisterNativesUSBZAbilitySystemComponent()
	{
		UClass* Class = USBZAbilitySystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_PredictedRagdollDenied", &USBZAbilitySystemComponent::execClient_PredictedRagdollDenied },
			{ "Client_RevertDamageAttributeSet", &USBZAbilitySystemComponent::execClient_RevertDamageAttributeSet },
			{ "Client_RevertDamageAttributeSetArray", &USBZAbilitySystemComponent::execClient_RevertDamageAttributeSetArray },
			{ "Multicast_AppliedSkillHurtReaction", &USBZAbilitySystemComponent::execMulticast_AppliedSkillHurtReaction },
			{ "Multicast_ApplyGameplayEffectSpecToSelf", &USBZAbilitySystemComponent::execMulticast_ApplyGameplayEffectSpecToSelf },
			{ "Multicast_DebugApplyGameplayEffectSpecToSelf", &USBZAbilitySystemComponent::execMulticast_DebugApplyGameplayEffectSpecToSelf },
			{ "Multicast_EnterVolumeDamage", &USBZAbilitySystemComponent::execMulticast_EnterVolumeDamage },
			{ "Multicast_ExitVolumeDamage", &USBZAbilitySystemComponent::execMulticast_ExitVolumeDamage },
			{ "Multicast_FireGrenadeProjectile", &USBZAbilitySystemComponent::execMulticast_FireGrenadeProjectile },
			{ "Multicast_FireProjectile", &USBZAbilitySystemComponent::execMulticast_FireProjectile },
			{ "Multicast_FireProjectileSentry", &USBZAbilitySystemComponent::execMulticast_FireProjectileSentry },
			{ "Multicast_Landed", &USBZAbilitySystemComponent::execMulticast_Landed },
			{ "Multicast_MaskOn", &USBZAbilitySystemComponent::execMulticast_MaskOn },
			{ "Multicast_Melee", &USBZAbilitySystemComponent::execMulticast_Melee },
			{ "Multicast_ShoveHumanShield", &USBZAbilitySystemComponent::execMulticast_ShoveHumanShield },
			{ "OnMovementModeChanged", &USBZAbilitySystemComponent::execOnMovementModeChanged },
			{ "OnRep_AppliedVolumeDamageNetIDArray", &USBZAbilitySystemComponent::execOnRep_AppliedVolumeDamageNetIDArray },
			{ "Server_MaskOn", &USBZAbilitySystemComponent::execServer_MaskOn },
			{ "Server_ReplicateCosmeticExplosion", &USBZAbilitySystemComponent::execServer_ReplicateCosmeticExplosion },
			{ "Server_ReplicateExplosion", &USBZAbilitySystemComponent::execServer_ReplicateExplosion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_Client_PredictedRagdollDenied_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPawn;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HurtReactionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Client_PredictedRagdollDenied_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventClient_PredictedRagdollDenied_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Client_PredictedRagdollDenied_Statics::NewProp_HurtReactionIndex = { "HurtReactionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventClient_PredictedRagdollDenied_Parms, HurtReactionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAbilitySystemComponent_Client_PredictedRagdollDenied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Client_PredictedRagdollDenied_Statics::NewProp_InPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Client_PredictedRagdollDenied_Statics::NewProp_HurtReactionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Client_PredictedRagdollDenied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_Client_PredictedRagdollDenied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "Client_PredictedRagdollDenied", nullptr, nullptr, sizeof(SBZAbilitySystemComponent_eventClient_PredictedRagdollDenied_Parms), Z_Construct_UFunction_USBZAbilitySystemComponent_Client_PredictedRagdollDenied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Client_PredictedRagdollDenied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Client_PredictedRagdollDenied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Client_PredictedRagdollDenied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_Client_PredictedRagdollDenied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_Client_PredictedRagdollDenied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeSetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSet_Statics::NewProp_AttributeSetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSet_Statics::NewProp_AttributeSetData = { "AttributeSetData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventClient_RevertDamageAttributeSet_Parms, AttributeSetData), Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSet_Statics::NewProp_AttributeSetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSet_Statics::NewProp_AttributeSetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSet_Statics::NewProp_AttributeSetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "Client_RevertDamageAttributeSet", nullptr, nullptr, sizeof(SBZAbilitySystemComponent_eventClient_RevertDamageAttributeSet_Parms), Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeSetDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSetDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttributeSetDataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray_Statics::NewProp_AttributeSetDataArray_Inner = { "AttributeSetDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZRevertDamageAttributeSetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray_Statics::NewProp_AttributeSetDataArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray_Statics::NewProp_AttributeSetDataArray = { "AttributeSetDataArray", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventClient_RevertDamageAttributeSetArray_Parms, AttributeSetDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray_Statics::NewProp_AttributeSetDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray_Statics::NewProp_AttributeSetDataArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray_Statics::NewProp_AttributeSetDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray_Statics::NewProp_AttributeSetDataArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "Client_RevertDamageAttributeSetArray", nullptr, nullptr, sizeof(SBZAbilitySystemComponent_eventClient_RevertDamageAttributeSetArray_Parms), Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_AppliedSkillHurtReaction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillTriggeredHurtTargetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillTriggeredHurtTargetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_AppliedSkillHurtReaction_Statics::NewProp_SkillTriggeredHurtTargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_AppliedSkillHurtReaction_Statics::NewProp_SkillTriggeredHurtTargetData = { "SkillTriggeredHurtTargetData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventMulticast_AppliedSkillHurtReaction_Parms, SkillTriggeredHurtTargetData), Z_Construct_UScriptStruct_FSBZSkillTriggeredHurtTargetData, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_AppliedSkillHurtReaction_Statics::NewProp_SkillTriggeredHurtTargetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_AppliedSkillHurtReaction_Statics::NewProp_SkillTriggeredHurtTargetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_AppliedSkillHurtReaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_AppliedSkillHurtReaction_Statics::NewProp_SkillTriggeredHurtTargetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_AppliedSkillHurtReaction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_AppliedSkillHurtReaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "Multicast_AppliedSkillHurtReaction", nullptr, nullptr, sizeof(SBZAbilitySystemComponent_eventMulticast_AppliedSkillHurtReaction_Parms), Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_AppliedSkillHurtReaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_AppliedSkillHurtReaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_AppliedSkillHurtReaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_AppliedSkillHurtReaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_AppliedSkillHurtReaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_AppliedSkillHurtReaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ApplyGameplayEffectSpecToSelf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ApplyGameplayEffectSpecToSelf_Statics::NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ApplyGameplayEffectSpecToSelf_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventMulticast_ApplyGameplayEffectSpecToSelf_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ApplyGameplayEffectSpecToSelf_Statics::NewProp_EffectSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ApplyGameplayEffectSpecToSelf_Statics::NewProp_EffectSpec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ApplyGameplayEffectSpecToSelf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ApplyGameplayEffectSpecToSelf_Statics::NewProp_EffectSpec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ApplyGameplayEffectSpecToSelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ApplyGameplayEffectSpecToSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "Multicast_ApplyGameplayEffectSpecToSelf", nullptr, nullptr, sizeof(SBZAbilitySystemComponent_eventMulticast_ApplyGameplayEffectSpecToSelf_Parms), Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ApplyGameplayEffectSpecToSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ApplyGameplayEffectSpecToSelf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ApplyGameplayEffectSpecToSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ApplyGameplayEffectSpecToSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ApplyGameplayEffectSpecToSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ApplyGameplayEffectSpecToSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameMagnitudeString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameMagnitudeString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventMulticast_DebugApplyGameplayEffectSpecToSelf_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventMulticast_DebugApplyGameplayEffectSpecToSelf_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf_Statics::NewProp_NameMagnitudeString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf_Statics::NewProp_NameMagnitudeString = { "NameMagnitudeString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventMulticast_DebugApplyGameplayEffectSpecToSelf_Parms, NameMagnitudeString), METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf_Statics::NewProp_NameMagnitudeString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf_Statics::NewProp_NameMagnitudeString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf_Statics::NewProp_EffectSpec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf_Statics::NewProp_NameMagnitudeString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "Multicast_DebugApplyGameplayEffectSpecToSelf", nullptr, nullptr, sizeof(SBZAbilitySystemComponent_eventMulticast_DebugApplyGameplayEffectSpecToSelf_Parms), Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_EnterVolumeDamage_Statics
	{
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_EnterVolumeDamage_Statics::NewProp_NetID = { "NetID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventMulticast_EnterVolumeDamage_Parms, NetID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_EnterVolumeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_EnterVolumeDamage_Statics::NewProp_NetID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_EnterVolumeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_EnterVolumeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "Multicast_EnterVolumeDamage", nullptr, nullptr, sizeof(SBZAbilitySystemComponent_eventMulticast_EnterVolumeDamage_Parms), Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_EnterVolumeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_EnterVolumeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_EnterVolumeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_EnterVolumeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_EnterVolumeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_EnterVolumeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ExitVolumeDamage_Statics
	{
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ExitVolumeDamage_Statics::NewProp_NetID = { "NetID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventMulticast_ExitVolumeDamage_Parms, NetID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ExitVolumeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ExitVolumeDamage_Statics::NewProp_NetID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ExitVolumeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ExitVolumeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "Multicast_ExitVolumeDamage", nullptr, nullptr, sizeof(SBZAbilitySystemComponent_eventMulticast_ExitVolumeDamage_Parms), Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ExitVolumeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ExitVolumeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ExitVolumeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ExitVolumeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ExitVolumeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ExitVolumeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireGrenadeProjectile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireGrenadeProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireGrenadeProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "Multicast_FireGrenadeProjectile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireGrenadeProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireGrenadeProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireGrenadeProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireGrenadeProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectile_Statics::NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectile_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventMulticast_FireProjectile_Parms, TargetData), Z_Construct_UScriptStruct_FSBZProjectileTargetData, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectile_Statics::NewProp_TargetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectile_Statics::NewProp_TargetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectile_Statics::NewProp_TargetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "Multicast_FireProjectile", nullptr, nullptr, sizeof(SBZAbilitySystemComponent_eventMulticast_FireProjectile_Parms), Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectileSentry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectileSentry_Statics::NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectileSentry_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventMulticast_FireProjectileSentry_Parms, TargetData), Z_Construct_UScriptStruct_FSBZProjectileTargetData, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectileSentry_Statics::NewProp_TargetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectileSentry_Statics::NewProp_TargetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectileSentry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectileSentry_Statics::NewProp_TargetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectileSentry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectileSentry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "Multicast_FireProjectileSentry", nullptr, nullptr, sizeof(SBZAbilitySystemComponent_eventMulticast_FireProjectileSentry_Parms), Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectileSentry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectileSentry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectileSentry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectileSentry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectileSentry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectileSentry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Landed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Landed_Statics::NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Landed_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventMulticast_Landed_Parms, TargetData), Z_Construct_UScriptStruct_FSBZFallDamageTargetData, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Landed_Statics::NewProp_TargetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Landed_Statics::NewProp_TargetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Landed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Landed_Statics::NewProp_TargetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Landed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Landed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "Multicast_Landed", nullptr, nullptr, sizeof(SBZAbilitySystemComponent_eventMulticast_Landed_Parms), Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Landed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Landed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Landed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Landed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Landed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Landed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_MaskOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_MaskOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_MaskOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "Multicast_MaskOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_MaskOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_MaskOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_MaskOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_MaskOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Melee_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Melee_Statics::NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Melee_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventMulticast_Melee_Parms, TargetData), Z_Construct_UScriptStruct_FSBZMeleeTargetData, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Melee_Statics::NewProp_TargetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Melee_Statics::NewProp_TargetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Melee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Melee_Statics::NewProp_TargetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Melee_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Melee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "Multicast_Melee", nullptr, nullptr, sizeof(SBZAbilitySystemComponent_eventMulticast_Melee_Parms), Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Melee_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Melee_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Melee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Melee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Melee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Melee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ShoveHumanShield_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorMultiHitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorMultiHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ShoveHumanShield_Statics::NewProp_ActorMultiHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ShoveHumanShield_Statics::NewProp_ActorMultiHitResult = { "ActorMultiHitResult", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventMulticast_ShoveHumanShield_Parms, ActorMultiHitResult), Z_Construct_UScriptStruct_FSBZActorMultiHitResult, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ShoveHumanShield_Statics::NewProp_ActorMultiHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ShoveHumanShield_Statics::NewProp_ActorMultiHitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ShoveHumanShield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ShoveHumanShield_Statics::NewProp_ActorMultiHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ShoveHumanShield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ShoveHumanShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "Multicast_ShoveHumanShield", nullptr, nullptr, sizeof(SBZAbilitySystemComponent_eventMulticast_ShoveHumanShield_Parms), Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ShoveHumanShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ShoveHumanShield_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ShoveHumanShield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ShoveHumanShield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ShoveHumanShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ShoveHumanShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_OnMovementModeChanged_Statics
	{
		struct SBZAbilitySystemComponent_eventOnMovementModeChanged_Parms
		{
			ACharacter* InCharacter;
			TEnumAsByte<EMovementMode> PrevMovementMode;
			uint8 PreviousCustomMode;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrevMovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviousCustomMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_OnMovementModeChanged_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventOnMovementModeChanged_Parms, InCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_OnMovementModeChanged_Statics::NewProp_PrevMovementMode = { "PrevMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventOnMovementModeChanged_Parms, PrevMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_OnMovementModeChanged_Statics::NewProp_PreviousCustomMode = { "PreviousCustomMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventOnMovementModeChanged_Parms, PreviousCustomMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAbilitySystemComponent_OnMovementModeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_OnMovementModeChanged_Statics::NewProp_InCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_OnMovementModeChanged_Statics::NewProp_PrevMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_OnMovementModeChanged_Statics::NewProp_PreviousCustomMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_OnMovementModeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_OnMovementModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "OnMovementModeChanged", nullptr, nullptr, sizeof(SBZAbilitySystemComponent_eventOnMovementModeChanged_Parms), Z_Construct_UFunction_USBZAbilitySystemComponent_OnMovementModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_OnMovementModeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_OnMovementModeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_OnMovementModeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_OnMovementModeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_OnMovementModeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_OnRep_AppliedVolumeDamageNetIDArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_OnRep_AppliedVolumeDamageNetIDArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_OnRep_AppliedVolumeDamageNetIDArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "OnRep_AppliedVolumeDamageNetIDArray", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_OnRep_AppliedVolumeDamageNetIDArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_OnRep_AppliedVolumeDamageNetIDArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_OnRep_AppliedVolumeDamageNetIDArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_OnRep_AppliedVolumeDamageNetIDArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_Server_MaskOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Server_MaskOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_Server_MaskOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "Server_MaskOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Server_MaskOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Server_MaskOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_Server_MaskOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_Server_MaskOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateCosmeticExplosion_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosiveObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateCosmeticExplosion_Statics::NewProp_ExplosiveObject = { "ExplosiveObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventServer_ReplicateCosmeticExplosion_Parms, ExplosiveObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateCosmeticExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateCosmeticExplosion_Statics::NewProp_ExplosiveObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateCosmeticExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateCosmeticExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "Server_ReplicateCosmeticExplosion", nullptr, nullptr, sizeof(SBZAbilitySystemComponent_eventServer_ReplicateCosmeticExplosion_Parms), Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateCosmeticExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateCosmeticExplosion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateCosmeticExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateCosmeticExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateCosmeticExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateCosmeticExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosiveObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion_Statics::NewProp_ExplosiveObject = { "ExplosiveObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventServer_ReplicateExplosion_Parms, ExplosiveObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventServer_ReplicateExplosion_Parms, Result), Z_Construct_UScriptStruct_FSBZExplosionResult, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilitySystemComponent_eventServer_ReplicateExplosion_Parms, PredictionKey), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion_Statics::NewProp_ExplosiveObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion_Statics::NewProp_PredictionKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilitySystemComponent, nullptr, "Server_ReplicateExplosion", nullptr, nullptr, sizeof(SBZAbilitySystemComponent_eventServer_ReplicateExplosion_Parms), Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAbilitySystemComponent_NoRegister()
	{
		return USBZAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputToggledContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputToggledContainer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueuedAbilityArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedAbilityArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueuedAbilityArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandingGameplayEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LandingGameplayEffectClass;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AppliedVolumeDamageNetIDArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppliedVolumeDamageNetIDArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AppliedVolumeDamageNetIDArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AppliedVolumeDamageArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppliedVolumeDamageArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AppliedVolumeDamageArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentVolumeDamageDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVolumeDamageDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentVolumeDamageDataArray;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastVolumeDamageTypeUpdateTimeMap_ValueProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LastVolumeDamageTypeUpdateTimeMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastVolumeDamageTypeUpdateTimeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LastVolumeDamageTypeUpdateTimeMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAbilitySystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_Client_PredictedRagdollDenied, "Client_PredictedRagdollDenied" }, // 3616519924
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSet, "Client_RevertDamageAttributeSet" }, // 3933251602
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_Client_RevertDamageAttributeSetArray, "Client_RevertDamageAttributeSetArray" }, // 2738909891
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_AppliedSkillHurtReaction, "Multicast_AppliedSkillHurtReaction" }, // 3029117054
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ApplyGameplayEffectSpecToSelf, "Multicast_ApplyGameplayEffectSpecToSelf" }, // 2924053249
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_DebugApplyGameplayEffectSpecToSelf, "Multicast_DebugApplyGameplayEffectSpecToSelf" }, // 1275485535
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_EnterVolumeDamage, "Multicast_EnterVolumeDamage" }, // 2076338923
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ExitVolumeDamage, "Multicast_ExitVolumeDamage" }, // 2274455281
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireGrenadeProjectile, "Multicast_FireGrenadeProjectile" }, // 738997103
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectile, "Multicast_FireProjectile" }, // 2236000017
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_FireProjectileSentry, "Multicast_FireProjectileSentry" }, // 3631512654
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Landed, "Multicast_Landed" }, // 1512759044
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_MaskOn, "Multicast_MaskOn" }, // 101678108
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_Melee, "Multicast_Melee" }, // 3987401838
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_Multicast_ShoveHumanShield, "Multicast_ShoveHumanShield" }, // 3268594188
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_OnMovementModeChanged, "OnMovementModeChanged" }, // 521015413
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_OnRep_AppliedVolumeDamageNetIDArray, "OnRep_AppliedVolumeDamageNetIDArray" }, // 1966525472
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_Server_MaskOn, "Server_MaskOn" }, // 1808995611
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateCosmeticExplosion, "Server_ReplicateCosmeticExplosion" }, // 4076718573
		{ &Z_Construct_UFunction_USBZAbilitySystemComponent_Server_ReplicateExplosion, "Server_ReplicateExplosion" }, // 488700460
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "SBZAbilitySystemComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAbilitySystemComponent, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_InputToggledContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_InputToggledContainer = { "InputToggledContainer", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAbilitySystemComponent, InputToggledContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_InputToggledContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_InputToggledContainer_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_QueuedAbilityArray_Inner = { "QueuedAbilityArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZQueuedAbilityData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_QueuedAbilityArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_QueuedAbilityArray = { "QueuedAbilityArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAbilitySystemComponent, QueuedAbilityArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_QueuedAbilityArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_QueuedAbilityArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_LandingGameplayEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_LandingGameplayEffectClass = { "LandingGameplayEffectClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAbilitySystemComponent, LandingGameplayEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_LandingGameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_LandingGameplayEffectClass_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_AppliedVolumeDamageNetIDArray_Inner = { "AppliedVolumeDamageNetIDArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_AppliedVolumeDamageNetIDArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_AppliedVolumeDamageNetIDArray = { "AppliedVolumeDamageNetIDArray", "OnRep_AppliedVolumeDamageNetIDArray", (EPropertyFlags)0x0040000100002021, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAbilitySystemComponent, AppliedVolumeDamageNetIDArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_AppliedVolumeDamageNetIDArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_AppliedVolumeDamageNetIDArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_AppliedVolumeDamageArray_Inner = { "AppliedVolumeDamageArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_AppliedVolumeDamageArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_AppliedVolumeDamageArray = { "AppliedVolumeDamageArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAbilitySystemComponent, AppliedVolumeDamageArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_AppliedVolumeDamageArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_AppliedVolumeDamageArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_CurrentVolumeDamageDataArray_Inner = { "CurrentVolumeDamageDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZVolumeDamageData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_CurrentVolumeDamageDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_CurrentVolumeDamageDataArray = { "CurrentVolumeDamageDataArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAbilitySystemComponent, CurrentVolumeDamageDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_CurrentVolumeDamageDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_CurrentVolumeDamageDataArray_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_LastVolumeDamageTypeUpdateTimeMap_ValueProp = { "LastVolumeDamageTypeUpdateTimeMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_LastVolumeDamageTypeUpdateTimeMap_Key_KeyProp = { "LastVolumeDamageTypeUpdateTimeMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_LastVolumeDamageTypeUpdateTimeMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_LastVolumeDamageTypeUpdateTimeMap = { "LastVolumeDamageTypeUpdateTimeMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAbilitySystemComponent, LastVolumeDamageTypeUpdateTimeMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_LastVolumeDamageTypeUpdateTimeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_LastVolumeDamageTypeUpdateTimeMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAbilitySystemComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_InputToggledContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_QueuedAbilityArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_QueuedAbilityArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_LandingGameplayEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_AppliedVolumeDamageNetIDArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_AppliedVolumeDamageNetIDArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_AppliedVolumeDamageArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_AppliedVolumeDamageArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_CurrentVolumeDamageDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_CurrentVolumeDamageDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_LastVolumeDamageTypeUpdateTimeMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_LastVolumeDamageTypeUpdateTimeMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilitySystemComponent_Statics::NewProp_LastVolumeDamageTypeUpdateTimeMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAbilitySystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAbilitySystemComponent_Statics::ClassParams = {
		&USBZAbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAbilitySystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAbilitySystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAbilitySystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAbilitySystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAbilitySystemComponent, 3760572818);
	template<> STARBREEZE_API UClass* StaticClass<USBZAbilitySystemComponent>()
	{
		return USBZAbilitySystemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAbilitySystemComponent(Z_Construct_UClass_USBZAbilitySystemComponent, &USBZAbilitySystemComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAbilitySystemComponent"), false, nullptr, nullptr, nullptr);

	void USBZAbilitySystemComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_AppliedVolumeDamageNetIDArray(TEXT("AppliedVolumeDamageNetIDArray"));

		const bool bIsValid = true
			&& Name_AppliedVolumeDamageNetIDArray == ClassReps[(int32)ENetFields_Private::AppliedVolumeDamageNetIDArray].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZAbilitySystemComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAbilitySystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
