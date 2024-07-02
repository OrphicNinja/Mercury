// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSabotagableVehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSabotagableVehicle() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSabotagableVehicle_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSabotagableVehicle();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorState();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnVehicleSabotageChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnVehicleEscortChanged__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSabotagePoint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZSabotagableVehicle::execMulticast_SetEscortModeEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetEscortModeEnabled_Implementation(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSabotagableVehicle::execMulticast_SetRearDoorsState)
	{
		P_GET_ENUM(ESBZVehicleDoorState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetRearDoorsState_Implementation(ESBZVehicleDoorState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSabotagableVehicle::execOnEscortCapsuleBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEscortCapsuleBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSabotagableVehicle::execOnEscortCapsuleEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEscortCapsuleEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSabotagableVehicle::execOnPathEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPathEnded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSabotagableVehicle::execOnPlayerInsideTruckBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerInsideTruckBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSabotagableVehicle::execOnRep_EscortModeEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EscortModeEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSabotagableVehicle::execOnSabotaged)
	{
		P_GET_UBOOL(Z_Param_bWasSabotaged);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSabotaged(Z_Param_bWasSabotaged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSabotagableVehicle::execOnStartedFollowingSpline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartedFollowingSpline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSabotagableVehicle::execOnStopped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSabotagableVehicle::execSetEscortModeEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEscortModeEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSabotagableVehicle::execSetRearDoorsState)
	{
		P_GET_ENUM(ESBZVehicleDoorState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRearDoorsState(ESBZVehicleDoorState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSabotagableVehicle::execSpawnSabotagePoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnSabotagePoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSabotagableVehicle::execUpdateSabotageVehicle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSabotageVehicle();
		P_NATIVE_END;
	}
	static FName NAME_ASBZSabotagableVehicle_BP_OnEscortModeChanged = FName(TEXT("BP_OnEscortModeChanged"));
	void ASBZSabotagableVehicle::BP_OnEscortModeChanged(bool bEnabled, bool bDoCosmetics)
	{
		SBZSabotagableVehicle_eventBP_OnEscortModeChanged_Parms Parms;
		Parms.bEnabled=bEnabled ? true : false;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSabotagableVehicle_BP_OnEscortModeChanged),&Parms);
	}
	static FName NAME_ASBZSabotagableVehicle_BP_OnEscortSizePreplanningApplied = FName(TEXT("BP_OnEscortSizePreplanningApplied"));
	void ASBZSabotagableVehicle::BP_OnEscortSizePreplanningApplied()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZSabotagableVehicle_BP_OnEscortSizePreplanningApplied),NULL);
	}
	static FName NAME_ASBZSabotagableVehicle_BP_OnPlayersInEscortChanged = FName(TEXT("BP_OnPlayersInEscortChanged"));
	void ASBZSabotagableVehicle::BP_OnPlayersInEscortChanged(const int32 PlayersEscorting)
	{
		SBZSabotagableVehicle_eventBP_OnPlayersInEscortChanged_Parms Parms;
		Parms.PlayersEscorting=PlayersEscorting;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSabotagableVehicle_BP_OnPlayersInEscortChanged),&Parms);
	}
	static FName NAME_ASBZSabotagableVehicle_Multicast_SetEscortModeEnabled = FName(TEXT("Multicast_SetEscortModeEnabled"));
	void ASBZSabotagableVehicle::Multicast_SetEscortModeEnabled(bool bEnabled)
	{
		SBZSabotagableVehicle_eventMulticast_SetEscortModeEnabled_Parms Parms;
		Parms.bEnabled=bEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSabotagableVehicle_Multicast_SetEscortModeEnabled),&Parms);
	}
	static FName NAME_ASBZSabotagableVehicle_Multicast_SetRearDoorsState = FName(TEXT("Multicast_SetRearDoorsState"));
	void ASBZSabotagableVehicle::Multicast_SetRearDoorsState(ESBZVehicleDoorState NewState)
	{
		SBZSabotagableVehicle_eventMulticast_SetRearDoorsState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSabotagableVehicle_Multicast_SetRearDoorsState),&Parms);
	}
	void ASBZSabotagableVehicle::StaticRegisterNativesASBZSabotagableVehicle()
	{
		UClass* Class = ASBZSabotagableVehicle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetEscortModeEnabled", &ASBZSabotagableVehicle::execMulticast_SetEscortModeEnabled },
			{ "Multicast_SetRearDoorsState", &ASBZSabotagableVehicle::execMulticast_SetRearDoorsState },
			{ "OnEscortCapsuleBeginOverlap", &ASBZSabotagableVehicle::execOnEscortCapsuleBeginOverlap },
			{ "OnEscortCapsuleEndOverlap", &ASBZSabotagableVehicle::execOnEscortCapsuleEndOverlap },
			{ "OnPathEnded", &ASBZSabotagableVehicle::execOnPathEnded },
			{ "OnPlayerInsideTruckBeginOverlap", &ASBZSabotagableVehicle::execOnPlayerInsideTruckBeginOverlap },
			{ "OnRep_EscortModeEnabled", &ASBZSabotagableVehicle::execOnRep_EscortModeEnabled },
			{ "OnSabotaged", &ASBZSabotagableVehicle::execOnSabotaged },
			{ "OnStartedFollowingSpline", &ASBZSabotagableVehicle::execOnStartedFollowingSpline },
			{ "OnStopped", &ASBZSabotagableVehicle::execOnStopped },
			{ "SetEscortModeEnabled", &ASBZSabotagableVehicle::execSetEscortModeEnabled },
			{ "SetRearDoorsState", &ASBZSabotagableVehicle::execSetRearDoorsState },
			{ "SpawnSabotagePoint", &ASBZSabotagableVehicle::execSpawnSabotagePoint },
			{ "UpdateSabotageVehicle", &ASBZSabotagableVehicle::execUpdateSabotageVehicle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged_Statics
	{
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZSabotagableVehicle_eventBP_OnEscortModeChanged_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSabotagableVehicle_eventBP_OnEscortModeChanged_Parms), &Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZSabotagableVehicle_eventBP_OnEscortModeChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSabotagableVehicle_eventBP_OnEscortModeChanged_Parms), &Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSabotagableVehicle, nullptr, "BP_OnEscortModeChanged", nullptr, nullptr, sizeof(SBZSabotagableVehicle_eventBP_OnEscortModeChanged_Parms), Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortSizePreplanningApplied_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortSizePreplanningApplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortSizePreplanningApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSabotagableVehicle, nullptr, "BP_OnEscortSizePreplanningApplied", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortSizePreplanningApplied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortSizePreplanningApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortSizePreplanningApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortSizePreplanningApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnPlayersInEscortChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersEscorting_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayersEscorting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnPlayersInEscortChanged_Statics::NewProp_PlayersEscorting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnPlayersInEscortChanged_Statics::NewProp_PlayersEscorting = { "PlayersEscorting", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSabotagableVehicle_eventBP_OnPlayersInEscortChanged_Parms, PlayersEscorting), METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnPlayersInEscortChanged_Statics::NewProp_PlayersEscorting_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnPlayersInEscortChanged_Statics::NewProp_PlayersEscorting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnPlayersInEscortChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnPlayersInEscortChanged_Statics::NewProp_PlayersEscorting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnPlayersInEscortChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnPlayersInEscortChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSabotagableVehicle, nullptr, "BP_OnPlayersInEscortChanged", nullptr, nullptr, sizeof(SBZSabotagableVehicle_eventBP_OnPlayersInEscortChanged_Parms), Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnPlayersInEscortChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnPlayersInEscortChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnPlayersInEscortChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnPlayersInEscortChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnPlayersInEscortChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnPlayersInEscortChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetEscortModeEnabled_Statics
	{
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetEscortModeEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZSabotagableVehicle_eventMulticast_SetEscortModeEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetEscortModeEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSabotagableVehicle_eventMulticast_SetEscortModeEnabled_Parms), &Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetEscortModeEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetEscortModeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetEscortModeEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetEscortModeEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetEscortModeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSabotagableVehicle, nullptr, "Multicast_SetEscortModeEnabled", nullptr, nullptr, sizeof(SBZSabotagableVehicle_eventMulticast_SetEscortModeEnabled_Parms), Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetEscortModeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetEscortModeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetEscortModeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetEscortModeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetEscortModeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetEscortModeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetRearDoorsState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetRearDoorsState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetRearDoorsState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSabotagableVehicle_eventMulticast_SetRearDoorsState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetRearDoorsState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetRearDoorsState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetRearDoorsState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetRearDoorsState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetRearDoorsState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSabotagableVehicle, nullptr, "Multicast_SetRearDoorsState", nullptr, nullptr, sizeof(SBZSabotagableVehicle_eventMulticast_SetRearDoorsState_Parms), Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetRearDoorsState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetRearDoorsState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetRearDoorsState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetRearDoorsState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetRearDoorsState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetRearDoorsState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics
	{
		struct SBZSabotagableVehicle_eventOnEscortCapsuleBeginOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSabotagableVehicle_eventOnEscortCapsuleBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSabotagableVehicle_eventOnEscortCapsuleBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSabotagableVehicle_eventOnEscortCapsuleBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSabotagableVehicle_eventOnEscortCapsuleBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SBZSabotagableVehicle_eventOnEscortCapsuleBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSabotagableVehicle_eventOnEscortCapsuleBeginOverlap_Parms), &Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSabotagableVehicle_eventOnEscortCapsuleBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSabotagableVehicle, nullptr, "OnEscortCapsuleBeginOverlap", nullptr, nullptr, sizeof(SBZSabotagableVehicle_eventOnEscortCapsuleBeginOverlap_Parms), Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics
	{
		struct SBZSabotagableVehicle_eventOnEscortCapsuleEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSabotagableVehicle_eventOnEscortCapsuleEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSabotagableVehicle_eventOnEscortCapsuleEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSabotagableVehicle_eventOnEscortCapsuleEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSabotagableVehicle_eventOnEscortCapsuleEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSabotagableVehicle, nullptr, "OnEscortCapsuleEndOverlap", nullptr, nullptr, sizeof(SBZSabotagableVehicle_eventOnEscortCapsuleEndOverlap_Parms), Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSabotagableVehicle_OnPathEnded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_OnPathEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnPathEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSabotagableVehicle, nullptr, "OnPathEnded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_OnPathEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnPathEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSabotagableVehicle_OnPathEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSabotagableVehicle_OnPathEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics
	{
		struct SBZSabotagableVehicle_eventOnPlayerInsideTruckBeginOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSabotagableVehicle_eventOnPlayerInsideTruckBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSabotagableVehicle_eventOnPlayerInsideTruckBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSabotagableVehicle_eventOnPlayerInsideTruckBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSabotagableVehicle_eventOnPlayerInsideTruckBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SBZSabotagableVehicle_eventOnPlayerInsideTruckBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSabotagableVehicle_eventOnPlayerInsideTruckBeginOverlap_Parms), &Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSabotagableVehicle_eventOnPlayerInsideTruckBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSabotagableVehicle, nullptr, "OnPlayerInsideTruckBeginOverlap", nullptr, nullptr, sizeof(SBZSabotagableVehicle_eventOnPlayerInsideTruckBeginOverlap_Parms), Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSabotagableVehicle_OnRep_EscortModeEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_OnRep_EscortModeEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnRep_EscortModeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSabotagableVehicle, nullptr, "OnRep_EscortModeEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_OnRep_EscortModeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnRep_EscortModeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSabotagableVehicle_OnRep_EscortModeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSabotagableVehicle_OnRep_EscortModeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSabotagableVehicle_OnSabotaged_Statics
	{
		struct SBZSabotagableVehicle_eventOnSabotaged_Parms
		{
			bool bWasSabotaged;
		};
		static void NewProp_bWasSabotaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSabotaged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZSabotagableVehicle_OnSabotaged_Statics::NewProp_bWasSabotaged_SetBit(void* Obj)
	{
		((SBZSabotagableVehicle_eventOnSabotaged_Parms*)Obj)->bWasSabotaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnSabotaged_Statics::NewProp_bWasSabotaged = { "bWasSabotaged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSabotagableVehicle_eventOnSabotaged_Parms), &Z_Construct_UFunction_ASBZSabotagableVehicle_OnSabotaged_Statics::NewProp_bWasSabotaged_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSabotagableVehicle_OnSabotaged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_OnSabotaged_Statics::NewProp_bWasSabotaged,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_OnSabotaged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnSabotaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSabotagableVehicle, nullptr, "OnSabotaged", nullptr, nullptr, sizeof(SBZSabotagableVehicle_eventOnSabotaged_Parms), Z_Construct_UFunction_ASBZSabotagableVehicle_OnSabotaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnSabotaged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_OnSabotaged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnSabotaged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSabotagableVehicle_OnSabotaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSabotagableVehicle_OnSabotaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSabotagableVehicle_OnStartedFollowingSpline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_OnStartedFollowingSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnStartedFollowingSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSabotagableVehicle, nullptr, "OnStartedFollowingSpline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_OnStartedFollowingSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnStartedFollowingSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSabotagableVehicle_OnStartedFollowingSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSabotagableVehicle_OnStartedFollowingSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSabotagableVehicle_OnStopped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_OnStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSabotagableVehicle_OnStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSabotagableVehicle, nullptr, "OnStopped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_OnStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_OnStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSabotagableVehicle_OnStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSabotagableVehicle_OnStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSabotagableVehicle_SetEscortModeEnabled_Statics
	{
		struct SBZSabotagableVehicle_eventSetEscortModeEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZSabotagableVehicle_SetEscortModeEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZSabotagableVehicle_eventSetEscortModeEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_SetEscortModeEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSabotagableVehicle_eventSetEscortModeEnabled_Parms), &Z_Construct_UFunction_ASBZSabotagableVehicle_SetEscortModeEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSabotagableVehicle_SetEscortModeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_SetEscortModeEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_SetEscortModeEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSabotagableVehicle_SetEscortModeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSabotagableVehicle, nullptr, "SetEscortModeEnabled", nullptr, nullptr, sizeof(SBZSabotagableVehicle_eventSetEscortModeEnabled_Parms), Z_Construct_UFunction_ASBZSabotagableVehicle_SetEscortModeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_SetEscortModeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_SetEscortModeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_SetEscortModeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSabotagableVehicle_SetEscortModeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSabotagableVehicle_SetEscortModeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSabotagableVehicle_SetRearDoorsState_Statics
	{
		struct SBZSabotagableVehicle_eventSetRearDoorsState_Parms
		{
			ESBZVehicleDoorState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_SetRearDoorsState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZSabotagableVehicle_SetRearDoorsState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSabotagableVehicle_eventSetRearDoorsState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSabotagableVehicle_SetRearDoorsState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_SetRearDoorsState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSabotagableVehicle_SetRearDoorsState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_SetRearDoorsState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSabotagableVehicle_SetRearDoorsState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSabotagableVehicle, nullptr, "SetRearDoorsState", nullptr, nullptr, sizeof(SBZSabotagableVehicle_eventSetRearDoorsState_Parms), Z_Construct_UFunction_ASBZSabotagableVehicle_SetRearDoorsState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_SetRearDoorsState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_SetRearDoorsState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_SetRearDoorsState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSabotagableVehicle_SetRearDoorsState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSabotagableVehicle_SetRearDoorsState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSabotagableVehicle_SpawnSabotagePoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_SpawnSabotagePoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSabotagableVehicle_SpawnSabotagePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSabotagableVehicle, nullptr, "SpawnSabotagePoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_SpawnSabotagePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_SpawnSabotagePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSabotagableVehicle_SpawnSabotagePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSabotagableVehicle_SpawnSabotagePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSabotagableVehicle_UpdateSabotageVehicle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSabotagableVehicle_UpdateSabotageVehicle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSabotagableVehicle_UpdateSabotageVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSabotagableVehicle, nullptr, "UpdateSabotageVehicle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSabotagableVehicle_UpdateSabotageVehicle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSabotagableVehicle_UpdateSabotageVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSabotagableVehicle_UpdateSabotageVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSabotagableVehicle_UpdateSabotageVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZSabotagableVehicle_NoRegister()
	{
		return ASBZSabotagableVehicle::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSabotagableVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnVehicleSabotageChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVehicleSabotageChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnVehicleEscortChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVehicleEscortChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SabotagePointClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SabotagePointClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovingNavModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovingNavModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SabotageAreaOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SabotageAreaOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SabotagePointInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SabotagePointInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscortCapsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EscortCapsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedPerPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedPerPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersOverlapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayersOverlapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEscortModeEnabled_MetaData[];
#endif
		static void NewProp_bEscortModeEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEscortModeEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartWithEscortModeEnabled_MetaData[];
#endif
		static void NewProp_bStartWithEscortModeEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartWithEscortModeEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscortSizePreplanningTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EscortSizePreplanningTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscortCapsulePreplanningRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EscortCapsulePreplanningRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscortCapsulePreplanningHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EscortCapsulePreplanningHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsideTruckVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InsideTruckVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsideTruckTeleportLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InsideTruckTeleportLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSabotagableVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZWheeledVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZSabotagableVehicle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortModeChanged, "BP_OnEscortModeChanged" }, // 2402682084
		{ &Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnEscortSizePreplanningApplied, "BP_OnEscortSizePreplanningApplied" }, // 1797018322
		{ &Z_Construct_UFunction_ASBZSabotagableVehicle_BP_OnPlayersInEscortChanged, "BP_OnPlayersInEscortChanged" }, // 387370969
		{ &Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetEscortModeEnabled, "Multicast_SetEscortModeEnabled" }, // 3882505530
		{ &Z_Construct_UFunction_ASBZSabotagableVehicle_Multicast_SetRearDoorsState, "Multicast_SetRearDoorsState" }, // 3262320382
		{ &Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleBeginOverlap, "OnEscortCapsuleBeginOverlap" }, // 3375299639
		{ &Z_Construct_UFunction_ASBZSabotagableVehicle_OnEscortCapsuleEndOverlap, "OnEscortCapsuleEndOverlap" }, // 3408417457
		{ &Z_Construct_UFunction_ASBZSabotagableVehicle_OnPathEnded, "OnPathEnded" }, // 515889459
		{ &Z_Construct_UFunction_ASBZSabotagableVehicle_OnPlayerInsideTruckBeginOverlap, "OnPlayerInsideTruckBeginOverlap" }, // 2184676123
		{ &Z_Construct_UFunction_ASBZSabotagableVehicle_OnRep_EscortModeEnabled, "OnRep_EscortModeEnabled" }, // 2089825661
		{ &Z_Construct_UFunction_ASBZSabotagableVehicle_OnSabotaged, "OnSabotaged" }, // 4188597641
		{ &Z_Construct_UFunction_ASBZSabotagableVehicle_OnStartedFollowingSpline, "OnStartedFollowingSpline" }, // 257523654
		{ &Z_Construct_UFunction_ASBZSabotagableVehicle_OnStopped, "OnStopped" }, // 3794902621
		{ &Z_Construct_UFunction_ASBZSabotagableVehicle_SetEscortModeEnabled, "SetEscortModeEnabled" }, // 1569210819
		{ &Z_Construct_UFunction_ASBZSabotagableVehicle_SetRearDoorsState, "SetRearDoorsState" }, // 938384584
		{ &Z_Construct_UFunction_ASBZSabotagableVehicle_SpawnSabotagePoint, "SpawnSabotagePoint" }, // 2108886571
		{ &Z_Construct_UFunction_ASBZSabotagableVehicle_UpdateSabotageVehicle, "UpdateSabotageVehicle" }, // 4075695214
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSabotagableVehicle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SBZSabotagableVehicle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_OnVehicleSabotageChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSabotagableVehicle" },
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_OnVehicleSabotageChanged = { "OnVehicleSabotageChanged", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSabotagableVehicle, OnVehicleSabotageChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnVehicleSabotageChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_OnVehicleSabotageChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_OnVehicleSabotageChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_OnVehicleEscortChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSabotagableVehicle" },
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_OnVehicleEscortChanged = { "OnVehicleEscortChanged", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSabotagableVehicle, OnVehicleEscortChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnVehicleEscortChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_OnVehicleEscortChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_OnVehicleEscortChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SabotagePointClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSabotagableVehicle" },
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SabotagePointClass = { "SabotagePointClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSabotagableVehicle, SabotagePointClass), Z_Construct_UClass_ASBZSabotagePoint_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SabotagePointClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SabotagePointClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_MovingNavModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSabotagableVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_MovingNavModifier = { "MovingNavModifier", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSabotagableVehicle, MovingNavModifier), Z_Construct_UClass_USBZPredefinedBoxNavModifierComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_MovingNavModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_MovingNavModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SabotageAreaOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSabotagableVehicle" },
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SabotageAreaOffset = { "SabotageAreaOffset", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSabotagableVehicle, SabotageAreaOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SabotageAreaOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SabotageAreaOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SabotagePointInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSabotagableVehicle" },
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SabotagePointInstance = { "SabotagePointInstance", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSabotagableVehicle, SabotagePointInstance), Z_Construct_UClass_ASBZSabotagePoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SabotagePointInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SabotagePointInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortCapsule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSabotagableVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortCapsule = { "EscortCapsule", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSabotagableVehicle, EscortCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortCapsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortCapsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SpeedPerPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSabotagableVehicle" },
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SpeedPerPlayer = { "SpeedPerPlayer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSabotagableVehicle, SpeedPerPlayer), METADATA_PARAMS(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SpeedPerPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SpeedPerPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_PlayersOverlapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSabotagableVehicle" },
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_PlayersOverlapping = { "PlayersOverlapping", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSabotagableVehicle, PlayersOverlapping), METADATA_PARAMS(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_PlayersOverlapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_PlayersOverlapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_bEscortModeEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSabotagableVehicle" },
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_bEscortModeEnabled_SetBit(void* Obj)
	{
		((ASBZSabotagableVehicle*)Obj)->bEscortModeEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_bEscortModeEnabled = { "bEscortModeEnabled", "OnRep_EscortModeEnabled", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSabotagableVehicle), &Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_bEscortModeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_bEscortModeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_bEscortModeEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_bStartWithEscortModeEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSabotagableVehicle" },
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_bStartWithEscortModeEnabled_SetBit(void* Obj)
	{
		((ASBZSabotagableVehicle*)Obj)->bStartWithEscortModeEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_bStartWithEscortModeEnabled = { "bStartWithEscortModeEnabled", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSabotagableVehicle), &Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_bStartWithEscortModeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_bStartWithEscortModeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_bStartWithEscortModeEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortSizePreplanningTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSabotagableVehicle" },
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortSizePreplanningTag = { "EscortSizePreplanningTag", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSabotagableVehicle, EscortSizePreplanningTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortSizePreplanningTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortSizePreplanningTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortCapsulePreplanningRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSabotagableVehicle" },
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortCapsulePreplanningRadius = { "EscortCapsulePreplanningRadius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSabotagableVehicle, EscortCapsulePreplanningRadius), METADATA_PARAMS(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortCapsulePreplanningRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortCapsulePreplanningRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortCapsulePreplanningHalfHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSabotagableVehicle" },
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortCapsulePreplanningHalfHeight = { "EscortCapsulePreplanningHalfHeight", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSabotagableVehicle, EscortCapsulePreplanningHalfHeight), METADATA_PARAMS(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortCapsulePreplanningHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortCapsulePreplanningHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_InsideTruckVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSabotagableVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_InsideTruckVolume = { "InsideTruckVolume", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSabotagableVehicle, InsideTruckVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_InsideTruckVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_InsideTruckVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_InsideTruckTeleportLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSabotagableVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSabotagableVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_InsideTruckTeleportLocation = { "InsideTruckTeleportLocation", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSabotagableVehicle, InsideTruckTeleportLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_InsideTruckTeleportLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_InsideTruckTeleportLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZSabotagableVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_OnVehicleSabotageChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_OnVehicleEscortChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SabotagePointClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_MovingNavModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SabotageAreaOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SabotagePointInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortCapsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_SpeedPerPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_PlayersOverlapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_bEscortModeEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_bStartWithEscortModeEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortSizePreplanningTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortCapsulePreplanningRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_EscortCapsulePreplanningHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_InsideTruckVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSabotagableVehicle_Statics::NewProp_InsideTruckTeleportLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSabotagableVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSabotagableVehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSabotagableVehicle_Statics::ClassParams = {
		&ASBZSabotagableVehicle::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZSabotagableVehicle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSabotagableVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSabotagableVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSabotagableVehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSabotagableVehicle, 1310870188);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSabotagableVehicle>()
	{
		return ASBZSabotagableVehicle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSabotagableVehicle(Z_Construct_UClass_ASBZSabotagableVehicle, &ASBZSabotagableVehicle::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSabotagableVehicle"), false, nullptr, nullptr, nullptr);

	void ASBZSabotagableVehicle::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bEscortModeEnabled(TEXT("bEscortModeEnabled"));

		const bool bIsValid = true
			&& Name_bEscortModeEnabled == ClassReps[(int32)ENetFields_Private::bEscortModeEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZSabotagableVehicle"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSabotagableVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
