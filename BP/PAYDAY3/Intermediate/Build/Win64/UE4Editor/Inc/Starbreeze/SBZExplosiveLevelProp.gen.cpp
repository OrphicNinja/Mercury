// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZExplosiveLevelProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZExplosiveLevelProp() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZExplosiveLevelProp_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZExplosiveLevelProp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosionResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZExplosionDelegate__DelegateSignature();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDamageDistance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageType_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionData();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosive_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBreakableInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosivePropInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZExplosiveLevelProp::execDebugServerStartExplosionTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugServerStartExplosionTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZExplosiveLevelProp::execMulticast_ReplicateExplosion)
	{
		P_GET_STRUCT(FSBZExplosionResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ReplicateExplosion_Implementation(Z_Param_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZExplosiveLevelProp::execServerStartExplosionTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStartExplosionTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZExplosiveLevelProp::execServerStopExplosionTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStopExplosionTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZExplosiveLevelProp::execSetExplosionInstigator)
	{
		P_GET_OBJECT(AActor,Z_Param_InInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExplosionInstigator(Z_Param_InInstigator);
		P_NATIVE_END;
	}
	static FName NAME_ASBZExplosiveLevelProp_BP_OnExplosion = FName(TEXT("BP_OnExplosion"));
	void ASBZExplosiveLevelProp::BP_OnExplosion(bool bDoCosmetics)
	{
		SBZExplosiveLevelProp_eventBP_OnExplosion_Parms Parms;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZExplosiveLevelProp_BP_OnExplosion),&Parms);
	}
	static FName NAME_ASBZExplosiveLevelProp_Multicast_ReplicateExplosion = FName(TEXT("Multicast_ReplicateExplosion"));
	void ASBZExplosiveLevelProp::Multicast_ReplicateExplosion(FSBZExplosionResult const& Result)
	{
		SBZExplosiveLevelProp_eventMulticast_ReplicateExplosion_Parms Parms;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_ASBZExplosiveLevelProp_Multicast_ReplicateExplosion),&Parms);
	}
	void ASBZExplosiveLevelProp::StaticRegisterNativesASBZExplosiveLevelProp()
	{
		UClass* Class = ASBZExplosiveLevelProp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugServerStartExplosionTimer", &ASBZExplosiveLevelProp::execDebugServerStartExplosionTimer },
			{ "Multicast_ReplicateExplosion", &ASBZExplosiveLevelProp::execMulticast_ReplicateExplosion },
			{ "ServerStartExplosionTimer", &ASBZExplosiveLevelProp::execServerStartExplosionTimer },
			{ "ServerStopExplosionTimer", &ASBZExplosiveLevelProp::execServerStopExplosionTimer },
			{ "SetExplosionInstigator", &ASBZExplosiveLevelProp::execSetExplosionInstigator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZExplosiveLevelProp_BP_OnExplosion_Statics
	{
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZExplosiveLevelProp_BP_OnExplosion_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZExplosiveLevelProp_eventBP_OnExplosion_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZExplosiveLevelProp_BP_OnExplosion_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZExplosiveLevelProp_eventBP_OnExplosion_Parms), &Z_Construct_UFunction_ASBZExplosiveLevelProp_BP_OnExplosion_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZExplosiveLevelProp_BP_OnExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveLevelProp_BP_OnExplosion_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveLevelProp_BP_OnExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveLevelProp_BP_OnExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveLevelProp, nullptr, "BP_OnExplosion", nullptr, nullptr, sizeof(SBZExplosiveLevelProp_eventBP_OnExplosion_Parms), Z_Construct_UFunction_ASBZExplosiveLevelProp_BP_OnExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveLevelProp_BP_OnExplosion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveLevelProp_BP_OnExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveLevelProp_BP_OnExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveLevelProp_BP_OnExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveLevelProp_BP_OnExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZExplosiveLevelProp_DebugServerStartExplosionTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveLevelProp_DebugServerStartExplosionTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveLevelProp_DebugServerStartExplosionTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveLevelProp, nullptr, "DebugServerStartExplosionTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveLevelProp_DebugServerStartExplosionTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveLevelProp_DebugServerStartExplosionTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveLevelProp_DebugServerStartExplosionTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveLevelProp_DebugServerStartExplosionTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZExplosiveLevelProp_Multicast_ReplicateExplosion_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveLevelProp_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZExplosiveLevelProp_Multicast_ReplicateExplosion_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZExplosiveLevelProp_eventMulticast_ReplicateExplosion_Parms, Result), Z_Construct_UScriptStruct_FSBZExplosionResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveLevelProp_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveLevelProp_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZExplosiveLevelProp_Multicast_ReplicateExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveLevelProp_Multicast_ReplicateExplosion_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveLevelProp_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveLevelProp_Multicast_ReplicateExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveLevelProp, nullptr, "Multicast_ReplicateExplosion", nullptr, nullptr, sizeof(SBZExplosiveLevelProp_eventMulticast_ReplicateExplosion_Parms), Z_Construct_UFunction_ASBZExplosiveLevelProp_Multicast_ReplicateExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveLevelProp_Multicast_ReplicateExplosion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveLevelProp_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveLevelProp_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveLevelProp_Multicast_ReplicateExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveLevelProp_Multicast_ReplicateExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZExplosiveLevelProp_ServerStartExplosionTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveLevelProp_ServerStartExplosionTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveLevelProp_ServerStartExplosionTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveLevelProp, nullptr, "ServerStartExplosionTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveLevelProp_ServerStartExplosionTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveLevelProp_ServerStartExplosionTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveLevelProp_ServerStartExplosionTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveLevelProp_ServerStartExplosionTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZExplosiveLevelProp_ServerStopExplosionTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveLevelProp_ServerStopExplosionTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveLevelProp_ServerStopExplosionTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveLevelProp, nullptr, "ServerStopExplosionTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveLevelProp_ServerStopExplosionTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveLevelProp_ServerStopExplosionTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveLevelProp_ServerStopExplosionTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveLevelProp_ServerStopExplosionTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZExplosiveLevelProp_SetExplosionInstigator_Statics
	{
		struct SBZExplosiveLevelProp_eventSetExplosionInstigator_Parms
		{
			AActor* InInstigator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZExplosiveLevelProp_SetExplosionInstigator_Statics::NewProp_InInstigator = { "InInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZExplosiveLevelProp_eventSetExplosionInstigator_Parms, InInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZExplosiveLevelProp_SetExplosionInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveLevelProp_SetExplosionInstigator_Statics::NewProp_InInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveLevelProp_SetExplosionInstigator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveLevelProp_SetExplosionInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveLevelProp, nullptr, "SetExplosionInstigator", nullptr, nullptr, sizeof(SBZExplosiveLevelProp_eventSetExplosionInstigator_Parms), Z_Construct_UFunction_ASBZExplosiveLevelProp_SetExplosionInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveLevelProp_SetExplosionInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveLevelProp_SetExplosionInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveLevelProp_SetExplosionInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveLevelProp_SetExplosionInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveLevelProp_SetExplosionInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZExplosiveLevelProp_NoRegister()
	{
		return ASBZExplosiveLevelProp::StaticClass();
	}
	struct Z_Construct_UClass_ASBZExplosiveLevelProp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerOnExploded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ServerOnExploded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDelayInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExplosionDelayInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIExplosionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIExplosionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerExplosionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerExplosionRadius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageDistanceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageDistanceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DamageDistanceArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorPenetration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorPenetration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyFireDamageScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FriendlyFireDamageScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyFireArmorPenetrationScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FriendlyFireArmorPenetrationScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExplosionDamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoDecal_MetaData[];
#endif
		static void NewProp_bDoDecal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoDecal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LocalPlayerFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostDamagePhysicsEffectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostDamagePhysicsEffectData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerFeedbackCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerFeedbackCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtReactionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HurtReactionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDestroyedOnExplosion_MetaData[];
#endif
		static void NewProp_bIsDestroyedOnExplosion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDestroyedOnExplosion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffectComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffectComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZExplosiveLevelProp_BP_OnExplosion, "BP_OnExplosion" }, // 776332824
		{ &Z_Construct_UFunction_ASBZExplosiveLevelProp_DebugServerStartExplosionTimer, "DebugServerStartExplosionTimer" }, // 1033606188
		{ &Z_Construct_UFunction_ASBZExplosiveLevelProp_Multicast_ReplicateExplosion, "Multicast_ReplicateExplosion" }, // 2349005075
		{ &Z_Construct_UFunction_ASBZExplosiveLevelProp_ServerStartExplosionTimer, "ServerStartExplosionTimer" }, // 3799528030
		{ &Z_Construct_UFunction_ASBZExplosiveLevelProp_ServerStopExplosionTimer, "ServerStopExplosionTimer" }, // 2981212065
		{ &Z_Construct_UFunction_ASBZExplosiveLevelProp_SetExplosionInstigator, "SetExplosionInstigator" }, // 4051004204
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZExplosiveLevelProp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ServerOnExploded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ServerOnExploded = { "ServerOnExploded", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveLevelProp, ServerOnExploded), Z_Construct_UDelegateFunction_Starbreeze_SBZExplosionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ServerOnExploded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ServerOnExploded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionSoundEvent = { "ExplosionSoundEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveLevelProp, ExplosionSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionDelayInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionDelayInterval = { "ExplosionDelayInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveLevelProp, ExplosionDelayInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionDelayInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionDelayInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_AIExplosionRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_AIExplosionRadius = { "AIExplosionRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveLevelProp, AIExplosionRadius), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_AIExplosionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_AIExplosionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_PlayerExplosionRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_PlayerExplosionRadius = { "PlayerExplosionRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveLevelProp, PlayerExplosionRadius), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_PlayerExplosionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_PlayerExplosionRadius_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_DamageDistanceArray_Inner = { "DamageDistanceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZDamageDistance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_DamageDistanceArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_DamageDistanceArray = { "DamageDistanceArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveLevelProp, DamageDistanceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_DamageDistanceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_DamageDistanceArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ArmorPenetration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ArmorPenetration = { "ArmorPenetration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveLevelProp, ArmorPenetration), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ArmorPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ArmorPenetration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_FriendlyFireDamageScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_FriendlyFireDamageScale = { "FriendlyFireDamageScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveLevelProp, FriendlyFireDamageScale), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_FriendlyFireDamageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_FriendlyFireDamageScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_FriendlyFireArmorPenetrationScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_FriendlyFireArmorPenetrationScale = { "FriendlyFireArmorPenetrationScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveLevelProp, FriendlyFireArmorPenetrationScale), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_FriendlyFireArmorPenetrationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_FriendlyFireArmorPenetrationScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionDamageType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionDamageType = { "ExplosionDamageType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveLevelProp, ExplosionDamageType), Z_Construct_UClass_USBZDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionDamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionDamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_GameplayEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveLevelProp, GameplayEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_GameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_GameplayEffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionEffect = { "ExplosionEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveLevelProp, ExplosionEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_bDoDecal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	void Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_bDoDecal_SetBit(void* Obj)
	{
		((ASBZExplosiveLevelProp*)Obj)->bDoDecal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_bDoDecal = { "bDoDecal", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZExplosiveLevelProp), &Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_bDoDecal_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_bDoDecal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_bDoDecal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_LocalPlayerFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_LocalPlayerFeedback = { "LocalPlayerFeedback", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveLevelProp, LocalPlayerFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_LocalPlayerFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_LocalPlayerFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_PostDamagePhysicsEffectData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_PostDamagePhysicsEffectData = { "PostDamagePhysicsEffectData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveLevelProp, PostDamagePhysicsEffectData), Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_PostDamagePhysicsEffectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_PostDamagePhysicsEffectData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_PlayerFeedbackCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_PlayerFeedbackCurve = { "PlayerFeedbackCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveLevelProp, PlayerFeedbackCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_PlayerFeedbackCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_PlayerFeedbackCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_HurtReactionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_HurtReactionData = { "HurtReactionData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveLevelProp, HurtReactionData), Z_Construct_UScriptStruct_FSBZHurtReactionData, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_HurtReactionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_HurtReactionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_bIsDestroyedOnExplosion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	void Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_bIsDestroyedOnExplosion_SetBit(void* Obj)
	{
		((ASBZExplosiveLevelProp*)Obj)->bIsDestroyedOnExplosion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_bIsDestroyedOnExplosion = { "bIsDestroyedOnExplosion", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZExplosiveLevelProp), &Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_bIsDestroyedOnExplosion_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_bIsDestroyedOnExplosion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_bIsDestroyedOnExplosion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionInstigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionInstigator = { "ExplosionInstigator", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveLevelProp, ExplosionInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionEffectComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveLevelProp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZExplosiveLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionEffectComponent = { "ExplosionEffectComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveLevelProp, ExplosionEffectComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionEffectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionEffectComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ServerOnExploded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionDelayInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_AIExplosionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_PlayerExplosionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_DamageDistanceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_DamageDistanceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ArmorPenetration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_FriendlyFireDamageScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_FriendlyFireArmorPenetrationScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionDamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_GameplayEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_bDoDecal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_LocalPlayerFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_PostDamagePhysicsEffectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_PlayerFeedbackCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_HurtReactionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_bIsDestroyedOnExplosion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::NewProp_ExplosionEffectComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZExplosive_NoRegister, (int32)VTABLE_OFFSET(ASBZExplosiveLevelProp, ISBZExplosive), false },
			{ Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZExplosiveLevelProp, ISBZHurtReactionDataInterface), false },
			{ Z_Construct_UClass_USBZBreakableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZExplosiveLevelProp, ISBZBreakableInterface), false },
			{ Z_Construct_UClass_USBZExplosivePropInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZExplosiveLevelProp, ISBZExplosivePropInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZExplosiveLevelProp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::ClassParams = {
		&ASBZExplosiveLevelProp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZExplosiveLevelProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZExplosiveLevelProp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZExplosiveLevelProp, 2366122673);
	template<> STARBREEZE_API UClass* StaticClass<ASBZExplosiveLevelProp>()
	{
		return ASBZExplosiveLevelProp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZExplosiveLevelProp(Z_Construct_UClass_ASBZExplosiveLevelProp, &ASBZExplosiveLevelProp::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZExplosiveLevelProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZExplosiveLevelProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
