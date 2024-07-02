// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDynamicPhysicsAudioComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDynamicPhysicsAudioComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDynamicPhysicsAudioComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSurfaceTypesConfig_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZDynamicPhysicsAudioComponent::execOnDisable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDisable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZDynamicPhysicsAudioComponent::execPlayImpactSound)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayImpactSound(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZDynamicPhysicsAudioComponent::execPlayRollingSound)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayRollingSound(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZDynamicPhysicsAudioComponent::execStopRollingSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRollingSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZDynamicPhysicsAudioComponent::execUpdateImpactVelocity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateImpactVelocity(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZDynamicPhysicsAudioComponent::execUpdateRollingVelocity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateRollingVelocity(Z_Param_Value);
		P_NATIVE_END;
	}
	void USBZDynamicPhysicsAudioComponent::StaticRegisterNativesUSBZDynamicPhysicsAudioComponent()
	{
		UClass* Class = USBZDynamicPhysicsAudioComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDisable", &USBZDynamicPhysicsAudioComponent::execOnDisable },
			{ "PlayImpactSound", &USBZDynamicPhysicsAudioComponent::execPlayImpactSound },
			{ "PlayRollingSound", &USBZDynamicPhysicsAudioComponent::execPlayRollingSound },
			{ "StopRollingSound", &USBZDynamicPhysicsAudioComponent::execStopRollingSound },
			{ "UpdateImpactVelocity", &USBZDynamicPhysicsAudioComponent::execUpdateImpactVelocity },
			{ "UpdateRollingVelocity", &USBZDynamicPhysicsAudioComponent::execUpdateRollingVelocity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_OnDisable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_OnDisable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_OnDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDynamicPhysicsAudioComponent, nullptr, "OnDisable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_OnDisable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_OnDisable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_OnDisable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_OnDisable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayImpactSound_Statics
	{
		struct SBZDynamicPhysicsAudioComponent_eventPlayImpactSound_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayImpactSound_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDynamicPhysicsAudioComponent_eventPlayImpactSound_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayImpactSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayImpactSound_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayImpactSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayImpactSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDynamicPhysicsAudioComponent, nullptr, "PlayImpactSound", nullptr, nullptr, sizeof(SBZDynamicPhysicsAudioComponent_eventPlayImpactSound_Parms), Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayImpactSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayImpactSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayImpactSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayImpactSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayImpactSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayImpactSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayRollingSound_Statics
	{
		struct SBZDynamicPhysicsAudioComponent_eventPlayRollingSound_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayRollingSound_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDynamicPhysicsAudioComponent_eventPlayRollingSound_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayRollingSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayRollingSound_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayRollingSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayRollingSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDynamicPhysicsAudioComponent, nullptr, "PlayRollingSound", nullptr, nullptr, sizeof(SBZDynamicPhysicsAudioComponent_eventPlayRollingSound_Parms), Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayRollingSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayRollingSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayRollingSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayRollingSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayRollingSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayRollingSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_StopRollingSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_StopRollingSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_StopRollingSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDynamicPhysicsAudioComponent, nullptr, "StopRollingSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_StopRollingSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_StopRollingSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_StopRollingSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_StopRollingSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateImpactVelocity_Statics
	{
		struct SBZDynamicPhysicsAudioComponent_eventUpdateImpactVelocity_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateImpactVelocity_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDynamicPhysicsAudioComponent_eventUpdateImpactVelocity_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateImpactVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateImpactVelocity_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateImpactVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateImpactVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDynamicPhysicsAudioComponent, nullptr, "UpdateImpactVelocity", nullptr, nullptr, sizeof(SBZDynamicPhysicsAudioComponent_eventUpdateImpactVelocity_Parms), Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateImpactVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateImpactVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateImpactVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateImpactVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateImpactVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateImpactVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateRollingVelocity_Statics
	{
		struct SBZDynamicPhysicsAudioComponent_eventUpdateRollingVelocity_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateRollingVelocity_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDynamicPhysicsAudioComponent_eventUpdateRollingVelocity_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateRollingVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateRollingVelocity_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateRollingVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateRollingVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDynamicPhysicsAudioComponent, nullptr, "UpdateRollingVelocity", nullptr, nullptr, sizeof(SBZDynamicPhysicsAudioComponent_eventUpdateRollingVelocity_Parms), Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateRollingVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateRollingVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateRollingVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateRollingVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateRollingVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateRollingVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_NoRegister()
	{
		return USBZDynamicPhysicsAudioComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingStartEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollingStartEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingStopEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollingStopEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingSpeedRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RollingSpeedRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactForceRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactForceRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRollingInterpolationTimeInMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartRollingInterpolationTimeInMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateRollingInterpolationTimeInMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateRollingInterpolationTimeInMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingSpeedThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollingSpeedThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactForceThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpactForceThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactForceMultiplicationValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpactForceMultiplicationValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingSpeedMultiplicationValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollingSpeedMultiplicationValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnedSurfaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnedSurfaceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_OnDisable, "OnDisable" }, // 4287935447
		{ &Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayImpactSound, "PlayImpactSound" }, // 3810558836
		{ &Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_PlayRollingSound, "PlayRollingSound" }, // 881476702
		{ &Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_StopRollingSound, "StopRollingSound" }, // 16971022
		{ &Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateImpactVelocity, "UpdateImpactVelocity" }, // 1948684625
		{ &Z_Construct_UFunction_USBZDynamicPhysicsAudioComponent_UpdateRollingVelocity, "UpdateRollingVelocity" }, // 260008613
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SBZDynamicPhysicsAudioComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RootComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDynamicPhysicsAudioComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RootComponent = { "RootComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, RootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingStartEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDynamicPhysicsAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingStartEvent = { "RollingStartEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, RollingStartEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingStartEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingStartEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingStopEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDynamicPhysicsAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingStopEvent = { "RollingStopEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, RollingStopEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingStopEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingStopEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDynamicPhysicsAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactEvent = { "ImpactEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, ImpactEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingSpeedRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDynamicPhysicsAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingSpeedRtpc = { "RollingSpeedRtpc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, RollingSpeedRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingSpeedRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingSpeedRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactForceRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDynamicPhysicsAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactForceRtpc = { "ImpactForceRtpc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, ImpactForceRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactForceRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactForceRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_StartRollingInterpolationTimeInMs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDynamicPhysicsAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_StartRollingInterpolationTimeInMs = { "StartRollingInterpolationTimeInMs", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, StartRollingInterpolationTimeInMs), METADATA_PARAMS(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_StartRollingInterpolationTimeInMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_StartRollingInterpolationTimeInMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_UpdateRollingInterpolationTimeInMs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDynamicPhysicsAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_UpdateRollingInterpolationTimeInMs = { "UpdateRollingInterpolationTimeInMs", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, UpdateRollingInterpolationTimeInMs), METADATA_PARAMS(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_UpdateRollingInterpolationTimeInMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_UpdateRollingInterpolationTimeInMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingSpeedThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDynamicPhysicsAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingSpeedThreshold = { "RollingSpeedThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, RollingSpeedThreshold), METADATA_PARAMS(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactForceThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDynamicPhysicsAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactForceThreshold = { "ImpactForceThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, ImpactForceThreshold), METADATA_PARAMS(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactForceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactForceThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactForceMultiplicationValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDynamicPhysicsAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactForceMultiplicationValue = { "ImpactForceMultiplicationValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, ImpactForceMultiplicationValue), METADATA_PARAMS(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactForceMultiplicationValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactForceMultiplicationValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingSpeedMultiplicationValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDynamicPhysicsAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingSpeedMultiplicationValue = { "RollingSpeedMultiplicationValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, RollingSpeedMultiplicationValue), METADATA_PARAMS(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingSpeedMultiplicationValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingSpeedMultiplicationValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_OwnedSurfaceType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDynamicPhysicsAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZDynamicPhysicsAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_OwnedSurfaceType = { "OwnedSurfaceType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDynamicPhysicsAudioComponent, OwnedSurfaceType), Z_Construct_UClass_USBZSurfaceTypesConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_OwnedSurfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_OwnedSurfaceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingStartEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingStopEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingSpeedRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactForceRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_StartRollingInterpolationTimeInMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_UpdateRollingInterpolationTimeInMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingSpeedThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactForceThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_ImpactForceMultiplicationValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_RollingSpeedMultiplicationValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::NewProp_OwnedSurfaceType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDynamicPhysicsAudioComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::ClassParams = {
		&USBZDynamicPhysicsAudioComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDynamicPhysicsAudioComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDynamicPhysicsAudioComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDynamicPhysicsAudioComponent, 1809873984);
	template<> STARBREEZE_API UClass* StaticClass<USBZDynamicPhysicsAudioComponent>()
	{
		return USBZDynamicPhysicsAudioComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDynamicPhysicsAudioComponent(Z_Construct_UClass_USBZDynamicPhysicsAudioComponent, &USBZDynamicPhysicsAudioComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDynamicPhysicsAudioComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDynamicPhysicsAudioComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
