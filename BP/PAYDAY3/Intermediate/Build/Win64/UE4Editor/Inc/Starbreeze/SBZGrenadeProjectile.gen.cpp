// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGrenadeProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGrenadeProjectile() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGrenadeProjectile_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGrenadeProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosionResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponFireData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRangedWeaponData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosive_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZProjectileInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZGrenadeProjectile::execMulticast_DestroyBreakable)
	{
		P_GET_STRUCT(FHitResult,Z_Param_InBreakableHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DestroyBreakable_Implementation(Z_Param_InBreakableHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGrenadeProjectile::execMulticast_OnServerCollision)
	{
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_InLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnServerCollision_Implementation(Z_Param_InLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGrenadeProjectile::execMulticast_ReplicateExplosion)
	{
		P_GET_STRUCT(FSBZExplosionResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ReplicateExplosion_Implementation(Z_Param_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGrenadeProjectile::execMulticast_SetEquippableIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetEquippableIndex_Implementation(Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGrenadeProjectile::execMulticast_SetGrenadeProjectileVelocity)
	{
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ProjectileDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetGrenadeProjectileVelocity_Implementation(Z_Param_ProjectileDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGrenadeProjectile::execOnCollisionComponentHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCollisionComponentHit(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGrenadeProjectile::execOnOwnerEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOwnerEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGrenadeProjectile::execOnProjectileBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectileBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGrenadeProjectile::execOnProjectileBounce)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_InHitResult);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectileBounce(Z_Param_Out_InHitResult,Z_Param_Out_ImpactVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGrenadeProjectile::execOnProjectileStopped)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_InHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectileStopped(Z_Param_Out_InHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGrenadeProjectile::execOnRep_EquippableIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EquippableIndex();
		P_NATIVE_END;
	}
	static FName NAME_ASBZGrenadeProjectile_Multicast_DestroyBreakable = FName(TEXT("Multicast_DestroyBreakable"));
	void ASBZGrenadeProjectile::Multicast_DestroyBreakable(FHitResult const& InBreakableHitResult)
	{
		SBZGrenadeProjectile_eventMulticast_DestroyBreakable_Parms Parms;
		Parms.InBreakableHitResult=InBreakableHitResult;
		ProcessEvent(FindFunctionChecked(NAME_ASBZGrenadeProjectile_Multicast_DestroyBreakable),&Parms);
	}
	static FName NAME_ASBZGrenadeProjectile_Multicast_OnServerCollision = FName(TEXT("Multicast_OnServerCollision"));
	void ASBZGrenadeProjectile::Multicast_OnServerCollision(FVector_NetQuantize const& InLocation)
	{
		SBZGrenadeProjectile_eventMulticast_OnServerCollision_Parms Parms;
		Parms.InLocation=InLocation;
		ProcessEvent(FindFunctionChecked(NAME_ASBZGrenadeProjectile_Multicast_OnServerCollision),&Parms);
	}
	static FName NAME_ASBZGrenadeProjectile_Multicast_ReplicateExplosion = FName(TEXT("Multicast_ReplicateExplosion"));
	void ASBZGrenadeProjectile::Multicast_ReplicateExplosion(FSBZExplosionResult const& Result)
	{
		SBZGrenadeProjectile_eventMulticast_ReplicateExplosion_Parms Parms;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_ASBZGrenadeProjectile_Multicast_ReplicateExplosion),&Parms);
	}
	static FName NAME_ASBZGrenadeProjectile_Multicast_SetEquippableIndex = FName(TEXT("Multicast_SetEquippableIndex"));
	void ASBZGrenadeProjectile::Multicast_SetEquippableIndex(int32 InIndex)
	{
		SBZGrenadeProjectile_eventMulticast_SetEquippableIndex_Parms Parms;
		Parms.InIndex=InIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASBZGrenadeProjectile_Multicast_SetEquippableIndex),&Parms);
	}
	static FName NAME_ASBZGrenadeProjectile_Multicast_SetGrenadeProjectileVelocity = FName(TEXT("Multicast_SetGrenadeProjectileVelocity"));
	void ASBZGrenadeProjectile::Multicast_SetGrenadeProjectileVelocity(FVector_NetQuantizeNormal const& ProjectileDirection)
	{
		SBZGrenadeProjectile_eventMulticast_SetGrenadeProjectileVelocity_Parms Parms;
		Parms.ProjectileDirection=ProjectileDirection;
		ProcessEvent(FindFunctionChecked(NAME_ASBZGrenadeProjectile_Multicast_SetGrenadeProjectileVelocity),&Parms);
	}
	static FName NAME_ASBZGrenadeProjectile_OnFired = FName(TEXT("OnFired"));
	void ASBZGrenadeProjectile::OnFired()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZGrenadeProjectile_OnFired),NULL);
	}
	void ASBZGrenadeProjectile::StaticRegisterNativesASBZGrenadeProjectile()
	{
		UClass* Class = ASBZGrenadeProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_DestroyBreakable", &ASBZGrenadeProjectile::execMulticast_DestroyBreakable },
			{ "Multicast_OnServerCollision", &ASBZGrenadeProjectile::execMulticast_OnServerCollision },
			{ "Multicast_ReplicateExplosion", &ASBZGrenadeProjectile::execMulticast_ReplicateExplosion },
			{ "Multicast_SetEquippableIndex", &ASBZGrenadeProjectile::execMulticast_SetEquippableIndex },
			{ "Multicast_SetGrenadeProjectileVelocity", &ASBZGrenadeProjectile::execMulticast_SetGrenadeProjectileVelocity },
			{ "OnCollisionComponentHit", &ASBZGrenadeProjectile::execOnCollisionComponentHit },
			{ "OnOwnerEndPlay", &ASBZGrenadeProjectile::execOnOwnerEndPlay },
			{ "OnProjectileBeginOverlap", &ASBZGrenadeProjectile::execOnProjectileBeginOverlap },
			{ "OnProjectileBounce", &ASBZGrenadeProjectile::execOnProjectileBounce },
			{ "OnProjectileStopped", &ASBZGrenadeProjectile::execOnProjectileStopped },
			{ "OnRep_EquippableIndex", &ASBZGrenadeProjectile::execOnRep_EquippableIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_DestroyBreakable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBreakableHitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBreakableHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_DestroyBreakable_Statics::NewProp_InBreakableHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_DestroyBreakable_Statics::NewProp_InBreakableHitResult = { "InBreakableHitResult", nullptr, (EPropertyFlags)0x0010008008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventMulticast_DestroyBreakable_Parms, InBreakableHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_DestroyBreakable_Statics::NewProp_InBreakableHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_DestroyBreakable_Statics::NewProp_InBreakableHitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_DestroyBreakable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_DestroyBreakable_Statics::NewProp_InBreakableHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_DestroyBreakable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_DestroyBreakable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGrenadeProjectile, nullptr, "Multicast_DestroyBreakable", nullptr, nullptr, sizeof(SBZGrenadeProjectile_eventMulticast_DestroyBreakable_Parms), Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_DestroyBreakable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_DestroyBreakable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_DestroyBreakable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_DestroyBreakable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_DestroyBreakable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_DestroyBreakable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_OnServerCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_OnServerCollision_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_OnServerCollision_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventMulticast_OnServerCollision_Parms, InLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_OnServerCollision_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_OnServerCollision_Statics::NewProp_InLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_OnServerCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_OnServerCollision_Statics::NewProp_InLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_OnServerCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_OnServerCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGrenadeProjectile, nullptr, "Multicast_OnServerCollision", nullptr, nullptr, sizeof(SBZGrenadeProjectile_eventMulticast_OnServerCollision_Parms), Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_OnServerCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_OnServerCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_OnServerCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_OnServerCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_OnServerCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_OnServerCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_ReplicateExplosion_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_ReplicateExplosion_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventMulticast_ReplicateExplosion_Parms, Result), Z_Construct_UScriptStruct_FSBZExplosionResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_ReplicateExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_ReplicateExplosion_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_ReplicateExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGrenadeProjectile, nullptr, "Multicast_ReplicateExplosion", nullptr, nullptr, sizeof(SBZGrenadeProjectile_eventMulticast_ReplicateExplosion_Parms), Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_ReplicateExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_ReplicateExplosion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_ReplicateExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_ReplicateExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetEquippableIndex_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetEquippableIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventMulticast_SetEquippableIndex_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetEquippableIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetEquippableIndex_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetEquippableIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetEquippableIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGrenadeProjectile, nullptr, "Multicast_SetEquippableIndex", nullptr, nullptr, sizeof(SBZGrenadeProjectile_eventMulticast_SetEquippableIndex_Parms), Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetEquippableIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetEquippableIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetEquippableIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetEquippableIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetEquippableIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetEquippableIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetGrenadeProjectileVelocity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetGrenadeProjectileVelocity_Statics::NewProp_ProjectileDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetGrenadeProjectileVelocity_Statics::NewProp_ProjectileDirection = { "ProjectileDirection", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventMulticast_SetGrenadeProjectileVelocity_Parms, ProjectileDirection), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetGrenadeProjectileVelocity_Statics::NewProp_ProjectileDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetGrenadeProjectileVelocity_Statics::NewProp_ProjectileDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetGrenadeProjectileVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetGrenadeProjectileVelocity_Statics::NewProp_ProjectileDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetGrenadeProjectileVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetGrenadeProjectileVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGrenadeProjectile, nullptr, "Multicast_SetGrenadeProjectileVelocity", nullptr, nullptr, sizeof(SBZGrenadeProjectile_eventMulticast_SetGrenadeProjectileVelocity_Parms), Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetGrenadeProjectileVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetGrenadeProjectileVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetGrenadeProjectileVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetGrenadeProjectileVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetGrenadeProjectileVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetGrenadeProjectileVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics
	{
		struct SBZGrenadeProjectile_eventOnCollisionComponentHit_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventOnCollisionComponentHit_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventOnCollisionComponentHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventOnCollisionComponentHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventOnCollisionComponentHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventOnCollisionComponentHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGrenadeProjectile, nullptr, "OnCollisionComponentHit", nullptr, nullptr, sizeof(SBZGrenadeProjectile_eventOnCollisionComponentHit_Parms), Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGrenadeProjectile_OnFired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_OnFired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnFired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGrenadeProjectile, nullptr, "OnFired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_OnFired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnFired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGrenadeProjectile_OnFired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGrenadeProjectile_OnFired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGrenadeProjectile_OnOwnerEndPlay_Statics
	{
		struct SBZGrenadeProjectile_eventOnOwnerEndPlay_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnOwnerEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventOnOwnerEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnOwnerEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventOnOwnerEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGrenadeProjectile_OnOwnerEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_OnOwnerEndPlay_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_OnOwnerEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_OnOwnerEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnOwnerEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGrenadeProjectile, nullptr, "OnOwnerEndPlay", nullptr, nullptr, sizeof(SBZGrenadeProjectile_eventOnOwnerEndPlay_Parms), Z_Construct_UFunction_ASBZGrenadeProjectile_OnOwnerEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnOwnerEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_OnOwnerEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnOwnerEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGrenadeProjectile_OnOwnerEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGrenadeProjectile_OnOwnerEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics
	{
		struct SBZGrenadeProjectile_eventOnProjectileBeginOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventOnProjectileBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventOnProjectileBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventOnProjectileBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventOnProjectileBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SBZGrenadeProjectile_eventOnProjectileBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGrenadeProjectile_eventOnProjectileBeginOverlap_Parms), &Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventOnProjectileBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGrenadeProjectile, nullptr, "OnProjectileBeginOverlap", nullptr, nullptr, sizeof(SBZGrenadeProjectile_eventOnProjectileBeginOverlap_Parms), Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics
	{
		struct SBZGrenadeProjectile_eventOnProjectileBounce_Parms
		{
			FHitResult InHitResult;
			FVector ImpactVelocity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InHitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InHitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics::NewProp_InHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics::NewProp_InHitResult = { "InHitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventOnProjectileBounce_Parms, InHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics::NewProp_InHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics::NewProp_InHitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics::NewProp_ImpactVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventOnProjectileBounce_Parms, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics::NewProp_ImpactVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics::NewProp_ImpactVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics::NewProp_InHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics::NewProp_ImpactVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGrenadeProjectile, nullptr, "OnProjectileBounce", nullptr, nullptr, sizeof(SBZGrenadeProjectile_eventOnProjectileBounce_Parms), Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileStopped_Statics
	{
		struct SBZGrenadeProjectile_eventOnProjectileStopped_Parms
		{
			FHitResult InHitResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InHitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileStopped_Statics::NewProp_InHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileStopped_Statics::NewProp_InHitResult = { "InHitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGrenadeProjectile_eventOnProjectileStopped_Parms, InHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileStopped_Statics::NewProp_InHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileStopped_Statics::NewProp_InHitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileStopped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileStopped_Statics::NewProp_InHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGrenadeProjectile, nullptr, "OnProjectileStopped", nullptr, nullptr, sizeof(SBZGrenadeProjectile_eventOnProjectileStopped_Parms), Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileStopped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGrenadeProjectile_OnRep_EquippableIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGrenadeProjectile_OnRep_EquippableIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGrenadeProjectile_OnRep_EquippableIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGrenadeProjectile, nullptr, "OnRep_EquippableIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGrenadeProjectile_OnRep_EquippableIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGrenadeProjectile_OnRep_EquippableIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGrenadeProjectile_OnRep_EquippableIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGrenadeProjectile_OnRep_EquippableIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZGrenadeProjectile_NoRegister()
	{
		return ASBZGrenadeProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ASBZGrenadeProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MarkerOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerActivationDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarkerActivationDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquippableIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingDataExplosionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingDataExplosionResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetonationEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetonationEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiredEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FiredEvent;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LocalPlayerFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerInstigatorFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LocalPlayerInstigatorFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerFeedbackCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerFeedbackCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedWeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangedWeaponData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReduceBouncinessPerBounce_MetaData[];
#endif
		static void NewProp_bReduceBouncinessPerBounce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReduceBouncinessPerBounce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BouncinessReductionValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BouncinessReductionValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTimesToReduceBounciness_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTimesToReduceBounciness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBounces_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBounces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePhysicsOnStopped_MetaData[];
#endif
		static void NewProp_bEnablePhysicsOnStopped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePhysicsOnStopped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsLocationRotation_MetaData[];
#endif
		static void NewProp_bWantsLocationRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsLocationRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostDamagePhysicsEffectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostDamagePhysicsEffectData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZGrenadeProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZGrenadeProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_DestroyBreakable, "Multicast_DestroyBreakable" }, // 3314447305
		{ &Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_OnServerCollision, "Multicast_OnServerCollision" }, // 856605252
		{ &Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_ReplicateExplosion, "Multicast_ReplicateExplosion" }, // 200866373
		{ &Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetEquippableIndex, "Multicast_SetEquippableIndex" }, // 4165484968
		{ &Z_Construct_UFunction_ASBZGrenadeProjectile_Multicast_SetGrenadeProjectileVelocity, "Multicast_SetGrenadeProjectileVelocity" }, // 4189023512
		{ &Z_Construct_UFunction_ASBZGrenadeProjectile_OnCollisionComponentHit, "OnCollisionComponentHit" }, // 4095743340
		{ &Z_Construct_UFunction_ASBZGrenadeProjectile_OnFired, "OnFired" }, // 1886129411
		{ &Z_Construct_UFunction_ASBZGrenadeProjectile_OnOwnerEndPlay, "OnOwnerEndPlay" }, // 4095381559
		{ &Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBeginOverlap, "OnProjectileBeginOverlap" }, // 2563662265
		{ &Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileBounce, "OnProjectileBounce" }, // 99042757
		{ &Z_Construct_UFunction_ASBZGrenadeProjectile_OnProjectileStopped, "OnProjectileStopped" }, // 3217918681
		{ &Z_Construct_UFunction_ASBZGrenadeProjectile_OnRep_EquippableIndex, "OnRep_EquippableIndex" }, // 1575385116
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGrenadeProjectile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MarkerAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MarkerAsset = { "MarkerAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, MarkerAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MarkerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MarkerAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MarkerOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MarkerOffset = { "MarkerOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, MarkerOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MarkerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MarkerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MarkerActivationDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MarkerActivationDelay = { "MarkerActivationDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, MarkerActivationDelay), METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MarkerActivationDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MarkerActivationDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_EquippableIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_EquippableIndex = { "EquippableIndex", "OnRep_EquippableIndex", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, EquippableIndex), METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_EquippableIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_EquippableIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, StaticMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_SphereCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_SphereCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_SphereCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_PendingDataExplosionResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_PendingDataExplosionResult = { "PendingDataExplosionResult", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, PendingDataExplosionResult), Z_Construct_UScriptStruct_FSBZExplosionResult, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_PendingDataExplosionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_PendingDataExplosionResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, OwnerCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_OwnerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_Delay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, Delay), METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_Delay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DetonationEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DetonationEvent = { "DetonationEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, DetonationEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DetonationEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DetonationEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_FiredEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_FiredEvent = { "FiredEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, FiredEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_FiredEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_FiredEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DetonationEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DetonationEffect = { "DetonationEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, DetonationEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DetonationEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DetonationEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DamageGameplayEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DamageGameplayEffectClass = { "DamageGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, DamageGameplayEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DamageGameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DamageGameplayEffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DamageTypeClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, DamageTypeClass), Z_Construct_UClass_USBZDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DamageTypeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DamageTypeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_LocalPlayerFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_LocalPlayerFeedback = { "LocalPlayerFeedback", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, LocalPlayerFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_LocalPlayerFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_LocalPlayerFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_LocalPlayerInstigatorFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_LocalPlayerInstigatorFeedback = { "LocalPlayerInstigatorFeedback", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, LocalPlayerInstigatorFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_LocalPlayerInstigatorFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_LocalPlayerInstigatorFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_PlayerFeedbackCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_PlayerFeedbackCurve = { "PlayerFeedbackCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, PlayerFeedbackCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_PlayerFeedbackCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_PlayerFeedbackCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, Data), Z_Construct_UClass_USBZWeaponFireData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_RangedWeaponData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_RangedWeaponData = { "RangedWeaponData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, RangedWeaponData), Z_Construct_UClass_USBZRangedWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_RangedWeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_RangedWeaponData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bReduceBouncinessPerBounce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	void Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bReduceBouncinessPerBounce_SetBit(void* Obj)
	{
		((ASBZGrenadeProjectile*)Obj)->bReduceBouncinessPerBounce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bReduceBouncinessPerBounce = { "bReduceBouncinessPerBounce", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZGrenadeProjectile), &Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bReduceBouncinessPerBounce_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bReduceBouncinessPerBounce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bReduceBouncinessPerBounce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_BouncinessReductionValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_BouncinessReductionValue = { "BouncinessReductionValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, BouncinessReductionValue), METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_BouncinessReductionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_BouncinessReductionValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MaxTimesToReduceBounciness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MaxTimesToReduceBounciness = { "MaxTimesToReduceBounciness", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, MaxTimesToReduceBounciness), METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MaxTimesToReduceBounciness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MaxTimesToReduceBounciness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MaxBounces_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MaxBounces = { "MaxBounces", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, MaxBounces), METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MaxBounces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MaxBounces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bEnablePhysicsOnStopped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	void Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bEnablePhysicsOnStopped_SetBit(void* Obj)
	{
		((ASBZGrenadeProjectile*)Obj)->bEnablePhysicsOnStopped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bEnablePhysicsOnStopped = { "bEnablePhysicsOnStopped", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZGrenadeProjectile), &Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bEnablePhysicsOnStopped_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bEnablePhysicsOnStopped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bEnablePhysicsOnStopped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bWantsLocationRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	void Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bWantsLocationRotation_SetBit(void* Obj)
	{
		((ASBZGrenadeProjectile*)Obj)->bWantsLocationRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bWantsLocationRotation = { "bWantsLocationRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZGrenadeProjectile), &Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bWantsLocationRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bWantsLocationRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bWantsLocationRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_PostDamagePhysicsEffectData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGrenadeProjectile" },
		{ "ModuleRelativePath", "Public/SBZGrenadeProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_PostDamagePhysicsEffectData = { "PostDamagePhysicsEffectData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGrenadeProjectile, PostDamagePhysicsEffectData), Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData, METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_PostDamagePhysicsEffectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_PostDamagePhysicsEffectData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZGrenadeProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MarkerAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MarkerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MarkerActivationDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_EquippableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_ProjectileMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_SphereCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_PendingDataExplosionResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_OwnerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DetonationEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_FiredEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DetonationEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DamageGameplayEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_DamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_LocalPlayerFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_LocalPlayerInstigatorFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_PlayerFeedbackCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_RangedWeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bReduceBouncinessPerBounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_BouncinessReductionValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MaxTimesToReduceBounciness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_MaxBounces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bEnablePhysicsOnStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_bWantsLocationRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGrenadeProjectile_Statics::NewProp_PostDamagePhysicsEffectData,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZExplosive_NoRegister, (int32)VTABLE_OFFSET(ASBZGrenadeProjectile, ISBZExplosive), false },
			{ Z_Construct_UClass_USBZProjectileInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZGrenadeProjectile, ISBZProjectileInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZGrenadeProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZGrenadeProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZGrenadeProjectile_Statics::ClassParams = {
		&ASBZGrenadeProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZGrenadeProjectile_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGrenadeProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZGrenadeProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZGrenadeProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZGrenadeProjectile, 46744845);
	template<> STARBREEZE_API UClass* StaticClass<ASBZGrenadeProjectile>()
	{
		return ASBZGrenadeProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZGrenadeProjectile(Z_Construct_UClass_ASBZGrenadeProjectile, &ASBZGrenadeProjectile::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZGrenadeProjectile"), false, nullptr, nullptr, nullptr);

	void ASBZGrenadeProjectile::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_EquippableIndex(TEXT("EquippableIndex"));

		const bool bIsValid = true
			&& Name_EquippableIndex == ClassReps[(int32)ENetFields_Private::EquippableIndex].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZGrenadeProjectile"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZGrenadeProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
