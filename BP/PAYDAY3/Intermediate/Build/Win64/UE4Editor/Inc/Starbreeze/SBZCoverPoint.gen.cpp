// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCoverPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCoverPoint() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCoverPoint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCoverPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCoverShootingPoints();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZShootingPointType();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIVisibilityLeafNode();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIVisibilityNodeComputationFrequency();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCoverShootingPointAiVisibilityInfo();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIVisibilityRelevant_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZCoverPoint::execAbandon)
	{
		P_GET_OBJECT(AActor,Z_Param_OccupyingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Abandon(Z_Param_OccupyingActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execBlockingActorEntered)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlockingActorEntered(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execBlockingActorLeft)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlockingActorLeft(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execCancelReservation)
	{
		P_GET_OBJECT(AActor,Z_Param_ForActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelReservation(Z_Param_ForActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execComputeValidShootingPoints)
	{
		P_GET_TARRAY_REF(FSBZCoverShootingPoints,Z_Param_Out_ShootingPoints);
		P_GET_UBOOL(Z_Param_bUseAIVisibilityPayloadCenterAsLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComputeValidShootingPoints(Z_Param_Out_ShootingPoints,Z_Param_bUseAIVisibilityPayloadCenterAsLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execGetOccupant)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOccupant();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execGetReservedForActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetReservedForActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execGetValidShootingPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetValidShootingPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execHasAnyShootingPointLOS_Synchronously)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyShootingPointLOS_Synchronously(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execHasShootingPointLOS_Synchronously)
	{
		P_GET_ENUM(ESBZShootingPointType,Z_Param_ShootingPoint);
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasShootingPointLOS_Synchronously(ESBZShootingPointType(Z_Param_ShootingPoint),Z_Param_TargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execIsBlocked)
	{
		P_GET_OBJECT(AActor,Z_Param_ForActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBlocked(Z_Param_ForActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execIsBlockedBy)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBlockedBy(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execIsComputed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsComputed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execIsCrouchingCover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCrouchingCover();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execIsFree)
	{
		P_GET_OBJECT(AActor,Z_Param_ForActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFree(Z_Param_ForActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execIsLowCover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLowCover();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execIsOccupied)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOccupied();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execIsRegistered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRegistered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execIsReserved)
	{
		P_GET_OBJECT(AActor,Z_Param_ForActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReserved(Z_Param_ForActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execIsStandingCover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStandingCover();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execOccupy)
	{
		P_GET_OBJECT(AActor,Z_Param_OccupyingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Occupy(Z_Param_OccupyingActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execOnBlockerKilled)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBlockerKilled(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execOnOccupantKilled)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOccupantKilled(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCoverPoint::execReserve)
	{
		P_GET_OBJECT(AActor,Z_Param_ForActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Reserve(Z_Param_ForActor);
		P_NATIVE_END;
	}
	void ASBZCoverPoint::StaticRegisterNativesASBZCoverPoint()
	{
		UClass* Class = ASBZCoverPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Abandon", &ASBZCoverPoint::execAbandon },
			{ "BlockingActorEntered", &ASBZCoverPoint::execBlockingActorEntered },
			{ "BlockingActorLeft", &ASBZCoverPoint::execBlockingActorLeft },
			{ "CancelReservation", &ASBZCoverPoint::execCancelReservation },
			{ "ComputeValidShootingPoints", &ASBZCoverPoint::execComputeValidShootingPoints },
			{ "GetOccupant", &ASBZCoverPoint::execGetOccupant },
			{ "GetReservedForActor", &ASBZCoverPoint::execGetReservedForActor },
			{ "GetValidShootingPoints", &ASBZCoverPoint::execGetValidShootingPoints },
			{ "HasAnyShootingPointLOS_Synchronously", &ASBZCoverPoint::execHasAnyShootingPointLOS_Synchronously },
			{ "HasShootingPointLOS_Synchronously", &ASBZCoverPoint::execHasShootingPointLOS_Synchronously },
			{ "IsBlocked", &ASBZCoverPoint::execIsBlocked },
			{ "IsBlockedBy", &ASBZCoverPoint::execIsBlockedBy },
			{ "IsComputed", &ASBZCoverPoint::execIsComputed },
			{ "IsCrouchingCover", &ASBZCoverPoint::execIsCrouchingCover },
			{ "IsFree", &ASBZCoverPoint::execIsFree },
			{ "IsLowCover", &ASBZCoverPoint::execIsLowCover },
			{ "IsOccupied", &ASBZCoverPoint::execIsOccupied },
			{ "IsRegistered", &ASBZCoverPoint::execIsRegistered },
			{ "IsReserved", &ASBZCoverPoint::execIsReserved },
			{ "IsStandingCover", &ASBZCoverPoint::execIsStandingCover },
			{ "Occupy", &ASBZCoverPoint::execOccupy },
			{ "OnBlockerKilled", &ASBZCoverPoint::execOnBlockerKilled },
			{ "OnOccupantKilled", &ASBZCoverPoint::execOnOccupantKilled },
			{ "Reserve", &ASBZCoverPoint::execReserve },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_Abandon_Statics
	{
		struct SBZCoverPoint_eventAbandon_Parms
		{
			AActor* OccupyingActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OccupyingActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_Abandon_Statics::NewProp_OccupyingActor = { "OccupyingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventAbandon_Parms, OccupyingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZCoverPoint_Abandon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCoverPoint_eventAbandon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCoverPoint_Abandon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCoverPoint_eventAbandon_Parms), &Z_Construct_UFunction_ASBZCoverPoint_Abandon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_Abandon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_Abandon_Statics::NewProp_OccupyingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_Abandon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_Abandon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_Abandon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "Abandon", nullptr, nullptr, sizeof(SBZCoverPoint_eventAbandon_Parms), Z_Construct_UFunction_ASBZCoverPoint_Abandon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_Abandon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_Abandon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_Abandon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_Abandon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_Abandon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics
	{
		struct SBZCoverPoint_eventBlockingActorEntered_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* Other;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventBlockingActorEntered_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventBlockingActorEntered_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventBlockingActorEntered_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventBlockingActorEntered_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SBZCoverPoint_eventBlockingActorEntered_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCoverPoint_eventBlockingActorEntered_Parms), &Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventBlockingActorEntered_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "BlockingActorEntered", nullptr, nullptr, sizeof(SBZCoverPoint_eventBlockingActorEntered_Parms), Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics
	{
		struct SBZCoverPoint_eventBlockingActorLeft_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* Other;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventBlockingActorLeft_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventBlockingActorLeft_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventBlockingActorLeft_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventBlockingActorLeft_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "BlockingActorLeft", nullptr, nullptr, sizeof(SBZCoverPoint_eventBlockingActorLeft_Parms), Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_CancelReservation_Statics
	{
		struct SBZCoverPoint_eventCancelReservation_Parms
		{
			AActor* ForActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_CancelReservation_Statics::NewProp_ForActor = { "ForActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventCancelReservation_Parms, ForActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_CancelReservation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_CancelReservation_Statics::NewProp_ForActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_CancelReservation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_CancelReservation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "CancelReservation", nullptr, nullptr, sizeof(SBZCoverPoint_eventCancelReservation_Parms), Z_Construct_UFunction_ASBZCoverPoint_CancelReservation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_CancelReservation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_CancelReservation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_CancelReservation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_CancelReservation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_CancelReservation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics
	{
		struct SBZCoverPoint_eventComputeValidShootingPoints_Parms
		{
			TArray<FSBZCoverShootingPoints> ShootingPoints;
			bool bUseAIVisibilityPayloadCenterAsLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShootingPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootingPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShootingPoints;
		static void NewProp_bUseAIVisibilityPayloadCenterAsLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAIVisibilityPayloadCenterAsLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::NewProp_ShootingPoints_Inner = { "ShootingPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCoverShootingPoints, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::NewProp_ShootingPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::NewProp_ShootingPoints = { "ShootingPoints", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventComputeValidShootingPoints_Parms, ShootingPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::NewProp_ShootingPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::NewProp_ShootingPoints_MetaData)) };
	void Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::NewProp_bUseAIVisibilityPayloadCenterAsLocation_SetBit(void* Obj)
	{
		((SBZCoverPoint_eventComputeValidShootingPoints_Parms*)Obj)->bUseAIVisibilityPayloadCenterAsLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::NewProp_bUseAIVisibilityPayloadCenterAsLocation = { "bUseAIVisibilityPayloadCenterAsLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCoverPoint_eventComputeValidShootingPoints_Parms), &Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::NewProp_bUseAIVisibilityPayloadCenterAsLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::NewProp_ShootingPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::NewProp_ShootingPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::NewProp_bUseAIVisibilityPayloadCenterAsLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "ComputeValidShootingPoints", nullptr, nullptr, sizeof(SBZCoverPoint_eventComputeValidShootingPoints_Parms), Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_GetOccupant_Statics
	{
		struct SBZCoverPoint_eventGetOccupant_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_GetOccupant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventGetOccupant_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_GetOccupant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_GetOccupant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_GetOccupant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_GetOccupant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "GetOccupant", nullptr, nullptr, sizeof(SBZCoverPoint_eventGetOccupant_Parms), Z_Construct_UFunction_ASBZCoverPoint_GetOccupant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_GetOccupant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_GetOccupant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_GetOccupant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_GetOccupant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_GetOccupant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_GetReservedForActor_Statics
	{
		struct SBZCoverPoint_eventGetReservedForActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_GetReservedForActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventGetReservedForActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_GetReservedForActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_GetReservedForActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_GetReservedForActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_GetReservedForActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "GetReservedForActor", nullptr, nullptr, sizeof(SBZCoverPoint_eventGetReservedForActor_Parms), Z_Construct_UFunction_ASBZCoverPoint_GetReservedForActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_GetReservedForActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_GetReservedForActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_GetReservedForActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_GetReservedForActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_GetReservedForActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_GetValidShootingPoints_Statics
	{
		struct SBZCoverPoint_eventGetValidShootingPoints_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZCoverPoint_GetValidShootingPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventGetValidShootingPoints_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_GetValidShootingPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_GetValidShootingPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_GetValidShootingPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_GetValidShootingPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "GetValidShootingPoints", nullptr, nullptr, sizeof(SBZCoverPoint_eventGetValidShootingPoints_Parms), Z_Construct_UFunction_ASBZCoverPoint_GetValidShootingPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_GetValidShootingPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_GetValidShootingPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_GetValidShootingPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_GetValidShootingPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_GetValidShootingPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_HasAnyShootingPointLOS_Synchronously_Statics
	{
		struct SBZCoverPoint_eventHasAnyShootingPointLOS_Synchronously_Parms
		{
			AActor* TargetActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_HasAnyShootingPointLOS_Synchronously_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventHasAnyShootingPointLOS_Synchronously_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZCoverPoint_HasAnyShootingPointLOS_Synchronously_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCoverPoint_eventHasAnyShootingPointLOS_Synchronously_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCoverPoint_HasAnyShootingPointLOS_Synchronously_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCoverPoint_eventHasAnyShootingPointLOS_Synchronously_Parms), &Z_Construct_UFunction_ASBZCoverPoint_HasAnyShootingPointLOS_Synchronously_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_HasAnyShootingPointLOS_Synchronously_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_HasAnyShootingPointLOS_Synchronously_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_HasAnyShootingPointLOS_Synchronously_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_HasAnyShootingPointLOS_Synchronously_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_HasAnyShootingPointLOS_Synchronously_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "HasAnyShootingPointLOS_Synchronously", nullptr, nullptr, sizeof(SBZCoverPoint_eventHasAnyShootingPointLOS_Synchronously_Parms), Z_Construct_UFunction_ASBZCoverPoint_HasAnyShootingPointLOS_Synchronously_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_HasAnyShootingPointLOS_Synchronously_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_HasAnyShootingPointLOS_Synchronously_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_HasAnyShootingPointLOS_Synchronously_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_HasAnyShootingPointLOS_Synchronously()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_HasAnyShootingPointLOS_Synchronously_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics
	{
		struct SBZCoverPoint_eventHasShootingPointLOS_Synchronously_Parms
		{
			ESBZShootingPointType ShootingPoint;
			AActor* TargetActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShootingPoint_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ShootingPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics::NewProp_ShootingPoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics::NewProp_ShootingPoint = { "ShootingPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventHasShootingPointLOS_Synchronously_Parms, ShootingPoint), Z_Construct_UEnum_Starbreeze_ESBZShootingPointType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventHasShootingPointLOS_Synchronously_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCoverPoint_eventHasShootingPointLOS_Synchronously_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCoverPoint_eventHasShootingPointLOS_Synchronously_Parms), &Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics::NewProp_ShootingPoint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics::NewProp_ShootingPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "HasShootingPointLOS_Synchronously", nullptr, nullptr, sizeof(SBZCoverPoint_eventHasShootingPointLOS_Synchronously_Parms), Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_IsBlocked_Statics
	{
		struct SBZCoverPoint_eventIsBlocked_Parms
		{
			AActor* ForActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_IsBlocked_Statics::NewProp_ForActor = { "ForActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventIsBlocked_Parms, ForActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZCoverPoint_IsBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCoverPoint_eventIsBlocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCoverPoint_IsBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCoverPoint_eventIsBlocked_Parms), &Z_Construct_UFunction_ASBZCoverPoint_IsBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_IsBlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_IsBlocked_Statics::NewProp_ForActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_IsBlocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_IsBlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_IsBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "IsBlocked", nullptr, nullptr, sizeof(SBZCoverPoint_eventIsBlocked_Parms), Z_Construct_UFunction_ASBZCoverPoint_IsBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsBlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_IsBlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_IsBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_IsBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_IsBlockedBy_Statics
	{
		struct SBZCoverPoint_eventIsBlockedBy_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_IsBlockedBy_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventIsBlockedBy_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZCoverPoint_IsBlockedBy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCoverPoint_eventIsBlockedBy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCoverPoint_IsBlockedBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCoverPoint_eventIsBlockedBy_Parms), &Z_Construct_UFunction_ASBZCoverPoint_IsBlockedBy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_IsBlockedBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_IsBlockedBy_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_IsBlockedBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_IsBlockedBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_IsBlockedBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "IsBlockedBy", nullptr, nullptr, sizeof(SBZCoverPoint_eventIsBlockedBy_Parms), Z_Construct_UFunction_ASBZCoverPoint_IsBlockedBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsBlockedBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_IsBlockedBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsBlockedBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_IsBlockedBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_IsBlockedBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_IsComputed_Statics
	{
		struct SBZCoverPoint_eventIsComputed_Parms
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
	void Z_Construct_UFunction_ASBZCoverPoint_IsComputed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCoverPoint_eventIsComputed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCoverPoint_IsComputed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCoverPoint_eventIsComputed_Parms), &Z_Construct_UFunction_ASBZCoverPoint_IsComputed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_IsComputed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_IsComputed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_IsComputed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_IsComputed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "IsComputed", nullptr, nullptr, sizeof(SBZCoverPoint_eventIsComputed_Parms), Z_Construct_UFunction_ASBZCoverPoint_IsComputed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsComputed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_IsComputed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsComputed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_IsComputed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_IsComputed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_IsCrouchingCover_Statics
	{
		struct SBZCoverPoint_eventIsCrouchingCover_Parms
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
	void Z_Construct_UFunction_ASBZCoverPoint_IsCrouchingCover_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCoverPoint_eventIsCrouchingCover_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCoverPoint_IsCrouchingCover_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCoverPoint_eventIsCrouchingCover_Parms), &Z_Construct_UFunction_ASBZCoverPoint_IsCrouchingCover_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_IsCrouchingCover_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_IsCrouchingCover_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_IsCrouchingCover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_IsCrouchingCover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "IsCrouchingCover", nullptr, nullptr, sizeof(SBZCoverPoint_eventIsCrouchingCover_Parms), Z_Construct_UFunction_ASBZCoverPoint_IsCrouchingCover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsCrouchingCover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_IsCrouchingCover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsCrouchingCover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_IsCrouchingCover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_IsCrouchingCover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_IsFree_Statics
	{
		struct SBZCoverPoint_eventIsFree_Parms
		{
			AActor* ForActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_IsFree_Statics::NewProp_ForActor = { "ForActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventIsFree_Parms, ForActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZCoverPoint_IsFree_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCoverPoint_eventIsFree_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCoverPoint_IsFree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCoverPoint_eventIsFree_Parms), &Z_Construct_UFunction_ASBZCoverPoint_IsFree_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_IsFree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_IsFree_Statics::NewProp_ForActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_IsFree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_IsFree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_IsFree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "IsFree", nullptr, nullptr, sizeof(SBZCoverPoint_eventIsFree_Parms), Z_Construct_UFunction_ASBZCoverPoint_IsFree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsFree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_IsFree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsFree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_IsFree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_IsFree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_IsLowCover_Statics
	{
		struct SBZCoverPoint_eventIsLowCover_Parms
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
	void Z_Construct_UFunction_ASBZCoverPoint_IsLowCover_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCoverPoint_eventIsLowCover_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCoverPoint_IsLowCover_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCoverPoint_eventIsLowCover_Parms), &Z_Construct_UFunction_ASBZCoverPoint_IsLowCover_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_IsLowCover_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_IsLowCover_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_IsLowCover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_IsLowCover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "IsLowCover", nullptr, nullptr, sizeof(SBZCoverPoint_eventIsLowCover_Parms), Z_Construct_UFunction_ASBZCoverPoint_IsLowCover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsLowCover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_IsLowCover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsLowCover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_IsLowCover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_IsLowCover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_IsOccupied_Statics
	{
		struct SBZCoverPoint_eventIsOccupied_Parms
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
	void Z_Construct_UFunction_ASBZCoverPoint_IsOccupied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCoverPoint_eventIsOccupied_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCoverPoint_IsOccupied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCoverPoint_eventIsOccupied_Parms), &Z_Construct_UFunction_ASBZCoverPoint_IsOccupied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_IsOccupied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_IsOccupied_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_IsOccupied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_IsOccupied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "IsOccupied", nullptr, nullptr, sizeof(SBZCoverPoint_eventIsOccupied_Parms), Z_Construct_UFunction_ASBZCoverPoint_IsOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsOccupied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_IsOccupied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsOccupied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_IsOccupied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_IsOccupied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_IsRegistered_Statics
	{
		struct SBZCoverPoint_eventIsRegistered_Parms
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
	void Z_Construct_UFunction_ASBZCoverPoint_IsRegistered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCoverPoint_eventIsRegistered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCoverPoint_IsRegistered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCoverPoint_eventIsRegistered_Parms), &Z_Construct_UFunction_ASBZCoverPoint_IsRegistered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_IsRegistered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_IsRegistered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_IsRegistered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_IsRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "IsRegistered", nullptr, nullptr, sizeof(SBZCoverPoint_eventIsRegistered_Parms), Z_Construct_UFunction_ASBZCoverPoint_IsRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_IsRegistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_IsRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_IsRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_IsReserved_Statics
	{
		struct SBZCoverPoint_eventIsReserved_Parms
		{
			AActor* ForActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_IsReserved_Statics::NewProp_ForActor = { "ForActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventIsReserved_Parms, ForActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZCoverPoint_IsReserved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCoverPoint_eventIsReserved_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCoverPoint_IsReserved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCoverPoint_eventIsReserved_Parms), &Z_Construct_UFunction_ASBZCoverPoint_IsReserved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_IsReserved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_IsReserved_Statics::NewProp_ForActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_IsReserved_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_IsReserved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_IsReserved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "IsReserved", nullptr, nullptr, sizeof(SBZCoverPoint_eventIsReserved_Parms), Z_Construct_UFunction_ASBZCoverPoint_IsReserved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsReserved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_IsReserved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsReserved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_IsReserved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_IsReserved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_IsStandingCover_Statics
	{
		struct SBZCoverPoint_eventIsStandingCover_Parms
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
	void Z_Construct_UFunction_ASBZCoverPoint_IsStandingCover_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCoverPoint_eventIsStandingCover_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCoverPoint_IsStandingCover_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCoverPoint_eventIsStandingCover_Parms), &Z_Construct_UFunction_ASBZCoverPoint_IsStandingCover_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_IsStandingCover_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_IsStandingCover_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_IsStandingCover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_IsStandingCover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "IsStandingCover", nullptr, nullptr, sizeof(SBZCoverPoint_eventIsStandingCover_Parms), Z_Construct_UFunction_ASBZCoverPoint_IsStandingCover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsStandingCover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_IsStandingCover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_IsStandingCover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_IsStandingCover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_IsStandingCover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_Occupy_Statics
	{
		struct SBZCoverPoint_eventOccupy_Parms
		{
			AActor* OccupyingActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OccupyingActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_Occupy_Statics::NewProp_OccupyingActor = { "OccupyingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventOccupy_Parms, OccupyingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZCoverPoint_Occupy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCoverPoint_eventOccupy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCoverPoint_Occupy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCoverPoint_eventOccupy_Parms), &Z_Construct_UFunction_ASBZCoverPoint_Occupy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_Occupy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_Occupy_Statics::NewProp_OccupyingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_Occupy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_Occupy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_Occupy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "Occupy", nullptr, nullptr, sizeof(SBZCoverPoint_eventOccupy_Parms), Z_Construct_UFunction_ASBZCoverPoint_Occupy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_Occupy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_Occupy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_Occupy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_Occupy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_Occupy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_OnBlockerKilled_Statics
	{
		struct SBZCoverPoint_eventOnBlockerKilled_Parms
		{
			APawn* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_OnBlockerKilled_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventOnBlockerKilled_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_OnBlockerKilled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_OnBlockerKilled_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_OnBlockerKilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_OnBlockerKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "OnBlockerKilled", nullptr, nullptr, sizeof(SBZCoverPoint_eventOnBlockerKilled_Parms), Z_Construct_UFunction_ASBZCoverPoint_OnBlockerKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_OnBlockerKilled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_OnBlockerKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_OnBlockerKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_OnBlockerKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_OnBlockerKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_OnOccupantKilled_Statics
	{
		struct SBZCoverPoint_eventOnOccupantKilled_Parms
		{
			APawn* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_OnOccupantKilled_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventOnOccupantKilled_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_OnOccupantKilled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_OnOccupantKilled_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_OnOccupantKilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_OnOccupantKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "OnOccupantKilled", nullptr, nullptr, sizeof(SBZCoverPoint_eventOnOccupantKilled_Parms), Z_Construct_UFunction_ASBZCoverPoint_OnOccupantKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_OnOccupantKilled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_OnOccupantKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_OnOccupantKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_OnOccupantKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_OnOccupantKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCoverPoint_Reserve_Statics
	{
		struct SBZCoverPoint_eventReserve_Parms
		{
			AActor* ForActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCoverPoint_Reserve_Statics::NewProp_ForActor = { "ForActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPoint_eventReserve_Parms, ForActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZCoverPoint_Reserve_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCoverPoint_eventReserve_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCoverPoint_Reserve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCoverPoint_eventReserve_Parms), &Z_Construct_UFunction_ASBZCoverPoint_Reserve_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCoverPoint_Reserve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_Reserve_Statics::NewProp_ForActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCoverPoint_Reserve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCoverPoint_Reserve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCoverPoint_Reserve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCoverPoint, nullptr, "Reserve", nullptr, nullptr, sizeof(SBZCoverPoint_eventReserve_Parms), Z_Construct_UFunction_ASBZCoverPoint_Reserve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_Reserve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCoverPoint_Reserve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCoverPoint_Reserve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCoverPoint_Reserve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCoverPoint_Reserve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZCoverPoint_NoRegister()
	{
		return ASBZCoverPoint::StaticClass();
	}
	struct Z_Construct_UClass_ASBZCoverPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_LinkedCoverPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkedCoverPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LinkedCoverPoints;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ManualLinks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualLinks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ManualLinks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockingCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockingCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIVisibilityPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIVisibilityPayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIVisibilityNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIVisibilityNode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AIVisibilityNodeComputationFrequency_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIVisibilityNodeComputationFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AIVisibilityNodeComputationFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinkRadius;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockingActors_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockingActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_BlockingActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappingActors_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappingActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_OverlappingActors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShootingPointsVisibilityInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootingPointsVisibilityInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShootingPointsVisibilityInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidShootingPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValidShootingPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManualRegistering_MetaData[];
#endif
		static void NewProp_bManualRegistering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManualRegistering;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZCoverPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZCoverPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZCoverPoint_Abandon, "Abandon" }, // 2812519663
		{ &Z_Construct_UFunction_ASBZCoverPoint_BlockingActorEntered, "BlockingActorEntered" }, // 3522404935
		{ &Z_Construct_UFunction_ASBZCoverPoint_BlockingActorLeft, "BlockingActorLeft" }, // 526575330
		{ &Z_Construct_UFunction_ASBZCoverPoint_CancelReservation, "CancelReservation" }, // 2038659669
		{ &Z_Construct_UFunction_ASBZCoverPoint_ComputeValidShootingPoints, "ComputeValidShootingPoints" }, // 2284839631
		{ &Z_Construct_UFunction_ASBZCoverPoint_GetOccupant, "GetOccupant" }, // 1746726272
		{ &Z_Construct_UFunction_ASBZCoverPoint_GetReservedForActor, "GetReservedForActor" }, // 3432592529
		{ &Z_Construct_UFunction_ASBZCoverPoint_GetValidShootingPoints, "GetValidShootingPoints" }, // 3717282489
		{ &Z_Construct_UFunction_ASBZCoverPoint_HasAnyShootingPointLOS_Synchronously, "HasAnyShootingPointLOS_Synchronously" }, // 2783902745
		{ &Z_Construct_UFunction_ASBZCoverPoint_HasShootingPointLOS_Synchronously, "HasShootingPointLOS_Synchronously" }, // 2781942396
		{ &Z_Construct_UFunction_ASBZCoverPoint_IsBlocked, "IsBlocked" }, // 4191350266
		{ &Z_Construct_UFunction_ASBZCoverPoint_IsBlockedBy, "IsBlockedBy" }, // 4067731711
		{ &Z_Construct_UFunction_ASBZCoverPoint_IsComputed, "IsComputed" }, // 1355288476
		{ &Z_Construct_UFunction_ASBZCoverPoint_IsCrouchingCover, "IsCrouchingCover" }, // 176294677
		{ &Z_Construct_UFunction_ASBZCoverPoint_IsFree, "IsFree" }, // 4097738575
		{ &Z_Construct_UFunction_ASBZCoverPoint_IsLowCover, "IsLowCover" }, // 1269182376
		{ &Z_Construct_UFunction_ASBZCoverPoint_IsOccupied, "IsOccupied" }, // 3413115314
		{ &Z_Construct_UFunction_ASBZCoverPoint_IsRegistered, "IsRegistered" }, // 688957042
		{ &Z_Construct_UFunction_ASBZCoverPoint_IsReserved, "IsReserved" }, // 986838641
		{ &Z_Construct_UFunction_ASBZCoverPoint_IsStandingCover, "IsStandingCover" }, // 2606465276
		{ &Z_Construct_UFunction_ASBZCoverPoint_Occupy, "Occupy" }, // 150595881
		{ &Z_Construct_UFunction_ASBZCoverPoint_OnBlockerKilled, "OnBlockerKilled" }, // 2901695684
		{ &Z_Construct_UFunction_ASBZCoverPoint_OnOccupantKilled, "OnOccupantKilled" }, // 1867700207
		{ &Z_Construct_UFunction_ASBZCoverPoint_Reserve, "Reserve" }, // 2660598066
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCoverPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCoverPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_LinkedCoverPoints_Inner = { "LinkedCoverPoints", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZCoverPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_LinkedCoverPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoverPoint" },
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_LinkedCoverPoints = { "LinkedCoverPoints", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCoverPoint, LinkedCoverPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_LinkedCoverPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_LinkedCoverPoints_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ManualLinks_Inner = { "ManualLinks", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZCoverPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ManualLinks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoverPoint" },
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ManualLinks = { "ManualLinks", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCoverPoint, ManualLinks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ManualLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ManualLinks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_BlockingCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoverPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_BlockingCollision = { "BlockingCollision", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCoverPoint, BlockingCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_BlockingCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_BlockingCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_AIVisibilityPayload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoverPoint" },
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_AIVisibilityPayload = { "AIVisibilityPayload", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCoverPoint, AIVisibilityPayload), Z_Construct_UScriptStruct_FSBZAIVisibilitySerializablePayload, METADATA_PARAMS(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_AIVisibilityPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_AIVisibilityPayload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_AIVisibilityNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoverPoint" },
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_AIVisibilityNode = { "AIVisibilityNode", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCoverPoint, AIVisibilityNode), Z_Construct_UScriptStruct_FSBZAIVisibilityLeafNode, METADATA_PARAMS(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_AIVisibilityNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_AIVisibilityNode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_AIVisibilityNodeComputationFrequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_AIVisibilityNodeComputationFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoverPoint" },
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_AIVisibilityNodeComputationFrequency = { "AIVisibilityNodeComputationFrequency", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCoverPoint, AIVisibilityNodeComputationFrequency), Z_Construct_UEnum_Starbreeze_ESBZAIVisibilityNodeComputationFrequency, METADATA_PARAMS(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_AIVisibilityNodeComputationFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_AIVisibilityNodeComputationFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_LinkRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoverPoint" },
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_LinkRadius = { "LinkRadius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCoverPoint, LinkRadius), METADATA_PARAMS(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_LinkRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_LinkRadius_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_BlockingActors_ElementProp = { "BlockingActors", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_BlockingActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoverPoint" },
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_BlockingActors = { "BlockingActors", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCoverPoint, BlockingActors), METADATA_PARAMS(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_BlockingActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_BlockingActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_OverlappingActors_ElementProp = { "OverlappingActors", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_OverlappingActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoverPoint" },
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_OverlappingActors = { "OverlappingActors", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCoverPoint, OverlappingActors), METADATA_PARAMS(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_OverlappingActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_OverlappingActors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ShootingPointsVisibilityInfo_Inner = { "ShootingPointsVisibilityInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCoverShootingPointAiVisibilityInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ShootingPointsVisibilityInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoverPoint" },
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ShootingPointsVisibilityInfo = { "ShootingPointsVisibilityInfo", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCoverPoint, ShootingPointsVisibilityInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ShootingPointsVisibilityInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ShootingPointsVisibilityInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_CurrentRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoverPoint" },
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_CurrentRoom = { "CurrentRoom", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCoverPoint, CurrentRoom), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_CurrentRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_CurrentRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ValidShootingPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoverPoint" },
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ValidShootingPoints = { "ValidShootingPoints", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCoverPoint, ValidShootingPoints), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ValidShootingPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ValidShootingPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_bManualRegistering_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoverPoint" },
		{ "ModuleRelativePath", "Public/SBZCoverPoint.h" },
	};
#endif
	void Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_bManualRegistering_SetBit(void* Obj)
	{
		((ASBZCoverPoint*)Obj)->bManualRegistering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_bManualRegistering = { "bManualRegistering", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZCoverPoint), &Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_bManualRegistering_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_bManualRegistering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_bManualRegistering_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZCoverPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_LinkedCoverPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_LinkedCoverPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ManualLinks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ManualLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_BlockingCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_AIVisibilityPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_AIVisibilityNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_AIVisibilityNodeComputationFrequency_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_AIVisibilityNodeComputationFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_LinkRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_BlockingActors_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_BlockingActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_OverlappingActors_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_OverlappingActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ShootingPointsVisibilityInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ShootingPointsVisibilityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_CurrentRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_ValidShootingPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCoverPoint_Statics::NewProp_bManualRegistering,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZCoverPoint_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAIVisibilityRelevant_NoRegister, (int32)VTABLE_OFFSET(ASBZCoverPoint, ISBZAIVisibilityRelevant), false },
			{ Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZCoverPoint, ISBZRoomVolumeInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZCoverPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZCoverPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZCoverPoint_Statics::ClassParams = {
		&ASBZCoverPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZCoverPoint_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCoverPoint_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZCoverPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCoverPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZCoverPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZCoverPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZCoverPoint, 50321444);
	template<> STARBREEZE_API UClass* StaticClass<ASBZCoverPoint>()
	{
		return ASBZCoverPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZCoverPoint(Z_Construct_UClass_ASBZCoverPoint, &ASBZCoverPoint::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZCoverPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZCoverPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
