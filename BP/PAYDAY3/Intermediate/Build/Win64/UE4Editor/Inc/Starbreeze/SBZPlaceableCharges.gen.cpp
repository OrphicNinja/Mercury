// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceableCharges.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceableCharges() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableCharges_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableCharges();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlaceableChargeState();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlaceableReachedTargetDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPlaceableCharges::execMulticast_Fall)
	{
		P_GET_STRUCT(FVector,Z_Param_InStartLocation);
		P_GET_STRUCT(FVector,Z_Param_InTargetLocation);
		P_GET_STRUCT(FQuat,Z_Param_InTargetQuat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_Fall_Implementation(Z_Param_InStartLocation,Z_Param_InTargetLocation,Z_Param_InTargetQuat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlaceableCharges::execMulticast_ReachedTargetLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_InTargetLocation);
		P_GET_STRUCT(FRotator,Z_Param_InTargetRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ReachedTargetLocation_Implementation(Z_Param_InTargetLocation,Z_Param_InTargetRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlaceableCharges::execMulticast_SetCharges)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewCharges);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetCharges_Implementation(Z_Param_NewCharges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlaceableCharges::execMulticast_SetPlaceableChargeState)
	{
		P_GET_ENUM(ESBZPlaceableChargeState,Z_Param_NewPlaceableChargeState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetPlaceableChargeState_Implementation(ESBZPlaceableChargeState(Z_Param_NewPlaceableChargeState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlaceableCharges::execMulticast_SpawnCloakerPlaceable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SpawnCloakerPlaceable_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlaceableCharges::execOnParentActorEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_OldAttachParentActor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnParentActorEndPlay(Z_Param_OldAttachParentActor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlaceableCharges::execOnRep_Charges)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OldCharges);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Charges(Z_Param_OldCharges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlaceableCharges::execOnRep_PlaceableChargeState)
	{
		P_GET_ENUM(ESBZPlaceableChargeState,Z_Param_OldPlaceableChargeState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlaceableChargeState(ESBZPlaceableChargeState(Z_Param_OldPlaceableChargeState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlaceableCharges::execOnServerCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerCompleteInteraction(Z_Param_InInteractable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlaceableCharges::execServer_SetPlaceableChargeState)
	{
		P_GET_ENUM(ESBZPlaceableChargeState,Z_Param_NewPlaceableChargeState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetPlaceableChargeState_Implementation(ESBZPlaceableChargeState(Z_Param_NewPlaceableChargeState));
		P_NATIVE_END;
	}
	static FName NAME_ASBZPlaceableCharges_Multicast_Fall = FName(TEXT("Multicast_Fall"));
	void ASBZPlaceableCharges::Multicast_Fall(FVector const& InStartLocation, FVector const& InTargetLocation, FQuat const& InTargetQuat)
	{
		SBZPlaceableCharges_eventMulticast_Fall_Parms Parms;
		Parms.InStartLocation=InStartLocation;
		Parms.InTargetLocation=InTargetLocation;
		Parms.InTargetQuat=InTargetQuat;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlaceableCharges_Multicast_Fall),&Parms);
	}
	static FName NAME_ASBZPlaceableCharges_Multicast_ReachedTargetLocation = FName(TEXT("Multicast_ReachedTargetLocation"));
	void ASBZPlaceableCharges::Multicast_ReachedTargetLocation(FVector const& InTargetLocation, FRotator const& InTargetRotation)
	{
		SBZPlaceableCharges_eventMulticast_ReachedTargetLocation_Parms Parms;
		Parms.InTargetLocation=InTargetLocation;
		Parms.InTargetRotation=InTargetRotation;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlaceableCharges_Multicast_ReachedTargetLocation),&Parms);
	}
	static FName NAME_ASBZPlaceableCharges_Multicast_SetCharges = FName(TEXT("Multicast_SetCharges"));
	void ASBZPlaceableCharges::Multicast_SetCharges(float NewCharges)
	{
		SBZPlaceableCharges_eventMulticast_SetCharges_Parms Parms;
		Parms.NewCharges=NewCharges;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlaceableCharges_Multicast_SetCharges),&Parms);
	}
	static FName NAME_ASBZPlaceableCharges_Multicast_SetPlaceableChargeState = FName(TEXT("Multicast_SetPlaceableChargeState"));
	void ASBZPlaceableCharges::Multicast_SetPlaceableChargeState(ESBZPlaceableChargeState NewPlaceableChargeState)
	{
		SBZPlaceableCharges_eventMulticast_SetPlaceableChargeState_Parms Parms;
		Parms.NewPlaceableChargeState=NewPlaceableChargeState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlaceableCharges_Multicast_SetPlaceableChargeState),&Parms);
	}
	static FName NAME_ASBZPlaceableCharges_Multicast_SpawnCloakerPlaceable = FName(TEXT("Multicast_SpawnCloakerPlaceable"));
	void ASBZPlaceableCharges::Multicast_SpawnCloakerPlaceable()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlaceableCharges_Multicast_SpawnCloakerPlaceable),NULL);
	}
	static FName NAME_ASBZPlaceableCharges_OnActivating = FName(TEXT("OnActivating"));
	void ASBZPlaceableCharges::OnActivating()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlaceableCharges_OnActivating),NULL);
	}
	static FName NAME_ASBZPlaceableCharges_OnCanceled = FName(TEXT("OnCanceled"));
	void ASBZPlaceableCharges::OnCanceled()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlaceableCharges_OnCanceled),NULL);
	}
	static FName NAME_ASBZPlaceableCharges_OnChargesChanged = FName(TEXT("OnChargesChanged"));
	void ASBZPlaceableCharges::OnChargesChanged(float ChargesChangeTo, bool bDoCosmetics)
	{
		SBZPlaceableCharges_eventOnChargesChanged_Parms Parms;
		Parms.ChargesChangeTo=ChargesChangeTo;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlaceableCharges_OnChargesChanged),&Parms);
	}
	static FName NAME_ASBZPlaceableCharges_OnPlaced = FName(TEXT("OnPlaced"));
	void ASBZPlaceableCharges::OnPlaced()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlaceableCharges_OnPlaced),NULL);
	}
	static FName NAME_ASBZPlaceableCharges_OnThrown = FName(TEXT("OnThrown"));
	void ASBZPlaceableCharges::OnThrown()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlaceableCharges_OnThrown),NULL);
	}
	static FName NAME_ASBZPlaceableCharges_Server_SetPlaceableChargeState = FName(TEXT("Server_SetPlaceableChargeState"));
	void ASBZPlaceableCharges::Server_SetPlaceableChargeState(ESBZPlaceableChargeState NewPlaceableChargeState)
	{
		SBZPlaceableCharges_eventServer_SetPlaceableChargeState_Parms Parms;
		Parms.NewPlaceableChargeState=NewPlaceableChargeState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlaceableCharges_Server_SetPlaceableChargeState),&Parms);
	}
	void ASBZPlaceableCharges::StaticRegisterNativesASBZPlaceableCharges()
	{
		UClass* Class = ASBZPlaceableCharges::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_Fall", &ASBZPlaceableCharges::execMulticast_Fall },
			{ "Multicast_ReachedTargetLocation", &ASBZPlaceableCharges::execMulticast_ReachedTargetLocation },
			{ "Multicast_SetCharges", &ASBZPlaceableCharges::execMulticast_SetCharges },
			{ "Multicast_SetPlaceableChargeState", &ASBZPlaceableCharges::execMulticast_SetPlaceableChargeState },
			{ "Multicast_SpawnCloakerPlaceable", &ASBZPlaceableCharges::execMulticast_SpawnCloakerPlaceable },
			{ "OnParentActorEndPlay", &ASBZPlaceableCharges::execOnParentActorEndPlay },
			{ "OnRep_Charges", &ASBZPlaceableCharges::execOnRep_Charges },
			{ "OnRep_PlaceableChargeState", &ASBZPlaceableCharges::execOnRep_PlaceableChargeState },
			{ "OnServerCompleteInteraction", &ASBZPlaceableCharges::execOnServerCompleteInteraction },
			{ "Server_SetPlaceableChargeState", &ASBZPlaceableCharges::execServer_SetPlaceableChargeState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InStartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTargetQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTargetQuat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::NewProp_InStartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::NewProp_InStartLocation = { "InStartLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlaceableCharges_eventMulticast_Fall_Parms, InStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::NewProp_InStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::NewProp_InStartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::NewProp_InTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::NewProp_InTargetLocation = { "InTargetLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlaceableCharges_eventMulticast_Fall_Parms, InTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::NewProp_InTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::NewProp_InTargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::NewProp_InTargetQuat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::NewProp_InTargetQuat = { "InTargetQuat", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlaceableCharges_eventMulticast_Fall_Parms, InTargetQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::NewProp_InTargetQuat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::NewProp_InTargetQuat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::NewProp_InStartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::NewProp_InTargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::NewProp_InTargetQuat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableCharges, nullptr, "Multicast_Fall", nullptr, nullptr, sizeof(SBZPlaceableCharges_eventMulticast_Fall_Parms), Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTargetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTargetRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetLocation = { "InTargetLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlaceableCharges_eventMulticast_ReachedTargetLocation_Parms, InTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetRotation = { "InTargetRotation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlaceableCharges_eventMulticast_ReachedTargetLocation_Parms, InTargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics::NewProp_InTargetRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableCharges, nullptr, "Multicast_ReachedTargetLocation", nullptr, nullptr, sizeof(SBZPlaceableCharges_eventMulticast_ReachedTargetLocation_Parms), Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetCharges_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewCharges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetCharges_Statics::NewProp_NewCharges = { "NewCharges", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlaceableCharges_eventMulticast_SetCharges_Parms, NewCharges), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetCharges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetCharges_Statics::NewProp_NewCharges,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetCharges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetCharges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableCharges, nullptr, "Multicast_SetCharges", nullptr, nullptr, sizeof(SBZPlaceableCharges_eventMulticast_SetCharges_Parms), Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetCharges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetCharges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetCharges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetCharges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetCharges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetCharges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetPlaceableChargeState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewPlaceableChargeState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewPlaceableChargeState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetPlaceableChargeState_Statics::NewProp_NewPlaceableChargeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetPlaceableChargeState_Statics::NewProp_NewPlaceableChargeState = { "NewPlaceableChargeState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlaceableCharges_eventMulticast_SetPlaceableChargeState_Parms, NewPlaceableChargeState), Z_Construct_UEnum_Starbreeze_ESBZPlaceableChargeState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetPlaceableChargeState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetPlaceableChargeState_Statics::NewProp_NewPlaceableChargeState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetPlaceableChargeState_Statics::NewProp_NewPlaceableChargeState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetPlaceableChargeState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetPlaceableChargeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableCharges, nullptr, "Multicast_SetPlaceableChargeState", nullptr, nullptr, sizeof(SBZPlaceableCharges_eventMulticast_SetPlaceableChargeState_Parms), Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetPlaceableChargeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetPlaceableChargeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetPlaceableChargeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetPlaceableChargeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetPlaceableChargeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetPlaceableChargeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SpawnCloakerPlaceable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SpawnCloakerPlaceable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SpawnCloakerPlaceable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableCharges, nullptr, "Multicast_SpawnCloakerPlaceable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SpawnCloakerPlaceable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SpawnCloakerPlaceable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SpawnCloakerPlaceable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SpawnCloakerPlaceable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlaceableCharges_OnActivating_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_OnActivating_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableCharges_OnActivating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableCharges, nullptr, "OnActivating", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_OnActivating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_OnActivating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableCharges_OnActivating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableCharges_OnActivating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlaceableCharges_OnCanceled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_OnCanceled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableCharges_OnCanceled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableCharges, nullptr, "OnCanceled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_OnCanceled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_OnCanceled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableCharges_OnCanceled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableCharges_OnCanceled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlaceableCharges_OnChargesChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChargesChangeTo;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_OnChargesChanged_Statics::NewProp_ChargesChangeTo = { "ChargesChangeTo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlaceableCharges_eventOnChargesChanged_Parms, ChargesChangeTo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZPlaceableCharges_OnChargesChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZPlaceableCharges_eventOnChargesChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_OnChargesChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlaceableCharges_eventOnChargesChanged_Parms), &Z_Construct_UFunction_ASBZPlaceableCharges_OnChargesChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlaceableCharges_OnChargesChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_OnChargesChanged_Statics::NewProp_ChargesChangeTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_OnChargesChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_OnChargesChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableCharges_OnChargesChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableCharges, nullptr, "OnChargesChanged", nullptr, nullptr, sizeof(SBZPlaceableCharges_eventOnChargesChanged_Parms), Z_Construct_UFunction_ASBZPlaceableCharges_OnChargesChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_OnChargesChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_OnChargesChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_OnChargesChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableCharges_OnChargesChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableCharges_OnChargesChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlaceableCharges_OnParentActorEndPlay_Statics
	{
		struct SBZPlaceableCharges_eventOnParentActorEndPlay_Parms
		{
			AActor* OldAttachParentActor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldAttachParentActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_OnParentActorEndPlay_Statics::NewProp_OldAttachParentActor = { "OldAttachParentActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlaceableCharges_eventOnParentActorEndPlay_Parms, OldAttachParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_OnParentActorEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlaceableCharges_eventOnParentActorEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlaceableCharges_OnParentActorEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_OnParentActorEndPlay_Statics::NewProp_OldAttachParentActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_OnParentActorEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_OnParentActorEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableCharges_OnParentActorEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableCharges, nullptr, "OnParentActorEndPlay", nullptr, nullptr, sizeof(SBZPlaceableCharges_eventOnParentActorEndPlay_Parms), Z_Construct_UFunction_ASBZPlaceableCharges_OnParentActorEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_OnParentActorEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_OnParentActorEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_OnParentActorEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableCharges_OnParentActorEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableCharges_OnParentActorEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlaceableCharges_OnPlaced_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_OnPlaced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableCharges_OnPlaced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableCharges, nullptr, "OnPlaced", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_OnPlaced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_OnPlaced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableCharges_OnPlaced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableCharges_OnPlaced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_Charges_Statics
	{
		struct SBZPlaceableCharges_eventOnRep_Charges_Parms
		{
			float OldCharges;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldCharges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_Charges_Statics::NewProp_OldCharges = { "OldCharges", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlaceableCharges_eventOnRep_Charges_Parms, OldCharges), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_Charges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_Charges_Statics::NewProp_OldCharges,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_Charges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_Charges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableCharges, nullptr, "OnRep_Charges", nullptr, nullptr, sizeof(SBZPlaceableCharges_eventOnRep_Charges_Parms), Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_Charges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_Charges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_Charges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_Charges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_Charges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_Charges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_PlaceableChargeState_Statics
	{
		struct SBZPlaceableCharges_eventOnRep_PlaceableChargeState_Parms
		{
			ESBZPlaceableChargeState OldPlaceableChargeState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldPlaceableChargeState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldPlaceableChargeState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_PlaceableChargeState_Statics::NewProp_OldPlaceableChargeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_PlaceableChargeState_Statics::NewProp_OldPlaceableChargeState = { "OldPlaceableChargeState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlaceableCharges_eventOnRep_PlaceableChargeState_Parms, OldPlaceableChargeState), Z_Construct_UEnum_Starbreeze_ESBZPlaceableChargeState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_PlaceableChargeState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_PlaceableChargeState_Statics::NewProp_OldPlaceableChargeState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_PlaceableChargeState_Statics::NewProp_OldPlaceableChargeState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_PlaceableChargeState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_PlaceableChargeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableCharges, nullptr, "OnRep_PlaceableChargeState", nullptr, nullptr, sizeof(SBZPlaceableCharges_eventOnRep_PlaceableChargeState_Parms), Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_PlaceableChargeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_PlaceableChargeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_PlaceableChargeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_PlaceableChargeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_PlaceableChargeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_PlaceableChargeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics
	{
		struct SBZPlaceableCharges_eventOnServerCompleteInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* Interactor;
			bool bIsLocallyControlledInteractor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledInteractor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlaceableCharges_eventOnServerCompleteInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlaceableCharges_eventOnServerCompleteInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZPlaceableCharges_eventOnServerCompleteInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlaceableCharges_eventOnServerCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableCharges, nullptr, "OnServerCompleteInteraction", nullptr, nullptr, sizeof(SBZPlaceableCharges_eventOnServerCompleteInteraction_Parms), Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlaceableCharges_OnThrown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_OnThrown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableCharges_OnThrown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableCharges, nullptr, "OnThrown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_OnThrown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_OnThrown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableCharges_OnThrown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableCharges_OnThrown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlaceableCharges_Server_SetPlaceableChargeState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewPlaceableChargeState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewPlaceableChargeState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_Server_SetPlaceableChargeState_Statics::NewProp_NewPlaceableChargeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPlaceableCharges_Server_SetPlaceableChargeState_Statics::NewProp_NewPlaceableChargeState = { "NewPlaceableChargeState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlaceableCharges_eventServer_SetPlaceableChargeState_Parms, NewPlaceableChargeState), Z_Construct_UEnum_Starbreeze_ESBZPlaceableChargeState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlaceableCharges_Server_SetPlaceableChargeState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_Server_SetPlaceableChargeState_Statics::NewProp_NewPlaceableChargeState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlaceableCharges_Server_SetPlaceableChargeState_Statics::NewProp_NewPlaceableChargeState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlaceableCharges_Server_SetPlaceableChargeState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlaceableCharges_Server_SetPlaceableChargeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlaceableCharges, nullptr, "Server_SetPlaceableChargeState", nullptr, nullptr, sizeof(SBZPlaceableCharges_eventServer_SetPlaceableChargeState_Parms), Z_Construct_UFunction_ASBZPlaceableCharges_Server_SetPlaceableChargeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_Server_SetPlaceableChargeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlaceableCharges_Server_SetPlaceableChargeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlaceableCharges_Server_SetPlaceableChargeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlaceableCharges_Server_SetPlaceableChargeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlaceableCharges_Server_SetPlaceableChargeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPlaceableCharges_NoRegister()
	{
		return ASBZPlaceableCharges::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlaceableCharges_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlaceableReachedTargetDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaceableReachedTargetDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialCharges_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialCharges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Charges_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Charges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresRelativeLocation_MetaData[];
#endif
		static void NewProp_bRequiresRelativeLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresRelativeLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutOfBoundsBoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutOfBoundsBoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloakerBMMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CloakerBMMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaceableChargeState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaceableChargeState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlaceableChargeState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacedVoiceComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlacedVoiceComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrewAIChatMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CrewAIChatMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAIPlaced_MetaData[];
#endif
		static void NewProp_bIsAIPlaced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAIPlaced;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshRelativeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshRelativeLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlaceableCharges_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlaceableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPlaceableCharges_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_Fall, "Multicast_Fall" }, // 1447540913
		{ &Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_ReachedTargetLocation, "Multicast_ReachedTargetLocation" }, // 531429288
		{ &Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetCharges, "Multicast_SetCharges" }, // 108667116
		{ &Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SetPlaceableChargeState, "Multicast_SetPlaceableChargeState" }, // 957040052
		{ &Z_Construct_UFunction_ASBZPlaceableCharges_Multicast_SpawnCloakerPlaceable, "Multicast_SpawnCloakerPlaceable" }, // 2203435847
		{ &Z_Construct_UFunction_ASBZPlaceableCharges_OnActivating, "OnActivating" }, // 2552068313
		{ &Z_Construct_UFunction_ASBZPlaceableCharges_OnCanceled, "OnCanceled" }, // 2587041294
		{ &Z_Construct_UFunction_ASBZPlaceableCharges_OnChargesChanged, "OnChargesChanged" }, // 4131626429
		{ &Z_Construct_UFunction_ASBZPlaceableCharges_OnParentActorEndPlay, "OnParentActorEndPlay" }, // 3208602787
		{ &Z_Construct_UFunction_ASBZPlaceableCharges_OnPlaced, "OnPlaced" }, // 2222712444
		{ &Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_Charges, "OnRep_Charges" }, // 947181666
		{ &Z_Construct_UFunction_ASBZPlaceableCharges_OnRep_PlaceableChargeState, "OnRep_PlaceableChargeState" }, // 1380237900
		{ &Z_Construct_UFunction_ASBZPlaceableCharges_OnServerCompleteInteraction, "OnServerCompleteInteraction" }, // 647621558
		{ &Z_Construct_UFunction_ASBZPlaceableCharges_OnThrown, "OnThrown" }, // 2968660569
		{ &Z_Construct_UFunction_ASBZPlaceableCharges_Server_SetPlaceableChargeState, "Server_SetPlaceableChargeState" }, // 406783634
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableCharges_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlaceableCharges.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_OnPlaceableReachedTargetDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableCharges" },
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_OnPlaceableReachedTargetDelegate = { "OnPlaceableReachedTargetDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableCharges, OnPlaceableReachedTargetDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlaceableReachedTargetDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_OnPlaceableReachedTargetDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_OnPlaceableReachedTargetDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_InitialCharges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableCharges" },
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_InitialCharges = { "InitialCharges", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableCharges, InitialCharges), METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_InitialCharges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_InitialCharges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_Charges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableCharges" },
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_Charges = { "Charges", "OnRep_Charges", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableCharges, Charges), METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_Charges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_Charges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_bRequiresRelativeLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableCharges" },
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_bRequiresRelativeLocation_SetBit(void* Obj)
	{
		((ASBZPlaceableCharges*)Obj)->bRequiresRelativeLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_bRequiresRelativeLocation = { "bRequiresRelativeLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlaceableCharges), &Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_bRequiresRelativeLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_bRequiresRelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_bRequiresRelativeLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableCharges" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableCharges, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_ProjectileMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_ProjectileMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableCharges" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableCharges, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_OutOfBoundsBoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableCharges" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_OutOfBoundsBoxComponent = { "OutOfBoundsBoxComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableCharges, OutOfBoundsBoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_OutOfBoundsBoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_OutOfBoundsBoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_CloakerBMMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableCharges" },
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_CloakerBMMessage = { "CloakerBMMessage", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableCharges, CloakerBMMessage), Z_Construct_UClass_AStaticMeshActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_CloakerBMMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_CloakerBMMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableCharges" },
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableCharges, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_TargetLocation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_PlaceableChargeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_PlaceableChargeState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableCharges" },
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_PlaceableChargeState = { "PlaceableChargeState", "OnRep_PlaceableChargeState", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableCharges, PlaceableChargeState), Z_Construct_UEnum_Starbreeze_ESBZPlaceableChargeState, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_PlaceableChargeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_PlaceableChargeState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_PlacedVoiceComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableCharges" },
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_PlacedVoiceComment = { "PlacedVoiceComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableCharges, PlacedVoiceComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_PlacedVoiceComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_PlacedVoiceComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_CrewAIChatMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableCharges" },
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_CrewAIChatMessage = { "CrewAIChatMessage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableCharges, CrewAIChatMessage), METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_CrewAIChatMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_CrewAIChatMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_bIsAIPlaced_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableCharges" },
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_bIsAIPlaced_SetBit(void* Obj)
	{
		((ASBZPlaceableCharges*)Obj)->bIsAIPlaced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_bIsAIPlaced = { "bIsAIPlaced", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlaceableCharges), &Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_bIsAIPlaced_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_bIsAIPlaced_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_bIsAIPlaced_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_MeshRelativeLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableCharges" },
		{ "ModuleRelativePath", "Public/SBZPlaceableCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_MeshRelativeLocation = { "MeshRelativeLocation", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlaceableCharges, MeshRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_MeshRelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_MeshRelativeLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPlaceableCharges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_OnPlaceableReachedTargetDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_InitialCharges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_Charges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_bRequiresRelativeLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_ProjectileMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_OutOfBoundsBoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_CloakerBMMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_PlaceableChargeState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_PlaceableChargeState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_PlacedVoiceComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_CrewAIChatMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_bIsAIPlaced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlaceableCharges_Statics::NewProp_MeshRelativeLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlaceableCharges_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlaceableCharges>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlaceableCharges_Statics::ClassParams = {
		&ASBZPlaceableCharges::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPlaceableCharges_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableCharges_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlaceableCharges_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlaceableCharges_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlaceableCharges()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlaceableCharges_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlaceableCharges, 3865509402);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlaceableCharges>()
	{
		return ASBZPlaceableCharges::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlaceableCharges(Z_Construct_UClass_ASBZPlaceableCharges, &ASBZPlaceableCharges::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlaceableCharges"), false, nullptr, nullptr, nullptr);

	void ASBZPlaceableCharges::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Charges(TEXT("Charges"));
		static const FName Name_TargetLocation(TEXT("TargetLocation"));
		static const FName Name_PlaceableChargeState(TEXT("PlaceableChargeState"));

		const bool bIsValid = true
			&& Name_Charges == ClassReps[(int32)ENetFields_Private::Charges].Property->GetFName()
			&& Name_TargetLocation == ClassReps[(int32)ENetFields_Private::TargetLocation].Property->GetFName()
			&& Name_PlaceableChargeState == ClassReps[(int32)ENetFields_Private::PlaceableChargeState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZPlaceableCharges"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlaceableCharges);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
