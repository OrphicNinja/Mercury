// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMicroCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMicroCamera() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMicroCamera_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMicroCamera();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableToolBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosionResult();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCameraViewInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosive_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZMicroCamera::execMulticast_OverloadMicroCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OverloadMicroCamera_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMicroCamera::execMulticast_ReplicateExplosion)
	{
		P_GET_STRUCT(FSBZExplosionResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ReplicateExplosion_Implementation(Z_Param_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMicroCamera::execMulticast_SetArmed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetArmed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMicroCamera::execOnAICharacterKilled)
	{
		P_GET_OBJECT(APawn,Z_Param_InAIPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAICharacterKilled(Z_Param_InAIPawn);
		P_NATIVE_END;
	}
	static FName NAME_ASBZMicroCamera_Multicast_OverloadMicroCamera = FName(TEXT("Multicast_OverloadMicroCamera"));
	void ASBZMicroCamera::Multicast_OverloadMicroCamera()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZMicroCamera_Multicast_OverloadMicroCamera),NULL);
	}
	static FName NAME_ASBZMicroCamera_Multicast_ReplicateExplosion = FName(TEXT("Multicast_ReplicateExplosion"));
	void ASBZMicroCamera::Multicast_ReplicateExplosion(FSBZExplosionResult const& Result)
	{
		SBZMicroCamera_eventMulticast_ReplicateExplosion_Parms Parms;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_ASBZMicroCamera_Multicast_ReplicateExplosion),&Parms);
	}
	static FName NAME_ASBZMicroCamera_Multicast_SetArmed = FName(TEXT("Multicast_SetArmed"));
	void ASBZMicroCamera::Multicast_SetArmed()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZMicroCamera_Multicast_SetArmed),NULL);
	}
	void ASBZMicroCamera::StaticRegisterNativesASBZMicroCamera()
	{
		UClass* Class = ASBZMicroCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_OverloadMicroCamera", &ASBZMicroCamera::execMulticast_OverloadMicroCamera },
			{ "Multicast_ReplicateExplosion", &ASBZMicroCamera::execMulticast_ReplicateExplosion },
			{ "Multicast_SetArmed", &ASBZMicroCamera::execMulticast_SetArmed },
			{ "OnAICharacterKilled", &ASBZMicroCamera::execOnAICharacterKilled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZMicroCamera_Multicast_OverloadMicroCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMicroCamera_Multicast_OverloadMicroCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMicroCamera_Multicast_OverloadMicroCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMicroCamera, nullptr, "Multicast_OverloadMicroCamera", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMicroCamera_Multicast_OverloadMicroCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMicroCamera_Multicast_OverloadMicroCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMicroCamera_Multicast_OverloadMicroCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMicroCamera_Multicast_OverloadMicroCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMicroCamera_Multicast_ReplicateExplosion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMicroCamera_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZMicroCamera_Multicast_ReplicateExplosion_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMicroCamera_eventMulticast_ReplicateExplosion_Parms, Result), Z_Construct_UScriptStruct_FSBZExplosionResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZMicroCamera_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMicroCamera_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMicroCamera_Multicast_ReplicateExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMicroCamera_Multicast_ReplicateExplosion_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMicroCamera_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMicroCamera_Multicast_ReplicateExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMicroCamera, nullptr, "Multicast_ReplicateExplosion", nullptr, nullptr, sizeof(SBZMicroCamera_eventMulticast_ReplicateExplosion_Parms), Z_Construct_UFunction_ASBZMicroCamera_Multicast_ReplicateExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMicroCamera_Multicast_ReplicateExplosion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMicroCamera_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMicroCamera_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMicroCamera_Multicast_ReplicateExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMicroCamera_Multicast_ReplicateExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMicroCamera_Multicast_SetArmed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMicroCamera_Multicast_SetArmed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMicroCamera_Multicast_SetArmed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMicroCamera, nullptr, "Multicast_SetArmed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMicroCamera_Multicast_SetArmed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMicroCamera_Multicast_SetArmed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMicroCamera_Multicast_SetArmed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMicroCamera_Multicast_SetArmed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMicroCamera_OnAICharacterKilled_Statics
	{
		struct SBZMicroCamera_eventOnAICharacterKilled_Parms
		{
			APawn* InAIPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAIPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZMicroCamera_OnAICharacterKilled_Statics::NewProp_InAIPawn = { "InAIPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMicroCamera_eventOnAICharacterKilled_Parms, InAIPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMicroCamera_OnAICharacterKilled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMicroCamera_OnAICharacterKilled_Statics::NewProp_InAIPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMicroCamera_OnAICharacterKilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMicroCamera_OnAICharacterKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMicroCamera, nullptr, "OnAICharacterKilled", nullptr, nullptr, sizeof(SBZMicroCamera_eventOnAICharacterKilled_Parms), Z_Construct_UFunction_ASBZMicroCamera_OnAICharacterKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMicroCamera_OnAICharacterKilled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMicroCamera_OnAICharacterKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMicroCamera_OnAICharacterKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMicroCamera_OnAICharacterKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMicroCamera_OnAICharacterKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZMicroCamera_NoRegister()
	{
		return ASBZMicroCamera::StaticClass();
	}
	struct Z_Construct_UClass_ASBZMicroCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YawLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MicroCameraTasedEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MicroCameraTasedEffectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MicroCameraExplodedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MicroCameraExplodedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetonationEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetonationEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaseDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TaseDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIExplosionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIExplosionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerExplosionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerExplosionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExplosionAffectsAIOnly_MetaData[];
#endif
		static void NewProp_bExplosionAffectsAIOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExplosionAffectsAIOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoMarkTickInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoMarkTickInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewExtents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewExtents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverloadStartEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverloadStartEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopOverloadStopEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopOverloadStopEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArmedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverloadSoundDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverloadSoundDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtReactionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HurtReactionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZMicroCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlaceableToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZMicroCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZMicroCamera_Multicast_OverloadMicroCamera, "Multicast_OverloadMicroCamera" }, // 2482312797
		{ &Z_Construct_UFunction_ASBZMicroCamera_Multicast_ReplicateExplosion, "Multicast_ReplicateExplosion" }, // 1717063953
		{ &Z_Construct_UFunction_ASBZMicroCamera_Multicast_SetArmed, "Multicast_SetArmed" }, // 987184885
		{ &Z_Construct_UFunction_ASBZMicroCamera_OnAICharacterKilled, "OnAICharacterKilled" }, // 3483792407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMicroCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_YawLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_YawLimit = { "YawLimit", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, YawLimit), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_YawLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_YawLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_PitchLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_PitchLimit = { "PitchLimit", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, PitchLimit), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_PitchLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_PitchLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_ExplosionInstigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_ExplosionInstigator = { "ExplosionInstigator", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, ExplosionInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_ExplosionInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_ExplosionInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_MicroCameraTasedEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_MicroCameraTasedEffectClass = { "MicroCameraTasedEffectClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, MicroCameraTasedEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_MicroCameraTasedEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_MicroCameraTasedEffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_MicroCameraExplodedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_MicroCameraExplodedEvent = { "MicroCameraExplodedEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, MicroCameraExplodedEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_MicroCameraExplodedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_MicroCameraExplodedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_DetonationEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_DetonationEffect = { "DetonationEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, DetonationEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_DetonationEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_DetonationEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_TaseDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_TaseDuration = { "TaseDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, TaseDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_TaseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_TaseDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_AIExplosionRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_AIExplosionRange = { "AIExplosionRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, AIExplosionRange), METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_AIExplosionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_AIExplosionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_PlayerExplosionRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_PlayerExplosionRange = { "PlayerExplosionRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, PlayerExplosionRange), METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_PlayerExplosionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_PlayerExplosionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_bExplosionAffectsAIOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	void Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_bExplosionAffectsAIOnly_SetBit(void* Obj)
	{
		((ASBZMicroCamera*)Obj)->bExplosionAffectsAIOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_bExplosionAffectsAIOnly = { "bExplosionAffectsAIOnly", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZMicroCamera), &Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_bExplosionAffectsAIOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_bExplosionAffectsAIOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_bExplosionAffectsAIOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_AutoMarkTickInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_AutoMarkTickInterval = { "AutoMarkTickInterval", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, AutoMarkTickInterval), METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_AutoMarkTickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_AutoMarkTickInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_ViewExtents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_ViewExtents = { "ViewExtents", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, ViewExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_ViewExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_ViewExtents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_OverloadStartEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_OverloadStartEvent = { "OverloadStartEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, OverloadStartEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_OverloadStartEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_OverloadStartEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_StopOverloadStopEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_StopOverloadStopEvent = { "StopOverloadStopEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, StopOverloadStopEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_StopOverloadStopEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_StopOverloadStopEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_ArmedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_ArmedEvent = { "ArmedEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, ArmedEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_ArmedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_ArmedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_OverloadSoundDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_OverloadSoundDuration = { "OverloadSoundDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, OverloadSoundDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_OverloadSoundDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_OverloadSoundDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_AkComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_AkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_AkComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_HurtReactionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_HurtReactionData = { "HurtReactionData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMicroCamera, HurtReactionData), Z_Construct_UScriptStruct_FSBZHurtReactionData, METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_HurtReactionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_HurtReactionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZMicroCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_YawLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_PitchLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_RotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_ExplosionInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_MicroCameraTasedEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_MicroCameraExplodedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_DetonationEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_TaseDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_AIExplosionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_PlayerExplosionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_bExplosionAffectsAIOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_AutoMarkTickInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_ViewExtents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_OverloadStartEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_StopOverloadStopEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_ArmedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_OverloadSoundDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_AkComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMicroCamera_Statics::NewProp_HurtReactionData,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZMicroCamera_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZCameraViewInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZMicroCamera, ISBZCameraViewInterface), false },
			{ Z_Construct_UClass_USBZExplosive_NoRegister, (int32)VTABLE_OFFSET(ASBZMicroCamera, ISBZExplosive), false },
			{ Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZMicroCamera, ISBZHurtReactionDataInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZMicroCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZMicroCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZMicroCamera_Statics::ClassParams = {
		&ASBZMicroCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZMicroCamera_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZMicroCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMicroCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZMicroCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZMicroCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZMicroCamera, 4076156654);
	template<> STARBREEZE_API UClass* StaticClass<ASBZMicroCamera>()
	{
		return ASBZMicroCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZMicroCamera(Z_Construct_UClass_ASBZMicroCamera, &ASBZMicroCamera::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZMicroCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZMicroCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
