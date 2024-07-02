// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZExplosiveTrapGas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZExplosiveTrapGas() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZExplosiveTrapGas_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZExplosiveTrapGas();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZExplosiveTrap();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGasVolumeComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageType_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVolumeDamageEffect_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGasVolumeTarget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVolumeDamageInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZExplosiveTrapGas::execOnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bIsSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bIsSweep,Z_Param_Out_SweepHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZExplosiveTrapGas::execOnEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZExplosiveTrapGas::execOnRep_GasDurationLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_GasDurationLeft();
		P_NATIVE_END;
	}
	void ASBZExplosiveTrapGas::StaticRegisterNativesASBZExplosiveTrapGas()
	{
		UClass* Class = ASBZExplosiveTrapGas::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &ASBZExplosiveTrapGas::execOnBeginOverlap },
			{ "OnEndOverlap", &ASBZExplosiveTrapGas::execOnEndOverlap },
			{ "OnRep_GasDurationLeft", &ASBZExplosiveTrapGas::execOnRep_GasDurationLeft },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics
	{
		struct SBZExplosiveTrapGas_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool bIsSweep;
			FHitResult SweepHitResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bIsSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepHitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZExplosiveTrapGas_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZExplosiveTrapGas_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZExplosiveTrapGas_eventOnBeginOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZExplosiveTrapGas_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_bIsSweep_SetBit(void* Obj)
	{
		((SBZExplosiveTrapGas_eventOnBeginOverlap_Parms*)Obj)->bIsSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_bIsSweep = { "bIsSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZExplosiveTrapGas_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_bIsSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_SweepHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZExplosiveTrapGas_eventOnBeginOverlap_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_SweepHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_SweepHitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_bIsSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::NewProp_SweepHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveTrapGas.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveTrapGas, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(SBZExplosiveTrapGas_eventOnBeginOverlap_Parms), Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics
	{
		struct SBZExplosiveTrapGas_eventOnEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZExplosiveTrapGas_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZExplosiveTrapGas_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZExplosiveTrapGas_eventOnEndOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZExplosiveTrapGas_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveTrapGas.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveTrapGas, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(SBZExplosiveTrapGas_eventOnEndOverlap_Parms), Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZExplosiveTrapGas_OnRep_GasDurationLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveTrapGas_OnRep_GasDurationLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveTrapGas.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveTrapGas_OnRep_GasDurationLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveTrapGas, nullptr, "OnRep_GasDurationLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveTrapGas_OnRep_GasDurationLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveTrapGas_OnRep_GasDurationLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveTrapGas_OnRep_GasDurationLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveTrapGas_OnRep_GasDurationLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZExplosiveTrapGas_NoRegister()
	{
		return ASBZExplosiveTrapGas::StaticClass();
	}
	struct Z_Construct_UClass_ASBZExplosiveTrapGas_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GasVolumeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GasVolumeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeDamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_VolumeDamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagePerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamagePerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GasArmorPenetration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GasArmorPenetration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeDamageAddedTagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VolumeDamageAddedTagContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeDamageEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_VolumeDamageEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GasDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GasDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateOverlapsFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateOverlapsFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateRemainingLifeTimeInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateRemainingLifeTimeInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraParticleUpdateInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NiagaraParticleUpdateInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GasLifetimeLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GasLifetimeLeft;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GasTargetArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GasTargetArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GasTargetArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZExplosiveTrap,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZExplosiveTrapGas_OnBeginOverlap, "OnBeginOverlap" }, // 1919351893
		{ &Z_Construct_UFunction_ASBZExplosiveTrapGas_OnEndOverlap, "OnEndOverlap" }, // 1391514865
		{ &Z_Construct_UFunction_ASBZExplosiveTrapGas_OnRep_GasDurationLeft, "OnRep_GasDurationLeft" }, // 2793879725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZExplosiveTrapGas.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrapGas.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrapGas" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrapGas.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrapGas, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasVolumeComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrapGas" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrapGas.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasVolumeComponent = { "GasVolumeComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrapGas, GasVolumeComponent), Z_Construct_UClass_USBZGasVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasVolumeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasVolumeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_VolumeDamageType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrapGas" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrapGas.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_VolumeDamageType = { "VolumeDamageType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrapGas, VolumeDamageType), Z_Construct_UClass_USBZDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_VolumeDamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_VolumeDamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_DamagePerSecond_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrapGas" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrapGas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_DamagePerSecond = { "DamagePerSecond", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrapGas, DamagePerSecond), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_DamagePerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_DamagePerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_TickSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrapGas" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrapGas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_TickSeconds = { "TickSeconds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrapGas, TickSeconds), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_TickSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_TickSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasArmorPenetration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrapGas" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrapGas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasArmorPenetration = { "GasArmorPenetration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrapGas, GasArmorPenetration), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasArmorPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasArmorPenetration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_VolumeDamageAddedTagContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrapGas" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrapGas.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_VolumeDamageAddedTagContainer = { "VolumeDamageAddedTagContainer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrapGas, VolumeDamageAddedTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_VolumeDamageAddedTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_VolumeDamageAddedTagContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_VolumeDamageEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrapGas" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrapGas.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_VolumeDamageEffect = { "VolumeDamageEffect", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrapGas, VolumeDamageEffect), Z_Construct_UClass_USBZVolumeDamageEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_VolumeDamageEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_VolumeDamageEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrapGas" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrapGas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasDuration = { "GasDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrapGas, GasDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_UpdateOverlapsFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrapGas" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrapGas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_UpdateOverlapsFrequency = { "UpdateOverlapsFrequency", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrapGas, UpdateOverlapsFrequency), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_UpdateOverlapsFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_UpdateOverlapsFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_UpdateRemainingLifeTimeInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrapGas" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrapGas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_UpdateRemainingLifeTimeInterval = { "UpdateRemainingLifeTimeInterval", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrapGas, UpdateRemainingLifeTimeInterval), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_UpdateRemainingLifeTimeInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_UpdateRemainingLifeTimeInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_NiagaraParticleUpdateInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrapGas" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrapGas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_NiagaraParticleUpdateInterval = { "NiagaraParticleUpdateInterval", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrapGas, NiagaraParticleUpdateInterval), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_NiagaraParticleUpdateInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_NiagaraParticleUpdateInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasLifetimeLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrapGas" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrapGas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasLifetimeLeft = { "GasLifetimeLeft", "OnRep_GasDurationLeft", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrapGas, GasLifetimeLeft), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasLifetimeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasLifetimeLeft_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasTargetArray_Inner = { "GasTargetArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZGasVolumeTarget, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasTargetArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrapGas" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrapGas.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasTargetArray = { "GasTargetArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrapGas, GasTargetArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasTargetArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasTargetArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_SphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasVolumeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_VolumeDamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_DamagePerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_TickSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasArmorPenetration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_VolumeDamageAddedTagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_VolumeDamageEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_UpdateOverlapsFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_UpdateRemainingLifeTimeInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_NiagaraParticleUpdateInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasLifetimeLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasTargetArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::NewProp_GasTargetArray,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZVolumeDamageInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZExplosiveTrapGas, ISBZVolumeDamageInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZExplosiveTrapGas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::ClassParams = {
		&ASBZExplosiveTrapGas::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZExplosiveTrapGas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZExplosiveTrapGas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZExplosiveTrapGas, 2043214567);
	template<> STARBREEZE_API UClass* StaticClass<ASBZExplosiveTrapGas>()
	{
		return ASBZExplosiveTrapGas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZExplosiveTrapGas(Z_Construct_UClass_ASBZExplosiveTrapGas, &ASBZExplosiveTrapGas::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZExplosiveTrapGas"), false, nullptr, nullptr, nullptr);

	void ASBZExplosiveTrapGas::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_GasLifetimeLeft(TEXT("GasLifetimeLeft"));

		const bool bIsValid = true
			&& Name_GasLifetimeLeft == ClassReps[(int32)ENetFields_Private::GasLifetimeLeft].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZExplosiveTrapGas"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZExplosiveTrapGas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
