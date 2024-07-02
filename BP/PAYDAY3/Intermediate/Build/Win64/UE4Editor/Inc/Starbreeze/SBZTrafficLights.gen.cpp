// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficLights.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficLights() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTrafficLights_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTrafficLights();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZTrafficLightStatus();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAmbientSoundComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficLightPool();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficLightPoolState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTrafficManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTrafficSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZTrafficLights::execMulticast_SetActivePool)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewActivePoolIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetActivePool_Implementation(Z_Param_NewActivePoolIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTrafficLights::execRep_ActivePoolStateIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Rep_ActivePoolStateIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTrafficLights::execUpdatePool)
	{
		P_GET_ENUM(ESBZTrafficLightStatus,Z_Param_Status);
		P_GET_TARRAY_REF(UStaticMeshComponent*,Z_Param_Out_Pool);
		P_GET_TARRAY_REF(USBZAmbientSoundComponent*,Z_Param_Out_PedestrianSoundEmitters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePool_Implementation(ESBZTrafficLightStatus(Z_Param_Status),Z_Param_Out_Pool,Z_Param_Out_PedestrianSoundEmitters);
		P_NATIVE_END;
	}
	static FName NAME_ASBZTrafficLights_Multicast_SetActivePool = FName(TEXT("Multicast_SetActivePool"));
	void ASBZTrafficLights::Multicast_SetActivePool(int32 NewActivePoolIndex)
	{
		SBZTrafficLights_eventMulticast_SetActivePool_Parms Parms;
		Parms.NewActivePoolIndex=NewActivePoolIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASBZTrafficLights_Multicast_SetActivePool),&Parms);
	}
	static FName NAME_ASBZTrafficLights_UpdatePool = FName(TEXT("UpdatePool"));
	void ASBZTrafficLights::UpdatePool(ESBZTrafficLightStatus Status, TArray<UStaticMeshComponent*> const& Pool, TArray<USBZAmbientSoundComponent*> const& PedestrianSoundEmitters)
	{
		SBZTrafficLights_eventUpdatePool_Parms Parms;
		Parms.Status=Status;
		Parms.Pool=Pool;
		Parms.PedestrianSoundEmitters=PedestrianSoundEmitters;
		ProcessEvent(FindFunctionChecked(NAME_ASBZTrafficLights_UpdatePool),&Parms);
	}
	void ASBZTrafficLights::StaticRegisterNativesASBZTrafficLights()
	{
		UClass* Class = ASBZTrafficLights::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetActivePool", &ASBZTrafficLights::execMulticast_SetActivePool },
			{ "Rep_ActivePoolStateIndex", &ASBZTrafficLights::execRep_ActivePoolStateIndex },
			{ "UpdatePool", &ASBZTrafficLights::execUpdatePool },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZTrafficLights_Multicast_SetActivePool_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewActivePoolIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZTrafficLights_Multicast_SetActivePool_Statics::NewProp_NewActivePoolIndex = { "NewActivePoolIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficLights_eventMulticast_SetActivePool_Parms, NewActivePoolIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTrafficLights_Multicast_SetActivePool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTrafficLights_Multicast_SetActivePool_Statics::NewProp_NewActivePoolIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTrafficLights_Multicast_SetActivePool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficLights.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTrafficLights_Multicast_SetActivePool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTrafficLights, nullptr, "Multicast_SetActivePool", nullptr, nullptr, sizeof(SBZTrafficLights_eventMulticast_SetActivePool_Parms), Z_Construct_UFunction_ASBZTrafficLights_Multicast_SetActivePool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTrafficLights_Multicast_SetActivePool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTrafficLights_Multicast_SetActivePool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTrafficLights_Multicast_SetActivePool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTrafficLights_Multicast_SetActivePool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTrafficLights_Multicast_SetActivePool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTrafficLights_Rep_ActivePoolStateIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTrafficLights_Rep_ActivePoolStateIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficLights.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTrafficLights_Rep_ActivePoolStateIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTrafficLights, nullptr, "Rep_ActivePoolStateIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTrafficLights_Rep_ActivePoolStateIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTrafficLights_Rep_ActivePoolStateIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTrafficLights_Rep_ActivePoolStateIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTrafficLights_Rep_ActivePoolStateIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Pool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PedestrianSoundEmitters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PedestrianSoundEmitters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PedestrianSoundEmitters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficLights_eventUpdatePool_Parms, Status), Z_Construct_UEnum_Starbreeze_ESBZTrafficLightStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::NewProp_Pool_Inner = { "Pool", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::NewProp_Pool_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::NewProp_Pool = { "Pool", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficLights_eventUpdatePool_Parms, Pool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::NewProp_Pool_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::NewProp_Pool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::NewProp_PedestrianSoundEmitters_Inner = { "PedestrianSoundEmitters", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAmbientSoundComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::NewProp_PedestrianSoundEmitters_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::NewProp_PedestrianSoundEmitters = { "PedestrianSoundEmitters", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTrafficLights_eventUpdatePool_Parms, PedestrianSoundEmitters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::NewProp_PedestrianSoundEmitters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::NewProp_PedestrianSoundEmitters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::NewProp_Pool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::NewProp_Pool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::NewProp_PedestrianSoundEmitters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::NewProp_PedestrianSoundEmitters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTrafficLights.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTrafficLights, nullptr, "UpdatePool", nullptr, nullptr, sizeof(SBZTrafficLights_eventUpdatePool_Parms), Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTrafficLights_UpdatePool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTrafficLights_UpdatePool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZTrafficLights_NoRegister()
	{
		return ASBZTrafficLights::StaticClass();
	}
	struct Z_Construct_UClass_ASBZTrafficLights_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoolArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PoolArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoolStates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PoolStates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivePoolIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActivePoolIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextPoolTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NextPoolTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrafficManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrafficManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrafficSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrafficSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZTrafficLights_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZTrafficLights_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZTrafficLights_Multicast_SetActivePool, "Multicast_SetActivePool" }, // 1426697349
		{ &Z_Construct_UFunction_ASBZTrafficLights_Rep_ActivePoolStateIndex, "Rep_ActivePoolStateIndex" }, // 430409779
		{ &Z_Construct_UFunction_ASBZTrafficLights_UpdatePool, "UpdatePool" }, // 3750489169
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTrafficLights_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTrafficLights.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficLights.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_PoolArray_Inner = { "PoolArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZTrafficLightPool, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_PoolArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficLights" },
		{ "ModuleRelativePath", "Public/SBZTrafficLights.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_PoolArray = { "PoolArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTrafficLights, PoolArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_PoolArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_PoolArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_PoolStates_Inner = { "PoolStates", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZTrafficLightPoolState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_PoolStates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficLights" },
		{ "ModuleRelativePath", "Public/SBZTrafficLights.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_PoolStates = { "PoolStates", nullptr, (EPropertyFlags)0x0040008000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTrafficLights, PoolStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_PoolStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_PoolStates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_ActivePoolIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficLights" },
		{ "ModuleRelativePath", "Public/SBZTrafficLights.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_ActivePoolIndex = { "ActivePoolIndex", "Rep_ActivePoolStateIndex", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTrafficLights, ActivePoolIndex), METADATA_PARAMS(Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_ActivePoolIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_ActivePoolIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_NextPoolTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficLights" },
		{ "ModuleRelativePath", "Public/SBZTrafficLights.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_NextPoolTimer = { "NextPoolTimer", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTrafficLights, NextPoolTimer), METADATA_PARAMS(Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_NextPoolTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_NextPoolTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_TrafficManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficLights" },
		{ "ModuleRelativePath", "Public/SBZTrafficLights.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_TrafficManager = { "TrafficManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTrafficLights, TrafficManager), Z_Construct_UClass_USBZTrafficManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_TrafficManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_TrafficManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_TrafficSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficLights" },
		{ "ModuleRelativePath", "Public/SBZTrafficLights.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_TrafficSettings = { "TrafficSettings", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTrafficLights, TrafficSettings), Z_Construct_UClass_USBZTrafficSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_TrafficSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_TrafficSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZTrafficLights_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_PoolArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_PoolArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_PoolStates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_PoolStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_ActivePoolIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_NextPoolTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_TrafficManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTrafficLights_Statics::NewProp_TrafficSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZTrafficLights_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZTrafficLights>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZTrafficLights_Statics::ClassParams = {
		&ASBZTrafficLights::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZTrafficLights_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTrafficLights_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZTrafficLights_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTrafficLights_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZTrafficLights()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZTrafficLights_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZTrafficLights, 1582898357);
	template<> STARBREEZE_API UClass* StaticClass<ASBZTrafficLights>()
	{
		return ASBZTrafficLights::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZTrafficLights(Z_Construct_UClass_ASBZTrafficLights, &ASBZTrafficLights::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZTrafficLights"), false, nullptr, nullptr, nullptr);

	void ASBZTrafficLights::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ActivePoolIndex(TEXT("ActivePoolIndex"));

		const bool bIsValid = true
			&& Name_ActivePoolIndex == ClassReps[(int32)ENetFields_Private::ActivePoolIndex].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZTrafficLights"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZTrafficLights);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
