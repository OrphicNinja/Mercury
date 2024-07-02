// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWorldRuntime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWorldRuntime() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWorldRuntime_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWorldRuntime();
	SBZWORLDRUNTIME_API UClass* Z_Construct_UClass_USBZWorldRuntimeBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorContainer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObservableActorContainer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectContainer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorRingBuffer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZImpactManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDebugDrawingManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSignificanceManager_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActiveGlobalCommentPermissionArray();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZWorldRuntime::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZWorldRuntime**)Z_Param__Result=USBZWorldRuntime::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZWorldRuntime::StaticRegisterNativesUSBZWorldRuntime()
	{
		UClass* Class = USBZWorldRuntime::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZWorldRuntime::execGet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZWorldRuntime_Get_Statics
	{
		struct SBZWorldRuntime_eventGet_Parms
		{
			const UObject* WorldContextObject;
			USBZWorldRuntime* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWorldRuntime_Get_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWorldRuntime_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWorldRuntime_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZWorldRuntime_Get_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWorldRuntime_Get_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWorldRuntime_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWorldRuntime_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZWorldRuntime_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWorldRuntime_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWorldRuntime_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWorldRuntime_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWorldRuntime_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWorldRuntime_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWorldRuntime, nullptr, "Get", nullptr, nullptr, sizeof(SBZWorldRuntime_eventGet_Parms), Z_Construct_UFunction_USBZWorldRuntime_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWorldRuntime_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWorldRuntime_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWorldRuntime_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWorldRuntime_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWorldRuntime_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZWorldRuntime_NoRegister()
	{
		return USBZWorldRuntime::StaticClass();
	}
	struct Z_Construct_UClass_USBZWorldRuntime_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllPawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllPawns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllAlivePawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllAlivePawns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllPlayerCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllPlayerCharacters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllAlivePlayerCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllAlivePlayerCharacters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllAliveAICrewCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllAliveAICrewCharacters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllAliveAICharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllAliveAICharacters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllAliveAIGuards_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllAliveAIGuards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllAliveAIStreetCops_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllAliveAIStreetCops;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllAliveAIDrones_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllAliveAIDrones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllRagdollCarryCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllRagdollCarryCharacters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllLevelScriptActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllLevelScriptActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllBagDropPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllBagDropPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllSecurityRooms_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllSecurityRooms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllSecurityCameras_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllSecurityCameras;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllDespawnVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllDespawnVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllArmedPlayerGrenades_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllArmedPlayerGrenades;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllRoomVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllRoomVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllProtectPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllProtectPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllDefensePoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllDefensePoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllVantagePoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllVantagePoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllActiveObjectives_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllActiveObjectives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllEscortPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllEscortPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllSabotageTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllSabotageTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllTaserMines_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllTaserMines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllPlacebleCharges_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllPlacebleCharges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllAliveHostages_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllAliveHostages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllAliveAutoAimActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllAliveAutoAimActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingVisibilityDeleteActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PendingVisibilityDeleteActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RagdollActorsBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RagdollActorsBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebrisActorsBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebrisActorsBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllAIAttractors_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllAIAttractors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllAIObjectives_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllAIObjectives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllBrainslugs_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllBrainslugs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugDrawingManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugDrawingManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignificanceManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SignificanceManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllHackableActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllHackableActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllActiveBagRespawnPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllActiveBagRespawnPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllSensorToolBlueActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllSensorToolBlueActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllSensorToolOrangeActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllSensorToolOrangeActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllScreenInteractComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllScreenInteractComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllCrewAILifeActionComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllCrewAILifeActionComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllAITowerHideLifeActionObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllAITowerHideLifeActionObjects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalCommentCooldown_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlobalCommentCooldown_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalCommentCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GlobalCommentCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWorldRuntime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWorldRuntimeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZWorldRuntime_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZWorldRuntime_Get, "Get" }, // 4068471072
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWorldRuntime.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllPawns_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllPawns = { "AllPawns", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllPawns), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllPawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllPawns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAlivePawns_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAlivePawns = { "AllAlivePawns", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllAlivePawns), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAlivePawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAlivePawns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllPlayerCharacters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllPlayerCharacters = { "AllPlayerCharacters", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllPlayerCharacters), Z_Construct_UClass_USBZObservableActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllPlayerCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllPlayerCharacters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAlivePlayerCharacters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAlivePlayerCharacters = { "AllAlivePlayerCharacters", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllAlivePlayerCharacters), Z_Construct_UClass_USBZObservableActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAlivePlayerCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAlivePlayerCharacters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAICrewCharacters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAICrewCharacters = { "AllAliveAICrewCharacters", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllAliveAICrewCharacters), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAICrewCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAICrewCharacters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAICharacters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAICharacters = { "AllAliveAICharacters", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllAliveAICharacters), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAICharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAICharacters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAIGuards_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAIGuards = { "AllAliveAIGuards", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllAliveAIGuards), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAIGuards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAIGuards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAIStreetCops_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAIStreetCops = { "AllAliveAIStreetCops", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllAliveAIStreetCops), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAIStreetCops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAIStreetCops_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAIDrones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAIDrones = { "AllAliveAIDrones", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllAliveAIDrones), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAIDrones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAIDrones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllRagdollCarryCharacters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllRagdollCarryCharacters = { "AllRagdollCarryCharacters", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllRagdollCarryCharacters), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllRagdollCarryCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllRagdollCarryCharacters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllLevelScriptActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllLevelScriptActors = { "AllLevelScriptActors", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllLevelScriptActors), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllLevelScriptActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllLevelScriptActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllBagDropPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllBagDropPoints = { "AllBagDropPoints", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllBagDropPoints), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllBagDropPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllBagDropPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSecurityRooms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSecurityRooms = { "AllSecurityRooms", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllSecurityRooms), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSecurityRooms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSecurityRooms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSecurityCameras_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSecurityCameras = { "AllSecurityCameras", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllSecurityCameras), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSecurityCameras_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSecurityCameras_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllDespawnVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllDespawnVolumes = { "AllDespawnVolumes", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllDespawnVolumes), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllDespawnVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllDespawnVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllArmedPlayerGrenades_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllArmedPlayerGrenades = { "AllArmedPlayerGrenades", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllArmedPlayerGrenades), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllArmedPlayerGrenades_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllArmedPlayerGrenades_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllRoomVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllRoomVolumes = { "AllRoomVolumes", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllRoomVolumes), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllRoomVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllRoomVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllProtectPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllProtectPoints = { "AllProtectPoints", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllProtectPoints), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllProtectPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllProtectPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllDefensePoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllDefensePoints = { "AllDefensePoints", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllDefensePoints), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllDefensePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllDefensePoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllVantagePoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllVantagePoints = { "AllVantagePoints", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllVantagePoints), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllVantagePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllVantagePoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllActiveObjectives_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllActiveObjectives = { "AllActiveObjectives", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllActiveObjectives), Z_Construct_UClass_USBZObservableActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllActiveObjectives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllActiveObjectives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllEscortPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllEscortPoints = { "AllEscortPoints", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllEscortPoints), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllEscortPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllEscortPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSabotageTargets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSabotageTargets = { "AllSabotageTargets", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllSabotageTargets), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSabotageTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSabotageTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllTaserMines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllTaserMines = { "AllTaserMines", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllTaserMines), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllTaserMines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllTaserMines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllPlacebleCharges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllPlacebleCharges = { "AllPlacebleCharges", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllPlacebleCharges), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllPlacebleCharges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllPlacebleCharges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveHostages_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveHostages = { "AllAliveHostages", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllAliveHostages), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveHostages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveHostages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAutoAimActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAutoAimActors = { "AllAliveAutoAimActors", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllAliveAutoAimActors), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAutoAimActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAutoAimActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_PendingVisibilityDeleteActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_PendingVisibilityDeleteActors = { "PendingVisibilityDeleteActors", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, PendingVisibilityDeleteActors), Z_Construct_UClass_USBZObjectContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_PendingVisibilityDeleteActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_PendingVisibilityDeleteActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_RagdollActorsBuffer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_RagdollActorsBuffer = { "RagdollActorsBuffer", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, RagdollActorsBuffer), Z_Construct_UClass_USBZActorRingBuffer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_RagdollActorsBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_RagdollActorsBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_DebrisActorsBuffer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_DebrisActorsBuffer = { "DebrisActorsBuffer", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, DebrisActorsBuffer), Z_Construct_UClass_USBZActorRingBuffer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_DebrisActorsBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_DebrisActorsBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAIAttractors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAIAttractors = { "AllAIAttractors", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllAIAttractors), Z_Construct_UClass_USBZObjectContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAIAttractors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAIAttractors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAIObjectives_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAIObjectives = { "AllAIObjectives", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllAIObjectives), Z_Construct_UClass_USBZObjectContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAIObjectives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAIObjectives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllBrainslugs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllBrainslugs = { "AllBrainslugs", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllBrainslugs), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllBrainslugs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllBrainslugs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_ImpactManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_ImpactManager = { "ImpactManager", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, ImpactManager), Z_Construct_UClass_USBZImpactManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_ImpactManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_ImpactManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_DebugDrawingManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_DebugDrawingManager = { "DebugDrawingManager", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, DebugDrawingManager), Z_Construct_UClass_ASBZDebugDrawingManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_DebugDrawingManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_DebugDrawingManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_SignificanceManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_SignificanceManager = { "SignificanceManager", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, SignificanceManager), Z_Construct_UClass_USBZSignificanceManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_SignificanceManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_SignificanceManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllHackableActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllHackableActors = { "AllHackableActors", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllHackableActors), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllHackableActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllHackableActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllActiveBagRespawnPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllActiveBagRespawnPoints = { "AllActiveBagRespawnPoints", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllActiveBagRespawnPoints), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllActiveBagRespawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllActiveBagRespawnPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSensorToolBlueActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSensorToolBlueActors = { "AllSensorToolBlueActors", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllSensorToolBlueActors), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSensorToolBlueActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSensorToolBlueActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSensorToolOrangeActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSensorToolOrangeActors = { "AllSensorToolOrangeActors", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllSensorToolOrangeActors), Z_Construct_UClass_USBZActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSensorToolOrangeActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSensorToolOrangeActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllScreenInteractComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllScreenInteractComponents = { "AllScreenInteractComponents", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllScreenInteractComponents), Z_Construct_UClass_USBZObjectContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllScreenInteractComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllScreenInteractComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllCrewAILifeActionComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllCrewAILifeActionComponents = { "AllCrewAILifeActionComponents", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllCrewAILifeActionComponents), Z_Construct_UClass_USBZObjectContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllCrewAILifeActionComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllCrewAILifeActionComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAITowerHideLifeActionObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAITowerHideLifeActionObjects = { "AllAITowerHideLifeActionObjects", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, AllAITowerHideLifeActionObjects), Z_Construct_UClass_USBZObjectContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAITowerHideLifeActionObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAITowerHideLifeActionObjects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_GlobalCommentCooldown_ValueProp = { "GlobalCommentCooldown", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZActiveGlobalCommentPermissionArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_GlobalCommentCooldown_Key_KeyProp = { "GlobalCommentCooldown_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_GlobalCommentCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntime" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_GlobalCommentCooldown = { "GlobalCommentCooldown", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntime, GlobalCommentCooldown), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_GlobalCommentCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_GlobalCommentCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWorldRuntime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllPawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAlivePawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllPlayerCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAlivePlayerCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAICrewCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAICharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAIGuards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAIStreetCops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAIDrones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllRagdollCarryCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllLevelScriptActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllBagDropPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSecurityRooms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSecurityCameras,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllDespawnVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllArmedPlayerGrenades,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllRoomVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllProtectPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllDefensePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllVantagePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllActiveObjectives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllEscortPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSabotageTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllTaserMines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllPlacebleCharges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveHostages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAliveAutoAimActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_PendingVisibilityDeleteActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_RagdollActorsBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_DebrisActorsBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAIAttractors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAIObjectives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllBrainslugs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_ImpactManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_DebugDrawingManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_SignificanceManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllHackableActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllActiveBagRespawnPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSensorToolBlueActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllSensorToolOrangeActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllScreenInteractComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllCrewAILifeActionComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_AllAITowerHideLifeActionObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_GlobalCommentCooldown_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_GlobalCommentCooldown_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntime_Statics::NewProp_GlobalCommentCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWorldRuntime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWorldRuntime>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWorldRuntime_Statics::ClassParams = {
		&USBZWorldRuntime::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZWorldRuntime_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::PropPointers),
		0,
		0x009000AEu,
		METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntime_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWorldRuntime()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWorldRuntime_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWorldRuntime, 1932619996);
	template<> STARBREEZE_API UClass* StaticClass<USBZWorldRuntime>()
	{
		return USBZWorldRuntime::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWorldRuntime(Z_Construct_UClass_USBZWorldRuntime, &USBZWorldRuntime::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWorldRuntime"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWorldRuntime);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
