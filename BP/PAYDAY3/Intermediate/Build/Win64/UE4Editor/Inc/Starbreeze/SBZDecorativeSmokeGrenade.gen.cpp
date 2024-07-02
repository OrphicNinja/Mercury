// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDecorativeSmokeGrenade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDecorativeSmokeGrenade() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDecorativeSmokeGrenade_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDecorativeSmokeGrenade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDecorativeSmokeState();
// End Cross Module References
	DEFINE_FUNCTION(ASBZDecorativeSmokeGrenade::execMulticast_CreateSmokeCloud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_CreateSmokeCloud_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDecorativeSmokeGrenade::execOnActorHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorHit(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDecorativeSmokeGrenade::execOnRep_SmokeState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SmokeState();
		P_NATIVE_END;
	}
	static FName NAME_ASBZDecorativeSmokeGrenade_Multicast_CreateSmokeCloud = FName(TEXT("Multicast_CreateSmokeCloud"));
	void ASBZDecorativeSmokeGrenade::Multicast_CreateSmokeCloud()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZDecorativeSmokeGrenade_Multicast_CreateSmokeCloud),NULL);
	}
	static FName NAME_ASBZDecorativeSmokeGrenade_OnHitGround = FName(TEXT("OnHitGround"));
	void ASBZDecorativeSmokeGrenade::OnHitGround()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZDecorativeSmokeGrenade_OnHitGround),NULL);
	}
	static FName NAME_ASBZDecorativeSmokeGrenade_OnSpawned = FName(TEXT("OnSpawned"));
	void ASBZDecorativeSmokeGrenade::OnSpawned()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZDecorativeSmokeGrenade_OnSpawned),NULL);
	}
	void ASBZDecorativeSmokeGrenade::StaticRegisterNativesASBZDecorativeSmokeGrenade()
	{
		UClass* Class = ASBZDecorativeSmokeGrenade::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_CreateSmokeCloud", &ASBZDecorativeSmokeGrenade::execMulticast_CreateSmokeCloud },
			{ "OnActorHit", &ASBZDecorativeSmokeGrenade::execOnActorHit },
			{ "OnRep_SmokeState", &ASBZDecorativeSmokeGrenade::execOnRep_SmokeState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_Multicast_CreateSmokeCloud_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_Multicast_CreateSmokeCloud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDecorativeSmokeGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_Multicast_CreateSmokeCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDecorativeSmokeGrenade, nullptr, "Multicast_CreateSmokeCloud", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_Multicast_CreateSmokeCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_Multicast_CreateSmokeCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_Multicast_CreateSmokeCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_Multicast_CreateSmokeCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics
	{
		struct SBZDecorativeSmokeGrenade_eventOnActorHit_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDecorativeSmokeGrenade_eventOnActorHit_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDecorativeSmokeGrenade_eventOnActorHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDecorativeSmokeGrenade_eventOnActorHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDecorativeSmokeGrenade_eventOnActorHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDecorativeSmokeGrenade_eventOnActorHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDecorativeSmokeGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDecorativeSmokeGrenade, nullptr, "OnActorHit", nullptr, nullptr, sizeof(SBZDecorativeSmokeGrenade_eventOnActorHit_Parms), Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnHitGround_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnHitGround_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDecorativeSmokeGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnHitGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDecorativeSmokeGrenade, nullptr, "OnHitGround", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnHitGround_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnHitGround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnHitGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnHitGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnRep_SmokeState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnRep_SmokeState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDecorativeSmokeGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnRep_SmokeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDecorativeSmokeGrenade, nullptr, "OnRep_SmokeState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnRep_SmokeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnRep_SmokeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnRep_SmokeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnRep_SmokeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnSpawned_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDecorativeSmokeGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDecorativeSmokeGrenade, nullptr, "OnSpawned", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZDecorativeSmokeGrenade_NoRegister()
	{
		return ASBZDecorativeSmokeGrenade::StaticClass();
	}
	struct Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GasEffectComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GasEffectComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetonationEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetonationEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayedExplosionTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayedExplosionTimer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SmokeState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmokeState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SmokeState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_Multicast_CreateSmokeCloud, "Multicast_CreateSmokeCloud" }, // 1998015502
		{ &Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnActorHit, "OnActorHit" }, // 553772954
		{ &Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnHitGround, "OnHitGround" }, // 4248872996
		{ &Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnRep_SmokeState, "OnRep_SmokeState" }, // 2792620907
		{ &Z_Construct_UFunction_ASBZDecorativeSmokeGrenade_OnSpawned, "OnSpawned" }, // 548021855
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDecorativeSmokeGrenade.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDecorativeSmokeGrenade.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDecorativeSmokeGrenade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDecorativeSmokeGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDecorativeSmokeGrenade, StaticMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_GasEffectComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDecorativeSmokeGrenade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDecorativeSmokeGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_GasEffectComponent = { "GasEffectComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDecorativeSmokeGrenade, GasEffectComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_GasEffectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_GasEffectComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_DetonationEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDecorativeSmokeGrenade" },
		{ "ModuleRelativePath", "Public/SBZDecorativeSmokeGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_DetonationEvent = { "DetonationEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDecorativeSmokeGrenade, DetonationEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_DetonationEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_DetonationEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_DurationSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDecorativeSmokeGrenade" },
		{ "ModuleRelativePath", "Public/SBZDecorativeSmokeGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_DurationSeconds = { "DurationSeconds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDecorativeSmokeGrenade, DurationSeconds), METADATA_PARAMS(Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_DurationSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_DurationSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_Range_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDecorativeSmokeGrenade" },
		{ "ModuleRelativePath", "Public/SBZDecorativeSmokeGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDecorativeSmokeGrenade, Range), METADATA_PARAMS(Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_DelayedExplosionTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDecorativeSmokeGrenade" },
		{ "ModuleRelativePath", "Public/SBZDecorativeSmokeGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_DelayedExplosionTimer = { "DelayedExplosionTimer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDecorativeSmokeGrenade, DelayedExplosionTimer), METADATA_PARAMS(Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_DelayedExplosionTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_DelayedExplosionTimer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_SmokeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_SmokeState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDecorativeSmokeGrenade" },
		{ "ModuleRelativePath", "Public/SBZDecorativeSmokeGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_SmokeState = { "SmokeState", "OnRep_SmokeState", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDecorativeSmokeGrenade, SmokeState), Z_Construct_UEnum_Starbreeze_ESBZDecorativeSmokeState, METADATA_PARAMS(Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_SmokeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_SmokeState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_GasEffectComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_DetonationEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_DurationSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_DelayedExplosionTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_SmokeState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::NewProp_SmokeState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZDecorativeSmokeGrenade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::ClassParams = {
		&ASBZDecorativeSmokeGrenade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZDecorativeSmokeGrenade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZDecorativeSmokeGrenade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZDecorativeSmokeGrenade, 4209757388);
	template<> STARBREEZE_API UClass* StaticClass<ASBZDecorativeSmokeGrenade>()
	{
		return ASBZDecorativeSmokeGrenade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZDecorativeSmokeGrenade(Z_Construct_UClass_ASBZDecorativeSmokeGrenade, &ASBZDecorativeSmokeGrenade::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZDecorativeSmokeGrenade"), false, nullptr, nullptr, nullptr);

	void ASBZDecorativeSmokeGrenade::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_SmokeState(TEXT("SmokeState"));

		const bool bIsValid = true
			&& Name_SmokeState == ClassReps[(int32)ENetFields_Private::SmokeState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZDecorativeSmokeGrenade"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZDecorativeSmokeGrenade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
