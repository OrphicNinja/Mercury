// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNiagaraWwiseComponentNonOpt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNiagaraWwiseComponentNonOpt() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZNiagaraWwiseComponentNonOpt::execActivateComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZNiagaraWwiseComponentNonOpt::execDeactivateComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZNiagaraWwiseComponentNonOpt::execDestroyComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZNiagaraWwiseComponentNonOpt::execPlayEffectsLoop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayEffectsLoop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZNiagaraWwiseComponentNonOpt::execPlayEffectsOneShot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayEffectsOneShot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZNiagaraWwiseComponentNonOpt::execStopEffectsLoop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopEffectsLoop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZNiagaraWwiseComponentNonOpt::execUpdateRtpc)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RtpcValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RtpcInterpolationValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateRtpc(Z_Param_RtpcValue,Z_Param_RtpcInterpolationValue);
		P_NATIVE_END;
	}
	void USBZNiagaraWwiseComponentNonOpt::StaticRegisterNativesUSBZNiagaraWwiseComponentNonOpt()
	{
		UClass* Class = USBZNiagaraWwiseComponentNonOpt::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateComponent", &USBZNiagaraWwiseComponentNonOpt::execActivateComponent },
			{ "DeactivateComponent", &USBZNiagaraWwiseComponentNonOpt::execDeactivateComponent },
			{ "DestroyComponents", &USBZNiagaraWwiseComponentNonOpt::execDestroyComponents },
			{ "PlayEffectsLoop", &USBZNiagaraWwiseComponentNonOpt::execPlayEffectsLoop },
			{ "PlayEffectsOneShot", &USBZNiagaraWwiseComponentNonOpt::execPlayEffectsOneShot },
			{ "StopEffectsLoop", &USBZNiagaraWwiseComponentNonOpt::execStopEffectsLoop },
			{ "UpdateRtpc", &USBZNiagaraWwiseComponentNonOpt::execUpdateRtpc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_ActivateComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_ActivateComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_ActivateComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt, nullptr, "ActivateComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_ActivateComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_ActivateComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_ActivateComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_ActivateComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_DeactivateComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_DeactivateComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_DeactivateComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt, nullptr, "DeactivateComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_DeactivateComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_DeactivateComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_DeactivateComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_DeactivateComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_DestroyComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_DestroyComponents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_DestroyComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt, nullptr, "DestroyComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_DestroyComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_DestroyComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_DestroyComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_DestroyComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_PlayEffectsLoop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_PlayEffectsLoop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_PlayEffectsLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt, nullptr, "PlayEffectsLoop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_PlayEffectsLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_PlayEffectsLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_PlayEffectsLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_PlayEffectsLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_PlayEffectsOneShot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_PlayEffectsOneShot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_PlayEffectsOneShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt, nullptr, "PlayEffectsOneShot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_PlayEffectsOneShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_PlayEffectsOneShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_PlayEffectsOneShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_PlayEffectsOneShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_StopEffectsLoop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_StopEffectsLoop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_StopEffectsLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt, nullptr, "StopEffectsLoop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_StopEffectsLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_StopEffectsLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_StopEffectsLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_StopEffectsLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_UpdateRtpc_Statics
	{
		struct SBZNiagaraWwiseComponentNonOpt_eventUpdateRtpc_Parms
		{
			float RtpcValue;
			float RtpcInterpolationValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RtpcValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RtpcInterpolationValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_UpdateRtpc_Statics::NewProp_RtpcValue = { "RtpcValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZNiagaraWwiseComponentNonOpt_eventUpdateRtpc_Parms, RtpcValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_UpdateRtpc_Statics::NewProp_RtpcInterpolationValue = { "RtpcInterpolationValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZNiagaraWwiseComponentNonOpt_eventUpdateRtpc_Parms, RtpcInterpolationValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_UpdateRtpc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_UpdateRtpc_Statics::NewProp_RtpcValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_UpdateRtpc_Statics::NewProp_RtpcInterpolationValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_UpdateRtpc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_UpdateRtpc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt, nullptr, "UpdateRtpc", nullptr, nullptr, sizeof(SBZNiagaraWwiseComponentNonOpt_eventUpdateRtpc_Parms), Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_UpdateRtpc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_UpdateRtpc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_UpdateRtpc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_UpdateRtpc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_UpdateRtpc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_UpdateRtpc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_NoRegister()
	{
		return USBZNiagaraWwiseComponentNonOpt::StaticClass();
	}
	struct Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventToPlayOneShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventToPlayOneShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventToPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventToPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventToStopPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventToStopPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Rtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraEffectOneShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraEffectOneShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOneShotEffect_MetaData[];
#endif
		static void NewProp_bOneShotEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOneShotEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateRtpc_MetaData[];
#endif
		static void NewProp_bUpdateRtpc_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RtpcUpdateValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RtpcUpdateValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RtpcInterpolationTimerMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RtpcInterpolationTimerMS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_ActivateComponent, "ActivateComponent" }, // 869331621
		{ &Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_DeactivateComponent, "DeactivateComponent" }, // 2868868462
		{ &Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_DestroyComponents, "DestroyComponents" }, // 3930521541
		{ &Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_PlayEffectsLoop, "PlayEffectsLoop" }, // 3268566631
		{ &Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_PlayEffectsOneShot, "PlayEffectsOneShot" }, // 3443297876
		{ &Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_StopEffectsLoop, "StopEffectsLoop" }, // 1012557590
		{ &Z_Construct_UFunction_USBZNiagaraWwiseComponentNonOpt_UpdateRtpc, "UpdateRtpc" }, // 620916441
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SBZNiagaraWwiseComponentNonOpt.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_EventToPlayOneShot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNiagaraWwiseComponentNonOpt" },
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_EventToPlayOneShot = { "EventToPlayOneShot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNiagaraWwiseComponentNonOpt, EventToPlayOneShot), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_EventToPlayOneShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_EventToPlayOneShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_EventToPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNiagaraWwiseComponentNonOpt" },
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_EventToPlay = { "EventToPlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNiagaraWwiseComponentNonOpt, EventToPlay), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_EventToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_EventToPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_EventToStopPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNiagaraWwiseComponentNonOpt" },
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_EventToStopPlay = { "EventToStopPlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNiagaraWwiseComponentNonOpt, EventToStopPlay), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_EventToStopPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_EventToStopPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_Rtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNiagaraWwiseComponentNonOpt" },
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_Rtpc = { "Rtpc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNiagaraWwiseComponentNonOpt, Rtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_Rtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_Rtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_NiagaraEffectOneShot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNiagaraWwiseComponentNonOpt" },
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_NiagaraEffectOneShot = { "NiagaraEffectOneShot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNiagaraWwiseComponentNonOpt, NiagaraEffectOneShot), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_NiagaraEffectOneShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_NiagaraEffectOneShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_NiagaraEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNiagaraWwiseComponentNonOpt" },
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_NiagaraEffect = { "NiagaraEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNiagaraWwiseComponentNonOpt, NiagaraEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_NiagaraEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_NiagaraEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNiagaraWwiseComponentNonOpt" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNiagaraWwiseComponentNonOpt, AudioComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_NiagaraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNiagaraWwiseComponentNonOpt" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNiagaraWwiseComponentNonOpt, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_NiagaraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_NiagaraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_bOneShotEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNiagaraWwiseComponentNonOpt" },
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	void Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_bOneShotEffect_SetBit(void* Obj)
	{
		((USBZNiagaraWwiseComponentNonOpt*)Obj)->bOneShotEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_bOneShotEffect = { "bOneShotEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZNiagaraWwiseComponentNonOpt), &Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_bOneShotEffect_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_bOneShotEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_bOneShotEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_bUpdateRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNiagaraWwiseComponentNonOpt" },
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	void Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_bUpdateRtpc_SetBit(void* Obj)
	{
		((USBZNiagaraWwiseComponentNonOpt*)Obj)->bUpdateRtpc = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_bUpdateRtpc = { "bUpdateRtpc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZNiagaraWwiseComponentNonOpt), &Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_bUpdateRtpc_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_bUpdateRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_bUpdateRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_RtpcUpdateValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNiagaraWwiseComponentNonOpt" },
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_RtpcUpdateValue = { "RtpcUpdateValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNiagaraWwiseComponentNonOpt, RtpcUpdateValue), METADATA_PARAMS(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_RtpcUpdateValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_RtpcUpdateValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_RtpcInterpolationTimerMS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNiagaraWwiseComponentNonOpt" },
		{ "ModuleRelativePath", "Public/SBZNiagaraWwiseComponentNonOpt.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_RtpcInterpolationTimerMS = { "RtpcInterpolationTimerMS", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNiagaraWwiseComponentNonOpt, RtpcInterpolationTimerMS), METADATA_PARAMS(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_RtpcInterpolationTimerMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_RtpcInterpolationTimerMS_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_EventToPlayOneShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_EventToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_EventToStopPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_Rtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_NiagaraEffectOneShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_NiagaraEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_NiagaraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_bOneShotEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_bUpdateRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_RtpcUpdateValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::NewProp_RtpcInterpolationTimerMS,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZNiagaraWwiseComponentNonOpt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::ClassParams = {
		&USBZNiagaraWwiseComponentNonOpt::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZNiagaraWwiseComponentNonOpt, 3578532359);
	template<> STARBREEZE_API UClass* StaticClass<USBZNiagaraWwiseComponentNonOpt>()
	{
		return USBZNiagaraWwiseComponentNonOpt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZNiagaraWwiseComponentNonOpt(Z_Construct_UClass_USBZNiagaraWwiseComponentNonOpt, &USBZNiagaraWwiseComponentNonOpt::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZNiagaraWwiseComponentNonOpt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZNiagaraWwiseComponentNonOpt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
