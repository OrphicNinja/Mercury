// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWheeledVehicleAudioComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWheeledVehicleAudioComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWheeledVehicleAudioComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWheeledVehicleAudioComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAmbientSoundComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZWheeledVehicleAudioComponent::execPlayBreakSound)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BreakDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayBreakSound(Z_Param_BreakDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWheeledVehicleAudioComponent::execPlayEngineSound)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_EngineValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayEngineSound(Z_Param_EngineValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWheeledVehicleAudioComponent::execPlaySirenSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySirenSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWheeledVehicleAudioComponent::execPlayTyreCollisionSound)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CollisionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayTyreCollisionSound(Z_Param_CollisionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWheeledVehicleAudioComponent::execPlayTyreFrictionSound)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_EngineValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayTyreFrictionSound(Z_Param_EngineValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWheeledVehicleAudioComponent::execPlayVehicleCollisionSound)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CollisionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayVehicleCollisionSound(Z_Param_CollisionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWheeledVehicleAudioComponent::execPlayVehicleHornSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayVehicleHornSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWheeledVehicleAudioComponent::execSetBodyCollisionImpact)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CollisionSpeedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBodyCollisionImpact(Z_Param_CollisionSpeedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWheeledVehicleAudioComponent::execSetTyreCollisionImpact)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CollisionSpeedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTyreCollisionImpact(Z_Param_CollisionSpeedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWheeledVehicleAudioComponent::execSetTyreFriction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FrictionSpeedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTyreFriction(Z_Param_FrictionSpeedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWheeledVehicleAudioComponent::execSetVehicleBreakIntencity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_EngineValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVehicleBreakIntencity(Z_Param_EngineValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWheeledVehicleAudioComponent::execSetVehicleEngineSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_EngineValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVehicleEngineSpeed(Z_Param_EngineValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWheeledVehicleAudioComponent::execStopBreakSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopBreakSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWheeledVehicleAudioComponent::execStopEngineSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopEngineSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWheeledVehicleAudioComponent::execStopSirenSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSirenSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWheeledVehicleAudioComponent::execStopTyreFrictionSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopTyreFrictionSound();
		P_NATIVE_END;
	}
	void USBZWheeledVehicleAudioComponent::StaticRegisterNativesUSBZWheeledVehicleAudioComponent()
	{
		UClass* Class = USBZWheeledVehicleAudioComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayBreakSound", &USBZWheeledVehicleAudioComponent::execPlayBreakSound },
			{ "PlayEngineSound", &USBZWheeledVehicleAudioComponent::execPlayEngineSound },
			{ "PlaySirenSound", &USBZWheeledVehicleAudioComponent::execPlaySirenSound },
			{ "PlayTyreCollisionSound", &USBZWheeledVehicleAudioComponent::execPlayTyreCollisionSound },
			{ "PlayTyreFrictionSound", &USBZWheeledVehicleAudioComponent::execPlayTyreFrictionSound },
			{ "PlayVehicleCollisionSound", &USBZWheeledVehicleAudioComponent::execPlayVehicleCollisionSound },
			{ "PlayVehicleHornSound", &USBZWheeledVehicleAudioComponent::execPlayVehicleHornSound },
			{ "SetBodyCollisionImpact", &USBZWheeledVehicleAudioComponent::execSetBodyCollisionImpact },
			{ "SetTyreCollisionImpact", &USBZWheeledVehicleAudioComponent::execSetTyreCollisionImpact },
			{ "SetTyreFriction", &USBZWheeledVehicleAudioComponent::execSetTyreFriction },
			{ "SetVehicleBreakIntencity", &USBZWheeledVehicleAudioComponent::execSetVehicleBreakIntencity },
			{ "SetVehicleEngineSpeed", &USBZWheeledVehicleAudioComponent::execSetVehicleEngineSpeed },
			{ "StopBreakSound", &USBZWheeledVehicleAudioComponent::execStopBreakSound },
			{ "StopEngineSound", &USBZWheeledVehicleAudioComponent::execStopEngineSound },
			{ "StopSirenSound", &USBZWheeledVehicleAudioComponent::execStopSirenSound },
			{ "StopTyreFrictionSound", &USBZWheeledVehicleAudioComponent::execStopTyreFrictionSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayBreakSound_Statics
	{
		struct SBZWheeledVehicleAudioComponent_eventPlayBreakSound_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayBreakSound_Statics::NewProp_BreakDistance = { "BreakDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicleAudioComponent_eventPlayBreakSound_Parms, BreakDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayBreakSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayBreakSound_Statics::NewProp_BreakDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayBreakSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayBreakSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWheeledVehicleAudioComponent, nullptr, "PlayBreakSound", nullptr, nullptr, sizeof(SBZWheeledVehicleAudioComponent_eventPlayBreakSound_Parms), Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayBreakSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayBreakSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayBreakSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayBreakSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayBreakSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayBreakSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayEngineSound_Statics
	{
		struct SBZWheeledVehicleAudioComponent_eventPlayEngineSound_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayEngineSound_Statics::NewProp_EngineValue = { "EngineValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicleAudioComponent_eventPlayEngineSound_Parms, EngineValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayEngineSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayEngineSound_Statics::NewProp_EngineValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayEngineSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayEngineSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWheeledVehicleAudioComponent, nullptr, "PlayEngineSound", nullptr, nullptr, sizeof(SBZWheeledVehicleAudioComponent_eventPlayEngineSound_Parms), Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayEngineSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayEngineSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayEngineSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayEngineSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayEngineSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayEngineSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlaySirenSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlaySirenSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlaySirenSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWheeledVehicleAudioComponent, nullptr, "PlaySirenSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlaySirenSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlaySirenSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlaySirenSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlaySirenSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreCollisionSound_Statics
	{
		struct SBZWheeledVehicleAudioComponent_eventPlayTyreCollisionSound_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreCollisionSound_Statics::NewProp_CollisionValue = { "CollisionValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicleAudioComponent_eventPlayTyreCollisionSound_Parms, CollisionValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreCollisionSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreCollisionSound_Statics::NewProp_CollisionValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreCollisionSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreCollisionSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWheeledVehicleAudioComponent, nullptr, "PlayTyreCollisionSound", nullptr, nullptr, sizeof(SBZWheeledVehicleAudioComponent_eventPlayTyreCollisionSound_Parms), Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreCollisionSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreCollisionSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreCollisionSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreCollisionSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreCollisionSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreCollisionSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreFrictionSound_Statics
	{
		struct SBZWheeledVehicleAudioComponent_eventPlayTyreFrictionSound_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreFrictionSound_Statics::NewProp_EngineValue = { "EngineValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicleAudioComponent_eventPlayTyreFrictionSound_Parms, EngineValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreFrictionSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreFrictionSound_Statics::NewProp_EngineValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreFrictionSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreFrictionSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWheeledVehicleAudioComponent, nullptr, "PlayTyreFrictionSound", nullptr, nullptr, sizeof(SBZWheeledVehicleAudioComponent_eventPlayTyreFrictionSound_Parms), Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreFrictionSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreFrictionSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreFrictionSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreFrictionSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreFrictionSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreFrictionSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleCollisionSound_Statics
	{
		struct SBZWheeledVehicleAudioComponent_eventPlayVehicleCollisionSound_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleCollisionSound_Statics::NewProp_CollisionValue = { "CollisionValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicleAudioComponent_eventPlayVehicleCollisionSound_Parms, CollisionValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleCollisionSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleCollisionSound_Statics::NewProp_CollisionValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleCollisionSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleCollisionSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWheeledVehicleAudioComponent, nullptr, "PlayVehicleCollisionSound", nullptr, nullptr, sizeof(SBZWheeledVehicleAudioComponent_eventPlayVehicleCollisionSound_Parms), Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleCollisionSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleCollisionSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleCollisionSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleCollisionSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleCollisionSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleCollisionSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleHornSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleHornSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleHornSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWheeledVehicleAudioComponent, nullptr, "PlayVehicleHornSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleHornSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleHornSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleHornSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleHornSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetBodyCollisionImpact_Statics
	{
		struct SBZWheeledVehicleAudioComponent_eventSetBodyCollisionImpact_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetBodyCollisionImpact_Statics::NewProp_CollisionSpeedValue = { "CollisionSpeedValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicleAudioComponent_eventSetBodyCollisionImpact_Parms, CollisionSpeedValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetBodyCollisionImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetBodyCollisionImpact_Statics::NewProp_CollisionSpeedValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetBodyCollisionImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetBodyCollisionImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWheeledVehicleAudioComponent, nullptr, "SetBodyCollisionImpact", nullptr, nullptr, sizeof(SBZWheeledVehicleAudioComponent_eventSetBodyCollisionImpact_Parms), Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetBodyCollisionImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetBodyCollisionImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetBodyCollisionImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetBodyCollisionImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetBodyCollisionImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetBodyCollisionImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreCollisionImpact_Statics
	{
		struct SBZWheeledVehicleAudioComponent_eventSetTyreCollisionImpact_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreCollisionImpact_Statics::NewProp_CollisionSpeedValue = { "CollisionSpeedValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicleAudioComponent_eventSetTyreCollisionImpact_Parms, CollisionSpeedValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreCollisionImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreCollisionImpact_Statics::NewProp_CollisionSpeedValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreCollisionImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreCollisionImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWheeledVehicleAudioComponent, nullptr, "SetTyreCollisionImpact", nullptr, nullptr, sizeof(SBZWheeledVehicleAudioComponent_eventSetTyreCollisionImpact_Parms), Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreCollisionImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreCollisionImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreCollisionImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreCollisionImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreCollisionImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreCollisionImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreFriction_Statics
	{
		struct SBZWheeledVehicleAudioComponent_eventSetTyreFriction_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreFriction_Statics::NewProp_FrictionSpeedValue = { "FrictionSpeedValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicleAudioComponent_eventSetTyreFriction_Parms, FrictionSpeedValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreFriction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreFriction_Statics::NewProp_FrictionSpeedValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreFriction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreFriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWheeledVehicleAudioComponent, nullptr, "SetTyreFriction", nullptr, nullptr, sizeof(SBZWheeledVehicleAudioComponent_eventSetTyreFriction_Parms), Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreFriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreFriction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreFriction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreFriction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreFriction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreFriction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleBreakIntencity_Statics
	{
		struct SBZWheeledVehicleAudioComponent_eventSetVehicleBreakIntencity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleBreakIntencity_Statics::NewProp_EngineValue = { "EngineValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicleAudioComponent_eventSetVehicleBreakIntencity_Parms, EngineValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleBreakIntencity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleBreakIntencity_Statics::NewProp_EngineValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleBreakIntencity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleBreakIntencity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWheeledVehicleAudioComponent, nullptr, "SetVehicleBreakIntencity", nullptr, nullptr, sizeof(SBZWheeledVehicleAudioComponent_eventSetVehicleBreakIntencity_Parms), Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleBreakIntencity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleBreakIntencity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleBreakIntencity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleBreakIntencity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleBreakIntencity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleBreakIntencity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleEngineSpeed_Statics
	{
		struct SBZWheeledVehicleAudioComponent_eventSetVehicleEngineSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleEngineSpeed_Statics::NewProp_EngineValue = { "EngineValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWheeledVehicleAudioComponent_eventSetVehicleEngineSpeed_Parms, EngineValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleEngineSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleEngineSpeed_Statics::NewProp_EngineValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleEngineSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleEngineSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWheeledVehicleAudioComponent, nullptr, "SetVehicleEngineSpeed", nullptr, nullptr, sizeof(SBZWheeledVehicleAudioComponent_eventSetVehicleEngineSpeed_Parms), Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleEngineSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleEngineSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleEngineSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleEngineSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleEngineSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleEngineSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopBreakSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopBreakSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopBreakSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWheeledVehicleAudioComponent, nullptr, "StopBreakSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopBreakSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopBreakSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopBreakSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopBreakSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopEngineSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopEngineSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopEngineSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWheeledVehicleAudioComponent, nullptr, "StopEngineSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopEngineSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopEngineSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopEngineSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopEngineSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopSirenSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopSirenSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopSirenSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWheeledVehicleAudioComponent, nullptr, "StopSirenSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopSirenSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopSirenSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopSirenSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopSirenSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopTyreFrictionSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopTyreFrictionSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopTyreFrictionSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWheeledVehicleAudioComponent, nullptr, "StopTyreFrictionSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopTyreFrictionSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopTyreFrictionSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopTyreFrictionSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopTyreFrictionSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZWheeledVehicleAudioComponent_NoRegister()
	{
		return USBZWheeledVehicleAudioComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SirenAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SirenAudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SirenSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SirenSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SirenStopSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SirenStopSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EngineSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineStopSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EngineStopSoundEvent;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TyreFrictionSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TyreFrictionSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TyreFrictionStopSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TyreFrictionStopSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignalSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SignalSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignalStopSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SignalStopSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EngineRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrakeRTPC;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAmbientSoundComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayBreakSound, "PlayBreakSound" }, // 3635113680
		{ &Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayEngineSound, "PlayEngineSound" }, // 232027497
		{ &Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlaySirenSound, "PlaySirenSound" }, // 2373464955
		{ &Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreCollisionSound, "PlayTyreCollisionSound" }, // 4019424445
		{ &Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayTyreFrictionSound, "PlayTyreFrictionSound" }, // 4237362727
		{ &Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleCollisionSound, "PlayVehicleCollisionSound" }, // 589222724
		{ &Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_PlayVehicleHornSound, "PlayVehicleHornSound" }, // 802660
		{ &Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetBodyCollisionImpact, "SetBodyCollisionImpact" }, // 1490023999
		{ &Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreCollisionImpact, "SetTyreCollisionImpact" }, // 1583808807
		{ &Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetTyreFriction, "SetTyreFriction" }, // 2705273452
		{ &Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleBreakIntencity, "SetVehicleBreakIntencity" }, // 1223774431
		{ &Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_SetVehicleEngineSpeed, "SetVehicleEngineSpeed" }, // 171402278
		{ &Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopBreakSound, "StopBreakSound" }, // 2802259596
		{ &Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopEngineSound, "StopEngineSound" }, // 1693768326
		{ &Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopSirenSound, "StopSirenSound" }, // 4179122774
		{ &Z_Construct_UFunction_USBZWheeledVehicleAudioComponent_StopTyreFrictionSound, "StopTyreFrictionSound" }, // 3267654578
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SBZWheeledVehicleAudioComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SirenAudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SirenAudioComponent = { "SirenAudioComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, SirenAudioComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SirenAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SirenAudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SirenSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SirenSoundEvent = { "SirenSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, SirenSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SirenSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SirenSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SirenStopSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SirenStopSoundEvent = { "SirenStopSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, SirenStopSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SirenStopSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SirenStopSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineSoundEvent = { "EngineSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, EngineSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineStopSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineStopSoundEvent = { "EngineStopSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, EngineStopSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineStopSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineStopSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeSoundEvent = { "BrakeSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, BrakeSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeStopSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeStopSoundEvent = { "BrakeStopSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, BrakeStopSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeStopSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeStopSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionTiresSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionTiresSoundEvent = { "CollisionTiresSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, CollisionTiresSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionTiresSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionTiresSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionBodySoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionBodySoundEvent = { "CollisionBodySoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, CollisionBodySoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionBodySoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionBodySoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_TyreFrictionSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_TyreFrictionSoundEvent = { "TyreFrictionSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, TyreFrictionSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_TyreFrictionSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_TyreFrictionSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_TyreFrictionStopSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_TyreFrictionStopSoundEvent = { "TyreFrictionStopSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, TyreFrictionStopSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_TyreFrictionStopSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_TyreFrictionStopSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SignalSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SignalSoundEvent = { "SignalSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, SignalSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SignalSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SignalSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SignalStopSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SignalStopSoundEvent = { "SignalStopSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, SignalStopSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SignalStopSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SignalStopSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineRTPC = { "EngineRTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, EngineRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeRTPC = { "BrakeRTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, BrakeRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionTiresRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionTiresRTPC = { "CollisionTiresRTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, CollisionTiresRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionTiresRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionTiresRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionBodyRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionBodyRTPC = { "CollisionBodyRTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, CollisionBodyRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionBodyRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionBodyRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_FrictionTiresRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_FrictionTiresRTPC = { "FrictionTiresRTPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, FrictionTiresRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_FrictionTiresRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_FrictionTiresRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineSoundMultiplicationValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineSoundMultiplicationValue = { "EngineSoundMultiplicationValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, EngineSoundMultiplicationValue), METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineSoundMultiplicationValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineSoundMultiplicationValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeSoundMultiplicationValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeSoundMultiplicationValue = { "BrakeSoundMultiplicationValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, BrakeSoundMultiplicationValue), METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeSoundMultiplicationValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeSoundMultiplicationValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_TyreSoundMultiplicationValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleAudioComponent" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_TyreSoundMultiplicationValue = { "TyreSoundMultiplicationValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWheeledVehicleAudioComponent, TyreSoundMultiplicationValue), METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_TyreSoundMultiplicationValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_TyreSoundMultiplicationValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SirenAudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SirenSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SirenStopSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineStopSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeStopSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionTiresSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionBodySoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_TyreFrictionSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_TyreFrictionStopSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SignalSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_SignalStopSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionTiresRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_CollisionBodyRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_FrictionTiresRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_EngineSoundMultiplicationValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_BrakeSoundMultiplicationValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::NewProp_TyreSoundMultiplicationValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWheeledVehicleAudioComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::ClassParams = {
		&USBZWheeledVehicleAudioComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWheeledVehicleAudioComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWheeledVehicleAudioComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWheeledVehicleAudioComponent, 4004879468);
	template<> STARBREEZE_API UClass* StaticClass<USBZWheeledVehicleAudioComponent>()
	{
		return USBZWheeledVehicleAudioComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWheeledVehicleAudioComponent(Z_Construct_UClass_USBZWheeledVehicleAudioComponent, &USBZWheeledVehicleAudioComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWheeledVehicleAudioComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWheeledVehicleAudioComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
