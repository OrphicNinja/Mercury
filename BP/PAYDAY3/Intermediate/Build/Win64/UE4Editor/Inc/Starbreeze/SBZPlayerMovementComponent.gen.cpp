// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerMovementComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerMovementComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerMovementComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerMovementWeightAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZPlayerMovementComponent::execMulticast_SetWantToSprint)
	{
		P_GET_UBOOL(Z_Param_bInWantToSprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetWantToSprint_Implementation(Z_Param_bInWantToSprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerMovementComponent::execServer_SetWantToSprint)
	{
		P_GET_UBOOL(Z_Param_bInWantToSprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetWantToSprint_Validate(Z_Param_bInWantToSprint))
		{
			RPC_ValidateFailed(TEXT("Server_SetWantToSprint_Validate"));
			return;
		}
		P_THIS->Server_SetWantToSprint_Implementation(Z_Param_bInWantToSprint);
		P_NATIVE_END;
	}
	static FName NAME_USBZPlayerMovementComponent_Multicast_SetWantToSprint = FName(TEXT("Multicast_SetWantToSprint"));
	void USBZPlayerMovementComponent::Multicast_SetWantToSprint(bool bInWantToSprint)
	{
		SBZPlayerMovementComponent_eventMulticast_SetWantToSprint_Parms Parms;
		Parms.bInWantToSprint=bInWantToSprint ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerMovementComponent_Multicast_SetWantToSprint),&Parms);
	}
	static FName NAME_USBZPlayerMovementComponent_Server_SetWantToSprint = FName(TEXT("Server_SetWantToSprint"));
	void USBZPlayerMovementComponent::Server_SetWantToSprint(bool bInWantToSprint)
	{
		SBZPlayerMovementComponent_eventServer_SetWantToSprint_Parms Parms;
		Parms.bInWantToSprint=bInWantToSprint ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerMovementComponent_Server_SetWantToSprint),&Parms);
	}
	void USBZPlayerMovementComponent::StaticRegisterNativesUSBZPlayerMovementComponent()
	{
		UClass* Class = USBZPlayerMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetWantToSprint", &USBZPlayerMovementComponent::execMulticast_SetWantToSprint },
			{ "Server_SetWantToSprint", &USBZPlayerMovementComponent::execServer_SetWantToSprint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPlayerMovementComponent_Multicast_SetWantToSprint_Statics
	{
		static void NewProp_bInWantToSprint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInWantToSprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZPlayerMovementComponent_Multicast_SetWantToSprint_Statics::NewProp_bInWantToSprint_SetBit(void* Obj)
	{
		((SBZPlayerMovementComponent_eventMulticast_SetWantToSprint_Parms*)Obj)->bInWantToSprint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPlayerMovementComponent_Multicast_SetWantToSprint_Statics::NewProp_bInWantToSprint = { "bInWantToSprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerMovementComponent_eventMulticast_SetWantToSprint_Parms), &Z_Construct_UFunction_USBZPlayerMovementComponent_Multicast_SetWantToSprint_Statics::NewProp_bInWantToSprint_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerMovementComponent_Multicast_SetWantToSprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerMovementComponent_Multicast_SetWantToSprint_Statics::NewProp_bInWantToSprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerMovementComponent_Multicast_SetWantToSprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerMovementComponent_Multicast_SetWantToSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerMovementComponent, nullptr, "Multicast_SetWantToSprint", nullptr, nullptr, sizeof(SBZPlayerMovementComponent_eventMulticast_SetWantToSprint_Parms), Z_Construct_UFunction_USBZPlayerMovementComponent_Multicast_SetWantToSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerMovementComponent_Multicast_SetWantToSprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerMovementComponent_Multicast_SetWantToSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerMovementComponent_Multicast_SetWantToSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerMovementComponent_Multicast_SetWantToSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerMovementComponent_Multicast_SetWantToSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerMovementComponent_Server_SetWantToSprint_Statics
	{
		static void NewProp_bInWantToSprint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInWantToSprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZPlayerMovementComponent_Server_SetWantToSprint_Statics::NewProp_bInWantToSprint_SetBit(void* Obj)
	{
		((SBZPlayerMovementComponent_eventServer_SetWantToSprint_Parms*)Obj)->bInWantToSprint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPlayerMovementComponent_Server_SetWantToSprint_Statics::NewProp_bInWantToSprint = { "bInWantToSprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerMovementComponent_eventServer_SetWantToSprint_Parms), &Z_Construct_UFunction_USBZPlayerMovementComponent_Server_SetWantToSprint_Statics::NewProp_bInWantToSprint_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerMovementComponent_Server_SetWantToSprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerMovementComponent_Server_SetWantToSprint_Statics::NewProp_bInWantToSprint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerMovementComponent_Server_SetWantToSprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerMovementComponent_Server_SetWantToSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerMovementComponent, nullptr, "Server_SetWantToSprint", nullptr, nullptr, sizeof(SBZPlayerMovementComponent_eventServer_SetWantToSprint_Parms), Z_Construct_UFunction_USBZPlayerMovementComponent_Server_SetWantToSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerMovementComponent_Server_SetWantToSprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerMovementComponent_Server_SetWantToSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerMovementComponent_Server_SetWantToSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerMovementComponent_Server_SetWantToSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerMovementComponent_Server_SetWantToSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPlayerMovementComponent_NoRegister()
	{
		return USBZPlayerMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoComputeTrajectory_MetaData[];
#endif
		static void NewProp_bAutoComputeTrajectory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoComputeTrajectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoComputeTrajectoryInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoComputeTrajectoryInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeedToSprintAccelerating_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeedToSprintAccelerating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeedToSprintDecelerating_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeedToSprintDecelerating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngleToSprintAccelerating_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngleToSprintAccelerating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngleToSprintDecelerating_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngleToSprintDecelerating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimulationTimeStepForMovingObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSimulationTimeStepForMovingObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushActorMassMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PushActorMassMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushActorVelToImpulseModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PushActorVelToImpulseModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushActorVelToAngularImpulseModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PushActorVelToAngularImpulseModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovingObjectCollisionMinLaunchVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovingObjectCollisionMinLaunchVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovingObjectCollisionMaxLaunchVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovingObjectCollisionMaxLaunchVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovingObjectCollisionVelocityFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovingObjectCollisionVelocityFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovingObjectCapsuleInflation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovingObjectCapsuleInflation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLoadoutTierIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLoadoutTierIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeightAssetArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightAssetArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeightAssetArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeightAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillSprintModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkillSprintModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillWalkHumanShieldModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkillWalkHumanShieldModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPlayerMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPlayerMovementComponent_Multicast_SetWantToSprint, "Multicast_SetWantToSprint" }, // 3727626720
		{ &Z_Construct_UFunction_USBZPlayerMovementComponent_Server_SetWantToSprint, "Server_SetWantToSprint" }, // 623108059
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZPlayerMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_bAutoComputeTrajectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_bAutoComputeTrajectory_SetBit(void* Obj)
	{
		((USBZPlayerMovementComponent*)Obj)->bAutoComputeTrajectory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_bAutoComputeTrajectory = { "bAutoComputeTrajectory", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZPlayerMovementComponent), &Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_bAutoComputeTrajectory_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_bAutoComputeTrajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_bAutoComputeTrajectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_AutoComputeTrajectoryInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_AutoComputeTrajectoryInterval = { "AutoComputeTrajectoryInterval", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMovementComponent, AutoComputeTrajectoryInterval), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_AutoComputeTrajectoryInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_AutoComputeTrajectoryInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MinSpeedToSprintAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MinSpeedToSprintAccelerating = { "MinSpeedToSprintAccelerating", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMovementComponent, MinSpeedToSprintAccelerating), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MinSpeedToSprintAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MinSpeedToSprintAccelerating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MinSpeedToSprintDecelerating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MinSpeedToSprintDecelerating = { "MinSpeedToSprintDecelerating", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMovementComponent, MinSpeedToSprintDecelerating), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MinSpeedToSprintDecelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MinSpeedToSprintDecelerating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MaxAngleToSprintAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MaxAngleToSprintAccelerating = { "MaxAngleToSprintAccelerating", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMovementComponent, MaxAngleToSprintAccelerating), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MaxAngleToSprintAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MaxAngleToSprintAccelerating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MaxAngleToSprintDecelerating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MaxAngleToSprintDecelerating = { "MaxAngleToSprintDecelerating", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMovementComponent, MaxAngleToSprintDecelerating), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MaxAngleToSprintDecelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MaxAngleToSprintDecelerating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MaxSimulationTimeStepForMovingObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MaxSimulationTimeStepForMovingObject = { "MaxSimulationTimeStepForMovingObject", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMovementComponent, MaxSimulationTimeStepForMovingObject), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MaxSimulationTimeStepForMovingObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MaxSimulationTimeStepForMovingObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_PushActorMassMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_PushActorMassMultiplier = { "PushActorMassMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMovementComponent, PushActorMassMultiplier), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_PushActorMassMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_PushActorMassMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_PushActorVelToImpulseModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_PushActorVelToImpulseModifier = { "PushActorVelToImpulseModifier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMovementComponent, PushActorVelToImpulseModifier), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_PushActorVelToImpulseModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_PushActorVelToImpulseModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_PushActorVelToAngularImpulseModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_PushActorVelToAngularImpulseModifier = { "PushActorVelToAngularImpulseModifier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMovementComponent, PushActorVelToAngularImpulseModifier), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_PushActorVelToAngularImpulseModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_PushActorVelToAngularImpulseModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCollisionMinLaunchVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCollisionMinLaunchVelocity = { "MovingObjectCollisionMinLaunchVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMovementComponent, MovingObjectCollisionMinLaunchVelocity), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCollisionMinLaunchVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCollisionMinLaunchVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCollisionMaxLaunchVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCollisionMaxLaunchVelocity = { "MovingObjectCollisionMaxLaunchVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMovementComponent, MovingObjectCollisionMaxLaunchVelocity), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCollisionMaxLaunchVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCollisionMaxLaunchVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCollisionVelocityFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCollisionVelocityFactor = { "MovingObjectCollisionVelocityFactor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMovementComponent, MovingObjectCollisionVelocityFactor), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCollisionVelocityFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCollisionVelocityFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCapsuleInflation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCapsuleInflation = { "MovingObjectCapsuleInflation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMovementComponent, MovingObjectCapsuleInflation), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCapsuleInflation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCapsuleInflation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MinLoadoutTierIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MinLoadoutTierIndex = { "MinLoadoutTierIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMovementComponent, MinLoadoutTierIndex), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MinLoadoutTierIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MinLoadoutTierIndex_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_WeightAssetArray_Inner = { "WeightAssetArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZPlayerMovementWeightAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_WeightAssetArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_WeightAssetArray = { "WeightAssetArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMovementComponent, WeightAssetArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_WeightAssetArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_WeightAssetArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_WeightAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_WeightAsset = { "WeightAsset", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMovementComponent, WeightAsset), Z_Construct_UClass_USBZPlayerMovementWeightAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_WeightAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_WeightAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_SkillSprintModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_SkillSprintModifier = { "SkillSprintModifier", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMovementComponent, SkillSprintModifier), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_SkillSprintModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_SkillSprintModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_SkillWalkHumanShieldModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_SkillWalkHumanShieldModifier = { "SkillWalkHumanShieldModifier", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMovementComponent, SkillWalkHumanShieldModifier), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_SkillWalkHumanShieldModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_SkillWalkHumanShieldModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_bAutoComputeTrajectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_AutoComputeTrajectoryInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MinSpeedToSprintAccelerating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MinSpeedToSprintDecelerating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MaxAngleToSprintAccelerating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MaxAngleToSprintDecelerating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MaxSimulationTimeStepForMovingObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_PushActorMassMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_PushActorVelToImpulseModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_PushActorVelToAngularImpulseModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCollisionMinLaunchVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCollisionMaxLaunchVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCollisionVelocityFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MovingObjectCapsuleInflation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_MinLoadoutTierIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_WeightAssetArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_WeightAssetArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_WeightAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_SkillSprintModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMovementComponent_Statics::NewProp_SkillWalkHumanShieldModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerMovementComponent_Statics::ClassParams = {
		&USBZPlayerMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPlayerMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerMovementComponent, 585471654);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerMovementComponent>()
	{
		return USBZPlayerMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerMovementComponent(Z_Construct_UClass_USBZPlayerMovementComponent, &USBZPlayerMovementComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
