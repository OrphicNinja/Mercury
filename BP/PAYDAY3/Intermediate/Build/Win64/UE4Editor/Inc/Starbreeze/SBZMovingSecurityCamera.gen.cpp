// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMovingSecurityCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMovingSecurityCamera() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMovingSecurityCamera_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMovingSecurityCamera();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSecurityCamera();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpline_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZMovingSecurityCamera::execDisableMotionSensor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableMotionSensor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMovingSecurityCamera::execOnRep_ServerStartTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ServerStartTime();
		P_NATIVE_END;
	}
	void ASBZMovingSecurityCamera::StaticRegisterNativesASBZMovingSecurityCamera()
	{
		UClass* Class = ASBZMovingSecurityCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableMotionSensor", &ASBZMovingSecurityCamera::execDisableMotionSensor },
			{ "OnRep_ServerStartTime", &ASBZMovingSecurityCamera::execOnRep_ServerStartTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZMovingSecurityCamera_DisableMotionSensor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMovingSecurityCamera_DisableMotionSensor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMovingSecurityCamera_DisableMotionSensor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMovingSecurityCamera, nullptr, "DisableMotionSensor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMovingSecurityCamera_DisableMotionSensor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMovingSecurityCamera_DisableMotionSensor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMovingSecurityCamera_DisableMotionSensor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMovingSecurityCamera_DisableMotionSensor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMovingSecurityCamera_OnRep_ServerStartTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMovingSecurityCamera_OnRep_ServerStartTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMovingSecurityCamera_OnRep_ServerStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMovingSecurityCamera, nullptr, "OnRep_ServerStartTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMovingSecurityCamera_OnRep_ServerStartTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMovingSecurityCamera_OnRep_ServerStartTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMovingSecurityCamera_OnRep_ServerStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMovingSecurityCamera_OnRep_ServerStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZMovingSecurityCamera_NoRegister()
	{
		return ASBZMovingSecurityCamera::StaticClass();
	}
	struct Z_Construct_UClass_ASBZMovingSecurityCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Splines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Splines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Splines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_POIClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_POIClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_POIInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_POIInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraDebris_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CameraDebris;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebrisTransformSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebrisTransformSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnKill_MetaData[];
#endif
		static void NewProp_bDestroyOnKill_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnKill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChosenSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChosenSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceAlongSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceAlongSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplineDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAttachComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraAttachComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAttachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStealthDrone_MetaData[];
#endif
		static void NewProp_bIsStealthDrone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStealthDrone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScramblerStopTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScramblerStopTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebrisActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebrisActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZSecurityCamera,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZMovingSecurityCamera_DisableMotionSensor, "DisableMotionSensor" }, // 3339512848
		{ &Z_Construct_UFunction_ASBZMovingSecurityCamera_OnRep_ServerStartTime, "OnRep_ServerStartTime" }, // 1035706441
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SBZMovingSecurityCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_Splines_Inner = { "Splines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_Splines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMovingSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_Splines = { "Splines", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMovingSecurityCamera, Splines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_Splines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_Splines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMovingSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMovingSecurityCamera, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_POIClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMovingSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_POIClass = { "POIClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMovingSecurityCamera, POIClass), Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_POIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_POIClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_POIInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMovingSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_POIInstance = { "POIInstance", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMovingSecurityCamera, POIInstance), Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_POIInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_POIInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_CameraDebris_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMovingSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_CameraDebris = { "CameraDebris", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMovingSecurityCamera, CameraDebris), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_CameraDebris_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_CameraDebris_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_DebrisTransformSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMovingSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_DebrisTransformSelector = { "DebrisTransformSelector", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMovingSecurityCamera, DebrisTransformSelector), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_DebrisTransformSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_DebrisTransformSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_bDestroyOnKill_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMovingSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	void Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_bDestroyOnKill_SetBit(void* Obj)
	{
		((ASBZMovingSecurityCamera*)Obj)->bDestroyOnKill = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_bDestroyOnKill = { "bDestroyOnKill", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZMovingSecurityCamera), &Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_bDestroyOnKill_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_bDestroyOnKill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_bDestroyOnKill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_ChosenSpline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMovingSecurityCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_ChosenSpline = { "ChosenSpline", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMovingSecurityCamera, ChosenSpline), Z_Construct_UClass_USBZSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_ChosenSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_ChosenSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_DistanceAlongSpline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMovingSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_DistanceAlongSpline = { "DistanceAlongSpline", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMovingSecurityCamera, DistanceAlongSpline), METADATA_PARAMS(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_DistanceAlongSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_DistanceAlongSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_ServerStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMovingSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_ServerStartTime = { "ServerStartTime", "OnRep_ServerStartTime", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMovingSecurityCamera, ServerStartTime), METADATA_PARAMS(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_ServerStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_ServerStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMovingSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMovingSecurityCamera, Seed), METADATA_PARAMS(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_SplineDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMovingSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_SplineDistance = { "SplineDistance", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMovingSecurityCamera, SplineDistance), METADATA_PARAMS(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_SplineDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_SplineDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_CameraAttachComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMovingSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_CameraAttachComponent = { "CameraAttachComponent", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMovingSecurityCamera, CameraAttachComponent), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_CameraAttachComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_CameraAttachComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_CameraAttachment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMovingSecurityCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_CameraAttachment = { "CameraAttachment", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMovingSecurityCamera, CameraAttachment), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_CameraAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_CameraAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_bIsStealthDrone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMovingSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	void Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_bIsStealthDrone_SetBit(void* Obj)
	{
		((ASBZMovingSecurityCamera*)Obj)->bIsStealthDrone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_bIsStealthDrone = { "bIsStealthDrone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZMovingSecurityCamera), &Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_bIsStealthDrone_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_bIsStealthDrone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_bIsStealthDrone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_ScramblerStopTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMovingSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_ScramblerStopTime = { "ScramblerStopTime", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMovingSecurityCamera, ScramblerStopTime), METADATA_PARAMS(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_ScramblerStopTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_ScramblerStopTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_DebrisActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMovingSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZMovingSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_DebrisActor = { "DebrisActor", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMovingSecurityCamera, DebrisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_DebrisActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_DebrisActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_Splines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_Splines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_POIClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_POIInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_CameraDebris,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_DebrisTransformSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_bDestroyOnKill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_ChosenSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_DistanceAlongSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_ServerStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_SplineDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_CameraAttachComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_CameraAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_bIsStealthDrone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_ScramblerStopTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::NewProp_DebrisActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZMovingSecurityCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::ClassParams = {
		&ASBZMovingSecurityCamera::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZMovingSecurityCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZMovingSecurityCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZMovingSecurityCamera, 4227018862);
	template<> STARBREEZE_API UClass* StaticClass<ASBZMovingSecurityCamera>()
	{
		return ASBZMovingSecurityCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZMovingSecurityCamera(Z_Construct_UClass_ASBZMovingSecurityCamera, &ASBZMovingSecurityCamera::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZMovingSecurityCamera"), false, nullptr, nullptr, nullptr);

	void ASBZMovingSecurityCamera::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ServerStartTime(TEXT("ServerStartTime"));
		static const FName Name_ScramblerStopTime(TEXT("ScramblerStopTime"));

		const bool bIsValid = true
			&& Name_ServerStartTime == ClassReps[(int32)ENetFields_Private::ServerStartTime].Property->GetFName()
			&& Name_ScramblerStopTime == ClassReps[(int32)ENetFields_Private::ScramblerStopTime].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZMovingSecurityCamera"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZMovingSecurityCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
