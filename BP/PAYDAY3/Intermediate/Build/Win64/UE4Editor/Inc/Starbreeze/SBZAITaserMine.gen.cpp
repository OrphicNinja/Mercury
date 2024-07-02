// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAITaserMine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAITaserMine() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAITaserMine_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAITaserMine();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosionResult();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSmallCosmeticDestruction_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosive_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAITaserMine::execDamageRejected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageRejected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAITaserMine::execMulticast_OnWalkedOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnWalkedOn_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAITaserMine::execMulticast_OnWalkedOnTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnWalkedOnTarget_Implementation(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAITaserMine::execMulticast_ReplicateExplosion)
	{
		P_GET_STRUCT(FSBZExplosionResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ReplicateExplosion_Implementation(Z_Param_Result);
		P_NATIVE_END;
	}
	static FName NAME_ASBZAITaserMine_Multicast_OnWalkedOn = FName(TEXT("Multicast_OnWalkedOn"));
	void ASBZAITaserMine::Multicast_OnWalkedOn()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZAITaserMine_Multicast_OnWalkedOn),NULL);
	}
	static FName NAME_ASBZAITaserMine_Multicast_OnWalkedOnTarget = FName(TEXT("Multicast_OnWalkedOnTarget"));
	void ASBZAITaserMine::Multicast_OnWalkedOnTarget(AActor* OtherActor)
	{
		SBZAITaserMine_eventMulticast_OnWalkedOnTarget_Parms Parms;
		Parms.OtherActor=OtherActor;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAITaserMine_Multicast_OnWalkedOnTarget),&Parms);
	}
	static FName NAME_ASBZAITaserMine_Multicast_ReplicateExplosion = FName(TEXT("Multicast_ReplicateExplosion"));
	void ASBZAITaserMine::Multicast_ReplicateExplosion(FSBZExplosionResult const& Result)
	{
		SBZAITaserMine_eventMulticast_ReplicateExplosion_Parms Parms;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAITaserMine_Multicast_ReplicateExplosion),&Parms);
	}
	void ASBZAITaserMine::StaticRegisterNativesASBZAITaserMine()
	{
		UClass* Class = ASBZAITaserMine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageRejected", &ASBZAITaserMine::execDamageRejected },
			{ "Multicast_OnWalkedOn", &ASBZAITaserMine::execMulticast_OnWalkedOn },
			{ "Multicast_OnWalkedOnTarget", &ASBZAITaserMine::execMulticast_OnWalkedOnTarget },
			{ "Multicast_ReplicateExplosion", &ASBZAITaserMine::execMulticast_ReplicateExplosion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAITaserMine_DamageRejected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAITaserMine_DamageRejected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAITaserMine_DamageRejected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAITaserMine, nullptr, "DamageRejected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAITaserMine_DamageRejected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAITaserMine_DamageRejected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAITaserMine_DamageRejected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAITaserMine_DamageRejected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAITaserMine, nullptr, "Multicast_OnWalkedOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOnTarget_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOnTarget_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAITaserMine_eventMulticast_OnWalkedOnTarget_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOnTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOnTarget_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOnTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOnTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAITaserMine, nullptr, "Multicast_OnWalkedOnTarget", nullptr, nullptr, sizeof(SBZAITaserMine_eventMulticast_OnWalkedOnTarget_Parms), Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOnTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOnTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOnTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOnTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOnTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOnTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAITaserMine_Multicast_ReplicateExplosion_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAITaserMine_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAITaserMine_Multicast_ReplicateExplosion_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAITaserMine_eventMulticast_ReplicateExplosion_Parms, Result), Z_Construct_UScriptStruct_FSBZExplosionResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZAITaserMine_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAITaserMine_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAITaserMine_Multicast_ReplicateExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAITaserMine_Multicast_ReplicateExplosion_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAITaserMine_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAITaserMine_Multicast_ReplicateExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAITaserMine, nullptr, "Multicast_ReplicateExplosion", nullptr, nullptr, sizeof(SBZAITaserMine_eventMulticast_ReplicateExplosion_Parms), Z_Construct_UFunction_ASBZAITaserMine_Multicast_ReplicateExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAITaserMine_Multicast_ReplicateExplosion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAITaserMine_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAITaserMine_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAITaserMine_Multicast_ReplicateExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAITaserMine_Multicast_ReplicateExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAITaserMine_NoRegister()
	{
		return ASBZAITaserMine::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAITaserMine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StunDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StunDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkedOnEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WalkedOnEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyedEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyedMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DestroyedMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TasedEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TasedEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaceSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaceSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkedOnEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WalkedOnEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIExplosionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIExplosionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerExplosionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerExplosionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtReactionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HurtReactionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawned_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spawned;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAITaserMine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAITaserMine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAITaserMine_DamageRejected, "DamageRejected" }, // 2918426650
		{ &Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOn, "Multicast_OnWalkedOn" }, // 4136603047
		{ &Z_Construct_UFunction_ASBZAITaserMine_Multicast_OnWalkedOnTarget, "Multicast_OnWalkedOnTarget" }, // 1253720603
		{ &Z_Construct_UFunction_ASBZAITaserMine_Multicast_ReplicateExplosion, "Multicast_ReplicateExplosion" }, // 1541902507
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAITaserMine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "SBZAITaserMine.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DetectionRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserMine" },
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DetectionRange = { "DetectionRange", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAITaserMine, DetectionRange), METADATA_PARAMS(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DetectionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DetectionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_StunDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserMine" },
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_StunDuration = { "StunDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAITaserMine, StunDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_StunDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_StunDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_WalkedOnEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserMine" },
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_WalkedOnEffect = { "WalkedOnEffect", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAITaserMine, WalkedOnEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_WalkedOnEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_WalkedOnEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DestroyedEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserMine" },
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DestroyedEffect = { "DestroyedEffect", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAITaserMine, DestroyedEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DestroyedEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DestroyedEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DestroyedMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserMine" },
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DestroyedMesh = { "DestroyedMesh", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAITaserMine, DestroyedMesh), Z_Construct_UClass_ASBZSmallCosmeticDestruction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DestroyedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DestroyedMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_TasedEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserMine" },
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_TasedEffect = { "TasedEffect", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAITaserMine, TasedEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_TasedEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_TasedEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_OverlapSphere_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserMine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_OverlapSphere = { "OverlapSphere", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAITaserMine, OverlapSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_OverlapSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_OverlapSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserMine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAITaserMine, AudioComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_PlaceSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserMine" },
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_PlaceSound = { "PlaceSound", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAITaserMine, PlaceSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_PlaceSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_PlaceSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_WalkedOnEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserMine" },
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_WalkedOnEvent = { "WalkedOnEvent", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAITaserMine, WalkedOnEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_WalkedOnEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_WalkedOnEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DestroyedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserMine" },
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DestroyedEvent = { "DestroyedEvent", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAITaserMine, DestroyedEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DestroyedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DestroyedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_AIExplosionRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserMine" },
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_AIExplosionRange = { "AIExplosionRange", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAITaserMine, AIExplosionRange), METADATA_PARAMS(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_AIExplosionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_AIExplosionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_PlayerExplosionRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserMine" },
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_PlayerExplosionRange = { "PlayerExplosionRange", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAITaserMine, PlayerExplosionRange), METADATA_PARAMS(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_PlayerExplosionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_PlayerExplosionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_HurtReactionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserMine" },
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_HurtReactionData = { "HurtReactionData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAITaserMine, HurtReactionData), Z_Construct_UScriptStruct_FSBZHurtReactionData, METADATA_PARAMS(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_HurtReactionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_HurtReactionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_Spawned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserMine" },
		{ "ModuleRelativePath", "Public/SBZAITaserMine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_Spawned = { "Spawned", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAITaserMine, Spawned), Z_Construct_UClass_ASBZSmallCosmeticDestruction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_Spawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_Spawned_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAITaserMine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DetectionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_StunDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_WalkedOnEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DestroyedEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DestroyedMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_TasedEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_OverlapSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_PlaceSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_WalkedOnEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_DestroyedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_AIExplosionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_PlayerExplosionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_HurtReactionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAITaserMine_Statics::NewProp_Spawned,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZAITaserMine_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZExplosive_NoRegister, (int32)VTABLE_OFFSET(ASBZAITaserMine, ISBZExplosive), false },
			{ Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAITaserMine, ISBZHurtReactionDataInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAITaserMine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAITaserMine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAITaserMine_Statics::ClassParams = {
		&ASBZAITaserMine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAITaserMine_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserMine_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAITaserMine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserMine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAITaserMine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAITaserMine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAITaserMine, 2353473577);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAITaserMine>()
	{
		return ASBZAITaserMine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAITaserMine(Z_Construct_UClass_ASBZAITaserMine, &ASBZAITaserMine::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAITaserMine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAITaserMine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
