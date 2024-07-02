// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThrowable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThrowable() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZThrowable_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZThrowable();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZThrowableState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZProjectileInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZThrowable::execCreateImpactPoint)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Velocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateImpactPoint(Z_Param_Out_Hit,Z_Param_Velocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThrowable::execMulticast_DestroyBreakable)
	{
		P_GET_STRUCT(FHitResult,Z_Param_InBreakableHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DestroyBreakable_Implementation(Z_Param_InBreakableHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThrowable::execMulticast_SetThrowState)
	{
		P_GET_ENUM(ESBZThrowableState,Z_Param_NewThrowState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetThrowState_Implementation(ESBZThrowableState(Z_Param_NewThrowState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThrowable::execMulticast_SetThrowVelocity)
	{
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ThrowDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetThrowVelocity_Implementation(Z_Param_ThrowDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThrowable::execOnInstigatorEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInstigatorEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThrowable::execOnProjectileBounce)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_InHitResult);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectileBounce(Z_Param_Out_InHitResult,Z_Param_Out_ImpactVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThrowable::execOnProjectileStopped)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_InHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectileStopped(Z_Param_Out_InHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThrowable::execOnRep_ThrowableState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ThrowableState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThrowable::execOnThrownActorBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnThrownActorBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThrowable::execOnThrownActorHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnThrownActorHit(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThrowable::execServer_SetThrowableState)
	{
		P_GET_ENUM(ESBZThrowableState,Z_Param_NewThrowableState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetThrowableState_Implementation(ESBZThrowableState(Z_Param_NewThrowableState));
		P_NATIVE_END;
	}
	static FName NAME_ASBZThrowable_Multicast_DestroyBreakable = FName(TEXT("Multicast_DestroyBreakable"));
	void ASBZThrowable::Multicast_DestroyBreakable(FHitResult const& InBreakableHitResult)
	{
		SBZThrowable_eventMulticast_DestroyBreakable_Parms Parms;
		Parms.InBreakableHitResult=InBreakableHitResult;
		ProcessEvent(FindFunctionChecked(NAME_ASBZThrowable_Multicast_DestroyBreakable),&Parms);
	}
	static FName NAME_ASBZThrowable_Multicast_SetThrowState = FName(TEXT("Multicast_SetThrowState"));
	void ASBZThrowable::Multicast_SetThrowState(ESBZThrowableState NewThrowState)
	{
		SBZThrowable_eventMulticast_SetThrowState_Parms Parms;
		Parms.NewThrowState=NewThrowState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZThrowable_Multicast_SetThrowState),&Parms);
	}
	static FName NAME_ASBZThrowable_Multicast_SetThrowVelocity = FName(TEXT("Multicast_SetThrowVelocity"));
	void ASBZThrowable::Multicast_SetThrowVelocity(FVector_NetQuantizeNormal const& ThrowDirection)
	{
		SBZThrowable_eventMulticast_SetThrowVelocity_Parms Parms;
		Parms.ThrowDirection=ThrowDirection;
		ProcessEvent(FindFunctionChecked(NAME_ASBZThrowable_Multicast_SetThrowVelocity),&Parms);
	}
	static FName NAME_ASBZThrowable_OnAttachForThrow = FName(TEXT("OnAttachForThrow"));
	void ASBZThrowable::OnAttachForThrow()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZThrowable_OnAttachForThrow),NULL);
	}
	static FName NAME_ASBZThrowable_OnDetachForThrow = FName(TEXT("OnDetachForThrow"));
	void ASBZThrowable::OnDetachForThrow()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZThrowable_OnDetachForThrow),NULL);
	}
	static FName NAME_ASBZThrowable_OnReady = FName(TEXT("OnReady"));
	void ASBZThrowable::OnReady()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZThrowable_OnReady),NULL);
	}
	static FName NAME_ASBZThrowable_OnThrow = FName(TEXT("OnThrow"));
	void ASBZThrowable::OnThrow()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZThrowable_OnThrow),NULL);
	}
	static FName NAME_ASBZThrowable_OnThrowStillAttached = FName(TEXT("OnThrowStillAttached"));
	void ASBZThrowable::OnThrowStillAttached()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZThrowable_OnThrowStillAttached),NULL);
	}
	static FName NAME_ASBZThrowable_Server_SetThrowableState = FName(TEXT("Server_SetThrowableState"));
	void ASBZThrowable::Server_SetThrowableState(ESBZThrowableState NewThrowableState)
	{
		SBZThrowable_eventServer_SetThrowableState_Parms Parms;
		Parms.NewThrowableState=NewThrowableState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZThrowable_Server_SetThrowableState),&Parms);
	}
	void ASBZThrowable::StaticRegisterNativesASBZThrowable()
	{
		UClass* Class = ASBZThrowable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateImpactPoint", &ASBZThrowable::execCreateImpactPoint },
			{ "Multicast_DestroyBreakable", &ASBZThrowable::execMulticast_DestroyBreakable },
			{ "Multicast_SetThrowState", &ASBZThrowable::execMulticast_SetThrowState },
			{ "Multicast_SetThrowVelocity", &ASBZThrowable::execMulticast_SetThrowVelocity },
			{ "OnInstigatorEndPlay", &ASBZThrowable::execOnInstigatorEndPlay },
			{ "OnProjectileBounce", &ASBZThrowable::execOnProjectileBounce },
			{ "OnProjectileStopped", &ASBZThrowable::execOnProjectileStopped },
			{ "OnRep_ThrowableState", &ASBZThrowable::execOnRep_ThrowableState },
			{ "OnThrownActorBeginOverlap", &ASBZThrowable::execOnThrownActorBeginOverlap },
			{ "OnThrownActorHit", &ASBZThrowable::execOnThrownActorHit },
			{ "Server_SetThrowableState", &ASBZThrowable::execServer_SetThrowableState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZThrowable_CreateImpactPoint_Statics
	{
		struct SBZThrowable_eventCreateImpactPoint_Parms
		{
			FHitResult Hit;
			float Velocity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_CreateImpactPoint_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZThrowable_CreateImpactPoint_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventCreateImpactPoint_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_CreateImpactPoint_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_CreateImpactPoint_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZThrowable_CreateImpactPoint_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventCreateImpactPoint_Parms, Velocity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThrowable_CreateImpactPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_CreateImpactPoint_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_CreateImpactPoint_Statics::NewProp_Velocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_CreateImpactPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowable_CreateImpactPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowable, nullptr, "CreateImpactPoint", nullptr, nullptr, sizeof(SBZThrowable_eventCreateImpactPoint_Parms), Z_Construct_UFunction_ASBZThrowable_CreateImpactPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_CreateImpactPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_CreateImpactPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_CreateImpactPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowable_CreateImpactPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowable_CreateImpactPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowable_Multicast_DestroyBreakable_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_Multicast_DestroyBreakable_Statics::NewProp_InBreakableHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZThrowable_Multicast_DestroyBreakable_Statics::NewProp_InBreakableHitResult = { "InBreakableHitResult", nullptr, (EPropertyFlags)0x0010008008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventMulticast_DestroyBreakable_Parms, InBreakableHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_Multicast_DestroyBreakable_Statics::NewProp_InBreakableHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_Multicast_DestroyBreakable_Statics::NewProp_InBreakableHitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThrowable_Multicast_DestroyBreakable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_Multicast_DestroyBreakable_Statics::NewProp_InBreakableHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_Multicast_DestroyBreakable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowable_Multicast_DestroyBreakable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowable, nullptr, "Multicast_DestroyBreakable", nullptr, nullptr, sizeof(SBZThrowable_eventMulticast_DestroyBreakable_Parms), Z_Construct_UFunction_ASBZThrowable_Multicast_DestroyBreakable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_Multicast_DestroyBreakable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_Multicast_DestroyBreakable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_Multicast_DestroyBreakable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowable_Multicast_DestroyBreakable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowable_Multicast_DestroyBreakable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewThrowState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewThrowState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowState_Statics::NewProp_NewThrowState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowState_Statics::NewProp_NewThrowState = { "NewThrowState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventMulticast_SetThrowState_Parms, NewThrowState), Z_Construct_UEnum_Starbreeze_ESBZThrowableState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowState_Statics::NewProp_NewThrowState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowState_Statics::NewProp_NewThrowState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowable, nullptr, "Multicast_SetThrowState", nullptr, nullptr, sizeof(SBZThrowable_eventMulticast_SetThrowState_Parms), Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowVelocity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrowDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowVelocity_Statics::NewProp_ThrowDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowVelocity_Statics::NewProp_ThrowDirection = { "ThrowDirection", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventMulticast_SetThrowVelocity_Parms, ThrowDirection), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowVelocity_Statics::NewProp_ThrowDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowVelocity_Statics::NewProp_ThrowDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowVelocity_Statics::NewProp_ThrowDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowable, nullptr, "Multicast_SetThrowVelocity", nullptr, nullptr, sizeof(SBZThrowable_eventMulticast_SetThrowVelocity_Parms), Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowable_OnAttachForThrow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnAttachForThrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowable_OnAttachForThrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowable, nullptr, "OnAttachForThrow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnAttachForThrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnAttachForThrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowable_OnAttachForThrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowable_OnAttachForThrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowable_OnDetachForThrow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnDetachForThrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowable_OnDetachForThrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowable, nullptr, "OnDetachForThrow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnDetachForThrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnDetachForThrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowable_OnDetachForThrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowable_OnDetachForThrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowable_OnInstigatorEndPlay_Statics
	{
		struct SBZThrowable_eventOnInstigatorEndPlay_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThrowable_OnInstigatorEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventOnInstigatorEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZThrowable_OnInstigatorEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventOnInstigatorEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThrowable_OnInstigatorEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_OnInstigatorEndPlay_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_OnInstigatorEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnInstigatorEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowable_OnInstigatorEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowable, nullptr, "OnInstigatorEndPlay", nullptr, nullptr, sizeof(SBZThrowable_eventOnInstigatorEndPlay_Parms), Z_Construct_UFunction_ASBZThrowable_OnInstigatorEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnInstigatorEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnInstigatorEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnInstigatorEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowable_OnInstigatorEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowable_OnInstigatorEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics
	{
		struct SBZThrowable_eventOnProjectileBounce_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics::NewProp_InHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics::NewProp_InHitResult = { "InHitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventOnProjectileBounce_Parms, InHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics::NewProp_InHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics::NewProp_InHitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics::NewProp_ImpactVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventOnProjectileBounce_Parms, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics::NewProp_ImpactVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics::NewProp_ImpactVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics::NewProp_InHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics::NewProp_ImpactVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowable, nullptr, "OnProjectileBounce", nullptr, nullptr, sizeof(SBZThrowable_eventOnProjectileBounce_Parms), Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowable_OnProjectileStopped_Statics
	{
		struct SBZThrowable_eventOnProjectileStopped_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnProjectileStopped_Statics::NewProp_InHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZThrowable_OnProjectileStopped_Statics::NewProp_InHitResult = { "InHitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventOnProjectileStopped_Parms, InHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnProjectileStopped_Statics::NewProp_InHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnProjectileStopped_Statics::NewProp_InHitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThrowable_OnProjectileStopped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_OnProjectileStopped_Statics::NewProp_InHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnProjectileStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowable_OnProjectileStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowable, nullptr, "OnProjectileStopped", nullptr, nullptr, sizeof(SBZThrowable_eventOnProjectileStopped_Parms), Z_Construct_UFunction_ASBZThrowable_OnProjectileStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnProjectileStopped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnProjectileStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnProjectileStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowable_OnProjectileStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowable_OnProjectileStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowable_OnReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowable_OnReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowable, nullptr, "OnReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowable_OnReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowable_OnReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowable_OnRep_ThrowableState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnRep_ThrowableState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowable_OnRep_ThrowableState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowable, nullptr, "OnRep_ThrowableState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnRep_ThrowableState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnRep_ThrowableState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowable_OnRep_ThrowableState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowable_OnRep_ThrowableState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowable_OnThrow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnThrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowable_OnThrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowable, nullptr, "OnThrow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnThrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnThrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowable_OnThrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowable_OnThrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics
	{
		struct SBZThrowable_eventOnThrownActorBeginOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventOnThrownActorBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventOnThrownActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventOnThrownActorBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventOnThrownActorBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SBZThrowable_eventOnThrownActorBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThrowable_eventOnThrownActorBeginOverlap_Parms), &Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventOnThrownActorBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowable, nullptr, "OnThrownActorBeginOverlap", nullptr, nullptr, sizeof(SBZThrowable_eventOnThrownActorBeginOverlap_Parms), Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics
	{
		struct SBZThrowable_eventOnThrownActorHit_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventOnThrownActorHit_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventOnThrownActorHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventOnThrownActorHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventOnThrownActorHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventOnThrownActorHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowable, nullptr, "OnThrownActorHit", nullptr, nullptr, sizeof(SBZThrowable_eventOnThrownActorHit_Parms), Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowable_OnThrowStillAttached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_OnThrowStillAttached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowable_OnThrowStillAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowable, nullptr, "OnThrowStillAttached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_OnThrowStillAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_OnThrowStillAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowable_OnThrowStillAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowable_OnThrowStillAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowable_Server_SetThrowableState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewThrowableState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewThrowableState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZThrowable_Server_SetThrowableState_Statics::NewProp_NewThrowableState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZThrowable_Server_SetThrowableState_Statics::NewProp_NewThrowableState = { "NewThrowableState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowable_eventServer_SetThrowableState_Parms, NewThrowableState), Z_Construct_UEnum_Starbreeze_ESBZThrowableState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThrowable_Server_SetThrowableState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_Server_SetThrowableState_Statics::NewProp_NewThrowableState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowable_Server_SetThrowableState_Statics::NewProp_NewThrowableState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowable_Server_SetThrowableState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowable_Server_SetThrowableState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowable, nullptr, "Server_SetThrowableState", nullptr, nullptr, sizeof(SBZThrowable_eventServer_SetThrowableState_Parms), Z_Construct_UFunction_ASBZThrowable_Server_SetThrowableState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_Server_SetThrowableState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowable_Server_SetThrowableState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowable_Server_SetThrowableState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowable_Server_SetThrowableState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowable_Server_SetThrowableState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZThrowable_NoRegister()
	{
		return ASBZThrowable::StaticClass();
	}
	struct Z_Construct_UClass_ASBZThrowable_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThrowableState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ThrowableState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideAudioRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideAudioRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioImpactForceModifierValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AudioImpactForceModifierValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZThrowable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZEquippable,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZThrowable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZThrowable_CreateImpactPoint, "CreateImpactPoint" }, // 2771180138
		{ &Z_Construct_UFunction_ASBZThrowable_Multicast_DestroyBreakable, "Multicast_DestroyBreakable" }, // 2346010840
		{ &Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowState, "Multicast_SetThrowState" }, // 4159140071
		{ &Z_Construct_UFunction_ASBZThrowable_Multicast_SetThrowVelocity, "Multicast_SetThrowVelocity" }, // 4248636736
		{ &Z_Construct_UFunction_ASBZThrowable_OnAttachForThrow, "OnAttachForThrow" }, // 2162174163
		{ &Z_Construct_UFunction_ASBZThrowable_OnDetachForThrow, "OnDetachForThrow" }, // 2356400509
		{ &Z_Construct_UFunction_ASBZThrowable_OnInstigatorEndPlay, "OnInstigatorEndPlay" }, // 2763672681
		{ &Z_Construct_UFunction_ASBZThrowable_OnProjectileBounce, "OnProjectileBounce" }, // 3290293231
		{ &Z_Construct_UFunction_ASBZThrowable_OnProjectileStopped, "OnProjectileStopped" }, // 4238396491
		{ &Z_Construct_UFunction_ASBZThrowable_OnReady, "OnReady" }, // 1212542177
		{ &Z_Construct_UFunction_ASBZThrowable_OnRep_ThrowableState, "OnRep_ThrowableState" }, // 344481416
		{ &Z_Construct_UFunction_ASBZThrowable_OnThrow, "OnThrow" }, // 896196935
		{ &Z_Construct_UFunction_ASBZThrowable_OnThrownActorBeginOverlap, "OnThrownActorBeginOverlap" }, // 3090939353
		{ &Z_Construct_UFunction_ASBZThrowable_OnThrownActorHit, "OnThrownActorHit" }, // 148035532
		{ &Z_Construct_UFunction_ASBZThrowable_OnThrowStillAttached, "OnThrowStillAttached" }, // 1614578033
		{ &Z_Construct_UFunction_ASBZThrowable_Server_SetThrowableState, "Server_SetThrowableState" }, // 519745911
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZThrowable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MarkerAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowable" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MarkerAsset = { "MarkerAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowable, MarkerAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MarkerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MarkerAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MarkerOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowable" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MarkerOffset = { "MarkerOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowable, MarkerOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MarkerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MarkerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MarkerActivationDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowable" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MarkerActivationDelay = { "MarkerActivationDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowable, MarkerActivationDelay), METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MarkerActivationDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MarkerActivationDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowable, StaticMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowable" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowable, Data), Z_Construct_UClass_USBZThrowableData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowable" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowable, OwnerCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_OwnerCharacter_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_ThrowableState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::NewProp_ThrowableState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowable" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_ThrowableState = { "ThrowableState", "OnRep_ThrowableState", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowable, ThrowableState), Z_Construct_UEnum_Starbreeze_ESBZThrowableState, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_ThrowableState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_ThrowableState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::NewProp_PlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowable" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowable, PlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowable, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_ProjectileMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_ProjectileMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::NewProp_bReduceBouncinessPerBounce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowable" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	void Z_Construct_UClass_ASBZThrowable_Statics::NewProp_bReduceBouncinessPerBounce_SetBit(void* Obj)
	{
		((ASBZThrowable*)Obj)->bReduceBouncinessPerBounce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_bReduceBouncinessPerBounce = { "bReduceBouncinessPerBounce", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZThrowable), &Z_Construct_UClass_ASBZThrowable_Statics::NewProp_bReduceBouncinessPerBounce_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_bReduceBouncinessPerBounce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_bReduceBouncinessPerBounce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::NewProp_BouncinessReductionValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowable" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_BouncinessReductionValue = { "BouncinessReductionValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowable, BouncinessReductionValue), METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_BouncinessReductionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_BouncinessReductionValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MaxTimesToReduceBounciness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowable" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MaxTimesToReduceBounciness = { "MaxTimesToReduceBounciness", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowable, MaxTimesToReduceBounciness), METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MaxTimesToReduceBounciness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MaxTimesToReduceBounciness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MaxBounces_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowable" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MaxBounces = { "MaxBounces", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowable, MaxBounces), METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MaxBounces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MaxBounces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::NewProp_bEnablePhysicsOnStopped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowable" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	void Z_Construct_UClass_ASBZThrowable_Statics::NewProp_bEnablePhysicsOnStopped_SetBit(void* Obj)
	{
		((ASBZThrowable*)Obj)->bEnablePhysicsOnStopped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_bEnablePhysicsOnStopped = { "bEnablePhysicsOnStopped", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZThrowable), &Z_Construct_UClass_ASBZThrowable_Statics::NewProp_bEnablePhysicsOnStopped_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_bEnablePhysicsOnStopped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_bEnablePhysicsOnStopped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::NewProp_OverrideAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowable" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_OverrideAudioEvent = { "OverrideAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowable, OverrideAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_OverrideAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_OverrideAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::NewProp_OverrideAudioRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowable" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_OverrideAudioRTPC = { "OverrideAudioRTPC", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowable, OverrideAudioRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_OverrideAudioRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_OverrideAudioRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::NewProp_AudioImpactForceModifierValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowable" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_AudioImpactForceModifierValue = { "AudioImpactForceModifierValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowable, AudioImpactForceModifierValue), METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_AudioImpactForceModifierValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_AudioImpactForceModifierValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowable_Statics::NewProp_DataType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowable" },
		{ "ModuleRelativePath", "Public/SBZThrowable.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZThrowable_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0024080000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowable, DataType), Z_Construct_UClass_USBZThrowableData_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::NewProp_DataType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZThrowable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MarkerAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MarkerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MarkerActivationDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_OwnerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_ThrowableState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_ThrowableState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_ProjectileMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_bReduceBouncinessPerBounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_BouncinessReductionValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MaxTimesToReduceBounciness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_MaxBounces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_bEnablePhysicsOnStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_OverrideAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_OverrideAudioRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_AudioImpactForceModifierValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowable_Statics::NewProp_DataType,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZThrowable_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZProjectileInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZThrowable, ISBZProjectileInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZThrowable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZThrowable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZThrowable_Statics::ClassParams = {
		&ASBZThrowable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZThrowable_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZThrowable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZThrowable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZThrowable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZThrowable, 1751711113);
	template<> STARBREEZE_API UClass* StaticClass<ASBZThrowable>()
	{
		return ASBZThrowable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZThrowable(Z_Construct_UClass_ASBZThrowable, &ASBZThrowable::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZThrowable"), false, nullptr, nullptr, nullptr);

	void ASBZThrowable::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ThrowableState(TEXT("ThrowableState"));

		const bool bIsValid = true
			&& Name_ThrowableState == ClassReps[(int32)ENetFields_Private::ThrowableState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZThrowable"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZThrowable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
