// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgentPathFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgentPathFollowingComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgentPathFollowingComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgentPathFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterMovementComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIBaseCharacter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPedestrianTrafficNavLink_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void USBZAgentPathFollowingComponent::StaticRegisterNativesUSBZAgentPathFollowingComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZAgentPathFollowingComponent_NoRegister()
	{
		return USBZAgentPathFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFocalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathFocalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathViewFocalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathViewFocalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSplineSteering_MetaData[];
#endif
		static void NewProp_bUseSplineSteering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSplineSteering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawSpline_MetaData[];
#endif
		static void NewProp_bDebugDrawSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentMovementComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgentMovementComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgentCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathAccessibilityCheckInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathAccessibilityCheckInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistFromPathBeforeInvalidation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistFromPathBeforeInvalidation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSteeringDistanceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultSteeringDistanceOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrafficCrossingSteeringDistanceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrafficCrossingSteeringDistanceOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistFromTrafficSlotToAlign_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistFromTrafficSlotToAlign;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistFromLifeActionSlotToAlign_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistFromLifeActionSlotToAlign;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraversalSlowDownAngleRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraversalSlowDownAngleRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurTrafficNavLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurTrafficNavLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedCurrentNavAreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CachedCurrentNavAreaClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZAgentPathFollowingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentPathFollowingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_PathFocalDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZAgentPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_PathFocalDistance = { "PathFocalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgentPathFollowingComponent, PathFocalDistance), METADATA_PARAMS(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_PathFocalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_PathFocalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_PathViewFocalDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZAgentPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_PathViewFocalDistance = { "PathViewFocalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgentPathFollowingComponent, PathViewFocalDistance), METADATA_PARAMS(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_PathViewFocalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_PathViewFocalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_bUseSplineSteering_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZAgentPathFollowingComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_bUseSplineSteering_SetBit(void* Obj)
	{
		((USBZAgentPathFollowingComponent*)Obj)->bUseSplineSteering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_bUseSplineSteering = { "bUseSplineSteering", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAgentPathFollowingComponent), &Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_bUseSplineSteering_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_bUseSplineSteering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_bUseSplineSteering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_bDebugDrawSpline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZAgentPathFollowingComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_bDebugDrawSpline_SetBit(void* Obj)
	{
		((USBZAgentPathFollowingComponent*)Obj)->bDebugDrawSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_bDebugDrawSpline = { "bDebugDrawSpline", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAgentPathFollowingComponent), &Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_bDebugDrawSpline_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_bDebugDrawSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_bDebugDrawSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_AgentMovementComp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentPathFollowingComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_AgentMovementComp = { "AgentMovementComp", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgentPathFollowingComponent, AgentMovementComp), Z_Construct_UClass_USBZAICharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_AgentMovementComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_AgentMovementComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_AgentCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZAgentPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_AgentCharacter = { "AgentCharacter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgentPathFollowingComponent, AgentCharacter), Z_Construct_UClass_ASBZAIBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_AgentCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_AgentCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_PathAccessibilityCheckInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZAgentPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_PathAccessibilityCheckInterval = { "PathAccessibilityCheckInterval", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgentPathFollowingComponent, PathAccessibilityCheckInterval), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_PathAccessibilityCheckInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_PathAccessibilityCheckInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_MaxDistFromPathBeforeInvalidation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZAgentPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_MaxDistFromPathBeforeInvalidation = { "MaxDistFromPathBeforeInvalidation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgentPathFollowingComponent, MaxDistFromPathBeforeInvalidation), METADATA_PARAMS(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_MaxDistFromPathBeforeInvalidation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_MaxDistFromPathBeforeInvalidation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_DefaultSteeringDistanceOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZAgentPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_DefaultSteeringDistanceOffset = { "DefaultSteeringDistanceOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgentPathFollowingComponent, DefaultSteeringDistanceOffset), METADATA_PARAMS(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_DefaultSteeringDistanceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_DefaultSteeringDistanceOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_TrafficCrossingSteeringDistanceOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZAgentPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_TrafficCrossingSteeringDistanceOffset = { "TrafficCrossingSteeringDistanceOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgentPathFollowingComponent, TrafficCrossingSteeringDistanceOffset), METADATA_PARAMS(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_TrafficCrossingSteeringDistanceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_TrafficCrossingSteeringDistanceOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_MinDistFromTrafficSlotToAlign_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZAgentPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_MinDistFromTrafficSlotToAlign = { "MinDistFromTrafficSlotToAlign", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgentPathFollowingComponent, MinDistFromTrafficSlotToAlign), METADATA_PARAMS(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_MinDistFromTrafficSlotToAlign_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_MinDistFromTrafficSlotToAlign_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_MinDistFromLifeActionSlotToAlign_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZAgentPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_MinDistFromLifeActionSlotToAlign = { "MinDistFromLifeActionSlotToAlign", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgentPathFollowingComponent, MinDistFromLifeActionSlotToAlign), METADATA_PARAMS(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_MinDistFromLifeActionSlotToAlign_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_MinDistFromLifeActionSlotToAlign_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_TraversalSlowDownAngleRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZAgentPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_TraversalSlowDownAngleRange = { "TraversalSlowDownAngleRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgentPathFollowingComponent, TraversalSlowDownAngleRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_TraversalSlowDownAngleRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_TraversalSlowDownAngleRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_CurTrafficNavLink_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZAgentPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_CurTrafficNavLink = { "CurTrafficNavLink", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgentPathFollowingComponent, CurTrafficNavLink), Z_Construct_UClass_ASBZPedestrianTrafficNavLink_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_CurTrafficNavLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_CurTrafficNavLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_CachedCurrentNavAreaClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZAgentPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_CachedCurrentNavAreaClass = { "CachedCurrentNavAreaClass", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgentPathFollowingComponent, CachedCurrentNavAreaClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_CachedCurrentNavAreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_CachedCurrentNavAreaClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_PathFocalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_PathViewFocalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_bUseSplineSteering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_bDebugDrawSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_AgentMovementComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_AgentCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_PathAccessibilityCheckInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_MaxDistFromPathBeforeInvalidation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_DefaultSteeringDistanceOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_TrafficCrossingSteeringDistanceOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_MinDistFromTrafficSlotToAlign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_MinDistFromLifeActionSlotToAlign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_TraversalSlowDownAngleRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_CurTrafficNavLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::NewProp_CachedCurrentNavAreaClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAgentPathFollowingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::ClassParams = {
		&USBZAgentPathFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAgentPathFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAgentPathFollowingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAgentPathFollowingComponent, 3147624412);
	template<> STARBREEZE_API UClass* StaticClass<USBZAgentPathFollowingComponent>()
	{
		return USBZAgentPathFollowingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAgentPathFollowingComponent(Z_Construct_UClass_USBZAgentPathFollowingComponent, &USBZAgentPathFollowingComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAgentPathFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAgentPathFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
