// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICharacterMovementComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterMovementComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterMovementComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgentManager_NoRegister();
// End Cross Module References
	void USBZAICharacterMovementComponent::StaticRegisterNativesUSBZAICharacterMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZAICharacterMovementComponent_NoRegister()
	{
		return USBZAICharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAICharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgentManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAccelerationRunning_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAccelerationRunning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDecelerationWalking_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDecelerationWalking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSlowDownOnCurvedPath_MetaData[];
#endif
		static void NewProp_bSlowDownOnCurvedPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSlowDownOnCurvedPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRunSpeedOnCurvedPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRunSpeedOnCurvedPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathAngleForMinSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathAngleForMinSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanRunWhileFocusing_MetaData[];
#endif
		static void NewProp_bCanRunWhileFocusing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanRunWhileFocusing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanRunWhileStrafing_MetaData[];
#endif
		static void NewProp_bCanRunWhileStrafing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanRunWhileStrafing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanSprintWhileFocusing_MetaData[];
#endif
		static void NewProp_bCanSprintWhileFocusing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanSprintWhileFocusing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighbourCollisionInnerRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeighbourCollisionInnerRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighbourCollisionOuterRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeighbourCollisionOuterRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighbourCollisionHardCollisionFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeighbourCollisionHardCollisionFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighbourCollisionSoftCollisionFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeighbourCollisionSoftCollisionFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighbourCollisionMaxDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeighbourCollisionMaxDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeighbourCollisionEnabled_MetaData[];
#endif
		static void NewProp_bNeighbourCollisionEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeighbourCollisionEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStepHeightRootMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxStepHeightRootMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlowedSpeedReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlowedSpeedReduction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZAICharacterMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_AgentManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterMovementComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_AgentManager = { "AgentManager", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterMovementComponent, AgentManager), Z_Construct_UClass_USBZAgentManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_AgentManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_AgentManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxSprintSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxSprintSpeed = { "MaxSprintSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterMovementComponent, MaxSprintSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxSprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxSprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxAccelerationRunning_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxAccelerationRunning = { "MaxAccelerationRunning", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterMovementComponent, MaxAccelerationRunning), METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxAccelerationRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxAccelerationRunning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxDecelerationWalking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxDecelerationWalking = { "MaxDecelerationWalking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterMovementComponent, MaxDecelerationWalking), METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxDecelerationWalking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxDecelerationWalking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bSlowDownOnCurvedPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bSlowDownOnCurvedPath_SetBit(void* Obj)
	{
		((USBZAICharacterMovementComponent*)Obj)->bSlowDownOnCurvedPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bSlowDownOnCurvedPath = { "bSlowDownOnCurvedPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAICharacterMovementComponent), &Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bSlowDownOnCurvedPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bSlowDownOnCurvedPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bSlowDownOnCurvedPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MinRunSpeedOnCurvedPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MinRunSpeedOnCurvedPath = { "MinRunSpeedOnCurvedPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterMovementComponent, MinRunSpeedOnCurvedPath), METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MinRunSpeedOnCurvedPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MinRunSpeedOnCurvedPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_PathAngleForMinSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_PathAngleForMinSpeed = { "PathAngleForMinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterMovementComponent, PathAngleForMinSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_PathAngleForMinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_PathAngleForMinSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanRunWhileFocusing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanRunWhileFocusing_SetBit(void* Obj)
	{
		((USBZAICharacterMovementComponent*)Obj)->bCanRunWhileFocusing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanRunWhileFocusing = { "bCanRunWhileFocusing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAICharacterMovementComponent), &Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanRunWhileFocusing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanRunWhileFocusing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanRunWhileFocusing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanRunWhileStrafing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanRunWhileStrafing_SetBit(void* Obj)
	{
		((USBZAICharacterMovementComponent*)Obj)->bCanRunWhileStrafing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanRunWhileStrafing = { "bCanRunWhileStrafing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAICharacterMovementComponent), &Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanRunWhileStrafing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanRunWhileStrafing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanRunWhileStrafing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanSprintWhileFocusing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanSprintWhileFocusing_SetBit(void* Obj)
	{
		((USBZAICharacterMovementComponent*)Obj)->bCanSprintWhileFocusing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanSprintWhileFocusing = { "bCanSprintWhileFocusing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAICharacterMovementComponent), &Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanSprintWhileFocusing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanSprintWhileFocusing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanSprintWhileFocusing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionInnerRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionInnerRadius = { "NeighbourCollisionInnerRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterMovementComponent, NeighbourCollisionInnerRadius), METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionInnerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionInnerRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionOuterRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionOuterRadius = { "NeighbourCollisionOuterRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterMovementComponent, NeighbourCollisionOuterRadius), METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionOuterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionOuterRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionHardCollisionFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionHardCollisionFactor = { "NeighbourCollisionHardCollisionFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterMovementComponent, NeighbourCollisionHardCollisionFactor), METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionHardCollisionFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionHardCollisionFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionSoftCollisionFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionSoftCollisionFactor = { "NeighbourCollisionSoftCollisionFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterMovementComponent, NeighbourCollisionSoftCollisionFactor), METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionSoftCollisionFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionSoftCollisionFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionMaxDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionMaxDuration = { "NeighbourCollisionMaxDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterMovementComponent, NeighbourCollisionMaxDuration), METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionMaxDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionMaxDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bNeighbourCollisionEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bNeighbourCollisionEnabled_SetBit(void* Obj)
	{
		((USBZAICharacterMovementComponent*)Obj)->bNeighbourCollisionEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bNeighbourCollisionEnabled = { "bNeighbourCollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAICharacterMovementComponent), &Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bNeighbourCollisionEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bNeighbourCollisionEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bNeighbourCollisionEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxStepHeightRootMotion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxStepHeightRootMotion = { "MaxStepHeightRootMotion", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterMovementComponent, MaxStepHeightRootMotion), METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxStepHeightRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxStepHeightRootMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_SlowedSpeedReduction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZAICharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_SlowedSpeedReduction = { "SlowedSpeedReduction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterMovementComponent, SlowedSpeedReduction), METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_SlowedSpeedReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_SlowedSpeedReduction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_AgentManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxSprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxAccelerationRunning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxDecelerationWalking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bSlowDownOnCurvedPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MinRunSpeedOnCurvedPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_PathAngleForMinSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanRunWhileFocusing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanRunWhileStrafing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bCanSprintWhileFocusing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionInnerRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionOuterRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionHardCollisionFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionSoftCollisionFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_NeighbourCollisionMaxDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_bNeighbourCollisionEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_MaxStepHeightRootMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::NewProp_SlowedSpeedReduction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAICharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::ClassParams = {
		&USBZAICharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAICharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAICharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAICharacterMovementComponent, 2676701678);
	template<> STARBREEZE_API UClass* StaticClass<USBZAICharacterMovementComponent>()
	{
		return USBZAICharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAICharacterMovementComponent(Z_Construct_UClass_USBZAICharacterMovementComponent, &USBZAICharacterMovementComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAICharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAICharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
