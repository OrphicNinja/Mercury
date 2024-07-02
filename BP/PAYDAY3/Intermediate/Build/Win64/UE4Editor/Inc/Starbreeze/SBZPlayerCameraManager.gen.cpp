// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerCameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerCameraManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCameraManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCameraManager();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBasePlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCameraViewRestriction();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLockCameraData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCameraModifier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClampCameraRotationModifier_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAudioRaycasting_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPlayerCameraManager::execAddOrUpdateCameraViewRestriction)
	{
		P_GET_STRUCT_REF(FSBZCameraViewRestriction,Z_Param_Out_RestrictionSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOrUpdateCameraViewRestriction(Z_Param_Out_RestrictionSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerCameraManager::execIsCameraLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCameraLocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerCameraManager::execLockCamera)
	{
		P_GET_STRUCT_REF(FSBZLockCameraData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->LockCamera(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerCameraManager::execRemoveCameraViewRestriction)
	{
		P_GET_STRUCT_REF(FSBZCameraViewRestriction,Z_Param_Out_RestrictionSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCameraViewRestriction(Z_Param_Out_RestrictionSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerCameraManager::execSetCameraLockedReferenceRotation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InLockedRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraLockedReferenceRotation(Z_Param_Out_InLockedRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerCameraManager::execSpawnLensParticleEffect)
	{
		P_GET_OBJECT(UNiagaraSystem,Z_Param_ParticleSystem);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LifeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraComponent**)Z_Param__Result=P_THIS->SpawnLensParticleEffect(Z_Param_ParticleSystem,Z_Param_LifeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerCameraManager::execUnlockCamera)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InOutId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockCamera(Z_Param_Out_InOutId);
		P_NATIVE_END;
	}
	void ASBZPlayerCameraManager::StaticRegisterNativesASBZPlayerCameraManager()
	{
		UClass* Class = ASBZPlayerCameraManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrUpdateCameraViewRestriction", &ASBZPlayerCameraManager::execAddOrUpdateCameraViewRestriction },
			{ "IsCameraLocked", &ASBZPlayerCameraManager::execIsCameraLocked },
			{ "LockCamera", &ASBZPlayerCameraManager::execLockCamera },
			{ "RemoveCameraViewRestriction", &ASBZPlayerCameraManager::execRemoveCameraViewRestriction },
			{ "SetCameraLockedReferenceRotation", &ASBZPlayerCameraManager::execSetCameraLockedReferenceRotation },
			{ "SpawnLensParticleEffect", &ASBZPlayerCameraManager::execSpawnLensParticleEffect },
			{ "UnlockCamera", &ASBZPlayerCameraManager::execUnlockCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPlayerCameraManager_AddOrUpdateCameraViewRestriction_Statics
	{
		struct SBZPlayerCameraManager_eventAddOrUpdateCameraViewRestriction_Parms
		{
			FSBZCameraViewRestriction RestrictionSettings;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RestrictionSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlayerCameraManager_AddOrUpdateCameraViewRestriction_Statics::NewProp_RestrictionSettings = { "RestrictionSettings", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerCameraManager_eventAddOrUpdateCameraViewRestriction_Parms, RestrictionSettings), Z_Construct_UScriptStruct_FSBZCameraViewRestriction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerCameraManager_AddOrUpdateCameraViewRestriction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerCameraManager_AddOrUpdateCameraViewRestriction_Statics::NewProp_RestrictionSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerCameraManager_AddOrUpdateCameraViewRestriction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerCameraManager_AddOrUpdateCameraViewRestriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerCameraManager, nullptr, "AddOrUpdateCameraViewRestriction", nullptr, nullptr, sizeof(SBZPlayerCameraManager_eventAddOrUpdateCameraViewRestriction_Parms), Z_Construct_UFunction_ASBZPlayerCameraManager_AddOrUpdateCameraViewRestriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerCameraManager_AddOrUpdateCameraViewRestriction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerCameraManager_AddOrUpdateCameraViewRestriction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerCameraManager_AddOrUpdateCameraViewRestriction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerCameraManager_AddOrUpdateCameraViewRestriction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerCameraManager_AddOrUpdateCameraViewRestriction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerCameraManager_IsCameraLocked_Statics
	{
		struct SBZPlayerCameraManager_eventIsCameraLocked_Parms
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
	void Z_Construct_UFunction_ASBZPlayerCameraManager_IsCameraLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerCameraManager_eventIsCameraLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerCameraManager_IsCameraLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerCameraManager_eventIsCameraLocked_Parms), &Z_Construct_UFunction_ASBZPlayerCameraManager_IsCameraLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerCameraManager_IsCameraLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerCameraManager_IsCameraLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerCameraManager_IsCameraLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerCameraManager_IsCameraLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerCameraManager, nullptr, "IsCameraLocked", nullptr, nullptr, sizeof(SBZPlayerCameraManager_eventIsCameraLocked_Parms), Z_Construct_UFunction_ASBZPlayerCameraManager_IsCameraLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerCameraManager_IsCameraLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerCameraManager_IsCameraLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerCameraManager_IsCameraLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerCameraManager_IsCameraLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerCameraManager_IsCameraLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerCameraManager_LockCamera_Statics
	{
		struct SBZPlayerCameraManager_eventLockCamera_Parms
		{
			FSBZLockCameraData Data;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerCameraManager_LockCamera_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlayerCameraManager_LockCamera_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerCameraManager_eventLockCamera_Parms, Data), Z_Construct_UScriptStruct_FSBZLockCameraData, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerCameraManager_LockCamera_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerCameraManager_LockCamera_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerCameraManager_LockCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerCameraManager_eventLockCamera_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerCameraManager_LockCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerCameraManager_LockCamera_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerCameraManager_LockCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerCameraManager_LockCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerCameraManager_LockCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerCameraManager, nullptr, "LockCamera", nullptr, nullptr, sizeof(SBZPlayerCameraManager_eventLockCamera_Parms), Z_Construct_UFunction_ASBZPlayerCameraManager_LockCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerCameraManager_LockCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerCameraManager_LockCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerCameraManager_LockCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerCameraManager_LockCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerCameraManager_LockCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerCameraManager_RemoveCameraViewRestriction_Statics
	{
		struct SBZPlayerCameraManager_eventRemoveCameraViewRestriction_Parms
		{
			FSBZCameraViewRestriction RestrictionSettings;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RestrictionSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlayerCameraManager_RemoveCameraViewRestriction_Statics::NewProp_RestrictionSettings = { "RestrictionSettings", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerCameraManager_eventRemoveCameraViewRestriction_Parms, RestrictionSettings), Z_Construct_UScriptStruct_FSBZCameraViewRestriction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerCameraManager_RemoveCameraViewRestriction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerCameraManager_RemoveCameraViewRestriction_Statics::NewProp_RestrictionSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerCameraManager_RemoveCameraViewRestriction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerCameraManager_RemoveCameraViewRestriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerCameraManager, nullptr, "RemoveCameraViewRestriction", nullptr, nullptr, sizeof(SBZPlayerCameraManager_eventRemoveCameraViewRestriction_Parms), Z_Construct_UFunction_ASBZPlayerCameraManager_RemoveCameraViewRestriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerCameraManager_RemoveCameraViewRestriction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerCameraManager_RemoveCameraViewRestriction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerCameraManager_RemoveCameraViewRestriction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerCameraManager_RemoveCameraViewRestriction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerCameraManager_RemoveCameraViewRestriction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerCameraManager_SetCameraLockedReferenceRotation_Statics
	{
		struct SBZPlayerCameraManager_eventSetCameraLockedReferenceRotation_Parms
		{
			FRotator InLockedRotation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLockedRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLockedRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerCameraManager_SetCameraLockedReferenceRotation_Statics::NewProp_InLockedRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlayerCameraManager_SetCameraLockedReferenceRotation_Statics::NewProp_InLockedRotation = { "InLockedRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerCameraManager_eventSetCameraLockedReferenceRotation_Parms, InLockedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerCameraManager_SetCameraLockedReferenceRotation_Statics::NewProp_InLockedRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerCameraManager_SetCameraLockedReferenceRotation_Statics::NewProp_InLockedRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerCameraManager_SetCameraLockedReferenceRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerCameraManager_SetCameraLockedReferenceRotation_Statics::NewProp_InLockedRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerCameraManager_SetCameraLockedReferenceRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerCameraManager_SetCameraLockedReferenceRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerCameraManager, nullptr, "SetCameraLockedReferenceRotation", nullptr, nullptr, sizeof(SBZPlayerCameraManager_eventSetCameraLockedReferenceRotation_Parms), Z_Construct_UFunction_ASBZPlayerCameraManager_SetCameraLockedReferenceRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerCameraManager_SetCameraLockedReferenceRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerCameraManager_SetCameraLockedReferenceRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerCameraManager_SetCameraLockedReferenceRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerCameraManager_SetCameraLockedReferenceRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerCameraManager_SetCameraLockedReferenceRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect_Statics
	{
		struct SBZPlayerCameraManager_eventSpawnLensParticleEffect_Parms
		{
			UNiagaraSystem* ParticleSystem;
			float LifeTime;
			UNiagaraComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerCameraManager_eventSpawnLensParticleEffect_Parms, ParticleSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerCameraManager_eventSpawnLensParticleEffect_Parms, LifeTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerCameraManager_eventSpawnLensParticleEffect_Parms, ReturnValue), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect_Statics::NewProp_ParticleSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect_Statics::NewProp_LifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerCameraManager, nullptr, "SpawnLensParticleEffect", nullptr, nullptr, sizeof(SBZPlayerCameraManager_eventSpawnLensParticleEffect_Parms), Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerCameraManager_UnlockCamera_Statics
	{
		struct SBZPlayerCameraManager_eventUnlockCamera_Parms
		{
			int32 InOutId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InOutId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerCameraManager_UnlockCamera_Statics::NewProp_InOutId = { "InOutId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerCameraManager_eventUnlockCamera_Parms, InOutId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerCameraManager_UnlockCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerCameraManager_UnlockCamera_Statics::NewProp_InOutId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerCameraManager_UnlockCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerCameraManager_UnlockCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerCameraManager, nullptr, "UnlockCamera", nullptr, nullptr, sizeof(SBZPlayerCameraManager_eventUnlockCamera_Parms), Z_Construct_UFunction_ASBZPlayerCameraManager_UnlockCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerCameraManager_UnlockCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerCameraManager_UnlockCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerCameraManager_UnlockCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerCameraManager_UnlockCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerCameraManager_UnlockCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPlayerCameraManager_NoRegister()
	{
		return ASBZPlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraFeedbackComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraFeedbackComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFstop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFstop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFocalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFocalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldDepthBlurAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldDepthBlurAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldDepthBlurRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldDepthBlurRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopPassDepthOfFieldFstop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TopPassDepthOfFieldFstop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopPassDepthOfFieldFocalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TopPassDepthOfFieldFocalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopPassDepthOfFieldDepthBlurAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TopPassDepthOfFieldDepthBlurAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopPassDepthOfFieldDepthBlurRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TopPassDepthOfFieldDepthBlurRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionBlurAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MotionBlurAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionBlurMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MotionBlurMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionBlurTargetFPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MotionBlurTargetFPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionBlurPerObjectSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MotionBlurPerObjectSize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SBZCameraModifierList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SBZCameraModifierList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SBZCameraModifierList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampCameraModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClampCameraModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensEffectParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LensEffectParent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveCameraViewRestrictions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCameraViewRestrictions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveCameraViewRestrictions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCameraViewRestrictionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveCameraViewRestrictionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardTraceResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardTraceResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardTraceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardTraceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDynFocalDistanceWhenUnequipped_MetaData[];
#endif
		static void NewProp_bUseDynFocalDistanceWhenUnequipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDynFocalDistanceWhenUnequipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioRaycasting_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioRaycasting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZBasePlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPlayerCameraManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPlayerCameraManager_AddOrUpdateCameraViewRestriction, "AddOrUpdateCameraViewRestriction" }, // 712821735
		{ &Z_Construct_UFunction_ASBZPlayerCameraManager_IsCameraLocked, "IsCameraLocked" }, // 4172502463
		{ &Z_Construct_UFunction_ASBZPlayerCameraManager_LockCamera, "LockCamera" }, // 3985727584
		{ &Z_Construct_UFunction_ASBZPlayerCameraManager_RemoveCameraViewRestriction, "RemoveCameraViewRestriction" }, // 2050672611
		{ &Z_Construct_UFunction_ASBZPlayerCameraManager_SetCameraLockedReferenceRotation, "SetCameraLockedReferenceRotation" }, // 2872046837
		{ &Z_Construct_UFunction_ASBZPlayerCameraManager_SpawnLensParticleEffect, "SpawnLensParticleEffect" }, // 2924287225
		{ &Z_Construct_UFunction_ASBZPlayerCameraManager_UnlockCamera, "UnlockCamera" }, // 2821305655
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerCameraManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_PlayerCameraFeedbackComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_PlayerCameraFeedbackComponent = { "PlayerCameraFeedbackComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, PlayerCameraFeedbackComponent), Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_PlayerCameraFeedbackComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_PlayerCameraFeedbackComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldFstop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldFstop = { "DepthOfFieldFstop", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, DepthOfFieldFstop), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldFstop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldFstop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldFocalDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldFocalDistance = { "DepthOfFieldFocalDistance", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, DepthOfFieldFocalDistance), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldFocalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldFocalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldDepthBlurAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldDepthBlurAmount = { "DepthOfFieldDepthBlurAmount", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, DepthOfFieldDepthBlurAmount), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldDepthBlurAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldDepthBlurAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldDepthBlurRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldDepthBlurRadius = { "DepthOfFieldDepthBlurRadius", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, DepthOfFieldDepthBlurRadius), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldDepthBlurRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldDepthBlurRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldFstop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldFstop = { "TopPassDepthOfFieldFstop", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, TopPassDepthOfFieldFstop), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldFstop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldFstop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldFocalDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldFocalDistance = { "TopPassDepthOfFieldFocalDistance", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, TopPassDepthOfFieldFocalDistance), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldFocalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldFocalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldDepthBlurAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldDepthBlurAmount = { "TopPassDepthOfFieldDepthBlurAmount", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, TopPassDepthOfFieldDepthBlurAmount), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldDepthBlurAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldDepthBlurAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldDepthBlurRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldDepthBlurRadius = { "TopPassDepthOfFieldDepthBlurRadius", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, TopPassDepthOfFieldDepthBlurRadius), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldDepthBlurRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldDepthBlurRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurAmount = { "MotionBlurAmount", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, MotionBlurAmount), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurMax = { "MotionBlurMax", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, MotionBlurMax), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurTargetFPS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurTargetFPS = { "MotionBlurTargetFPS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, MotionBlurTargetFPS), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurTargetFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurTargetFPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurPerObjectSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurPerObjectSize = { "MotionBlurPerObjectSize", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, MotionBlurPerObjectSize), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurPerObjectSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurPerObjectSize_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_SBZCameraModifierList_Inner = { "SBZCameraModifierList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZPlayerCameraModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_SBZCameraModifierList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_SBZCameraModifierList = { "SBZCameraModifierList", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, SBZCameraModifierList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_SBZCameraModifierList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_SBZCameraModifierList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ClampCameraModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ClampCameraModifier = { "ClampCameraModifier", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, ClampCameraModifier), Z_Construct_UClass_USBZClampCameraRotationModifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ClampCameraModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ClampCameraModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_LensEffectParent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_LensEffectParent = { "LensEffectParent", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, LensEffectParent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_LensEffectParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_LensEffectParent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ActiveCameraViewRestrictions_Inner = { "ActiveCameraViewRestrictions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCameraViewRestriction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ActiveCameraViewRestrictions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ActiveCameraViewRestrictions = { "ActiveCameraViewRestrictions", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, ActiveCameraViewRestrictions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ActiveCameraViewRestrictions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ActiveCameraViewRestrictions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ActiveCameraViewRestrictionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ActiveCameraViewRestrictionId = { "ActiveCameraViewRestrictionId", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, ActiveCameraViewRestrictionId), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ActiveCameraViewRestrictionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ActiveCameraViewRestrictionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ForwardTraceResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ForwardTraceResult = { "ForwardTraceResult", nullptr, (EPropertyFlags)0x0040008000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, ForwardTraceResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ForwardTraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ForwardTraceResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ForwardTraceLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ForwardTraceLength = { "ForwardTraceLength", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, ForwardTraceLength), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ForwardTraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ForwardTraceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_bUseDynFocalDistanceWhenUnequipped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_bUseDynFocalDistanceWhenUnequipped_SetBit(void* Obj)
	{
		((ASBZPlayerCameraManager*)Obj)->bUseDynFocalDistanceWhenUnequipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_bUseDynFocalDistanceWhenUnequipped = { "bUseDynFocalDistanceWhenUnequipped", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerCameraManager), &Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_bUseDynFocalDistanceWhenUnequipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_bUseDynFocalDistanceWhenUnequipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_bUseDynFocalDistanceWhenUnequipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_AudioRaycasting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCameraManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_AudioRaycasting = { "AudioRaycasting", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerCameraManager, AudioRaycasting), Z_Construct_UClass_USBZAudioRaycasting_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_AudioRaycasting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_AudioRaycasting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPlayerCameraManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_PlayerCameraFeedbackComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldFstop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldFocalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldDepthBlurAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_DepthOfFieldDepthBlurRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldFstop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldFocalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldDepthBlurAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_TopPassDepthOfFieldDepthBlurRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurTargetFPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_MotionBlurPerObjectSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_SBZCameraModifierList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_SBZCameraModifierList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ClampCameraModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_LensEffectParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ActiveCameraViewRestrictions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ActiveCameraViewRestrictions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ActiveCameraViewRestrictionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ForwardTraceResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_ForwardTraceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_bUseDynFocalDistanceWhenUnequipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerCameraManager_Statics::NewProp_AudioRaycasting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlayerCameraManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlayerCameraManager_Statics::ClassParams = {
		&ASBZPlayerCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPlayerCameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlayerCameraManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlayerCameraManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlayerCameraManager, 2914899923);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlayerCameraManager>()
	{
		return ASBZPlayerCameraManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlayerCameraManager(Z_Construct_UClass_ASBZPlayerCameraManager, &ASBZPlayerCameraManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlayerCameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlayerCameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
