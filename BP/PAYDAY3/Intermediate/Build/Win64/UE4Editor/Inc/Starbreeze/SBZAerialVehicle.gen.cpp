// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAerialVehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAerialVehicle() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAerialVehicle_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAerialVehicle();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleSpawnComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleSplineFollowingComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpline_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAerialVehicleDoor();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZAerialVehicleOnBeginStop__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZAerialVehicleOnStopped__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZAerialVehicleOnSplineEntered__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZAerialVehicleOnSplineLeft__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZAerialVehicleOnSplineEndReached__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZAerialVehicleOnPathEndReached__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZAerialVehicleOnStateEntered__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZAerialVehicleOnStateExit__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZAerialVehicleOnDoorStateChanged__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAerialVehicleAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAerialVehicleSplineFollowingComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAerialVehicleStateMachine_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAerialVehicle::execGetSpawnComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZVehicleSpawnComponent**)Z_Param__Result=P_THIS->GetSpawnComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAerialVehicle::execGetSplineFollowingComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZVehicleSplineFollowingComponent**)Z_Param__Result=P_THIS->GetSplineFollowingComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAerialVehicle::execGetVehicleSplineFollowingComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZVehicleSplineFollowingComponent**)Z_Param__Result=P_THIS->GetVehicleSplineFollowingComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAerialVehicle::execMulticast_SetDoorState)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetDoorState_Implementation(Z_Param_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAerialVehicle::execOnBeginStopCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginStopCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAerialVehicle::execOnPathEndReachedCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPathEndReachedCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAerialVehicle::execOnRep_DoorState)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_OldState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DoorState(Z_Param_OldState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAerialVehicle::execOnRep_RepMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RepMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAerialVehicle::execOnSplineEndReachedCallback)
	{
		P_GET_OBJECT(ASBZSpline,Z_Param_Spline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSplineEndReachedCallback(Z_Param_Spline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAerialVehicle::execOnSplineEnteredCallback)
	{
		P_GET_OBJECT(ASBZSpline,Z_Param_Spline);
		P_GET_UBOOL(Z_Param_bPathEntered);
		P_GET_UBOOL(Z_Param_bTeleportToPathStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSplineEnteredCallback(Z_Param_Spline,Z_Param_bPathEntered,Z_Param_bTeleportToPathStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAerialVehicle::execOnSplineLeftCallback)
	{
		P_GET_OBJECT(ASBZSpline,Z_Param_Spline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSplineLeftCallback(Z_Param_Spline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAerialVehicle::execOnStoppedCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStoppedCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAerialVehicle::execSetDoorOpen)
	{
		P_GET_ENUM(ESBZAerialVehicleDoor,Z_Param_Door);
		P_GET_UBOOL(Z_Param_bOpen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDoorOpen(ESBZAerialVehicleDoor(Z_Param_Door),Z_Param_bOpen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAerialVehicle::execSetDoorState)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDoorState(Z_Param_NewState);
		P_NATIVE_END;
	}
	static FName NAME_ASBZAerialVehicle_Multicast_SetDoorState = FName(TEXT("Multicast_SetDoorState"));
	void ASBZAerialVehicle::Multicast_SetDoorState(uint8 NewState)
	{
		SBZAerialVehicle_eventMulticast_SetDoorState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAerialVehicle_Multicast_SetDoorState),&Parms);
	}
	static FName NAME_ASBZAerialVehicle_ReceiveOnDoorStateChanged = FName(TEXT("ReceiveOnDoorStateChanged"));
	void ASBZAerialVehicle::ReceiveOnDoorStateChanged(ESBZAerialVehicleDoor Door, bool bIsDoorOpen)
	{
		SBZAerialVehicle_eventReceiveOnDoorStateChanged_Parms Parms;
		Parms.Door=Door;
		Parms.bIsDoorOpen=bIsDoorOpen ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAerialVehicle_ReceiveOnDoorStateChanged),&Parms);
	}
	void ASBZAerialVehicle::StaticRegisterNativesASBZAerialVehicle()
	{
		UClass* Class = ASBZAerialVehicle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpawnComponent", &ASBZAerialVehicle::execGetSpawnComponent },
			{ "GetSplineFollowingComponent", &ASBZAerialVehicle::execGetSplineFollowingComponent },
			{ "GetVehicleSplineFollowingComponent", &ASBZAerialVehicle::execGetVehicleSplineFollowingComponent },
			{ "Multicast_SetDoorState", &ASBZAerialVehicle::execMulticast_SetDoorState },
			{ "OnBeginStopCallback", &ASBZAerialVehicle::execOnBeginStopCallback },
			{ "OnPathEndReachedCallback", &ASBZAerialVehicle::execOnPathEndReachedCallback },
			{ "OnRep_DoorState", &ASBZAerialVehicle::execOnRep_DoorState },
			{ "OnRep_RepMove", &ASBZAerialVehicle::execOnRep_RepMove },
			{ "OnSplineEndReachedCallback", &ASBZAerialVehicle::execOnSplineEndReachedCallback },
			{ "OnSplineEnteredCallback", &ASBZAerialVehicle::execOnSplineEnteredCallback },
			{ "OnSplineLeftCallback", &ASBZAerialVehicle::execOnSplineLeftCallback },
			{ "OnStoppedCallback", &ASBZAerialVehicle::execOnStoppedCallback },
			{ "SetDoorOpen", &ASBZAerialVehicle::execSetDoorOpen },
			{ "SetDoorState", &ASBZAerialVehicle::execSetDoorState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAerialVehicle_GetSpawnComponent_Statics
	{
		struct SBZAerialVehicle_eventGetSpawnComponent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAerialVehicle_GetSpawnComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAerialVehicle_GetSpawnComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAerialVehicle_eventGetSpawnComponent_Parms, ReturnValue), Z_Construct_UClass_USBZVehicleSpawnComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAerialVehicle_GetSpawnComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_GetSpawnComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAerialVehicle_GetSpawnComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAerialVehicle_GetSpawnComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAerialVehicle_GetSpawnComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAerialVehicle_GetSpawnComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAerialVehicle, nullptr, "GetSpawnComponent", nullptr, nullptr, sizeof(SBZAerialVehicle_eventGetSpawnComponent_Parms), Z_Construct_UFunction_ASBZAerialVehicle_GetSpawnComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_GetSpawnComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAerialVehicle_GetSpawnComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_GetSpawnComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAerialVehicle_GetSpawnComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAerialVehicle_GetSpawnComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAerialVehicle_GetSplineFollowingComponent_Statics
	{
		struct SBZAerialVehicle_eventGetSplineFollowingComponent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAerialVehicle_GetSplineFollowingComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAerialVehicle_GetSplineFollowingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAerialVehicle_eventGetSplineFollowingComponent_Parms, ReturnValue), Z_Construct_UClass_USBZVehicleSplineFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAerialVehicle_GetSplineFollowingComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_GetSplineFollowingComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAerialVehicle_GetSplineFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAerialVehicle_GetSplineFollowingComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAerialVehicle_GetSplineFollowingComponent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Fix for true pure virtual functions not being implemented\n" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
		{ "ToolTip", "Fix for true pure virtual functions not being implemented" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAerialVehicle_GetSplineFollowingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAerialVehicle, nullptr, "GetSplineFollowingComponent", nullptr, nullptr, sizeof(SBZAerialVehicle_eventGetSplineFollowingComponent_Parms), Z_Construct_UFunction_ASBZAerialVehicle_GetSplineFollowingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_GetSplineFollowingComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAerialVehicle_GetSplineFollowingComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_GetSplineFollowingComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAerialVehicle_GetSplineFollowingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAerialVehicle_GetSplineFollowingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAerialVehicle_GetVehicleSplineFollowingComponent_Statics
	{
		struct SBZAerialVehicle_eventGetVehicleSplineFollowingComponent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAerialVehicle_GetVehicleSplineFollowingComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAerialVehicle_GetVehicleSplineFollowingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAerialVehicle_eventGetVehicleSplineFollowingComponent_Parms, ReturnValue), Z_Construct_UClass_USBZVehicleSplineFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAerialVehicle_GetVehicleSplineFollowingComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_GetVehicleSplineFollowingComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAerialVehicle_GetVehicleSplineFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAerialVehicle_GetVehicleSplineFollowingComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAerialVehicle_GetVehicleSplineFollowingComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAerialVehicle_GetVehicleSplineFollowingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAerialVehicle, nullptr, "GetVehicleSplineFollowingComponent", nullptr, nullptr, sizeof(SBZAerialVehicle_eventGetVehicleSplineFollowingComponent_Parms), Z_Construct_UFunction_ASBZAerialVehicle_GetVehicleSplineFollowingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_GetVehicleSplineFollowingComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAerialVehicle_GetVehicleSplineFollowingComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_GetVehicleSplineFollowingComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAerialVehicle_GetVehicleSplineFollowingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAerialVehicle_GetVehicleSplineFollowingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAerialVehicle_Multicast_SetDoorState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAerialVehicle_Multicast_SetDoorState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAerialVehicle_eventMulticast_SetDoorState_Parms, NewState), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAerialVehicle_Multicast_SetDoorState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAerialVehicle_Multicast_SetDoorState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAerialVehicle_Multicast_SetDoorState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAerialVehicle_Multicast_SetDoorState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAerialVehicle, nullptr, "Multicast_SetDoorState", nullptr, nullptr, sizeof(SBZAerialVehicle_eventMulticast_SetDoorState_Parms), Z_Construct_UFunction_ASBZAerialVehicle_Multicast_SetDoorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_Multicast_SetDoorState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAerialVehicle_Multicast_SetDoorState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_Multicast_SetDoorState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAerialVehicle_Multicast_SetDoorState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAerialVehicle_Multicast_SetDoorState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAerialVehicle_OnBeginStopCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAerialVehicle_OnBeginStopCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAerialVehicle_OnBeginStopCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAerialVehicle, nullptr, "OnBeginStopCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAerialVehicle_OnBeginStopCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_OnBeginStopCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAerialVehicle_OnBeginStopCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAerialVehicle_OnBeginStopCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAerialVehicle_OnPathEndReachedCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAerialVehicle_OnPathEndReachedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAerialVehicle_OnPathEndReachedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAerialVehicle, nullptr, "OnPathEndReachedCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAerialVehicle_OnPathEndReachedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_OnPathEndReachedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAerialVehicle_OnPathEndReachedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAerialVehicle_OnPathEndReachedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAerialVehicle_OnRep_DoorState_Statics
	{
		struct SBZAerialVehicle_eventOnRep_DoorState_Parms
		{
			uint8 OldState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAerialVehicle_OnRep_DoorState_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAerialVehicle_eventOnRep_DoorState_Parms, OldState), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAerialVehicle_OnRep_DoorState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAerialVehicle_OnRep_DoorState_Statics::NewProp_OldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAerialVehicle_OnRep_DoorState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAerialVehicle_OnRep_DoorState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAerialVehicle, nullptr, "OnRep_DoorState", nullptr, nullptr, sizeof(SBZAerialVehicle_eventOnRep_DoorState_Parms), Z_Construct_UFunction_ASBZAerialVehicle_OnRep_DoorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_OnRep_DoorState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAerialVehicle_OnRep_DoorState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_OnRep_DoorState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAerialVehicle_OnRep_DoorState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAerialVehicle_OnRep_DoorState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAerialVehicle_OnRep_RepMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAerialVehicle_OnRep_RepMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAerialVehicle_OnRep_RepMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAerialVehicle, nullptr, "OnRep_RepMove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAerialVehicle_OnRep_RepMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_OnRep_RepMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAerialVehicle_OnRep_RepMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAerialVehicle_OnRep_RepMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEndReachedCallback_Statics
	{
		struct SBZAerialVehicle_eventOnSplineEndReachedCallback_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEndReachedCallback_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAerialVehicle_eventOnSplineEndReachedCallback_Parms, Spline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEndReachedCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEndReachedCallback_Statics::NewProp_Spline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEndReachedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEndReachedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAerialVehicle, nullptr, "OnSplineEndReachedCallback", nullptr, nullptr, sizeof(SBZAerialVehicle_eventOnSplineEndReachedCallback_Parms), Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEndReachedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEndReachedCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEndReachedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEndReachedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEndReachedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEndReachedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics
	{
		struct SBZAerialVehicle_eventOnSplineEnteredCallback_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAerialVehicle_eventOnSplineEnteredCallback_Parms, Spline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics::NewProp_bPathEntered_SetBit(void* Obj)
	{
		((SBZAerialVehicle_eventOnSplineEnteredCallback_Parms*)Obj)->bPathEntered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics::NewProp_bPathEntered = { "bPathEntered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAerialVehicle_eventOnSplineEnteredCallback_Parms), &Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics::NewProp_bPathEntered_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics::NewProp_bTeleportToPathStart_SetBit(void* Obj)
	{
		((SBZAerialVehicle_eventOnSplineEnteredCallback_Parms*)Obj)->bTeleportToPathStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics::NewProp_bTeleportToPathStart = { "bTeleportToPathStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAerialVehicle_eventOnSplineEnteredCallback_Parms), &Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics::NewProp_bTeleportToPathStart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics::NewProp_bPathEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics::NewProp_bTeleportToPathStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAerialVehicle, nullptr, "OnSplineEnteredCallback", nullptr, nullptr, sizeof(SBZAerialVehicle_eventOnSplineEnteredCallback_Parms), Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAerialVehicle_OnSplineLeftCallback_Statics
	{
		struct SBZAerialVehicle_eventOnSplineLeftCallback_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAerialVehicle_OnSplineLeftCallback_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAerialVehicle_eventOnSplineLeftCallback_Parms, Spline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAerialVehicle_OnSplineLeftCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAerialVehicle_OnSplineLeftCallback_Statics::NewProp_Spline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAerialVehicle_OnSplineLeftCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAerialVehicle_OnSplineLeftCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAerialVehicle, nullptr, "OnSplineLeftCallback", nullptr, nullptr, sizeof(SBZAerialVehicle_eventOnSplineLeftCallback_Parms), Z_Construct_UFunction_ASBZAerialVehicle_OnSplineLeftCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_OnSplineLeftCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAerialVehicle_OnSplineLeftCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_OnSplineLeftCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAerialVehicle_OnSplineLeftCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAerialVehicle_OnSplineLeftCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAerialVehicle_OnStoppedCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAerialVehicle_OnStoppedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAerialVehicle_OnStoppedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAerialVehicle, nullptr, "OnStoppedCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAerialVehicle_OnStoppedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_OnStoppedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAerialVehicle_OnStoppedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAerialVehicle_OnStoppedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Door_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Door;
		static void NewProp_bIsDoorOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDoorOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged_Statics::NewProp_Door_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAerialVehicle_eventReceiveOnDoorStateChanged_Parms, Door), Z_Construct_UEnum_Starbreeze_ESBZAerialVehicleDoor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged_Statics::NewProp_bIsDoorOpen_SetBit(void* Obj)
	{
		((SBZAerialVehicle_eventReceiveOnDoorStateChanged_Parms*)Obj)->bIsDoorOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged_Statics::NewProp_bIsDoorOpen = { "bIsDoorOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAerialVehicle_eventReceiveOnDoorStateChanged_Parms), &Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged_Statics::NewProp_bIsDoorOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged_Statics::NewProp_Door_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged_Statics::NewProp_Door,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged_Statics::NewProp_bIsDoorOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAerialVehicle, nullptr, "ReceiveOnDoorStateChanged", nullptr, nullptr, sizeof(SBZAerialVehicle_eventReceiveOnDoorStateChanged_Parms), Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen_Statics
	{
		struct SBZAerialVehicle_eventSetDoorOpen_Parms
		{
			ESBZAerialVehicleDoor Door;
			bool bOpen;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Door_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Door;
		static void NewProp_bOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen_Statics::NewProp_Door_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAerialVehicle_eventSetDoorOpen_Parms, Door), Z_Construct_UEnum_Starbreeze_ESBZAerialVehicleDoor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen_Statics::NewProp_bOpen_SetBit(void* Obj)
	{
		((SBZAerialVehicle_eventSetDoorOpen_Parms*)Obj)->bOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen_Statics::NewProp_bOpen = { "bOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAerialVehicle_eventSetDoorOpen_Parms), &Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen_Statics::NewProp_bOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen_Statics::NewProp_Door_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen_Statics::NewProp_Door,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen_Statics::NewProp_bOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAerialVehicle, nullptr, "SetDoorOpen", nullptr, nullptr, sizeof(SBZAerialVehicle_eventSetDoorOpen_Parms), Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAerialVehicle_SetDoorState_Statics
	{
		struct SBZAerialVehicle_eventSetDoorState_Parms
		{
			uint8 NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAerialVehicle_SetDoorState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAerialVehicle_eventSetDoorState_Parms, NewState), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAerialVehicle_SetDoorState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAerialVehicle_SetDoorState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAerialVehicle_SetDoorState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAerialVehicle_SetDoorState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAerialVehicle, nullptr, "SetDoorState", nullptr, nullptr, sizeof(SBZAerialVehicle_eventSetDoorState_Parms), Z_Construct_UFunction_ASBZAerialVehicle_SetDoorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_SetDoorState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAerialVehicle_SetDoorState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAerialVehicle_SetDoorState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAerialVehicle_SetDoorState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAerialVehicle_SetDoorState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAerialVehicle_NoRegister()
	{
		return ASBZAerialVehicle::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAerialVehicle_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateEntered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateEntered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateExited_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateExited;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDoorStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDoorStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AerialVehicleAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AerialVehicleAudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineFollowingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineFollowingComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateMachine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoverStatePitchCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoverStatePitchCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoverStateYawCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoverStateYawCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoverStateRollCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoverStateRollCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DoorState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RepMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRollAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRollAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHoverYawAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHoverYawAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHoverRollAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHoverRollAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandingRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LandingRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLandingRotation_MetaData[];
#endif
		static void NewProp_bUseLandingRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLandingRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainRotorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MainRotorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TailRotorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TailRotorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RootName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActiveEngine_MetaData[];
#endif
		static void NewProp_bActiveEngine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActiveEngine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAerialVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAerialVehicle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAerialVehicle_GetSpawnComponent, "GetSpawnComponent" }, // 1711442187
		{ &Z_Construct_UFunction_ASBZAerialVehicle_GetSplineFollowingComponent, "GetSplineFollowingComponent" }, // 1195431140
		{ &Z_Construct_UFunction_ASBZAerialVehicle_GetVehicleSplineFollowingComponent, "GetVehicleSplineFollowingComponent" }, // 4061107398
		{ &Z_Construct_UFunction_ASBZAerialVehicle_Multicast_SetDoorState, "Multicast_SetDoorState" }, // 3269865526
		{ &Z_Construct_UFunction_ASBZAerialVehicle_OnBeginStopCallback, "OnBeginStopCallback" }, // 188581334
		{ &Z_Construct_UFunction_ASBZAerialVehicle_OnPathEndReachedCallback, "OnPathEndReachedCallback" }, // 21322055
		{ &Z_Construct_UFunction_ASBZAerialVehicle_OnRep_DoorState, "OnRep_DoorState" }, // 1445151797
		{ &Z_Construct_UFunction_ASBZAerialVehicle_OnRep_RepMove, "OnRep_RepMove" }, // 2461339918
		{ &Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEndReachedCallback, "OnSplineEndReachedCallback" }, // 3887373168
		{ &Z_Construct_UFunction_ASBZAerialVehicle_OnSplineEnteredCallback, "OnSplineEnteredCallback" }, // 1137285739
		{ &Z_Construct_UFunction_ASBZAerialVehicle_OnSplineLeftCallback, "OnSplineLeftCallback" }, // 87917505
		{ &Z_Construct_UFunction_ASBZAerialVehicle_OnStoppedCallback, "OnStoppedCallback" }, // 3740369065
		{ &Z_Construct_UFunction_ASBZAerialVehicle_ReceiveOnDoorStateChanged, "ReceiveOnDoorStateChanged" }, // 622049502
		{ &Z_Construct_UFunction_ASBZAerialVehicle_SetDoorOpen, "SetDoorOpen" }, // 2995915045
		{ &Z_Construct_UFunction_ASBZAerialVehicle_SetDoorState, "SetDoorState" }, // 566469681
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SBZAerialVehicle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnBeginStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnBeginStop = { "OnBeginStop", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, OnBeginStop), Z_Construct_UDelegateFunction_Starbreeze_SBZAerialVehicleOnBeginStop__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnBeginStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnBeginStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnStopped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnStopped = { "OnStopped", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, OnStopped), Z_Construct_UDelegateFunction_Starbreeze_SBZAerialVehicleOnStopped__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnStopped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnStopped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnSplineEntered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnSplineEntered = { "OnSplineEntered", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, OnSplineEntered), Z_Construct_UDelegateFunction_Starbreeze_SBZAerialVehicleOnSplineEntered__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnSplineEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnSplineEntered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnSplineLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnSplineLeft = { "OnSplineLeft", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, OnSplineLeft), Z_Construct_UDelegateFunction_Starbreeze_SBZAerialVehicleOnSplineLeft__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnSplineLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnSplineLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnSplineEndReached_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnSplineEndReached = { "OnSplineEndReached", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, OnSplineEndReached), Z_Construct_UDelegateFunction_Starbreeze_SBZAerialVehicleOnSplineEndReached__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnSplineEndReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnSplineEndReached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnPathEndReached_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnPathEndReached = { "OnPathEndReached", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, OnPathEndReached), Z_Construct_UDelegateFunction_Starbreeze_SBZAerialVehicleOnPathEndReached__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnPathEndReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnPathEndReached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnStateEntered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnStateEntered = { "OnStateEntered", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, OnStateEntered), Z_Construct_UDelegateFunction_Starbreeze_SBZAerialVehicleOnStateEntered__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnStateEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnStateEntered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnStateExited_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnStateExited = { "OnStateExited", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, OnStateExited), Z_Construct_UDelegateFunction_Starbreeze_SBZAerialVehicleOnStateExit__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnStateExited_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnStateExited_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnDoorStateChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnDoorStateChanged = { "OnDoorStateChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, OnDoorStateChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZAerialVehicleOnDoorStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnDoorStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnDoorStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_AerialVehicleAudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_AerialVehicleAudioComponent = { "AerialVehicleAudioComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, AerialVehicleAudioComponent), Z_Construct_UClass_USBZAerialVehicleAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_AerialVehicleAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_AerialVehicleAudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_SplineFollowingComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_SplineFollowingComponent = { "SplineFollowingComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, SplineFollowingComponent), Z_Construct_UClass_USBZAerialVehicleSplineFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_SplineFollowingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_SplineFollowingComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_StateMachine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_StateMachine = { "StateMachine", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, StateMachine), Z_Construct_UClass_USBZAerialVehicleStateMachine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_StateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_StateMachine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_HoverStatePitchCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_HoverStatePitchCurve = { "HoverStatePitchCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, HoverStatePitchCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_HoverStatePitchCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_HoverStatePitchCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_HoverStateYawCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_HoverStateYawCurve = { "HoverStateYawCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, HoverStateYawCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_HoverStateYawCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_HoverStateYawCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_HoverStateRollCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_HoverStateRollCurve = { "HoverStateRollCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, HoverStateRollCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_HoverStateRollCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_HoverStateRollCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_DoorState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_DoorState = { "DoorState", "OnRep_DoorState", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, DoorState), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_DoorState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_DoorState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_RepMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_RepMove = { "RepMove", "OnRep_RepMove", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, RepMove), Z_Construct_UScriptStruct_FSBZVehicleReplicatedMovementBase, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_RepMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_RepMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MaxRollAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MaxRollAngle = { "MaxRollAngle", nullptr, (EPropertyFlags)0x0040000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, MaxRollAngle), METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MaxRollAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MaxRollAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_PitchAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_PitchAngle = { "PitchAngle", nullptr, (EPropertyFlags)0x0040000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, PitchAngle), METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_PitchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_PitchAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MaxHoverYawAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MaxHoverYawAngle = { "MaxHoverYawAngle", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, MaxHoverYawAngle), METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MaxHoverYawAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MaxHoverYawAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MaxHoverRollAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MaxHoverRollAngle = { "MaxHoverRollAngle", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, MaxHoverRollAngle), METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MaxHoverRollAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MaxHoverRollAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_LandingRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_LandingRotation = { "LandingRotation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, LandingRotation), METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_LandingRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_LandingRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_bUseLandingRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_bUseLandingRotation_SetBit(void* Obj)
	{
		((ASBZAerialVehicle*)Obj)->bUseLandingRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_bUseLandingRotation = { "bUseLandingRotation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAerialVehicle), &Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_bUseLandingRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_bUseLandingRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_bUseLandingRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MainRotorName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MainRotorName = { "MainRotorName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, MainRotorName), METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MainRotorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MainRotorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_TailRotorName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_TailRotorName = { "TailRotorName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, TailRotorName), METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_TailRotorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_TailRotorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_RootName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_RootName = { "RootName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAerialVehicle, RootName), METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_RootName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_RootName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_bActiveEngine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicle" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicle.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_bActiveEngine_SetBit(void* Obj)
	{
		((ASBZAerialVehicle*)Obj)->bActiveEngine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_bActiveEngine = { "bActiveEngine", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAerialVehicle), &Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_bActiveEngine_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_bActiveEngine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_bActiveEngine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAerialVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnBeginStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnSplineEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnSplineLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnSplineEndReached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnPathEndReached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnStateEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnStateExited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_OnDoorStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_AerialVehicleAudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_SplineFollowingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_StateMachine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_HoverStatePitchCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_HoverStateYawCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_HoverStateRollCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_DoorState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_RepMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MaxRollAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_PitchAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MaxHoverYawAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MaxHoverRollAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_LandingRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_bUseLandingRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_MainRotorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_TailRotorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_RootName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAerialVehicle_Statics::NewProp_bActiveEngine,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZAerialVehicle_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZVehicleInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAerialVehicle, ISBZVehicleInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAerialVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAerialVehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAerialVehicle_Statics::ClassParams = {
		&ASBZAerialVehicle::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAerialVehicle_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAerialVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAerialVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAerialVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAerialVehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAerialVehicle, 2283077537);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAerialVehicle>()
	{
		return ASBZAerialVehicle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAerialVehicle(Z_Construct_UClass_ASBZAerialVehicle, &ASBZAerialVehicle::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAerialVehicle"), false, nullptr, nullptr, nullptr);

	void ASBZAerialVehicle::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_DoorState(TEXT("DoorState"));
		static const FName Name_RepMove(TEXT("RepMove"));
		static const FName Name_MaxRollAngle(TEXT("MaxRollAngle"));
		static const FName Name_PitchAngle(TEXT("PitchAngle"));

		const bool bIsValid = true
			&& Name_DoorState == ClassReps[(int32)ENetFields_Private::DoorState].Property->GetFName()
			&& Name_RepMove == ClassReps[(int32)ENetFields_Private::RepMove].Property->GetFName()
			&& Name_MaxRollAngle == ClassReps[(int32)ENetFields_Private::MaxRollAngle].Property->GetFName()
			&& Name_PitchAngle == ClassReps[(int32)ENetFields_Private::PitchAngle].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZAerialVehicle"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAerialVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
