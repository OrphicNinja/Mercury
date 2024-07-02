// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNavLinkAgilityComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNavLinkAgilityComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavLinkAgilityComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavLinkAgilityComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityTrajectory();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilityQueryParams_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilityObstacleInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZNavLinkAgilityComponent::execComputeTrajectories)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComputeTrajectories();
		P_NATIVE_END;
	}
	void USBZNavLinkAgilityComponent::StaticRegisterNativesUSBZNavLinkAgilityComponent()
	{
		UClass* Class = USBZNavLinkAgilityComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeTrajectories", &USBZNavLinkAgilityComponent::execComputeTrajectories },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZNavLinkAgilityComponent_ComputeTrajectories_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNavLinkAgilityComponent_ComputeTrajectories_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZNavLinkAgilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZNavLinkAgilityComponent_ComputeTrajectories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZNavLinkAgilityComponent, nullptr, "ComputeTrajectories", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZNavLinkAgilityComponent_ComputeTrajectories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNavLinkAgilityComponent_ComputeTrajectories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZNavLinkAgilityComponent_ComputeTrajectories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZNavLinkAgilityComponent_ComputeTrajectories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZNavLinkAgilityComponent_NoRegister()
	{
		return USBZNavLinkAgilityComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftTrajectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftTrajectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightTrajectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightTrajectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryParams;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LeftToRightType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftToRightType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LeftToRightType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RightToLeftType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightToLeftType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RightToLeftType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoredActorsByLeftTrajectory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoredActorsByLeftTrajectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoredActorsByLeftTrajectory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoredActorsByRightTrajectory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoredActorsByRightTrajectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoredActorsByRightTrajectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftToRightObstacle_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_LeftToRightObstacle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightToLeftObstacle_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_RightToLeftObstacle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseNavMesh_MetaData[];
#endif
		static void NewProp_bUseNavMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseNavMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedLeftTrajectoryMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForcedLeftTrajectoryMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeftUseAnimationToComputeEnd_MetaData[];
#endif
		static void NewProp_bLeftUseAnimationToComputeEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeftUseAnimationToComputeEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedRightTrajectoryMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForcedRightTrajectoryMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRightUseAnimationToComputeEnd_MetaData[];
#endif
		static void NewProp_bRightUseAnimationToComputeEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRightUseAnimationToComputeEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputeOnBeginPlay_MetaData[];
#endif
		static void NewProp_bComputeOnBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeOnBeginPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterfaceObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterfaceObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZNavLinkAgilityComponent_ComputeTrajectories, "ComputeTrajectories" }, // 1119767596
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZNavLinkAgilityComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNavLinkAgilityComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_LeftTrajectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkAgilityComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkAgilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_LeftTrajectory = { "LeftTrajectory", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNavLinkAgilityComponent, LeftTrajectory), Z_Construct_UScriptStruct_FSBZAgilityTrajectory, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_LeftTrajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_LeftTrajectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_RightTrajectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkAgilityComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkAgilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_RightTrajectory = { "RightTrajectory", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNavLinkAgilityComponent, RightTrajectory), Z_Construct_UScriptStruct_FSBZAgilityTrajectory, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_RightTrajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_RightTrajectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_QueryParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkAgilityComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkAgilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNavLinkAgilityComponent, QueryParams), Z_Construct_UClass_USBZAgilityQueryParams_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_QueryParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_QueryParams_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_LeftToRightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_LeftToRightType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkAgilityComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkAgilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_LeftToRightType = { "LeftToRightType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNavLinkAgilityComponent, LeftToRightType), Z_Construct_UEnum_Starbreeze_ESBZAgilityType, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_LeftToRightType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_LeftToRightType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_RightToLeftType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_RightToLeftType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkAgilityComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkAgilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_RightToLeftType = { "RightToLeftType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNavLinkAgilityComponent, RightToLeftType), Z_Construct_UEnum_Starbreeze_ESBZAgilityType, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_RightToLeftType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_RightToLeftType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_IgnoredActorsByLeftTrajectory_Inner = { "IgnoredActorsByLeftTrajectory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_IgnoredActorsByLeftTrajectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkAgilityComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkAgilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_IgnoredActorsByLeftTrajectory = { "IgnoredActorsByLeftTrajectory", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNavLinkAgilityComponent, IgnoredActorsByLeftTrajectory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_IgnoredActorsByLeftTrajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_IgnoredActorsByLeftTrajectory_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_IgnoredActorsByRightTrajectory_Inner = { "IgnoredActorsByRightTrajectory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_IgnoredActorsByRightTrajectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkAgilityComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkAgilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_IgnoredActorsByRightTrajectory = { "IgnoredActorsByRightTrajectory", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNavLinkAgilityComponent, IgnoredActorsByRightTrajectory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_IgnoredActorsByRightTrajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_IgnoredActorsByRightTrajectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_LeftToRightObstacle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkAgilityComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkAgilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_LeftToRightObstacle = { "LeftToRightObstacle", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNavLinkAgilityComponent, LeftToRightObstacle), Z_Construct_UClass_USBZAgilityObstacleInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_LeftToRightObstacle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_LeftToRightObstacle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_RightToLeftObstacle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkAgilityComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkAgilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_RightToLeftObstacle = { "RightToLeftObstacle", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNavLinkAgilityComponent, RightToLeftObstacle), Z_Construct_UClass_USBZAgilityObstacleInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_RightToLeftObstacle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_RightToLeftObstacle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bUseNavMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkAgilityComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkAgilityComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bUseNavMesh_SetBit(void* Obj)
	{
		((USBZNavLinkAgilityComponent*)Obj)->bUseNavMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bUseNavMesh = { "bUseNavMesh", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZNavLinkAgilityComponent), &Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bUseNavMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bUseNavMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bUseNavMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_ForcedLeftTrajectoryMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkAgilityComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkAgilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_ForcedLeftTrajectoryMontage = { "ForcedLeftTrajectoryMontage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNavLinkAgilityComponent, ForcedLeftTrajectoryMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_ForcedLeftTrajectoryMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_ForcedLeftTrajectoryMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bLeftUseAnimationToComputeEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkAgilityComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkAgilityComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bLeftUseAnimationToComputeEnd_SetBit(void* Obj)
	{
		((USBZNavLinkAgilityComponent*)Obj)->bLeftUseAnimationToComputeEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bLeftUseAnimationToComputeEnd = { "bLeftUseAnimationToComputeEnd", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZNavLinkAgilityComponent), &Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bLeftUseAnimationToComputeEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bLeftUseAnimationToComputeEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bLeftUseAnimationToComputeEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_ForcedRightTrajectoryMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkAgilityComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkAgilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_ForcedRightTrajectoryMontage = { "ForcedRightTrajectoryMontage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNavLinkAgilityComponent, ForcedRightTrajectoryMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_ForcedRightTrajectoryMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_ForcedRightTrajectoryMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bRightUseAnimationToComputeEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkAgilityComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkAgilityComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bRightUseAnimationToComputeEnd_SetBit(void* Obj)
	{
		((USBZNavLinkAgilityComponent*)Obj)->bRightUseAnimationToComputeEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bRightUseAnimationToComputeEnd = { "bRightUseAnimationToComputeEnd", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZNavLinkAgilityComponent), &Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bRightUseAnimationToComputeEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bRightUseAnimationToComputeEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bRightUseAnimationToComputeEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bComputeOnBeginPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkAgilityComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkAgilityComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bComputeOnBeginPlay_SetBit(void* Obj)
	{
		((USBZNavLinkAgilityComponent*)Obj)->bComputeOnBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bComputeOnBeginPlay = { "bComputeOnBeginPlay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZNavLinkAgilityComponent), &Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bComputeOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bComputeOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bComputeOnBeginPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_InterfaceObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkAgilityComponent" },
		{ "ModuleRelativePath", "Public/SBZNavLinkAgilityComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_InterfaceObject = { "InterfaceObject", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNavLinkAgilityComponent, InterfaceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_InterfaceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_InterfaceObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_LeftTrajectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_RightTrajectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_QueryParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_LeftToRightType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_LeftToRightType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_RightToLeftType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_RightToLeftType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_IgnoredActorsByLeftTrajectory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_IgnoredActorsByLeftTrajectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_IgnoredActorsByRightTrajectory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_IgnoredActorsByRightTrajectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_LeftToRightObstacle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_RightToLeftObstacle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bUseNavMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_ForcedLeftTrajectoryMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bLeftUseAnimationToComputeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_ForcedRightTrajectoryMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bRightUseAnimationToComputeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_bComputeOnBeginPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::NewProp_InterfaceObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZNavLinkAgilityComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::ClassParams = {
		&USBZNavLinkAgilityComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZNavLinkAgilityComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZNavLinkAgilityComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZNavLinkAgilityComponent, 1414382566);
	template<> STARBREEZE_API UClass* StaticClass<USBZNavLinkAgilityComponent>()
	{
		return USBZNavLinkAgilityComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZNavLinkAgilityComponent(Z_Construct_UClass_USBZNavLinkAgilityComponent, &USBZNavLinkAgilityComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZNavLinkAgilityComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZNavLinkAgilityComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
