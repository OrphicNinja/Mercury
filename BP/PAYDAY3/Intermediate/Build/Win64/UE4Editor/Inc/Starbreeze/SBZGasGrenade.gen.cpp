// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGasGrenade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGasGrenade() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGasGrenade_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGasGrenade();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZFragGrenade();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGasVolumeComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGasExplosionData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGasVolumeTarget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVolumeDamageInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZGasGrenade::execMulticast_ReplicateExplosionLocation)
	{
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ReplicateExplosionLocation_Implementation(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGasGrenade::execOnBeginOverlap)
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
	DEFINE_FUNCTION(ASBZGasGrenade::execOnEndOverlap)
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
	DEFINE_FUNCTION(ASBZGasGrenade::execOnRep_GasExplosionData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_GasExplosionData();
		P_NATIVE_END;
	}
	static FName NAME_ASBZGasGrenade_Multicast_ReplicateExplosionLocation = FName(TEXT("Multicast_ReplicateExplosionLocation"));
	void ASBZGasGrenade::Multicast_ReplicateExplosionLocation(FVector_NetQuantize const& Location)
	{
		SBZGasGrenade_eventMulticast_ReplicateExplosionLocation_Parms Parms;
		Parms.Location=Location;
		ProcessEvent(FindFunctionChecked(NAME_ASBZGasGrenade_Multicast_ReplicateExplosionLocation),&Parms);
	}
	void ASBZGasGrenade::StaticRegisterNativesASBZGasGrenade()
	{
		UClass* Class = ASBZGasGrenade::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_ReplicateExplosionLocation", &ASBZGasGrenade::execMulticast_ReplicateExplosionLocation },
			{ "OnBeginOverlap", &ASBZGasGrenade::execOnBeginOverlap },
			{ "OnEndOverlap", &ASBZGasGrenade::execOnEndOverlap },
			{ "OnRep_GasExplosionData", &ASBZGasGrenade::execOnRep_GasExplosionData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZGasGrenade_Multicast_ReplicateExplosionLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGasGrenade_Multicast_ReplicateExplosionLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGasGrenade_Multicast_ReplicateExplosionLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGasGrenade_eventMulticast_ReplicateExplosionLocation_Parms, Location), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UFunction_ASBZGasGrenade_Multicast_ReplicateExplosionLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGasGrenade_Multicast_ReplicateExplosionLocation_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGasGrenade_Multicast_ReplicateExplosionLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGasGrenade_Multicast_ReplicateExplosionLocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGasGrenade_Multicast_ReplicateExplosionLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGasGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGasGrenade_Multicast_ReplicateExplosionLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGasGrenade, nullptr, "Multicast_ReplicateExplosionLocation", nullptr, nullptr, sizeof(SBZGasGrenade_eventMulticast_ReplicateExplosionLocation_Parms), Z_Construct_UFunction_ASBZGasGrenade_Multicast_ReplicateExplosionLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGasGrenade_Multicast_ReplicateExplosionLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGasGrenade_Multicast_ReplicateExplosionLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGasGrenade_Multicast_ReplicateExplosionLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGasGrenade_Multicast_ReplicateExplosionLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGasGrenade_Multicast_ReplicateExplosionLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics
	{
		struct SBZGasGrenade_eventOnBeginOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGasGrenade_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGasGrenade_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGasGrenade_eventOnBeginOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGasGrenade_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_bIsSweep_SetBit(void* Obj)
	{
		((SBZGasGrenade_eventOnBeginOverlap_Parms*)Obj)->bIsSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_bIsSweep = { "bIsSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGasGrenade_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_bIsSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_SweepHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGasGrenade_eventOnBeginOverlap_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_SweepHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_SweepHitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_bIsSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::NewProp_SweepHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGasGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGasGrenade, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(SBZGasGrenade_eventOnBeginOverlap_Parms), Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics
	{
		struct SBZGasGrenade_eventOnEndOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGasGrenade_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGasGrenade_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGasGrenade_eventOnEndOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGasGrenade_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGasGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGasGrenade, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(SBZGasGrenade_eventOnEndOverlap_Parms), Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGasGrenade_OnRep_GasExplosionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGasGrenade_OnRep_GasExplosionData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGasGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGasGrenade_OnRep_GasExplosionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGasGrenade, nullptr, "OnRep_GasExplosionData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGasGrenade_OnRep_GasExplosionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGasGrenade_OnRep_GasExplosionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGasGrenade_OnRep_GasExplosionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGasGrenade_OnRep_GasExplosionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZGasGrenade_NoRegister()
	{
		return ASBZGasGrenade::StaticClass();
	}
	struct Z_Construct_UClass_ASBZGasGrenade_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraParticleUpdateInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NiagaraParticleUpdateInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateOverlapsInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateOverlapsInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateRemainingLifeTimeInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateRemainingLifeTimeInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GasCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GasCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GasComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GasComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GasExplosionRepData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GasExplosionRepData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZGasGrenade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZFragGrenade,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZGasGrenade_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZGasGrenade_Multicast_ReplicateExplosionLocation, "Multicast_ReplicateExplosionLocation" }, // 1983115760
		{ &Z_Construct_UFunction_ASBZGasGrenade_OnBeginOverlap, "OnBeginOverlap" }, // 3916515594
		{ &Z_Construct_UFunction_ASBZGasGrenade_OnEndOverlap, "OnEndOverlap" }, // 1624553941
		{ &Z_Construct_UFunction_ASBZGasGrenade_OnRep_GasExplosionData, "OnRep_GasExplosionData" }, // 62978366
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGasGrenade_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGasGrenade.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGasGrenade.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_NiagaraParticleUpdateInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasGrenade" },
		{ "ModuleRelativePath", "Public/SBZGasGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_NiagaraParticleUpdateInterval = { "NiagaraParticleUpdateInterval", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGasGrenade, NiagaraParticleUpdateInterval), METADATA_PARAMS(Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_NiagaraParticleUpdateInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_NiagaraParticleUpdateInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_UpdateOverlapsInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasGrenade" },
		{ "ModuleRelativePath", "Public/SBZGasGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_UpdateOverlapsInterval = { "UpdateOverlapsInterval", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGasGrenade, UpdateOverlapsInterval), METADATA_PARAMS(Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_UpdateOverlapsInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_UpdateOverlapsInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_UpdateRemainingLifeTimeInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasGrenade" },
		{ "ModuleRelativePath", "Public/SBZGasGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_UpdateRemainingLifeTimeInterval = { "UpdateRemainingLifeTimeInterval", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGasGrenade, UpdateRemainingLifeTimeInterval), METADATA_PARAMS(Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_UpdateRemainingLifeTimeInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_UpdateRemainingLifeTimeInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_RootCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasGrenade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGasGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_RootCollision = { "RootCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGasGrenade, RootCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_RootCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_RootCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_GasCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasGrenade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGasGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_GasCollision = { "GasCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGasGrenade, GasCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_GasCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_GasCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_GasComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasGrenade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGasGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_GasComponent = { "GasComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGasGrenade, GasComponent), Z_Construct_UClass_USBZGasVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_GasComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_GasComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_GasExplosionRepData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasGrenade" },
		{ "ModuleRelativePath", "Public/SBZGasGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_GasExplosionRepData = { "GasExplosionRepData", "OnRep_GasExplosionData", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGasGrenade, GasExplosionRepData), Z_Construct_UScriptStruct_FSBZGasExplosionData, METADATA_PARAMS(Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_GasExplosionRepData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_GasExplosionRepData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_TargetArray_Inner = { "TargetArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZGasVolumeTarget, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_TargetArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasGrenade" },
		{ "ModuleRelativePath", "Public/SBZGasGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_TargetArray = { "TargetArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZGasGrenade, TargetArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_TargetArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_TargetArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZGasGrenade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_NiagaraParticleUpdateInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_UpdateOverlapsInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_UpdateRemainingLifeTimeInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_RootCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_GasCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_GasComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_GasExplosionRepData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_TargetArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZGasGrenade_Statics::NewProp_TargetArray,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZGasGrenade_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZVolumeDamageInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZGasGrenade, ISBZVolumeDamageInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZGasGrenade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZGasGrenade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZGasGrenade_Statics::ClassParams = {
		&ASBZGasGrenade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZGasGrenade_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGasGrenade_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZGasGrenade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGasGrenade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZGasGrenade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZGasGrenade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZGasGrenade, 1313359061);
	template<> STARBREEZE_API UClass* StaticClass<ASBZGasGrenade>()
	{
		return ASBZGasGrenade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZGasGrenade(Z_Construct_UClass_ASBZGasGrenade, &ASBZGasGrenade::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZGasGrenade"), false, nullptr, nullptr, nullptr);

	void ASBZGasGrenade::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_GasExplosionRepData(TEXT("GasExplosionRepData"));

		const bool bIsValid = true
			&& Name_GasExplosionRepData == ClassReps[(int32)ENetFields_Private::GasExplosionRepData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZGasGrenade"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZGasGrenade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
