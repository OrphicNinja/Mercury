// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSmallCosmeticDestruction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSmallCosmeticDestruction() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSmallCosmeticDestruction_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSmallCosmeticDestruction();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZNoCookDS();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRadialDamageParams();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZSmallCosmeticDestruction::execCreateImpactPoint)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateImpactPoint(Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSmallCosmeticDestruction::execHandleTakeOverlapDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_HitInfos);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OriginDirection);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTakeOverlapDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_InstigatedBy,Z_Param_Out_HitInfos,Z_Param_Out_OriginDirection,Z_Param_DamageType,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSmallCosmeticDestruction::execHandleTakePointDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_FHitComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FVector,Z_Param_ShotFromDirection);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTakePointDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_InstigatedBy,Z_Param_HitLocation,Z_Param_FHitComponent,Z_Param_BoneName,Z_Param_ShotFromDirection,Z_Param_DamageType,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSmallCosmeticDestruction::execHandleTakeRadialDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_HitInfos);
		P_GET_STRUCT_REF(FRadialDamageParams,Z_Param_Out_Params);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTakeRadialDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_InstigatedBy,Z_Param_Out_HitInfos,Z_Param_Out_Params,Z_Param_Out_Origin,Z_Param_DamageType,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSmallCosmeticDestruction::execOnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSmallCosmeticDestruction::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	static FName NAME_ASBZSmallCosmeticDestruction_OnActivated = FName(TEXT("OnActivated"));
	void ASBZSmallCosmeticDestruction::OnActivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZSmallCosmeticDestruction_OnActivated),NULL);
	}
	void ASBZSmallCosmeticDestruction::StaticRegisterNativesASBZSmallCosmeticDestruction()
	{
		UClass* Class = ASBZSmallCosmeticDestruction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateImpactPoint", &ASBZSmallCosmeticDestruction::execCreateImpactPoint },
			{ "HandleTakeOverlapDamage", &ASBZSmallCosmeticDestruction::execHandleTakeOverlapDamage },
			{ "HandleTakePointDamage", &ASBZSmallCosmeticDestruction::execHandleTakePointDamage },
			{ "HandleTakeRadialDamage", &ASBZSmallCosmeticDestruction::execHandleTakeRadialDamage },
			{ "OnBeginOverlap", &ASBZSmallCosmeticDestruction::execOnBeginOverlap },
			{ "OnHit", &ASBZSmallCosmeticDestruction::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZSmallCosmeticDestruction_CreateImpactPoint_Statics
	{
		struct SBZSmallCosmeticDestruction_eventCreateImpactPoint_Parms
		{
			FHitResult Hit;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_CreateImpactPoint_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_CreateImpactPoint_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventCreateImpactPoint_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_CreateImpactPoint_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_CreateImpactPoint_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSmallCosmeticDestruction_CreateImpactPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_CreateImpactPoint_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_CreateImpactPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSmallCosmeticDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_CreateImpactPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSmallCosmeticDestruction, nullptr, "CreateImpactPoint", nullptr, nullptr, sizeof(SBZSmallCosmeticDestruction_eventCreateImpactPoint_Parms), Z_Construct_UFunction_ASBZSmallCosmeticDestruction_CreateImpactPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_CreateImpactPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_CreateImpactPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_CreateImpactPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSmallCosmeticDestruction_CreateImpactPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSmallCosmeticDestruction_CreateImpactPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics
	{
		struct SBZSmallCosmeticDestruction_eventHandleTakeOverlapDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			AController* InstigatedBy;
			TArray<FHitResult> HitInfos;
			FVector OriginDirection;
			const UDamageType* DamageType;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitInfos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakeOverlapDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakeOverlapDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakeOverlapDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_HitInfos_Inner = { "HitInfos", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_HitInfos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_HitInfos = { "HitInfos", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakeOverlapDamage_Parms, HitInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_HitInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_HitInfos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_OriginDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_OriginDirection = { "OriginDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakeOverlapDamage_Parms, OriginDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_OriginDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_OriginDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakeOverlapDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakeOverlapDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_HitInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_HitInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_OriginDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSmallCosmeticDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSmallCosmeticDestruction, nullptr, "HandleTakeOverlapDamage", nullptr, nullptr, sizeof(SBZSmallCosmeticDestruction_eventHandleTakeOverlapDamage_Parms), Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics
	{
		struct SBZSmallCosmeticDestruction_eventHandleTakePointDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			AController* InstigatedBy;
			FVector HitLocation;
			UPrimitiveComponent* FHitComponent;
			FName BoneName;
			FVector ShotFromDirection;
			const UDamageType* DamageType;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FHitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FHitComponent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotFromDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakePointDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakePointDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakePointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakePointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_FHitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_FHitComponent = { "FHitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakePointDamage_Parms, FHitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_FHitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_FHitComponent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakePointDamage_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakePointDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakePointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_FHitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_ShotFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSmallCosmeticDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSmallCosmeticDestruction, nullptr, "HandleTakePointDamage", nullptr, nullptr, sizeof(SBZSmallCosmeticDestruction_eventHandleTakePointDamage_Parms), Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics
	{
		struct SBZSmallCosmeticDestruction_eventHandleTakeRadialDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			AController* InstigatedBy;
			TArray<FHitResult> HitInfos;
			FRadialDamageParams Params;
			FVector Origin;
			const UDamageType* DamageType;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitInfos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakeRadialDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakeRadialDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakeRadialDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_HitInfos_Inner = { "HitInfos", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_HitInfos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_HitInfos = { "HitInfos", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakeRadialDamage_Parms, HitInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_HitInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_HitInfos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakeRadialDamage_Parms, Params), Z_Construct_UScriptStruct_FRadialDamageParams, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_Params_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakeRadialDamage_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakeRadialDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventHandleTakeRadialDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_HitInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_HitInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSmallCosmeticDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSmallCosmeticDestruction, nullptr, "HandleTakeRadialDamage", nullptr, nullptr, sizeof(SBZSmallCosmeticDestruction_eventHandleTakeRadialDamage_Parms), Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnActivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSmallCosmeticDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSmallCosmeticDestruction, nullptr, "OnActivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics
	{
		struct SBZSmallCosmeticDestruction_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventOnBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SBZSmallCosmeticDestruction_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSmallCosmeticDestruction_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSmallCosmeticDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSmallCosmeticDestruction, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(SBZSmallCosmeticDestruction_eventOnBeginOverlap_Parms), Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics
	{
		struct SBZSmallCosmeticDestruction_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallCosmeticDestruction_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSmallCosmeticDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSmallCosmeticDestruction, nullptr, "OnHit", nullptr, nullptr, sizeof(SBZSmallCosmeticDestruction_eventOnHit_Parms), Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZSmallCosmeticDestruction_NoRegister()
	{
		return ASBZSmallCosmeticDestruction::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoveToDebris_MetaData[];
#endif
		static void NewProp_bMoveToDebris_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoveToDebris;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyWhenActivated_MetaData[];
#endif
		static void NewProp_bDestroyWhenActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyWhenActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeActivatedByPlayerOverlap_MetaData[];
#endif
		static void NewProp_bCanBeActivatedByPlayerOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeActivatedByPlayerOverlap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReceivesDamageFromMelee_MetaData[];
#endif
		static void NewProp_bReceivesDamageFromMelee_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReceivesDamageFromMelee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumImpactForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumImpactForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZNoCookDS,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZSmallCosmeticDestruction_CreateImpactPoint, "CreateImpactPoint" }, // 1814012333
		{ &Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeOverlapDamage, "HandleTakeOverlapDamage" }, // 3768627209
		{ &Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakePointDamage, "HandleTakePointDamage" }, // 2909115410
		{ &Z_Construct_UFunction_ASBZSmallCosmeticDestruction_HandleTakeRadialDamage, "HandleTakeRadialDamage" }, // 29885114
		{ &Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnActivated, "OnActivated" }, // 1606950639
		{ &Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnBeginOverlap, "OnBeginOverlap" }, // 4243328036
		{ &Z_Construct_UFunction_ASBZSmallCosmeticDestruction_OnHit, "OnHit" }, // 2296712425
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "SBZSmallCosmeticDestruction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSmallCosmeticDestruction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bMoveToDebris_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallCosmeticDestruction" },
		{ "ModuleRelativePath", "Public/SBZSmallCosmeticDestruction.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bMoveToDebris_SetBit(void* Obj)
	{
		((ASBZSmallCosmeticDestruction*)Obj)->bMoveToDebris = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bMoveToDebris = { "bMoveToDebris", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSmallCosmeticDestruction), &Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bMoveToDebris_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bMoveToDebris_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bMoveToDebris_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bDestroyWhenActivated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallCosmeticDestruction" },
		{ "ModuleRelativePath", "Public/SBZSmallCosmeticDestruction.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bDestroyWhenActivated_SetBit(void* Obj)
	{
		((ASBZSmallCosmeticDestruction*)Obj)->bDestroyWhenActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bDestroyWhenActivated = { "bDestroyWhenActivated", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSmallCosmeticDestruction), &Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bDestroyWhenActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bDestroyWhenActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bDestroyWhenActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bCanBeActivatedByPlayerOverlap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallCosmeticDestruction" },
		{ "ModuleRelativePath", "Public/SBZSmallCosmeticDestruction.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bCanBeActivatedByPlayerOverlap_SetBit(void* Obj)
	{
		((ASBZSmallCosmeticDestruction*)Obj)->bCanBeActivatedByPlayerOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bCanBeActivatedByPlayerOverlap = { "bCanBeActivatedByPlayerOverlap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSmallCosmeticDestruction), &Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bCanBeActivatedByPlayerOverlap_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bCanBeActivatedByPlayerOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bCanBeActivatedByPlayerOverlap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bReceivesDamageFromMelee_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallCosmeticDestruction" },
		{ "ModuleRelativePath", "Public/SBZSmallCosmeticDestruction.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bReceivesDamageFromMelee_SetBit(void* Obj)
	{
		((ASBZSmallCosmeticDestruction*)Obj)->bReceivesDamageFromMelee = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bReceivesDamageFromMelee = { "bReceivesDamageFromMelee", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSmallCosmeticDestruction), &Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bReceivesDamageFromMelee_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bReceivesDamageFromMelee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bReceivesDamageFromMelee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_MinimumImpactForce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallCosmeticDestruction" },
		{ "ModuleRelativePath", "Public/SBZSmallCosmeticDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_MinimumImpactForce = { "MinimumImpactForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSmallCosmeticDestruction, MinimumImpactForce), METADATA_PARAMS(Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_MinimumImpactForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_MinimumImpactForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_PhysicalMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallCosmeticDestruction" },
		{ "ModuleRelativePath", "Public/SBZSmallCosmeticDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSmallCosmeticDestruction, PhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_PhysicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_PhysicalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallCosmeticDestruction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSmallCosmeticDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSmallCosmeticDestruction, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bMoveToDebris,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bDestroyWhenActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bCanBeActivatedByPlayerOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_bReceivesDamageFromMelee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_MinimumImpactForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_PhysicalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSmallCosmeticDestruction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::ClassParams = {
		&ASBZSmallCosmeticDestruction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSmallCosmeticDestruction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSmallCosmeticDestruction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSmallCosmeticDestruction, 3033117916);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSmallCosmeticDestruction>()
	{
		return ASBZSmallCosmeticDestruction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSmallCosmeticDestruction(Z_Construct_UClass_ASBZSmallCosmeticDestruction, &ASBZSmallCosmeticDestruction::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSmallCosmeticDestruction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSmallCosmeticDestruction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
