// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAerialVehicleAudioComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAerialVehicleAudioComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAerialVehicleAudioComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAerialVehicleAudioComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAmbientSoundComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAerialVehicleAudioComponent::execDisableSounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableSounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAerialVehicleAudioComponent::execPlayEngineSound)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_EngineValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayEngineSound(Z_Param_EngineValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAerialVehicleAudioComponent::execPlaySpotlightSound)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySpotlightSound(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAerialVehicleAudioComponent::execPlayTyreCollisionSound)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CollisionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayTyreCollisionSound(Z_Param_CollisionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAerialVehicleAudioComponent::execPlayVehicleCollisionSound)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CollisionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayVehicleCollisionSound(Z_Param_CollisionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAerialVehicleAudioComponent::execPlayVehicleRadioSound)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayVehicleRadioSound(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAerialVehicleAudioComponent::execSetBodyCollisionImpact)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CollisionSpeedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBodyCollisionImpact(Z_Param_CollisionSpeedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAerialVehicleAudioComponent::execSetTyreCollisionImpact)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CollisionSpeedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTyreCollisionImpact(Z_Param_CollisionSpeedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAerialVehicleAudioComponent::execSetVehicleEngineSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_EngineValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVehicleEngineSpeed(Z_Param_EngineValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAerialVehicleAudioComponent::execStopEngineSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopEngineSound();
		P_NATIVE_END;
	}
	void USBZAerialVehicleAudioComponent::StaticRegisterNativesUSBZAerialVehicleAudioComponent()
	{
		UClass* Class = USBZAerialVehicleAudioComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableSounds", &USBZAerialVehicleAudioComponent::execDisableSounds },
			{ "PlayEngineSound", &USBZAerialVehicleAudioComponent::execPlayEngineSound },
			{ "PlaySpotlightSound", &USBZAerialVehicleAudioComponent::execPlaySpotlightSound },
			{ "PlayTyreCollisionSound", &USBZAerialVehicleAudioComponent::execPlayTyreCollisionSound },
			{ "PlayVehicleCollisionSound", &USBZAerialVehicleAudioComponent::execPlayVehicleCollisionSound },
			{ "PlayVehicleRadioSound", &USBZAerialVehicleAudioComponent::execPlayVehicleRadioSound },
			{ "SetBodyCollisionImpact", &USBZAerialVehicleAudioComponent::execSetBodyCollisionImpact },
			{ "SetTyreCollisionImpact", &USBZAerialVehicleAudioComponent::execSetTyreCollisionImpact },
			{ "SetVehicleEngineSpeed", &USBZAerialVehicleAudioComponent::execSetVehicleEngineSpeed },
			{ "StopEngineSound", &USBZAerialVehicleAudioComponent::execStopEngineSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAerialVehicleAudioComponent_DisableSounds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAerialVehicleAudioComponent_DisableSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAerialVehicleAudioComponent_DisableSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAerialVehicleAudioComponent, nullptr, "DisableSounds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_DisableSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_DisableSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAerialVehicleAudioComponent_DisableSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAerialVehicleAudioComponent_DisableSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayEngineSound_Statics
	{
		struct SBZAerialVehicleAudioComponent_eventPlayEngineSound_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayEngineSound_Statics::NewProp_EngineValue = { "EngineValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAerialVehicleAudioComponent_eventPlayEngineSound_Parms, EngineValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayEngineSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayEngineSound_Statics::NewProp_EngineValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayEngineSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayEngineSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAerialVehicleAudioComponent, nullptr, "PlayEngineSound", nullptr, nullptr, sizeof(SBZAerialVehicleAudioComponent_eventPlayEngineSound_Parms), Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayEngineSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayEngineSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayEngineSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayEngineSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayEngineSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayEngineSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlaySpotlightSound_Statics
	{
		struct SBZAerialVehicleAudioComponent_eventPlaySpotlightSound_Parms
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
	void Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlaySpotlightSound_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SBZAerialVehicleAudioComponent_eventPlaySpotlightSound_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlaySpotlightSound_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAerialVehicleAudioComponent_eventPlaySpotlightSound_Parms), &Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlaySpotlightSound_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlaySpotlightSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlaySpotlightSound_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlaySpotlightSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlaySpotlightSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAerialVehicleAudioComponent, nullptr, "PlaySpotlightSound", nullptr, nullptr, sizeof(SBZAerialVehicleAudioComponent_eventPlaySpotlightSound_Parms), Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlaySpotlightSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlaySpotlightSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlaySpotlightSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlaySpotlightSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlaySpotlightSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlaySpotlightSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayTyreCollisionSound_Statics
	{
		struct SBZAerialVehicleAudioComponent_eventPlayTyreCollisionSound_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayTyreCollisionSound_Statics::NewProp_CollisionValue = { "CollisionValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAerialVehicleAudioComponent_eventPlayTyreCollisionSound_Parms, CollisionValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayTyreCollisionSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayTyreCollisionSound_Statics::NewProp_CollisionValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayTyreCollisionSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayTyreCollisionSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAerialVehicleAudioComponent, nullptr, "PlayTyreCollisionSound", nullptr, nullptr, sizeof(SBZAerialVehicleAudioComponent_eventPlayTyreCollisionSound_Parms), Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayTyreCollisionSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayTyreCollisionSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayTyreCollisionSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayTyreCollisionSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayTyreCollisionSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayTyreCollisionSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleCollisionSound_Statics
	{
		struct SBZAerialVehicleAudioComponent_eventPlayVehicleCollisionSound_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleCollisionSound_Statics::NewProp_CollisionValue = { "CollisionValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAerialVehicleAudioComponent_eventPlayVehicleCollisionSound_Parms, CollisionValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleCollisionSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleCollisionSound_Statics::NewProp_CollisionValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleCollisionSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleCollisionSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAerialVehicleAudioComponent, nullptr, "PlayVehicleCollisionSound", nullptr, nullptr, sizeof(SBZAerialVehicleAudioComponent_eventPlayVehicleCollisionSound_Parms), Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleCollisionSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleCollisionSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleCollisionSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleCollisionSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleCollisionSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleCollisionSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleRadioSound_Statics
	{
		struct SBZAerialVehicleAudioComponent_eventPlayVehicleRadioSound_Parms
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
	void Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleRadioSound_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SBZAerialVehicleAudioComponent_eventPlayVehicleRadioSound_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleRadioSound_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAerialVehicleAudioComponent_eventPlayVehicleRadioSound_Parms), &Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleRadioSound_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleRadioSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleRadioSound_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleRadioSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleRadioSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAerialVehicleAudioComponent, nullptr, "PlayVehicleRadioSound", nullptr, nullptr, sizeof(SBZAerialVehicleAudioComponent_eventPlayVehicleRadioSound_Parms), Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleRadioSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleRadioSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleRadioSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleRadioSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleRadioSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleRadioSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetBodyCollisionImpact_Statics
	{
		struct SBZAerialVehicleAudioComponent_eventSetBodyCollisionImpact_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetBodyCollisionImpact_Statics::NewProp_CollisionSpeedValue = { "CollisionSpeedValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAerialVehicleAudioComponent_eventSetBodyCollisionImpact_Parms, CollisionSpeedValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetBodyCollisionImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetBodyCollisionImpact_Statics::NewProp_CollisionSpeedValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetBodyCollisionImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetBodyCollisionImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAerialVehicleAudioComponent, nullptr, "SetBodyCollisionImpact", nullptr, nullptr, sizeof(SBZAerialVehicleAudioComponent_eventSetBodyCollisionImpact_Parms), Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetBodyCollisionImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetBodyCollisionImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetBodyCollisionImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetBodyCollisionImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetBodyCollisionImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetBodyCollisionImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetTyreCollisionImpact_Statics
	{
		struct SBZAerialVehicleAudioComponent_eventSetTyreCollisionImpact_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetTyreCollisionImpact_Statics::NewProp_CollisionSpeedValue = { "CollisionSpeedValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAerialVehicleAudioComponent_eventSetTyreCollisionImpact_Parms, CollisionSpeedValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetTyreCollisionImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetTyreCollisionImpact_Statics::NewProp_CollisionSpeedValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetTyreCollisionImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetTyreCollisionImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAerialVehicleAudioComponent, nullptr, "SetTyreCollisionImpact", nullptr, nullptr, sizeof(SBZAerialVehicleAudioComponent_eventSetTyreCollisionImpact_Parms), Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetTyreCollisionImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetTyreCollisionImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetTyreCollisionImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetTyreCollisionImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetTyreCollisionImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetTyreCollisionImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetVehicleEngineSpeed_Statics
	{
		struct SBZAerialVehicleAudioComponent_eventSetVehicleEngineSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetVehicleEngineSpeed_Statics::NewProp_EngineValue = { "EngineValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAerialVehicleAudioComponent_eventSetVehicleEngineSpeed_Parms, EngineValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetVehicleEngineSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetVehicleEngineSpeed_Statics::NewProp_EngineValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetVehicleEngineSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetVehicleEngineSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAerialVehicleAudioComponent, nullptr, "SetVehicleEngineSpeed", nullptr, nullptr, sizeof(SBZAerialVehicleAudioComponent_eventSetVehicleEngineSpeed_Parms), Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetVehicleEngineSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetVehicleEngineSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetVehicleEngineSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetVehicleEngineSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetVehicleEngineSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetVehicleEngineSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAerialVehicleAudioComponent_StopEngineSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAerialVehicleAudioComponent_StopEngineSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAerialVehicleAudioComponent_StopEngineSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAerialVehicleAudioComponent, nullptr, "StopEngineSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_StopEngineSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAerialVehicleAudioComponent_StopEngineSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAerialVehicleAudioComponent_StopEngineSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAerialVehicleAudioComponent_StopEngineSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAerialVehicleAudioComponent_NoRegister()
	{
		return USBZAerialVehicleAudioComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EngineSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineStopSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EngineStopSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionTyresSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionTyresSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionBodySoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionBodySoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadioSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioStopSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadioStopSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpotlightOnSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpotlightOnSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpotlightOffSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpotlightOffSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EngineRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionTyresRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionTyresRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionBodyRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionBodyRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineSoundMultiplicationValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EngineSoundMultiplicationValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TyreSoundMultiplicationValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TyreSoundMultiplicationValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAmbientSoundComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAerialVehicleAudioComponent_DisableSounds, "DisableSounds" }, // 2838314163
		{ &Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayEngineSound, "PlayEngineSound" }, // 518612984
		{ &Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlaySpotlightSound, "PlaySpotlightSound" }, // 1194055259
		{ &Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayTyreCollisionSound, "PlayTyreCollisionSound" }, // 218316776
		{ &Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleCollisionSound, "PlayVehicleCollisionSound" }, // 967283982
		{ &Z_Construct_UFunction_USBZAerialVehicleAudioComponent_PlayVehicleRadioSound, "PlayVehicleRadioSound" }, // 3054734757
		{ &Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetBodyCollisionImpact, "SetBodyCollisionImpact" }, // 1386096613
		{ &Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetTyreCollisionImpact, "SetTyreCollisionImpact" }, // 4164523872
		{ &Z_Construct_UFunction_USBZAerialVehicleAudioComponent_SetVehicleEngineSpeed, "SetVehicleEngineSpeed" }, // 1617694805
		{ &Z_Construct_UFunction_USBZAerialVehicleAudioComponent_StopEngineSound, "StopEngineSound" }, // 1381614037
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SBZAerialVehicleAudioComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineSoundEvent = { "EngineSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAerialVehicleAudioComponent, EngineSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineStopSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineStopSoundEvent = { "EngineStopSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAerialVehicleAudioComponent, EngineStopSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineStopSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineStopSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionTyresSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionTyresSoundEvent = { "CollisionTyresSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAerialVehicleAudioComponent, CollisionTyresSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionTyresSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionTyresSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionBodySoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionBodySoundEvent = { "CollisionBodySoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAerialVehicleAudioComponent, CollisionBodySoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionBodySoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionBodySoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_RadioSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_RadioSoundEvent = { "RadioSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAerialVehicleAudioComponent, RadioSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_RadioSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_RadioSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_RadioStopSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_RadioStopSoundEvent = { "RadioStopSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAerialVehicleAudioComponent, RadioStopSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_RadioStopSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_RadioStopSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_SpotlightOnSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_SpotlightOnSoundEvent = { "SpotlightOnSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAerialVehicleAudioComponent, SpotlightOnSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_SpotlightOnSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_SpotlightOnSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_SpotlightOffSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_SpotlightOffSoundEvent = { "SpotlightOffSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAerialVehicleAudioComponent, SpotlightOffSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_SpotlightOffSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_SpotlightOffSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineRTPC = { "EngineRTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAerialVehicleAudioComponent, EngineRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionTyresRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionTyresRTPC = { "CollisionTyresRTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAerialVehicleAudioComponent, CollisionTyresRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionTyresRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionTyresRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionBodyRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionBodyRTPC = { "CollisionBodyRTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAerialVehicleAudioComponent, CollisionBodyRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionBodyRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionBodyRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineSoundMultiplicationValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineSoundMultiplicationValue = { "EngineSoundMultiplicationValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAerialVehicleAudioComponent, EngineSoundMultiplicationValue), METADATA_PARAMS(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineSoundMultiplicationValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineSoundMultiplicationValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_TyreSoundMultiplicationValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAerialVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZAerialVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_TyreSoundMultiplicationValue = { "TyreSoundMultiplicationValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAerialVehicleAudioComponent, TyreSoundMultiplicationValue), METADATA_PARAMS(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_TyreSoundMultiplicationValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_TyreSoundMultiplicationValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineStopSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionTyresSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionBodySoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_RadioSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_RadioStopSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_SpotlightOnSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_SpotlightOffSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionTyresRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_CollisionBodyRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_EngineSoundMultiplicationValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::NewProp_TyreSoundMultiplicationValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAerialVehicleAudioComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::ClassParams = {
		&USBZAerialVehicleAudioComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAerialVehicleAudioComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAerialVehicleAudioComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAerialVehicleAudioComponent, 3132825529);
	template<> STARBREEZE_API UClass* StaticClass<USBZAerialVehicleAudioComponent>()
	{
		return USBZAerialVehicleAudioComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAerialVehicleAudioComponent(Z_Construct_UClass_USBZAerialVehicleAudioComponent, &USBZAerialVehicleAudioComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAerialVehicleAudioComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAerialVehicleAudioComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
