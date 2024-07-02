// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWheeledVehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWheeledVehicle() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleSpawnComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleSplineFollowingComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpline_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVehicleLightCPD();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVehicleLightType();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZWheeledVehicleOnBeginStop__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZWheeledVehicleOnStopped__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZWheeledVehicleOnSplineEntered__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZWheeledVehicleOnSplineLeft__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZWheeledVehicleOnSplineEndReached__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZWheeledVehicleOnPathEndReached__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZWheeledVehicleOnBeginObstacle__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZWheeledVehicleOnEndObstacle__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWheeledVehicleAudioComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAmbientSoundRadioComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleLights();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleAnimationCollection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVariationSetData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWheeledVehicleNavModifierComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWheeledVehicleFX();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCoverPoint_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDebugSnapshot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZWheeledVehicle::execGetSpawnComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZVehicleSpawnComponent**)Z_Param__Result=P_THIS->GetSpawnComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execGetSplineFollowingComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZVehicleSplineFollowingComponent**)Z_Param__Result=P_THIS->GetSplineFollowingComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execAddEjectionVolume)
	{
		P_GET_OBJECT(UBoxComponent,Z_Param_EjectionVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddEjectionVolume(Z_Param_EjectionVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execGetDoorState)
	{
		P_GET_ENUM(ESBZVehicleDoorType,Z_Param_DoorType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZVehicleDoorState*)Z_Param__Result=P_THIS->GetDoorState(ESBZVehicleDoorType(Z_Param_DoorType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execGetVehicleSplineFollowingComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZVehicleSplineFollowingComponent**)Z_Param__Result=P_THIS->GetVehicleSplineFollowingComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execMulticast_EjectOverlappingCharacters)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_GET_STRUCT(FVector,Z_Param_EjectionVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_EjectOverlappingCharacters_Implementation(Z_Param_Character,Z_Param_EjectionVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execMulticast_SetDoorState)
	{
		P_GET_ENUM(ESBZVehicleDoorType,Z_Param_DoorType);
		P_GET_ENUM(ESBZVehicleDoorState,Z_Param_DoorState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetDoorState_Implementation(ESBZVehicleDoorType(Z_Param_DoorType),ESBZVehicleDoorState(Z_Param_DoorState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execOnBeginStopCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginStopCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execOnEjectionVolumeBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEjectionVolumeBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execOnPathEndReachedCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPathEndReachedCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execOnRep_DoorStatesPerType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DoorStatesPerType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execOnRep_RepMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RepMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execOnRep_Seed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Seed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execOnSplineEndReachedCallback)
	{
		P_GET_OBJECT(ASBZSpline,Z_Param_Spline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSplineEndReachedCallback(Z_Param_Spline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execOnSplineEnteredCallback)
	{
		P_GET_OBJECT(ASBZSpline,Z_Param_Spline);
		P_GET_UBOOL(Z_Param_bPathEntered);
		P_GET_UBOOL(Z_Param_bTeleportToPathStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSplineEnteredCallback(Z_Param_Spline,Z_Param_bPathEntered,Z_Param_bTeleportToPathStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execOnSplineLeftCallback)
	{
		P_GET_OBJECT(ASBZSpline,Z_Param_Spline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSplineLeftCallback(Z_Param_Spline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execOnStoppedCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStoppedCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execOnSwitchSplineDirectionCallback)
	{
		P_GET_OBJECT(ASBZSpline,Z_Param_Spline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSwitchSplineDirectionCallback(Z_Param_Spline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execSetDoorState)
	{
		P_GET_ENUM(ESBZVehicleDoorType,Z_Param_DoorType);
		P_GET_ENUM(ESBZVehicleDoorState,Z_Param_DoorState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDoorState(ESBZVehicleDoorType(Z_Param_DoorType),ESBZVehicleDoorState(Z_Param_DoorState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execSetLightCPDBroken)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CPDIndex);
		P_GET_ENUM(ESBZVehicleLightCPD,Z_Param_LightBit);
		P_GET_UBOOL(Z_Param_bIsBroken);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightCPDBroken(Z_Param_CPDIndex,ESBZVehicleLightCPD(Z_Param_LightBit),Z_Param_bIsBroken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWheeledVehicle::execSetLightType)
	{
		P_GET_ENUM(ESBZVehicleLightType,Z_Param_LightType);
		P_GET_UBOOL(Z_Param_bIsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightType(ESBZVehicleLightType(Z_Param_LightType),Z_Param_bIsOn);
		P_NATIVE_END;
	}
	static FName NAME_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters = FName(TEXT("Multicast_EjectOverlappingCharacters"));
	void ASBZWheeledVehicle::Multicast_EjectOverlappingCharacters(ACharacter* Character, FVector const& EjectionVelocity)
	{
		SBZWheeledVehicle_eventMulticast_EjectOverlappingCharacters_Parms Parms;
		Parms.Character=Character;
		Parms.EjectionVelocity=EjectionVelocity;
		ProcessEvent(FindFunctionChecked(NAME_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters),&Parms);
	}
	static FName NAME_ASBZWheeledVehicle_Multicast_SetDoorState = FName(TEXT("Multicast_SetDoorState"));
	void ASBZWheeledVehicle::Multicast_SetDoorState(ESBZVehicleDoorType DoorType, ESBZVehicleDoorState DoorState)
	{
		SBZWheeledVehicle_eventMulticast_SetDoorState_Parms Parms;
		Parms.DoorType=DoorType;
		Parms.DoorState=DoorState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZWheeledVehicle_Multicast_SetDoorState),&Parms);
	}
	void ASBZWheeledVehicle::StaticRegisterNativesASBZWheeledVehicle()
	{
		UClass* Class = ASBZWheeledVehicle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEjectionVolume", &ASBZWheeledVehicle::execAddEjectionVolume },
			{ "GetDoorState", &ASBZWheeledVehicle::execGetDoorState },
			{ "GetSpawnComponent", &ASBZWheeledVehicle::execGetSpawnComponent },
			{ "GetSplineFollowingComponent", &ASBZWheeledVehicle::execGetSplineFollowingComponent },
			{ "GetVehicleSplineFollowingComponent", &ASBZWheeledVehicle::execGetVehicleSplineFollowingComponent },
			{ "Multicast_EjectOverlappingCharacters", &ASBZWheeledVehicle::execMulticast_EjectOverlappingCharacters },
			{ "Multicast_SetDoorState", &ASBZWheeledVehicle::execMulticast_SetDoorState },
			{ "OnBeginStopCallback", &ASBZWheeledVehicle::execOnBeginStopCallback },
			{ "OnEjectionVolumeBeginOverlap", &ASBZWheeledVehicle::execOnEjectionVolumeBeginOverlap },
			{ "OnPathEndReachedCallback", &ASBZWheeledVehicle::execOnPathEndReachedCallback },
			{ "OnRep_DoorStatesPerType", &ASBZWheeledVehicle::execOnRep_DoorStatesPerType },
			{ "OnRep_RepMove", &ASBZWheeledVehicle::execOnRep_RepMove },
			{ "OnRep_Seed", &ASBZWheeledVehicle::execOnRep_Seed },
			{ "OnSplineEndReachedCallback", &ASBZWheeledVehicle::execOnSplineEndReachedCallback },
			{ "OnSplineEnteredCallback", &ASBZWheeledVehicle::execOnSplineEnteredCallback },
			{ "OnSplineLeftCallback", &ASBZWheeledVehicle::execOnSplineLeftCallback },
			{ "OnStoppedCallback", &ASBZWheeledVehicle::execOnStoppedCallback },
			{ "OnSwitchSplineDirectionCallback", &ASBZWheeledVehicle::execOnSwitchSplineDirectionCallback },
			{ "SetDoorState", &ASBZWheeledVehicle::execSetDoorState },
			{ "SetLightCPDBroken", &ASBZWheeledVehicle::execSetLightCPDBroken },
			{ "SetLightType", &ASBZWheeledVehicle::execSetLightType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_AddEjectionVolume_Statics
	{
		struct SBZWheeledVehicle_eventAddEjectionVolume_Parms
		{
			UBoxComponent* EjectionVolume;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EjectionVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EjectionVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_AddEjectionVolume_Statics::NewProp_EjectionVolume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_AddEjectionVolume_Statics::NewProp_EjectionVolume = { "EjectionVolume", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventAddEjectionVolume_Parms, EjectionVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_AddEjectionVolume_Statics::NewProp_EjectionVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_AddEjectionVolume_Statics::NewProp_EjectionVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWheeledVehicle_AddEjectionVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_AddEjectionVolume_Statics::NewProp_EjectionVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_AddEjectionVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_AddEjectionVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "AddEjectionVolume", nullptr, nullptr, sizeof(SBZWheeledVehicle_eventAddEjectionVolume_Parms), Z_Construct_UFunction_ASBZWheeledVehicle_AddEjectionVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_AddEjectionVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_AddEjectionVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_AddEjectionVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_AddEjectionVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_AddEjectionVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState_Statics
	{
		struct SBZWheeledVehicle_eventGetDoorState_Parms
		{
			ESBZVehicleDoorType DoorType;
			ESBZVehicleDoorState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DoorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DoorType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState_Statics::NewProp_DoorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState_Statics::NewProp_DoorType = { "DoorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventGetDoorState_Parms, DoorType), Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventGetDoorState_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState_Statics::NewProp_DoorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState_Statics::NewProp_DoorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "GetDoorState", nullptr, nullptr, sizeof(SBZWheeledVehicle_eventGetDoorState_Parms), Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_GetSpawnComponent_Statics
	{
		struct SBZWheeledVehicle_eventGetSpawnComponent_Parms
		{
			USBZVehicleSpawnComponent* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_GetSpawnComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_GetSpawnComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventGetSpawnComponent_Parms, ReturnValue), Z_Construct_UClass_USBZVehicleSpawnComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_GetSpawnComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_GetSpawnComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWheeledVehicle_GetSpawnComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_GetSpawnComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_GetSpawnComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_GetSpawnComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "GetSpawnComponent", nullptr, nullptr, sizeof(SBZWheeledVehicle_eventGetSpawnComponent_Parms), Z_Construct_UFunction_ASBZWheeledVehicle_GetSpawnComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_GetSpawnComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_GetSpawnComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_GetSpawnComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_GetSpawnComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_GetSpawnComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_GetSplineFollowingComponent_Statics
	{
		struct SBZWheeledVehicle_eventGetSplineFollowingComponent_Parms
		{
			USBZVehicleSplineFollowingComponent* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_GetSplineFollowingComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_GetSplineFollowingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventGetSplineFollowingComponent_Parms, ReturnValue), Z_Construct_UClass_USBZVehicleSplineFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_GetSplineFollowingComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_GetSplineFollowingComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWheeledVehicle_GetSplineFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_GetSplineFollowingComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_GetSplineFollowingComponent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Fix for true pure virtual functions not being implemented\n" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
		{ "ToolTip", "Fix for true pure virtual functions not being implemented" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_GetSplineFollowingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "GetSplineFollowingComponent", nullptr, nullptr, sizeof(SBZWheeledVehicle_eventGetSplineFollowingComponent_Parms), Z_Construct_UFunction_ASBZWheeledVehicle_GetSplineFollowingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_GetSplineFollowingComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_GetSplineFollowingComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_GetSplineFollowingComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_GetSplineFollowingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_GetSplineFollowingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_GetVehicleSplineFollowingComponent_Statics
	{
		struct SBZWheeledVehicle_eventGetVehicleSplineFollowingComponent_Parms
		{
			USBZVehicleSplineFollowingComponent* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_GetVehicleSplineFollowingComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_GetVehicleSplineFollowingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventGetVehicleSplineFollowingComponent_Parms, ReturnValue), Z_Construct_UClass_USBZVehicleSplineFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_GetVehicleSplineFollowingComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_GetVehicleSplineFollowingComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWheeledVehicle_GetVehicleSplineFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_GetVehicleSplineFollowingComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_GetVehicleSplineFollowingComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_GetVehicleSplineFollowingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "GetVehicleSplineFollowingComponent", nullptr, nullptr, sizeof(SBZWheeledVehicle_eventGetVehicleSplineFollowingComponent_Parms), Z_Construct_UFunction_ASBZWheeledVehicle_GetVehicleSplineFollowingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_GetVehicleSplineFollowingComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_GetVehicleSplineFollowingComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_GetVehicleSplineFollowingComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_GetVehicleSplineFollowingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_GetVehicleSplineFollowingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EjectionVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EjectionVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventMulticast_EjectOverlappingCharacters_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters_Statics::NewProp_EjectionVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters_Statics::NewProp_EjectionVelocity = { "EjectionVelocity", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventMulticast_EjectOverlappingCharacters_Parms, EjectionVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters_Statics::NewProp_EjectionVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters_Statics::NewProp_EjectionVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters_Statics::NewProp_EjectionVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "Multicast_EjectOverlappingCharacters", nullptr, nullptr, sizeof(SBZWheeledVehicle_eventMulticast_EjectOverlappingCharacters_Parms), Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04844CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DoorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DoorType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DoorState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DoorState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState_Statics::NewProp_DoorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState_Statics::NewProp_DoorType = { "DoorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventMulticast_SetDoorState_Parms, DoorType), Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState_Statics::NewProp_DoorState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState_Statics::NewProp_DoorState = { "DoorState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventMulticast_SetDoorState_Parms, DoorState), Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState_Statics::NewProp_DoorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState_Statics::NewProp_DoorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState_Statics::NewProp_DoorState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState_Statics::NewProp_DoorState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "Multicast_SetDoorState", nullptr, nullptr, sizeof(SBZWheeledVehicle_eventMulticast_SetDoorState_Parms), Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_OnBeginStopCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_OnBeginStopCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_OnBeginStopCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "OnBeginStopCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_OnBeginStopCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnBeginStopCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_OnBeginStopCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_OnBeginStopCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics
	{
		struct SBZWheeledVehicle_eventOnEjectionVolumeBeginOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventOnEjectionVolumeBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventOnEjectionVolumeBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventOnEjectionVolumeBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventOnEjectionVolumeBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SBZWheeledVehicle_eventOnEjectionVolumeBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZWheeledVehicle_eventOnEjectionVolumeBeginOverlap_Parms), &Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventOnEjectionVolumeBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "OnEjectionVolumeBeginOverlap", nullptr, nullptr, sizeof(SBZWheeledVehicle_eventOnEjectionVolumeBeginOverlap_Parms), Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_OnPathEndReachedCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_OnPathEndReachedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_OnPathEndReachedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "OnPathEndReachedCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_OnPathEndReachedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnPathEndReachedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_OnPathEndReachedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_OnPathEndReachedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_DoorStatesPerType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_DoorStatesPerType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_DoorStatesPerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "OnRep_DoorStatesPerType", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_DoorStatesPerType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_DoorStatesPerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_DoorStatesPerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_DoorStatesPerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_RepMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_RepMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_RepMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "OnRep_RepMove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_RepMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_RepMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_RepMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_RepMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_Seed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_Seed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_Seed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "OnRep_Seed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_Seed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_Seed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_Seed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_Seed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEndReachedCallback_Statics
	{
		struct SBZWheeledVehicle_eventOnSplineEndReachedCallback_Parms
		{
			ASBZSpline* Spline;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEndReachedCallback_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventOnSplineEndReachedCallback_Parms, Spline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEndReachedCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEndReachedCallback_Statics::NewProp_Spline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEndReachedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEndReachedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "OnSplineEndReachedCallback", nullptr, nullptr, sizeof(SBZWheeledVehicle_eventOnSplineEndReachedCallback_Parms), Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEndReachedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEndReachedCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEndReachedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEndReachedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEndReachedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEndReachedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics
	{
		struct SBZWheeledVehicle_eventOnSplineEnteredCallback_Parms
		{
			ASBZSpline* Spline;
			bool bPathEntered;
			bool bTeleportToPathStart;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static void NewProp_bPathEntered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPathEntered;
		static void NewProp_bTeleportToPathStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleportToPathStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventOnSplineEnteredCallback_Parms, Spline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics::NewProp_bPathEntered_SetBit(void* Obj)
	{
		((SBZWheeledVehicle_eventOnSplineEnteredCallback_Parms*)Obj)->bPathEntered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics::NewProp_bPathEntered = { "bPathEntered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZWheeledVehicle_eventOnSplineEnteredCallback_Parms), &Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics::NewProp_bPathEntered_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics::NewProp_bTeleportToPathStart_SetBit(void* Obj)
	{
		((SBZWheeledVehicle_eventOnSplineEnteredCallback_Parms*)Obj)->bTeleportToPathStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics::NewProp_bTeleportToPathStart = { "bTeleportToPathStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZWheeledVehicle_eventOnSplineEnteredCallback_Parms), &Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics::NewProp_bTeleportToPathStart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics::NewProp_bPathEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics::NewProp_bTeleportToPathStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "OnSplineEnteredCallback", nullptr, nullptr, sizeof(SBZWheeledVehicle_eventOnSplineEnteredCallback_Parms), Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineLeftCallback_Statics
	{
		struct SBZWheeledVehicle_eventOnSplineLeftCallback_Parms
		{
			ASBZSpline* Spline;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineLeftCallback_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventOnSplineLeftCallback_Parms, Spline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineLeftCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineLeftCallback_Statics::NewProp_Spline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineLeftCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineLeftCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "OnSplineLeftCallback", nullptr, nullptr, sizeof(SBZWheeledVehicle_eventOnSplineLeftCallback_Parms), Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineLeftCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineLeftCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineLeftCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineLeftCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineLeftCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineLeftCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_OnStoppedCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_OnStoppedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_OnStoppedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "OnStoppedCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_OnStoppedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnStoppedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_OnStoppedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_OnStoppedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_OnSwitchSplineDirectionCallback_Statics
	{
		struct SBZWheeledVehicle_eventOnSwitchSplineDirectionCallback_Parms
		{
			ASBZSpline* Spline;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_OnSwitchSplineDirectionCallback_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventOnSwitchSplineDirectionCallback_Parms, Spline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWheeledVehicle_OnSwitchSplineDirectionCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_OnSwitchSplineDirectionCallback_Statics::NewProp_Spline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_OnSwitchSplineDirectionCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_OnSwitchSplineDirectionCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "OnSwitchSplineDirectionCallback", nullptr, nullptr, sizeof(SBZWheeledVehicle_eventOnSwitchSplineDirectionCallback_Parms), Z_Construct_UFunction_ASBZWheeledVehicle_OnSwitchSplineDirectionCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnSwitchSplineDirectionCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_OnSwitchSplineDirectionCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_OnSwitchSplineDirectionCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_OnSwitchSplineDirectionCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_OnSwitchSplineDirectionCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState_Statics
	{
		struct SBZWheeledVehicle_eventSetDoorState_Parms
		{
			ESBZVehicleDoorType DoorType;
			ESBZVehicleDoorState DoorState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DoorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DoorType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DoorState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DoorState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState_Statics::NewProp_DoorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState_Statics::NewProp_DoorType = { "DoorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventSetDoorState_Parms, DoorType), Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState_Statics::NewProp_DoorState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState_Statics::NewProp_DoorState = { "DoorState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventSetDoorState_Parms, DoorState), Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState_Statics::NewProp_DoorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState_Statics::NewProp_DoorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState_Statics::NewProp_DoorState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState_Statics::NewProp_DoorState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "SetDoorState", nullptr, nullptr, sizeof(SBZWheeledVehicle_eventSetDoorState_Parms), Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics
	{
		struct SBZWheeledVehicle_eventSetLightCPDBroken_Parms
		{
			int32 CPDIndex;
			ESBZVehicleLightCPD LightBit;
			bool bIsBroken;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CPDIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LightBit_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LightBit;
		static void NewProp_bIsBroken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBroken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics::NewProp_CPDIndex = { "CPDIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventSetLightCPDBroken_Parms, CPDIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics::NewProp_LightBit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics::NewProp_LightBit = { "LightBit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventSetLightCPDBroken_Parms, LightBit), Z_Construct_UEnum_Starbreeze_ESBZVehicleLightCPD, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics::NewProp_bIsBroken_SetBit(void* Obj)
	{
		((SBZWheeledVehicle_eventSetLightCPDBroken_Parms*)Obj)->bIsBroken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics::NewProp_bIsBroken = { "bIsBroken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZWheeledVehicle_eventSetLightCPDBroken_Parms), &Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics::NewProp_bIsBroken_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics::NewProp_CPDIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics::NewProp_LightBit_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics::NewProp_LightBit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics::NewProp_bIsBroken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "SetLightCPDBroken", nullptr, nullptr, sizeof(SBZWheeledVehicle_eventSetLightCPDBroken_Parms), Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType_Statics
	{
		struct SBZWheeledVehicle_eventSetLightType_Parms
		{
			ESBZVehicleLightType LightType;
			bool bIsOn;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LightType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LightType;
		static void NewProp_bIsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType_Statics::NewProp_LightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType_Statics::NewProp_LightType = { "LightType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicle_eventSetLightType_Parms, LightType), Z_Construct_UEnum_Starbreeze_ESBZVehicleLightType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType_Statics::NewProp_bIsOn_SetBit(void* Obj)
	{
		((SBZWheeledVehicle_eventSetLightType_Parms*)Obj)->bIsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType_Statics::NewProp_bIsOn = { "bIsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZWheeledVehicle_eventSetLightType_Parms), &Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType_Statics::NewProp_bIsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType_Statics::NewProp_LightType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType_Statics::NewProp_LightType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType_Statics::NewProp_bIsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWheeledVehicle, nullptr, "SetLightType", nullptr, nullptr, sizeof(SBZWheeledVehicle_eventSetLightType_Parms), Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZWheeledVehicle_NoRegister()
	{
		return ASBZWheeledVehicle::StaticClass();
	}
	struct Z_Construct_UClass_ASBZWheeledVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBeginStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStopped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStopped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSplineEntered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSplineEntered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSplineLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSplineLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSplineEndReached_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSplineEndReached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPathEndReached_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPathEndReached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBeginObstacle_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginObstacle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEndObstacle_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndObstacle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadioComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightsCPDGraph_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightsCPDGraph_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightsCPDGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LightsCPDGraph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveLightsBitmask_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActiveLightsBitmask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariationSetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VariationSetData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavModifierComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavModifierComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionExtentShrinkFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionExtentShrinkFactor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DoorStatesPerType_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorStatesPerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DoorStatesPerType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FXs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FXs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FXs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineFollowingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineFollowingComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Obstacles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Obstacles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Obstacles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedCoverPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedCoverPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedCoverPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEjectCharactersWhenDriving_MetaData[];
#endif
		static void NewProp_bEjectCharactersWhenDriving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEjectCharactersWhenDriving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EjectionCharacterVelocityFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EjectionCharacterVelocityFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEjectCharacterVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEjectCharacterVelocity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappingEjectionAreaCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappingEjectionAreaCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlappingEjectionAreaCharacters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PendingCollisionResetCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingCollisionResetCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PendingCollisionResetCharacters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EjectionVolumes_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EjectionVolumes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EjectionVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EjectionVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleCheckInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ObstacleCheckInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RepMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugSnapshots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugSnapshots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebugSnapshots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugServerLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugServerLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebugServerLocations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZWheeledVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZWheeledVehicle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_AddEjectionVolume, "AddEjectionVolume" }, // 3191587478
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_GetDoorState, "GetDoorState" }, // 530727474
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_GetSpawnComponent, "GetSpawnComponent" }, // 3356217460
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_GetSplineFollowingComponent, "GetSplineFollowingComponent" }, // 3861889594
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_GetVehicleSplineFollowingComponent, "GetVehicleSplineFollowingComponent" }, // 1345763119
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_EjectOverlappingCharacters, "Multicast_EjectOverlappingCharacters" }, // 433610453
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_Multicast_SetDoorState, "Multicast_SetDoorState" }, // 3830758951
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_OnBeginStopCallback, "OnBeginStopCallback" }, // 771761832
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_OnEjectionVolumeBeginOverlap, "OnEjectionVolumeBeginOverlap" }, // 1499208317
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_OnPathEndReachedCallback, "OnPathEndReachedCallback" }, // 225518796
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_DoorStatesPerType, "OnRep_DoorStatesPerType" }, // 1835248454
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_RepMove, "OnRep_RepMove" }, // 3777622117
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_OnRep_Seed, "OnRep_Seed" }, // 2117336059
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEndReachedCallback, "OnSplineEndReachedCallback" }, // 409164731
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineEnteredCallback, "OnSplineEnteredCallback" }, // 874346197
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_OnSplineLeftCallback, "OnSplineLeftCallback" }, // 3271677806
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_OnStoppedCallback, "OnStoppedCallback" }, // 3355914024
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_OnSwitchSplineDirectionCallback, "OnSwitchSplineDirectionCallback" }, // 3896188137
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_SetDoorState, "SetDoorState" }, // 938613697
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_SetLightCPDBroken, "SetLightCPDBroken" }, // 2785642024
		{ &Z_Construct_UFunction_ASBZWheeledVehicle_SetLightType, "SetLightType" }, // 1786428055
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SBZWheeledVehicle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnBeginStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnBeginStop = { "OnBeginStop", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, OnBeginStop), Z_Construct_UDelegateFunction_Starbreeze_SBZWheeledVehicleOnBeginStop__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnBeginStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnBeginStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnStopped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnStopped = { "OnStopped", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, OnStopped), Z_Construct_UDelegateFunction_Starbreeze_SBZWheeledVehicleOnStopped__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnStopped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnStopped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnSplineEntered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnSplineEntered = { "OnSplineEntered", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, OnSplineEntered), Z_Construct_UDelegateFunction_Starbreeze_SBZWheeledVehicleOnSplineEntered__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnSplineEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnSplineEntered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnSplineLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnSplineLeft = { "OnSplineLeft", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, OnSplineLeft), Z_Construct_UDelegateFunction_Starbreeze_SBZWheeledVehicleOnSplineLeft__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnSplineLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnSplineLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnSplineEndReached_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnSplineEndReached = { "OnSplineEndReached", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, OnSplineEndReached), Z_Construct_UDelegateFunction_Starbreeze_SBZWheeledVehicleOnSplineEndReached__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnSplineEndReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnSplineEndReached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnPathEndReached_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnPathEndReached = { "OnPathEndReached", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, OnPathEndReached), Z_Construct_UDelegateFunction_Starbreeze_SBZWheeledVehicleOnPathEndReached__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnPathEndReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnPathEndReached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnBeginObstacle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnBeginObstacle = { "OnBeginObstacle", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, OnBeginObstacle), Z_Construct_UDelegateFunction_Starbreeze_SBZWheeledVehicleOnBeginObstacle__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnBeginObstacle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnBeginObstacle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnEndObstacle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnEndObstacle = { "OnEndObstacle", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, OnEndObstacle), Z_Construct_UDelegateFunction_Starbreeze_SBZWheeledVehicleOnEndObstacle__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnEndObstacle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnEndObstacle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, AudioComponent), Z_Construct_UClass_USBZWheeledVehicleAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_RadioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_RadioComponent = { "RadioComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, RadioComponent), Z_Construct_UClass_USBZAmbientSoundRadioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_RadioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_RadioComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_LightsCPDGraph_ValueProp = { "LightsCPDGraph", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZVehicleLights, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_LightsCPDGraph_Key_KeyProp = { "LightsCPDGraph_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_LightsCPDGraph_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_LightsCPDGraph = { "LightsCPDGraph", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, LightsCPDGraph), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_LightsCPDGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_LightsCPDGraph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_ActiveLightsBitmask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_ActiveLightsBitmask = { "ActiveLightsBitmask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, ActiveLightsBitmask), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_ActiveLightsBitmask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_ActiveLightsBitmask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_AnimationCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_AnimationCollection = { "AnimationCollection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, AnimationCollection), Z_Construct_UClass_USBZVehicleAnimationCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_AnimationCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_AnimationCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_VariationSetData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_VariationSetData = { "VariationSetData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, VariationSetData), Z_Construct_UClass_USBZVariationSetData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_VariationSetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_VariationSetData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_NavModifierComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_NavModifierComponent = { "NavModifierComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, NavModifierComponent), Z_Construct_UClass_USBZWheeledVehicleNavModifierComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_NavModifierComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_NavModifierComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_CollisionExtentShrinkFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_CollisionExtentShrinkFactor = { "CollisionExtentShrinkFactor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, CollisionExtentShrinkFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_CollisionExtentShrinkFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_CollisionExtentShrinkFactor_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DoorStatesPerType_Inner = { "DoorStatesPerType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZVehicleDoorStatePerType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DoorStatesPerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DoorStatesPerType = { "DoorStatesPerType", "OnRep_DoorStatesPerType", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, DoorStatesPerType), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DoorStatesPerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DoorStatesPerType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_FXs_Inner = { "FXs", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZWheeledVehicleFX, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_FXs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_FXs = { "FXs", nullptr, (EPropertyFlags)0x0040008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, FXs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_FXs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_FXs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_SplineFollowingComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_SplineFollowingComponent = { "SplineFollowingComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, SplineFollowingComponent), Z_Construct_UClass_USBZVehicleSplineFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_SplineFollowingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_SplineFollowingComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_Obstacles_Inner = { "Obstacles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_Obstacles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_Obstacles = { "Obstacles", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, Obstacles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_Obstacles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_Obstacles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_CachedCoverPoints_Inner = { "CachedCoverPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZCoverPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_CachedCoverPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_CachedCoverPoints = { "CachedCoverPoints", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, CachedCoverPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_CachedCoverPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_CachedCoverPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_bEjectCharactersWhenDriving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	void Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_bEjectCharactersWhenDriving_SetBit(void* Obj)
	{
		((ASBZWheeledVehicle*)Obj)->bEjectCharactersWhenDriving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_bEjectCharactersWhenDriving = { "bEjectCharactersWhenDriving", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZWheeledVehicle), &Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_bEjectCharactersWhenDriving_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_bEjectCharactersWhenDriving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_bEjectCharactersWhenDriving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_EjectionCharacterVelocityFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_EjectionCharacterVelocityFactor = { "EjectionCharacterVelocityFactor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, EjectionCharacterVelocityFactor), METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_EjectionCharacterVelocityFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_EjectionCharacterVelocityFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_MaxEjectCharacterVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_MaxEjectCharacterVelocity = { "MaxEjectCharacterVelocity", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, MaxEjectCharacterVelocity), METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_MaxEjectCharacterVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_MaxEjectCharacterVelocity_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OverlappingEjectionAreaCharacters_Inner = { "OverlappingEjectionAreaCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OverlappingEjectionAreaCharacters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OverlappingEjectionAreaCharacters = { "OverlappingEjectionAreaCharacters", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, OverlappingEjectionAreaCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OverlappingEjectionAreaCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OverlappingEjectionAreaCharacters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_PendingCollisionResetCharacters_Inner = { "PendingCollisionResetCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_PendingCollisionResetCharacters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_PendingCollisionResetCharacters = { "PendingCollisionResetCharacters", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, PendingCollisionResetCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_PendingCollisionResetCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_PendingCollisionResetCharacters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_EjectionVolumes_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_EjectionVolumes_Inner = { "EjectionVolumes", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_EjectionVolumes_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_EjectionVolumes_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_EjectionVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_EjectionVolumes = { "EjectionVolumes", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, EjectionVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_EjectionVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_EjectionVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_ObstacleCheckInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_ObstacleCheckInterval = { "ObstacleCheckInterval", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, ObstacleCheckInterval), METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_ObstacleCheckInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_ObstacleCheckInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_RepMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_RepMove = { "RepMove", "OnRep_RepMove", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, RepMove), Z_Construct_UScriptStruct_FSBZWheeledVehicleReplicatedMovement, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_RepMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_RepMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_Seed = { "Seed", "OnRep_Seed", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, Seed), METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_Seed_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugSnapshots_Inner = { "DebugSnapshots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZDebugSnapshot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugSnapshots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugSnapshots = { "DebugSnapshots", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, DebugSnapshots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugSnapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugSnapshots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugLocation = { "DebugLocation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, DebugLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugServerLocations_Inner = { "DebugServerLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugServerLocations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicle" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugServerLocations = { "DebugServerLocations", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWheeledVehicle, DebugServerLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugServerLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugServerLocations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZWheeledVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnBeginStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnSplineEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnSplineLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnSplineEndReached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnPathEndReached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnBeginObstacle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OnEndObstacle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_RadioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_LightsCPDGraph_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_LightsCPDGraph_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_LightsCPDGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_ActiveLightsBitmask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_AnimationCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_VariationSetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_NavModifierComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_CollisionExtentShrinkFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DoorStatesPerType_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DoorStatesPerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_FXs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_FXs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_SplineFollowingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_Obstacles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_Obstacles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_CachedCoverPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_CachedCoverPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_bEjectCharactersWhenDriving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_EjectionCharacterVelocityFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_MaxEjectCharacterVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OverlappingEjectionAreaCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_OverlappingEjectionAreaCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_PendingCollisionResetCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_PendingCollisionResetCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_EjectionVolumes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_EjectionVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_ObstacleCheckInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_RepMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugSnapshots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugSnapshots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugServerLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWheeledVehicle_Statics::NewProp_DebugServerLocations,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZVehicleInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZWheeledVehicle, ISBZVehicleInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZWheeledVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZWheeledVehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZWheeledVehicle_Statics::ClassParams = {
		&ASBZWheeledVehicle::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZWheeledVehicle_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZWheeledVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWheeledVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZWheeledVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZWheeledVehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZWheeledVehicle, 2936350557);
	template<> STARBREEZE_API UClass* StaticClass<ASBZWheeledVehicle>()
	{
		return ASBZWheeledVehicle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZWheeledVehicle(Z_Construct_UClass_ASBZWheeledVehicle, &ASBZWheeledVehicle::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZWheeledVehicle"), false, nullptr, nullptr, nullptr);

	void ASBZWheeledVehicle::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_DoorStatesPerType(TEXT("DoorStatesPerType"));
		static const FName Name_RepMove(TEXT("RepMove"));
		static const FName Name_Seed(TEXT("Seed"));

		const bool bIsValid = true
			&& Name_DoorStatesPerType == ClassReps[(int32)ENetFields_Private::DoorStatesPerType].Property->GetFName()
			&& Name_RepMove == ClassReps[(int32)ENetFields_Private::RepMove].Property->GetFName()
			&& Name_Seed == ClassReps[(int32)ENetFields_Private::Seed].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZWheeledVehicle"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZWheeledVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
