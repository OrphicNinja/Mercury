// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVehicleAudioComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVehicleAudioComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleAudioComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleAudioComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAmbientSoundComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZVehicleAudioComponent::execDisableSounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableSounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleAudioComponent::execPlayBrakeSound)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BreakDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayBrakeSound(Z_Param_BreakDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleAudioComponent::execPlayEngineSound)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_EngineValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayEngineSound(Z_Param_EngineValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleAudioComponent::execPlayEngineSounds)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_EngineValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BladeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayEngineSounds(Z_Param_EngineValue,Z_Param_BladeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleAudioComponent::execPlayTireCollisionSounds)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CollisionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayTireCollisionSounds(Z_Param_CollisionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleAudioComponent::execPlayTyreFrictionSound)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_EngineValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayTyreFrictionSound(Z_Param_EngineValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleAudioComponent::execPlayVehicleCollisionSounds)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CollisionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayVehicleCollisionSounds(Z_Param_CollisionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleAudioComponent::execPlayVehicleHornSounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayVehicleHornSounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleAudioComponent::execPlayVehicleRadioSounds)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayVehicleRadioSounds(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleAudioComponent::execSetBodyCollisionImpact)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CollisionSpeedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBodyCollisionImpact(Z_Param_CollisionSpeedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleAudioComponent::execSetCarVehicleEngineSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_EngineValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCarVehicleEngineSpeed(Z_Param_EngineValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleAudioComponent::execSetHelicopterVehicleEngineSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_EngineValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BladeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHelicopterVehicleEngineSpeed(Z_Param_EngineValue,Z_Param_BladeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleAudioComponent::execSetTyreCollisionImpact)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CollisionSpeedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTyreCollisionImpact(Z_Param_CollisionSpeedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleAudioComponent::execSetTyreFriction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FrictionSpeedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTyreFriction(Z_Param_FrictionSpeedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleAudioComponent::execStopBrakeSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopBrakeSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleAudioComponent::execStopEngineSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopEngineSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleAudioComponent::execStopTyreFrictionSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopTyreFrictionSound();
		P_NATIVE_END;
	}
	void USBZVehicleAudioComponent::StaticRegisterNativesUSBZVehicleAudioComponent()
	{
		UClass* Class = USBZVehicleAudioComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableSounds", &USBZVehicleAudioComponent::execDisableSounds },
			{ "PlayBrakeSound", &USBZVehicleAudioComponent::execPlayBrakeSound },
			{ "PlayEngineSound", &USBZVehicleAudioComponent::execPlayEngineSound },
			{ "PlayEngineSounds", &USBZVehicleAudioComponent::execPlayEngineSounds },
			{ "PlayTireCollisionSounds", &USBZVehicleAudioComponent::execPlayTireCollisionSounds },
			{ "PlayTyreFrictionSound", &USBZVehicleAudioComponent::execPlayTyreFrictionSound },
			{ "PlayVehicleCollisionSounds", &USBZVehicleAudioComponent::execPlayVehicleCollisionSounds },
			{ "PlayVehicleHornSounds", &USBZVehicleAudioComponent::execPlayVehicleHornSounds },
			{ "PlayVehicleRadioSounds", &USBZVehicleAudioComponent::execPlayVehicleRadioSounds },
			{ "SetBodyCollisionImpact", &USBZVehicleAudioComponent::execSetBodyCollisionImpact },
			{ "SetCarVehicleEngineSpeed", &USBZVehicleAudioComponent::execSetCarVehicleEngineSpeed },
			{ "SetHelicopterVehicleEngineSpeed", &USBZVehicleAudioComponent::execSetHelicopterVehicleEngineSpeed },
			{ "SetTyreCollisionImpact", &USBZVehicleAudioComponent::execSetTyreCollisionImpact },
			{ "SetTyreFriction", &USBZVehicleAudioComponent::execSetTyreFriction },
			{ "StopBrakeSound", &USBZVehicleAudioComponent::execStopBrakeSound },
			{ "StopEngineSound", &USBZVehicleAudioComponent::execStopEngineSound },
			{ "StopTyreFrictionSound", &USBZVehicleAudioComponent::execStopTyreFrictionSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZVehicleAudioComponent_DisableSounds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAudioComponent_DisableSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAudioComponent_DisableSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAudioComponent, nullptr, "DisableSounds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAudioComponent_DisableSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_DisableSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAudioComponent_DisableSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAudioComponent_DisableSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleAudioComponent_PlayBrakeSound_Statics
	{
		struct SBZVehicleAudioComponent_eventPlayBrakeSound_Parms
		{
			float BreakDistance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BreakDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleAudioComponent_PlayBrakeSound_Statics::NewProp_BreakDistance = { "BreakDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleAudioComponent_eventPlayBrakeSound_Parms, BreakDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleAudioComponent_PlayBrakeSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleAudioComponent_PlayBrakeSound_Statics::NewProp_BreakDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAudioComponent_PlayBrakeSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAudioComponent_PlayBrakeSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAudioComponent, nullptr, "PlayBrakeSound", nullptr, nullptr, sizeof(SBZVehicleAudioComponent_eventPlayBrakeSound_Parms), Z_Construct_UFunction_USBZVehicleAudioComponent_PlayBrakeSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayBrakeSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayBrakeSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayBrakeSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAudioComponent_PlayBrakeSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAudioComponent_PlayBrakeSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSound_Statics
	{
		struct SBZVehicleAudioComponent_eventPlayEngineSound_Parms
		{
			float EngineValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EngineValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSound_Statics::NewProp_EngineValue = { "EngineValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleAudioComponent_eventPlayEngineSound_Parms, EngineValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSound_Statics::NewProp_EngineValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAudioComponent, nullptr, "PlayEngineSound", nullptr, nullptr, sizeof(SBZVehicleAudioComponent_eventPlayEngineSound_Parms), Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSounds_Statics
	{
		struct SBZVehicleAudioComponent_eventPlayEngineSounds_Parms
		{
			float EngineValue;
			float BladeValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EngineValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BladeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSounds_Statics::NewProp_EngineValue = { "EngineValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleAudioComponent_eventPlayEngineSounds_Parms, EngineValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSounds_Statics::NewProp_BladeValue = { "BladeValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleAudioComponent_eventPlayEngineSounds_Parms, BladeValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSounds_Statics::NewProp_EngineValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSounds_Statics::NewProp_BladeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAudioComponent, nullptr, "PlayEngineSounds", nullptr, nullptr, sizeof(SBZVehicleAudioComponent_eventPlayEngineSounds_Parms), Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTireCollisionSounds_Statics
	{
		struct SBZVehicleAudioComponent_eventPlayTireCollisionSounds_Parms
		{
			float CollisionValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTireCollisionSounds_Statics::NewProp_CollisionValue = { "CollisionValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleAudioComponent_eventPlayTireCollisionSounds_Parms, CollisionValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTireCollisionSounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTireCollisionSounds_Statics::NewProp_CollisionValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTireCollisionSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTireCollisionSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAudioComponent, nullptr, "PlayTireCollisionSounds", nullptr, nullptr, sizeof(SBZVehicleAudioComponent_eventPlayTireCollisionSounds_Parms), Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTireCollisionSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTireCollisionSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTireCollisionSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTireCollisionSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTireCollisionSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTireCollisionSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTyreFrictionSound_Statics
	{
		struct SBZVehicleAudioComponent_eventPlayTyreFrictionSound_Parms
		{
			float EngineValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EngineValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTyreFrictionSound_Statics::NewProp_EngineValue = { "EngineValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleAudioComponent_eventPlayTyreFrictionSound_Parms, EngineValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTyreFrictionSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTyreFrictionSound_Statics::NewProp_EngineValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTyreFrictionSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTyreFrictionSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAudioComponent, nullptr, "PlayTyreFrictionSound", nullptr, nullptr, sizeof(SBZVehicleAudioComponent_eventPlayTyreFrictionSound_Parms), Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTyreFrictionSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTyreFrictionSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTyreFrictionSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTyreFrictionSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTyreFrictionSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTyreFrictionSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleCollisionSounds_Statics
	{
		struct SBZVehicleAudioComponent_eventPlayVehicleCollisionSounds_Parms
		{
			float CollisionValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleCollisionSounds_Statics::NewProp_CollisionValue = { "CollisionValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleAudioComponent_eventPlayVehicleCollisionSounds_Parms, CollisionValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleCollisionSounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleCollisionSounds_Statics::NewProp_CollisionValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleCollisionSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleCollisionSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAudioComponent, nullptr, "PlayVehicleCollisionSounds", nullptr, nullptr, sizeof(SBZVehicleAudioComponent_eventPlayVehicleCollisionSounds_Parms), Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleCollisionSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleCollisionSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleCollisionSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleCollisionSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleCollisionSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleCollisionSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleHornSounds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleHornSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleHornSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAudioComponent, nullptr, "PlayVehicleHornSounds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleHornSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleHornSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleHornSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleHornSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleRadioSounds_Statics
	{
		struct SBZVehicleAudioComponent_eventPlayVehicleRadioSounds_Parms
		{
			bool bValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleRadioSounds_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SBZVehicleAudioComponent_eventPlayVehicleRadioSounds_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleRadioSounds_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVehicleAudioComponent_eventPlayVehicleRadioSounds_Parms), &Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleRadioSounds_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleRadioSounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleRadioSounds_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleRadioSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleRadioSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAudioComponent, nullptr, "PlayVehicleRadioSounds", nullptr, nullptr, sizeof(SBZVehicleAudioComponent_eventPlayVehicleRadioSounds_Parms), Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleRadioSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleRadioSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleRadioSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleRadioSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleRadioSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleRadioSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleAudioComponent_SetBodyCollisionImpact_Statics
	{
		struct SBZVehicleAudioComponent_eventSetBodyCollisionImpact_Parms
		{
			float CollisionSpeedValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionSpeedValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleAudioComponent_SetBodyCollisionImpact_Statics::NewProp_CollisionSpeedValue = { "CollisionSpeedValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleAudioComponent_eventSetBodyCollisionImpact_Parms, CollisionSpeedValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleAudioComponent_SetBodyCollisionImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleAudioComponent_SetBodyCollisionImpact_Statics::NewProp_CollisionSpeedValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAudioComponent_SetBodyCollisionImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAudioComponent_SetBodyCollisionImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAudioComponent, nullptr, "SetBodyCollisionImpact", nullptr, nullptr, sizeof(SBZVehicleAudioComponent_eventSetBodyCollisionImpact_Parms), Z_Construct_UFunction_USBZVehicleAudioComponent_SetBodyCollisionImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_SetBodyCollisionImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAudioComponent_SetBodyCollisionImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_SetBodyCollisionImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAudioComponent_SetBodyCollisionImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAudioComponent_SetBodyCollisionImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleAudioComponent_SetCarVehicleEngineSpeed_Statics
	{
		struct SBZVehicleAudioComponent_eventSetCarVehicleEngineSpeed_Parms
		{
			float EngineValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EngineValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleAudioComponent_SetCarVehicleEngineSpeed_Statics::NewProp_EngineValue = { "EngineValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleAudioComponent_eventSetCarVehicleEngineSpeed_Parms, EngineValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleAudioComponent_SetCarVehicleEngineSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleAudioComponent_SetCarVehicleEngineSpeed_Statics::NewProp_EngineValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAudioComponent_SetCarVehicleEngineSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAudioComponent_SetCarVehicleEngineSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAudioComponent, nullptr, "SetCarVehicleEngineSpeed", nullptr, nullptr, sizeof(SBZVehicleAudioComponent_eventSetCarVehicleEngineSpeed_Parms), Z_Construct_UFunction_USBZVehicleAudioComponent_SetCarVehicleEngineSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_SetCarVehicleEngineSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAudioComponent_SetCarVehicleEngineSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_SetCarVehicleEngineSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAudioComponent_SetCarVehicleEngineSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAudioComponent_SetCarVehicleEngineSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleAudioComponent_SetHelicopterVehicleEngineSpeed_Statics
	{
		struct SBZVehicleAudioComponent_eventSetHelicopterVehicleEngineSpeed_Parms
		{
			float EngineValue;
			float BladeValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EngineValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BladeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleAudioComponent_SetHelicopterVehicleEngineSpeed_Statics::NewProp_EngineValue = { "EngineValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleAudioComponent_eventSetHelicopterVehicleEngineSpeed_Parms, EngineValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleAudioComponent_SetHelicopterVehicleEngineSpeed_Statics::NewProp_BladeValue = { "BladeValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleAudioComponent_eventSetHelicopterVehicleEngineSpeed_Parms, BladeValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleAudioComponent_SetHelicopterVehicleEngineSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleAudioComponent_SetHelicopterVehicleEngineSpeed_Statics::NewProp_EngineValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleAudioComponent_SetHelicopterVehicleEngineSpeed_Statics::NewProp_BladeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAudioComponent_SetHelicopterVehicleEngineSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAudioComponent_SetHelicopterVehicleEngineSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAudioComponent, nullptr, "SetHelicopterVehicleEngineSpeed", nullptr, nullptr, sizeof(SBZVehicleAudioComponent_eventSetHelicopterVehicleEngineSpeed_Parms), Z_Construct_UFunction_USBZVehicleAudioComponent_SetHelicopterVehicleEngineSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_SetHelicopterVehicleEngineSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAudioComponent_SetHelicopterVehicleEngineSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_SetHelicopterVehicleEngineSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAudioComponent_SetHelicopterVehicleEngineSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAudioComponent_SetHelicopterVehicleEngineSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreCollisionImpact_Statics
	{
		struct SBZVehicleAudioComponent_eventSetTyreCollisionImpact_Parms
		{
			float CollisionSpeedValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionSpeedValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreCollisionImpact_Statics::NewProp_CollisionSpeedValue = { "CollisionSpeedValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleAudioComponent_eventSetTyreCollisionImpact_Parms, CollisionSpeedValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreCollisionImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreCollisionImpact_Statics::NewProp_CollisionSpeedValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreCollisionImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreCollisionImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAudioComponent, nullptr, "SetTyreCollisionImpact", nullptr, nullptr, sizeof(SBZVehicleAudioComponent_eventSetTyreCollisionImpact_Parms), Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreCollisionImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreCollisionImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreCollisionImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreCollisionImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreCollisionImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreCollisionImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreFriction_Statics
	{
		struct SBZVehicleAudioComponent_eventSetTyreFriction_Parms
		{
			float FrictionSpeedValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionSpeedValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreFriction_Statics::NewProp_FrictionSpeedValue = { "FrictionSpeedValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleAudioComponent_eventSetTyreFriction_Parms, FrictionSpeedValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreFriction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreFriction_Statics::NewProp_FrictionSpeedValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreFriction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreFriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAudioComponent, nullptr, "SetTyreFriction", nullptr, nullptr, sizeof(SBZVehicleAudioComponent_eventSetTyreFriction_Parms), Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreFriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreFriction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreFriction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreFriction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreFriction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreFriction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleAudioComponent_StopBrakeSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAudioComponent_StopBrakeSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAudioComponent_StopBrakeSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAudioComponent, nullptr, "StopBrakeSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAudioComponent_StopBrakeSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_StopBrakeSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAudioComponent_StopBrakeSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAudioComponent_StopBrakeSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleAudioComponent_StopEngineSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAudioComponent_StopEngineSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAudioComponent_StopEngineSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAudioComponent, nullptr, "StopEngineSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAudioComponent_StopEngineSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_StopEngineSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAudioComponent_StopEngineSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAudioComponent_StopEngineSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleAudioComponent_StopTyreFrictionSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAudioComponent_StopTyreFrictionSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAudioComponent_StopTyreFrictionSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAudioComponent, nullptr, "StopTyreFrictionSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAudioComponent_StopTyreFrictionSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAudioComponent_StopTyreFrictionSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAudioComponent_StopTyreFrictionSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAudioComponent_StopTyreFrictionSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZVehicleAudioComponent_NoRegister()
	{
		return USBZVehicleAudioComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZVehicleAudioComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleTypeState_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VehicleTypeState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EngineSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineStopSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EngineStopSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TyreFrictionSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TyreFrictionSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TyreFrictionStopSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TyreFrictionStopSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrakeSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeStopSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrakeStopSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionTiresSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionTiresSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionBodySoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionBodySoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireFrictionSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TireFrictionSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignalSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SignalSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignalStopSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SignalStopSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadioSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioStopSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadioStopSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelicopterRotaryBladesSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HelicopterRotaryBladesSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelicopterRotaryBladesStopSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HelicopterRotaryBladesStopSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EngineRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionTiresRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionTiresRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionBodyRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionBodyRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionTiresRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrictionTiresRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelicopterRotaryBladesRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HelicopterRotaryBladesRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineSoundMultiplicationValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EngineSoundMultiplicationValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeSoundMultiplicationValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakeSoundMultiplicationValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TyreSoundMultiplicationValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TyreSoundMultiplicationValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BladeSoundMultiplicationValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BladeSoundMultiplicationValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVehicleAudioComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAmbientSoundComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZVehicleAudioComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZVehicleAudioComponent_DisableSounds, "DisableSounds" }, // 3329683024
		{ &Z_Construct_UFunction_USBZVehicleAudioComponent_PlayBrakeSound, "PlayBrakeSound" }, // 3206369941
		{ &Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSound, "PlayEngineSound" }, // 721980515
		{ &Z_Construct_UFunction_USBZVehicleAudioComponent_PlayEngineSounds, "PlayEngineSounds" }, // 1742469026
		{ &Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTireCollisionSounds, "PlayTireCollisionSounds" }, // 210133794
		{ &Z_Construct_UFunction_USBZVehicleAudioComponent_PlayTyreFrictionSound, "PlayTyreFrictionSound" }, // 3117197809
		{ &Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleCollisionSounds, "PlayVehicleCollisionSounds" }, // 1310021350
		{ &Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleHornSounds, "PlayVehicleHornSounds" }, // 324589702
		{ &Z_Construct_UFunction_USBZVehicleAudioComponent_PlayVehicleRadioSounds, "PlayVehicleRadioSounds" }, // 2282312843
		{ &Z_Construct_UFunction_USBZVehicleAudioComponent_SetBodyCollisionImpact, "SetBodyCollisionImpact" }, // 4098745612
		{ &Z_Construct_UFunction_USBZVehicleAudioComponent_SetCarVehicleEngineSpeed, "SetCarVehicleEngineSpeed" }, // 3876774517
		{ &Z_Construct_UFunction_USBZVehicleAudioComponent_SetHelicopterVehicleEngineSpeed, "SetHelicopterVehicleEngineSpeed" }, // 186070050
		{ &Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreCollisionImpact, "SetTyreCollisionImpact" }, // 1006632656
		{ &Z_Construct_UFunction_USBZVehicleAudioComponent_SetTyreFriction, "SetTyreFriction" }, // 2463253056
		{ &Z_Construct_UFunction_USBZVehicleAudioComponent_StopBrakeSound, "StopBrakeSound" }, // 3697017280
		{ &Z_Construct_UFunction_USBZVehicleAudioComponent_StopEngineSound, "StopEngineSound" }, // 3448656084
		{ &Z_Construct_UFunction_USBZVehicleAudioComponent_StopTyreFrictionSound, "StopTyreFrictionSound" }, // 3985236092
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SBZVehicleAudioComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_VehicleTypeState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_VehicleTypeState = { "VehicleTypeState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, VehicleTypeState), METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_VehicleTypeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_VehicleTypeState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineSoundEvent = { "EngineSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, EngineSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineStopSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineStopSoundEvent = { "EngineStopSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, EngineStopSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineStopSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineStopSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TyreFrictionSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TyreFrictionSoundEvent = { "TyreFrictionSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, TyreFrictionSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TyreFrictionSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TyreFrictionSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TyreFrictionStopSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TyreFrictionStopSoundEvent = { "TyreFrictionStopSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, TyreFrictionStopSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TyreFrictionStopSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TyreFrictionStopSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BrakeSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BrakeSoundEvent = { "BrakeSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, BrakeSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BrakeSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BrakeSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BrakeStopSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BrakeStopSoundEvent = { "BrakeStopSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, BrakeStopSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BrakeStopSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BrakeStopSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionTiresSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionTiresSoundEvent = { "CollisionTiresSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, CollisionTiresSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionTiresSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionTiresSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionBodySoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionBodySoundEvent = { "CollisionBodySoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, CollisionBodySoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionBodySoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionBodySoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TireFrictionSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TireFrictionSoundEvent = { "TireFrictionSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, TireFrictionSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TireFrictionSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TireFrictionSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_SignalSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_SignalSoundEvent = { "SignalSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, SignalSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_SignalSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_SignalSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_SignalStopSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_SignalStopSoundEvent = { "SignalStopSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, SignalStopSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_SignalStopSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_SignalStopSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_RadioSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_RadioSoundEvent = { "RadioSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, RadioSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_RadioSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_RadioSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_RadioStopSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_RadioStopSoundEvent = { "RadioStopSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, RadioStopSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_RadioStopSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_RadioStopSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_HelicopterRotaryBladesSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_HelicopterRotaryBladesSoundEvent = { "HelicopterRotaryBladesSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, HelicopterRotaryBladesSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_HelicopterRotaryBladesSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_HelicopterRotaryBladesSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_HelicopterRotaryBladesStopSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_HelicopterRotaryBladesStopSoundEvent = { "HelicopterRotaryBladesStopSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, HelicopterRotaryBladesStopSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_HelicopterRotaryBladesStopSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_HelicopterRotaryBladesStopSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineRTPC = { "EngineRTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, EngineRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionTiresRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionTiresRTPC = { "CollisionTiresRTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, CollisionTiresRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionTiresRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionTiresRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionBodyRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionBodyRTPC = { "CollisionBodyRTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, CollisionBodyRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionBodyRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionBodyRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_FrictionTiresRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_FrictionTiresRTPC = { "FrictionTiresRTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, FrictionTiresRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_FrictionTiresRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_FrictionTiresRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_HelicopterRotaryBladesRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_HelicopterRotaryBladesRTPC = { "HelicopterRotaryBladesRTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, HelicopterRotaryBladesRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_HelicopterRotaryBladesRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_HelicopterRotaryBladesRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineSoundMultiplicationValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineSoundMultiplicationValue = { "EngineSoundMultiplicationValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, EngineSoundMultiplicationValue), METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineSoundMultiplicationValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineSoundMultiplicationValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BrakeSoundMultiplicationValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BrakeSoundMultiplicationValue = { "BrakeSoundMultiplicationValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, BrakeSoundMultiplicationValue), METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BrakeSoundMultiplicationValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BrakeSoundMultiplicationValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TyreSoundMultiplicationValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TyreSoundMultiplicationValue = { "TyreSoundMultiplicationValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, TyreSoundMultiplicationValue), METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TyreSoundMultiplicationValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TyreSoundMultiplicationValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BladeSoundMultiplicationValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BladeSoundMultiplicationValue = { "BladeSoundMultiplicationValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAudioComponent, BladeSoundMultiplicationValue), METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BladeSoundMultiplicationValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BladeSoundMultiplicationValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZVehicleAudioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_VehicleTypeState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineStopSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TyreFrictionSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TyreFrictionStopSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BrakeSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BrakeStopSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionTiresSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionBodySoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TireFrictionSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_SignalSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_SignalStopSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_RadioSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_RadioStopSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_HelicopterRotaryBladesSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_HelicopterRotaryBladesStopSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionTiresRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_CollisionBodyRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_FrictionTiresRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_HelicopterRotaryBladesRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_EngineSoundMultiplicationValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BrakeSoundMultiplicationValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_TyreSoundMultiplicationValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAudioComponent_Statics::NewProp_BladeSoundMultiplicationValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVehicleAudioComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVehicleAudioComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVehicleAudioComponent_Statics::ClassParams = {
		&USBZVehicleAudioComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZVehicleAudioComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAudioComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVehicleAudioComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVehicleAudioComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVehicleAudioComponent, 1005424890);
	template<> STARBREEZE_API UClass* StaticClass<USBZVehicleAudioComponent>()
	{
		return USBZVehicleAudioComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVehicleAudioComponent(Z_Construct_UClass_USBZVehicleAudioComponent, &USBZVehicleAudioComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVehicleAudioComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVehicleAudioComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
