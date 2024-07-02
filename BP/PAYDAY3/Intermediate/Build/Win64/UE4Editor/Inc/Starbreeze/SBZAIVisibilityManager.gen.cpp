// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIVisibilityManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIVisibilityManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIVisibilityManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIVisibilityManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIVisibilityLeafNode();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIVisibilityRelevant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCoverPoint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIVisibilityComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execDebugLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_UBOOL(Z_Param_bDrawAzymuts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DebugLocation(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_bDrawAzymuts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execGetAIVisibilityManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZAIVisibilityManager**)Z_Param__Result=ASBZAIVisibilityManager::GetAIVisibilityManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execGetAiVisibilityNode)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZAIVisibilityLeafNode*)Z_Param__Result=P_THIS->GetAiVisibilityNode(Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execHasVisibilityData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasVisibilityData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execIsAIVisibilityRelevantSafeFromAIVisibility)
	{
		P_GET_TINTERFACE(ISBZAIVisibilityRelevant,Z_Param_AIVisibilityRelevant);
		P_GET_TINTERFACE(ISBZAIVisibilityRelevant,Z_Param_ObserverAIVisibilityRelevant);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutSafeStances);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAdjustedLocation);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAIVisibilityRelevantSafeFromAIVisibility(Z_Param_AIVisibilityRelevant,Z_Param_ObserverAIVisibilityRelevant,Z_Param_Out_OutSafeStances,Z_Param_Out_OutAdjustedLocation,Z_Param_Out_OutScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execIsLocationSafeFromLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ObserverLocation);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutSafeStances);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAdjustedLocation);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocationSafeFromLocation(Z_Param_Out_Location,Z_Param_Out_ObserverLocation,Z_Param_Out_OutSafeStances,Z_Param_Out_OutAdjustedLocation,Z_Param_Out_OutScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execIsLocationVisibleFromLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ObserverLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAdjustedLocation);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocationVisibleFromLocation(Z_Param_Out_Location,Z_Param_Out_ObserverLocation,Z_Param_Out_OutAdjustedLocation,Z_Param_Out_OutScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execIsNodeSafeFromActor)
	{
		P_GET_STRUCT_REF(FSBZAIVisibilityLeafNode,Z_Param_Out_LeafNode);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_OBJECT(AActor,Z_Param_ActorObserver);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutSafeStances);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAdjustedLocation);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNodeSafeFromActor(Z_Param_Out_LeafNode,Z_Param_Out_Location,Z_Param_ActorObserver,Z_Param_Out_OutSafeStances,Z_Param_Out_OutAdjustedLocation,Z_Param_Out_OutScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execIsNodeSafeFromLocation)
	{
		P_GET_STRUCT_REF(FSBZAIVisibilityLeafNode,Z_Param_Out_LeafNode);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ObserverLocation);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutSafeStances);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAdjustedLocation);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNodeSafeFromLocation(Z_Param_Out_LeafNode,Z_Param_Out_Location,Z_Param_Out_ObserverLocation,Z_Param_Out_OutSafeStances,Z_Param_Out_OutAdjustedLocation,Z_Param_Out_OutScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execIsNodeVisibleFromActor)
	{
		P_GET_STRUCT_REF(FSBZAIVisibilityLeafNode,Z_Param_Out_LeafNode);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_OBJECT(AActor,Z_Param_ActorObserver);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAdjustedLocation);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNodeVisibleFromActor(Z_Param_Out_LeafNode,Z_Param_Out_Location,Z_Param_ActorObserver,Z_Param_Out_OutAdjustedLocation,Z_Param_Out_OutScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execIsNodeVisibleFromLocation)
	{
		P_GET_STRUCT_REF(FSBZAIVisibilityLeafNode,Z_Param_Out_LeafNode);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ObserverLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAdjustedLocation);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNodeVisibleFromLocation(Z_Param_Out_LeafNode,Z_Param_Out_Location,Z_Param_Out_ObserverLocation,Z_Param_Out_OutAdjustedLocation,Z_Param_Out_OutScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execRateTargetLocation)
	{
		P_GET_OBJECT(AActor,Z_Param_Observer);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRelevantDist);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EnemyExcluderRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RejectingHeightDiffBetweenNodeAndTarget);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutVisibilityScore);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutDistanceScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RateTargetLocation(Z_Param_Observer,Z_Param_Out_StartLocation,Z_Param_Out_TargetLocation,Z_Param_MaxRelevantDist,Z_Param_EnemyExcluderRadius,Z_Param_RejectingHeightDiffBetweenNodeAndTarget,Z_Param_Out_OutVisibilityScore,Z_Param_Out_OutDistanceScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execRegisterCoverPointVisibilityCheck)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Caller);
		P_GET_OBJECT(ASBZCoverPoint,Z_Param_CoverPoint);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Enemies);
		P_GET_PROPERTY(FByteProperty,Z_Param_Score);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterCoverPointVisibilityCheck(Z_Param_Caller,Z_Param_CoverPoint,Z_Param_Out_Enemies,Z_Param_Score);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execRegisterRandomSublevelVisComponent)
	{
		P_GET_OBJECT(USBZAIVisibilityComponent,Z_Param_InRandomSublevelVisComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterRandomSublevelVisComponent(Z_Param_InRandomSublevelVisComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execRegisterRelevantAIVisibilityActor)
	{
		P_GET_OBJECT(AActor,Z_Param_AIVisibilityRelevantActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegisterRelevantAIVisibilityActor(Z_Param_AIVisibilityRelevantActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execRegisterVisibilityComponent)
	{
		P_GET_OBJECT(USBZAIVisibilityComponent,Z_Param_InVisibilityComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterVisibilityComponent(Z_Param_InVisibilityComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execUnregisterCoverPointVisibilityCheck)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterCoverPointVisibilityCheck(Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execUnregisterRandomSublevelVisComponent)
	{
		P_GET_OBJECT(USBZAIVisibilityComponent,Z_Param_InRandomSublevelVisComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterRandomSublevelVisComponent(Z_Param_InRandomSublevelVisComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execUnregisterRelevantAIVisibilityActor)
	{
		P_GET_OBJECT(AActor,Z_Param_AIVisibilityRelevantActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterRelevantAIVisibilityActor(Z_Param_AIVisibilityRelevantActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIVisibilityManager::execUnregisterVisibilityComponent)
	{
		P_GET_OBJECT(USBZAIVisibilityComponent,Z_Param_InVisibilityComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterVisibilityComponent(Z_Param_InVisibilityComponent);
		P_NATIVE_END;
	}
	void ASBZAIVisibilityManager::StaticRegisterNativesASBZAIVisibilityManager()
	{
		UClass* Class = ASBZAIVisibilityManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugLocation", &ASBZAIVisibilityManager::execDebugLocation },
			{ "GetAIVisibilityManager", &ASBZAIVisibilityManager::execGetAIVisibilityManager },
			{ "GetAiVisibilityNode", &ASBZAIVisibilityManager::execGetAiVisibilityNode },
			{ "HasVisibilityData", &ASBZAIVisibilityManager::execHasVisibilityData },
			{ "IsAIVisibilityRelevantSafeFromAIVisibility", &ASBZAIVisibilityManager::execIsAIVisibilityRelevantSafeFromAIVisibility },
			{ "IsLocationSafeFromLocation", &ASBZAIVisibilityManager::execIsLocationSafeFromLocation },
			{ "IsLocationVisibleFromLocation", &ASBZAIVisibilityManager::execIsLocationVisibleFromLocation },
			{ "IsNodeSafeFromActor", &ASBZAIVisibilityManager::execIsNodeSafeFromActor },
			{ "IsNodeSafeFromLocation", &ASBZAIVisibilityManager::execIsNodeSafeFromLocation },
			{ "IsNodeVisibleFromActor", &ASBZAIVisibilityManager::execIsNodeVisibleFromActor },
			{ "IsNodeVisibleFromLocation", &ASBZAIVisibilityManager::execIsNodeVisibleFromLocation },
			{ "RateTargetLocation", &ASBZAIVisibilityManager::execRateTargetLocation },
			{ "RegisterCoverPointVisibilityCheck", &ASBZAIVisibilityManager::execRegisterCoverPointVisibilityCheck },
			{ "RegisterRandomSublevelVisComponent", &ASBZAIVisibilityManager::execRegisterRandomSublevelVisComponent },
			{ "RegisterRelevantAIVisibilityActor", &ASBZAIVisibilityManager::execRegisterRelevantAIVisibilityActor },
			{ "RegisterVisibilityComponent", &ASBZAIVisibilityManager::execRegisterVisibilityComponent },
			{ "UnregisterCoverPointVisibilityCheck", &ASBZAIVisibilityManager::execUnregisterCoverPointVisibilityCheck },
			{ "UnregisterRandomSublevelVisComponent", &ASBZAIVisibilityManager::execUnregisterRandomSublevelVisComponent },
			{ "UnregisterRelevantAIVisibilityActor", &ASBZAIVisibilityManager::execUnregisterRelevantAIVisibilityActor },
			{ "UnregisterVisibilityComponent", &ASBZAIVisibilityManager::execUnregisterVisibilityComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics
	{
		struct SBZAIVisibilityManager_eventDebugLocation_Parms
		{
			const UObject* WorldContextObject;
			FVector Location;
			bool bDrawAzymuts;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawAzymuts_MetaData[];
#endif
		static void NewProp_bDrawAzymuts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawAzymuts;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventDebugLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventDebugLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_bDrawAzymuts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_bDrawAzymuts_SetBit(void* Obj)
	{
		((SBZAIVisibilityManager_eventDebugLocation_Parms*)Obj)->bDrawAzymuts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_bDrawAzymuts = { "bDrawAzymuts", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIVisibilityManager_eventDebugLocation_Parms), &Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_bDrawAzymuts_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_bDrawAzymuts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_bDrawAzymuts_MetaData)) };
	void Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIVisibilityManager_eventDebugLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIVisibilityManager_eventDebugLocation_Parms), &Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_bDrawAzymuts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "DebugLocation", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventDebugLocation_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_GetAIVisibilityManager_Statics
	{
		struct SBZAIVisibilityManager_eventGetAIVisibilityManager_Parms
		{
			UObject* WorldContextObject;
			ASBZAIVisibilityManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_GetAIVisibilityManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventGetAIVisibilityManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_GetAIVisibilityManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventGetAIVisibilityManager_Parms, ReturnValue), Z_Construct_UClass_ASBZAIVisibilityManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_GetAIVisibilityManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_GetAIVisibilityManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_GetAIVisibilityManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_GetAIVisibilityManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_GetAIVisibilityManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "GetAIVisibilityManager", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventGetAIVisibilityManager_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_GetAIVisibilityManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_GetAIVisibilityManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_GetAIVisibilityManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_GetAIVisibilityManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_GetAIVisibilityManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_GetAIVisibilityManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_GetAiVisibilityNode_Statics
	{
		struct SBZAIVisibilityManager_eventGetAiVisibilityNode_Parms
		{
			FVector Location;
			FSBZAIVisibilityLeafNode ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_GetAiVisibilityNode_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_GetAiVisibilityNode_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventGetAiVisibilityNode_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_GetAiVisibilityNode_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_GetAiVisibilityNode_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_GetAiVisibilityNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventGetAiVisibilityNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZAIVisibilityLeafNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_GetAiVisibilityNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_GetAiVisibilityNode_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_GetAiVisibilityNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_GetAiVisibilityNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_GetAiVisibilityNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "GetAiVisibilityNode", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventGetAiVisibilityNode_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_GetAiVisibilityNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_GetAiVisibilityNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_GetAiVisibilityNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_GetAiVisibilityNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_GetAiVisibilityNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_GetAiVisibilityNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_HasVisibilityData_Statics
	{
		struct SBZAIVisibilityManager_eventHasVisibilityData_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZAIVisibilityManager_HasVisibilityData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIVisibilityManager_eventHasVisibilityData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_HasVisibilityData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIVisibilityManager_eventHasVisibilityData_Parms), &Z_Construct_UFunction_ASBZAIVisibilityManager_HasVisibilityData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_HasVisibilityData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_HasVisibilityData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_HasVisibilityData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_HasVisibilityData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "HasVisibilityData", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventHasVisibilityData_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_HasVisibilityData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_HasVisibilityData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_HasVisibilityData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_HasVisibilityData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_HasVisibilityData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_HasVisibilityData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics
	{
		struct SBZAIVisibilityManager_eventIsAIVisibilityRelevantSafeFromAIVisibility_Parms
		{
			TScriptInterface<ISBZAIVisibilityRelevant> AIVisibilityRelevant;
			TScriptInterface<ISBZAIVisibilityRelevant> ObserverAIVisibilityRelevant;
			uint8 OutSafeStances;
			FVector OutAdjustedLocation;
			uint8 OutScore;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIVisibilityRelevant_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_AIVisibilityRelevant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObserverAIVisibilityRelevant_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ObserverAIVisibilityRelevant;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutSafeStances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAdjustedLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutScore;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_AIVisibilityRelevant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_AIVisibilityRelevant = { "AIVisibilityRelevant", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsAIVisibilityRelevantSafeFromAIVisibility_Parms, AIVisibilityRelevant), Z_Construct_UClass_USBZAIVisibilityRelevant_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_AIVisibilityRelevant_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_AIVisibilityRelevant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_ObserverAIVisibilityRelevant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_ObserverAIVisibilityRelevant = { "ObserverAIVisibilityRelevant", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsAIVisibilityRelevantSafeFromAIVisibility_Parms, ObserverAIVisibilityRelevant), Z_Construct_UClass_USBZAIVisibilityRelevant_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_ObserverAIVisibilityRelevant_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_ObserverAIVisibilityRelevant_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_OutSafeStances = { "OutSafeStances", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsAIVisibilityRelevantSafeFromAIVisibility_Parms, OutSafeStances), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_OutAdjustedLocation = { "OutAdjustedLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsAIVisibilityRelevantSafeFromAIVisibility_Parms, OutAdjustedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_OutScore = { "OutScore", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsAIVisibilityRelevantSafeFromAIVisibility_Parms, OutScore), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIVisibilityManager_eventIsAIVisibilityRelevantSafeFromAIVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIVisibilityManager_eventIsAIVisibilityRelevantSafeFromAIVisibility_Parms), &Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_AIVisibilityRelevant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_ObserverAIVisibilityRelevant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_OutSafeStances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_OutAdjustedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_OutScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "IsAIVisibilityRelevantSafeFromAIVisibility", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventIsAIVisibilityRelevantSafeFromAIVisibility_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics
	{
		struct SBZAIVisibilityManager_eventIsLocationSafeFromLocation_Parms
		{
			FVector Location;
			FVector ObserverLocation;
			uint8 OutSafeStances;
			FVector OutAdjustedLocation;
			uint8 OutScore;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObserverLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObserverLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutSafeStances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAdjustedLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutScore;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsLocationSafeFromLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_ObserverLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_ObserverLocation = { "ObserverLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsLocationSafeFromLocation_Parms, ObserverLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_ObserverLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_ObserverLocation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_OutSafeStances = { "OutSafeStances", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsLocationSafeFromLocation_Parms, OutSafeStances), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_OutAdjustedLocation = { "OutAdjustedLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsLocationSafeFromLocation_Parms, OutAdjustedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_OutScore = { "OutScore", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsLocationSafeFromLocation_Parms, OutScore), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIVisibilityManager_eventIsLocationSafeFromLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIVisibilityManager_eventIsLocationSafeFromLocation_Parms), &Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_ObserverLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_OutSafeStances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_OutAdjustedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_OutScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "IsLocationSafeFromLocation", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventIsLocationSafeFromLocation_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics
	{
		struct SBZAIVisibilityManager_eventIsLocationVisibleFromLocation_Parms
		{
			FVector Location;
			FVector ObserverLocation;
			FVector OutAdjustedLocation;
			uint8 OutScore;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObserverLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObserverLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAdjustedLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutScore;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsLocationVisibleFromLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::NewProp_ObserverLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::NewProp_ObserverLocation = { "ObserverLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsLocationVisibleFromLocation_Parms, ObserverLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::NewProp_ObserverLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::NewProp_ObserverLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::NewProp_OutAdjustedLocation = { "OutAdjustedLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsLocationVisibleFromLocation_Parms, OutAdjustedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::NewProp_OutScore = { "OutScore", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsLocationVisibleFromLocation_Parms, OutScore), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIVisibilityManager_eventIsLocationVisibleFromLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIVisibilityManager_eventIsLocationVisibleFromLocation_Parms), &Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::NewProp_ObserverLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::NewProp_OutAdjustedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::NewProp_OutScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "IsLocationVisibleFromLocation", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventIsLocationVisibleFromLocation_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics
	{
		struct SBZAIVisibilityManager_eventIsNodeSafeFromActor_Parms
		{
			FSBZAIVisibilityLeafNode LeafNode;
			FVector Location;
			const AActor* ActorObserver;
			uint8 OutSafeStances;
			FVector OutAdjustedLocation;
			uint8 OutScore;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeafNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeafNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorObserver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorObserver;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutSafeStances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAdjustedLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutScore;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_LeafNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_LeafNode = { "LeafNode", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeSafeFromActor_Parms, LeafNode), Z_Construct_UScriptStruct_FSBZAIVisibilityLeafNode, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_LeafNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_LeafNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeSafeFromActor_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_ActorObserver_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_ActorObserver = { "ActorObserver", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeSafeFromActor_Parms, ActorObserver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_ActorObserver_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_ActorObserver_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_OutSafeStances = { "OutSafeStances", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeSafeFromActor_Parms, OutSafeStances), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_OutAdjustedLocation = { "OutAdjustedLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeSafeFromActor_Parms, OutAdjustedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_OutScore = { "OutScore", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeSafeFromActor_Parms, OutScore), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIVisibilityManager_eventIsNodeSafeFromActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIVisibilityManager_eventIsNodeSafeFromActor_Parms), &Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_LeafNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_ActorObserver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_OutSafeStances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_OutAdjustedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_OutScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "IsNodeSafeFromActor", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventIsNodeSafeFromActor_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics
	{
		struct SBZAIVisibilityManager_eventIsNodeSafeFromLocation_Parms
		{
			FSBZAIVisibilityLeafNode LeafNode;
			FVector Location;
			FVector ObserverLocation;
			uint8 OutSafeStances;
			FVector OutAdjustedLocation;
			uint8 OutScore;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeafNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeafNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObserverLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObserverLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutSafeStances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAdjustedLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutScore;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_LeafNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_LeafNode = { "LeafNode", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeSafeFromLocation_Parms, LeafNode), Z_Construct_UScriptStruct_FSBZAIVisibilityLeafNode, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_LeafNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_LeafNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeSafeFromLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_ObserverLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_ObserverLocation = { "ObserverLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeSafeFromLocation_Parms, ObserverLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_ObserverLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_ObserverLocation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_OutSafeStances = { "OutSafeStances", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeSafeFromLocation_Parms, OutSafeStances), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_OutAdjustedLocation = { "OutAdjustedLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeSafeFromLocation_Parms, OutAdjustedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_OutScore = { "OutScore", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeSafeFromLocation_Parms, OutScore), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIVisibilityManager_eventIsNodeSafeFromLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIVisibilityManager_eventIsNodeSafeFromLocation_Parms), &Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_LeafNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_ObserverLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_OutSafeStances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_OutAdjustedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_OutScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "IsNodeSafeFromLocation", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventIsNodeSafeFromLocation_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics
	{
		struct SBZAIVisibilityManager_eventIsNodeVisibleFromActor_Parms
		{
			FSBZAIVisibilityLeafNode LeafNode;
			FVector Location;
			const AActor* ActorObserver;
			FVector OutAdjustedLocation;
			uint8 OutScore;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeafNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeafNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorObserver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorObserver;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAdjustedLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutScore;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_LeafNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_LeafNode = { "LeafNode", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeVisibleFromActor_Parms, LeafNode), Z_Construct_UScriptStruct_FSBZAIVisibilityLeafNode, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_LeafNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_LeafNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeVisibleFromActor_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_ActorObserver_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_ActorObserver = { "ActorObserver", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeVisibleFromActor_Parms, ActorObserver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_ActorObserver_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_ActorObserver_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_OutAdjustedLocation = { "OutAdjustedLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeVisibleFromActor_Parms, OutAdjustedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_OutScore = { "OutScore", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeVisibleFromActor_Parms, OutScore), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIVisibilityManager_eventIsNodeVisibleFromActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIVisibilityManager_eventIsNodeVisibleFromActor_Parms), &Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_LeafNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_ActorObserver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_OutAdjustedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_OutScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "IsNodeVisibleFromActor", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventIsNodeVisibleFromActor_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics
	{
		struct SBZAIVisibilityManager_eventIsNodeVisibleFromLocation_Parms
		{
			FSBZAIVisibilityLeafNode LeafNode;
			FVector Location;
			FVector ObserverLocation;
			FVector OutAdjustedLocation;
			uint8 OutScore;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeafNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeafNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObserverLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObserverLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAdjustedLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutScore;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_LeafNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_LeafNode = { "LeafNode", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeVisibleFromLocation_Parms, LeafNode), Z_Construct_UScriptStruct_FSBZAIVisibilityLeafNode, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_LeafNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_LeafNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeVisibleFromLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_ObserverLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_ObserverLocation = { "ObserverLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeVisibleFromLocation_Parms, ObserverLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_ObserverLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_ObserverLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_OutAdjustedLocation = { "OutAdjustedLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeVisibleFromLocation_Parms, OutAdjustedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_OutScore = { "OutScore", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventIsNodeVisibleFromLocation_Parms, OutScore), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIVisibilityManager_eventIsNodeVisibleFromLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIVisibilityManager_eventIsNodeVisibleFromLocation_Parms), &Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_LeafNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_ObserverLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_OutAdjustedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_OutScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "IsNodeVisibleFromLocation", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventIsNodeVisibleFromLocation_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics
	{
		struct SBZAIVisibilityManager_eventRateTargetLocation_Parms
		{
			const AActor* Observer;
			FVector StartLocation;
			FVector TargetLocation;
			float MaxRelevantDist;
			float EnemyExcluderRadius;
			float RejectingHeightDiffBetweenNodeAndTarget;
			uint8 OutVisibilityScore;
			uint8 OutDistanceScore;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Observer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRelevantDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRelevantDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyExcluderRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnemyExcluderRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RejectingHeightDiffBetweenNodeAndTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RejectingHeightDiffBetweenNodeAndTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutVisibilityScore;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutDistanceScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_Observer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventRateTargetLocation_Parms, Observer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_Observer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_Observer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventRateTargetLocation_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventRateTargetLocation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_MaxRelevantDist_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_MaxRelevantDist = { "MaxRelevantDist", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventRateTargetLocation_Parms, MaxRelevantDist), METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_MaxRelevantDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_MaxRelevantDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_EnemyExcluderRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_EnemyExcluderRadius = { "EnemyExcluderRadius", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventRateTargetLocation_Parms, EnemyExcluderRadius), METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_EnemyExcluderRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_EnemyExcluderRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_RejectingHeightDiffBetweenNodeAndTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_RejectingHeightDiffBetweenNodeAndTarget = { "RejectingHeightDiffBetweenNodeAndTarget", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventRateTargetLocation_Parms, RejectingHeightDiffBetweenNodeAndTarget), METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_RejectingHeightDiffBetweenNodeAndTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_RejectingHeightDiffBetweenNodeAndTarget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_OutVisibilityScore = { "OutVisibilityScore", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventRateTargetLocation_Parms, OutVisibilityScore), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_OutDistanceScore = { "OutDistanceScore", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventRateTargetLocation_Parms, OutDistanceScore), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_Observer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_MaxRelevantDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_EnemyExcluderRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_RejectingHeightDiffBetweenNodeAndTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_OutVisibilityScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::NewProp_OutDistanceScore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "RateTargetLocation", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventRateTargetLocation_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics
	{
		struct SBZAIVisibilityManager_eventRegisterCoverPointVisibilityCheck_Parms
		{
			ASBZCharacter* Caller;
			ASBZCoverPoint* CoverPoint;
			TArray<AActor*> Enemies;
			uint8 Score;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoverPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enemies;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventRegisterCoverPointVisibilityCheck_Parms, Caller), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::NewProp_CoverPoint = { "CoverPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventRegisterCoverPointVisibilityCheck_Parms, CoverPoint), Z_Construct_UClass_ASBZCoverPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::NewProp_Enemies_Inner = { "Enemies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::NewProp_Enemies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::NewProp_Enemies = { "Enemies", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventRegisterCoverPointVisibilityCheck_Parms, Enemies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::NewProp_Enemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::NewProp_Enemies_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventRegisterCoverPointVisibilityCheck_Parms, Score), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::NewProp_Caller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::NewProp_CoverPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::NewProp_Enemies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::NewProp_Enemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::NewProp_Score,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "RegisterCoverPointVisibilityCheck", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventRegisterCoverPointVisibilityCheck_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRandomSublevelVisComponent_Statics
	{
		struct SBZAIVisibilityManager_eventRegisterRandomSublevelVisComponent_Parms
		{
			USBZAIVisibilityComponent* InRandomSublevelVisComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRandomSublevelVisComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRandomSublevelVisComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRandomSublevelVisComponent_Statics::NewProp_InRandomSublevelVisComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRandomSublevelVisComponent_Statics::NewProp_InRandomSublevelVisComponent = { "InRandomSublevelVisComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventRegisterRandomSublevelVisComponent_Parms, InRandomSublevelVisComponent), Z_Construct_UClass_USBZAIVisibilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRandomSublevelVisComponent_Statics::NewProp_InRandomSublevelVisComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRandomSublevelVisComponent_Statics::NewProp_InRandomSublevelVisComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRandomSublevelVisComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRandomSublevelVisComponent_Statics::NewProp_InRandomSublevelVisComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRandomSublevelVisComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRandomSublevelVisComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "RegisterRandomSublevelVisComponent", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventRegisterRandomSublevelVisComponent_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRandomSublevelVisComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRandomSublevelVisComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRandomSublevelVisComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRandomSublevelVisComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRandomSublevelVisComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRandomSublevelVisComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRelevantAIVisibilityActor_Statics
	{
		struct SBZAIVisibilityManager_eventRegisterRelevantAIVisibilityActor_Parms
		{
			AActor* AIVisibilityRelevantActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIVisibilityRelevantActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRelevantAIVisibilityActor_Statics::NewProp_AIVisibilityRelevantActor = { "AIVisibilityRelevantActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventRegisterRelevantAIVisibilityActor_Parms, AIVisibilityRelevantActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRelevantAIVisibilityActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIVisibilityManager_eventRegisterRelevantAIVisibilityActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRelevantAIVisibilityActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIVisibilityManager_eventRegisterRelevantAIVisibilityActor_Parms), &Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRelevantAIVisibilityActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRelevantAIVisibilityActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRelevantAIVisibilityActor_Statics::NewProp_AIVisibilityRelevantActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRelevantAIVisibilityActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRelevantAIVisibilityActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRelevantAIVisibilityActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "RegisterRelevantAIVisibilityActor", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventRegisterRelevantAIVisibilityActor_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRelevantAIVisibilityActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRelevantAIVisibilityActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRelevantAIVisibilityActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRelevantAIVisibilityActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRelevantAIVisibilityActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRelevantAIVisibilityActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterVisibilityComponent_Statics
	{
		struct SBZAIVisibilityManager_eventRegisterVisibilityComponent_Parms
		{
			USBZAIVisibilityComponent* InVisibilityComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVisibilityComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InVisibilityComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterVisibilityComponent_Statics::NewProp_InVisibilityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterVisibilityComponent_Statics::NewProp_InVisibilityComponent = { "InVisibilityComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventRegisterVisibilityComponent_Parms, InVisibilityComponent), Z_Construct_UClass_USBZAIVisibilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterVisibilityComponent_Statics::NewProp_InVisibilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterVisibilityComponent_Statics::NewProp_InVisibilityComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterVisibilityComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterVisibilityComponent_Statics::NewProp_InVisibilityComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterVisibilityComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterVisibilityComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "RegisterVisibilityComponent", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventRegisterVisibilityComponent_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterVisibilityComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterVisibilityComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterVisibilityComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterVisibilityComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterVisibilityComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterVisibilityComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterCoverPointVisibilityCheck_Statics
	{
		struct SBZAIVisibilityManager_eventUnregisterCoverPointVisibilityCheck_Parms
		{
			ASBZCharacter* Caller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterCoverPointVisibilityCheck_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventUnregisterCoverPointVisibilityCheck_Parms, Caller), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterCoverPointVisibilityCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterCoverPointVisibilityCheck_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterCoverPointVisibilityCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterCoverPointVisibilityCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "UnregisterCoverPointVisibilityCheck", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventUnregisterCoverPointVisibilityCheck_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterCoverPointVisibilityCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterCoverPointVisibilityCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterCoverPointVisibilityCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterCoverPointVisibilityCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterCoverPointVisibilityCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterCoverPointVisibilityCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRandomSublevelVisComponent_Statics
	{
		struct SBZAIVisibilityManager_eventUnregisterRandomSublevelVisComponent_Parms
		{
			USBZAIVisibilityComponent* InRandomSublevelVisComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRandomSublevelVisComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRandomSublevelVisComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRandomSublevelVisComponent_Statics::NewProp_InRandomSublevelVisComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRandomSublevelVisComponent_Statics::NewProp_InRandomSublevelVisComponent = { "InRandomSublevelVisComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventUnregisterRandomSublevelVisComponent_Parms, InRandomSublevelVisComponent), Z_Construct_UClass_USBZAIVisibilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRandomSublevelVisComponent_Statics::NewProp_InRandomSublevelVisComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRandomSublevelVisComponent_Statics::NewProp_InRandomSublevelVisComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRandomSublevelVisComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRandomSublevelVisComponent_Statics::NewProp_InRandomSublevelVisComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRandomSublevelVisComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRandomSublevelVisComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "UnregisterRandomSublevelVisComponent", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventUnregisterRandomSublevelVisComponent_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRandomSublevelVisComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRandomSublevelVisComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRandomSublevelVisComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRandomSublevelVisComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRandomSublevelVisComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRandomSublevelVisComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRelevantAIVisibilityActor_Statics
	{
		struct SBZAIVisibilityManager_eventUnregisterRelevantAIVisibilityActor_Parms
		{
			AActor* AIVisibilityRelevantActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIVisibilityRelevantActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRelevantAIVisibilityActor_Statics::NewProp_AIVisibilityRelevantActor = { "AIVisibilityRelevantActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventUnregisterRelevantAIVisibilityActor_Parms, AIVisibilityRelevantActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRelevantAIVisibilityActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRelevantAIVisibilityActor_Statics::NewProp_AIVisibilityRelevantActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRelevantAIVisibilityActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRelevantAIVisibilityActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "UnregisterRelevantAIVisibilityActor", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventUnregisterRelevantAIVisibilityActor_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRelevantAIVisibilityActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRelevantAIVisibilityActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRelevantAIVisibilityActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRelevantAIVisibilityActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRelevantAIVisibilityActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRelevantAIVisibilityActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterVisibilityComponent_Statics
	{
		struct SBZAIVisibilityManager_eventUnregisterVisibilityComponent_Parms
		{
			USBZAIVisibilityComponent* InVisibilityComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVisibilityComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InVisibilityComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterVisibilityComponent_Statics::NewProp_InVisibilityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterVisibilityComponent_Statics::NewProp_InVisibilityComponent = { "InVisibilityComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIVisibilityManager_eventUnregisterVisibilityComponent_Parms, InVisibilityComponent), Z_Construct_UClass_USBZAIVisibilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterVisibilityComponent_Statics::NewProp_InVisibilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterVisibilityComponent_Statics::NewProp_InVisibilityComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterVisibilityComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterVisibilityComponent_Statics::NewProp_InVisibilityComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterVisibilityComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterVisibilityComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIVisibilityManager, nullptr, "UnregisterVisibilityComponent", nullptr, nullptr, sizeof(SBZAIVisibilityManager_eventUnregisterVisibilityComponent_Parms), Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterVisibilityComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterVisibilityComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterVisibilityComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterVisibilityComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterVisibilityComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterVisibilityComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAIVisibilityManager_NoRegister()
	{
		return ASBZAIVisibilityManager::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAIVisibilityManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxComputedNodePerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxComputedNodePerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxComputedCoverPointVisibilityPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxComputedCoverPointVisibilityPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistFromObstacleToBeStandCovered_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistFromObstacleToBeStandCovered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistFromObstacleToBeCrouchCovered_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistFromObstacleToBeCrouchCovered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistFromEnemyToBeCrouchCovered_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistFromEnemyToBeCrouchCovered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistFromEnemyToBeStandCovered_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistFromEnemyToBeStandCovered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisibilityComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIVisibilityRelevantActorsEveryFrame_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIVisibilityRelevantActorsEveryFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AIVisibilityRelevantActorsEveryFrame;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIVisibilityRelevantActorsAutomatic_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIVisibilityRelevantActorsAutomatic_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AIVisibilityRelevantActorsAutomatic;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_AIVisibilityRelevants_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIVisibilityRelevants_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIVisibilityRelevants_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AIVisibilityRelevants;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIVisibilityRelevantActorsToRefreshAfterUpdate_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIVisibilityRelevantActorsToRefreshAfterUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AIVisibilityRelevantActorsToRefreshAfterUpdate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoverPointVisibilityChecks_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoverPointVisibilityChecks_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoverPointVisibilityChecks_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CoverPointVisibilityChecks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSublevelVisComponents_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RandomSublevelVisComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSublevelVisComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RandomSublevelVisComponents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RSLVisComponentTransforms_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RSLVisComponentTransforms_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RSLVisComponentTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RSLVisComponentTransforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAIVisibilityManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAIVisibilityManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_DebugLocation, "DebugLocation" }, // 4289080764
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_GetAIVisibilityManager, "GetAIVisibilityManager" }, // 2859050874
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_GetAiVisibilityNode, "GetAiVisibilityNode" }, // 4133849859
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_HasVisibilityData, "HasVisibilityData" }, // 3983740210
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_IsAIVisibilityRelevantSafeFromAIVisibility, "IsAIVisibilityRelevantSafeFromAIVisibility" }, // 4080519992
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationSafeFromLocation, "IsLocationSafeFromLocation" }, // 1452446483
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_IsLocationVisibleFromLocation, "IsLocationVisibleFromLocation" }, // 3561325256
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromActor, "IsNodeSafeFromActor" }, // 711787370
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeSafeFromLocation, "IsNodeSafeFromLocation" }, // 165110524
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromActor, "IsNodeVisibleFromActor" }, // 3001584618
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_IsNodeVisibleFromLocation, "IsNodeVisibleFromLocation" }, // 1145962873
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_RateTargetLocation, "RateTargetLocation" }, // 1914610034
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterCoverPointVisibilityCheck, "RegisterCoverPointVisibilityCheck" }, // 3088408841
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRandomSublevelVisComponent, "RegisterRandomSublevelVisComponent" }, // 3866543961
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterRelevantAIVisibilityActor, "RegisterRelevantAIVisibilityActor" }, // 3767669850
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_RegisterVisibilityComponent, "RegisterVisibilityComponent" }, // 3968945048
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterCoverPointVisibilityCheck, "UnregisterCoverPointVisibilityCheck" }, // 3132083899
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRandomSublevelVisComponent, "UnregisterRandomSublevelVisComponent" }, // 245285493
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterRelevantAIVisibilityActor, "UnregisterRelevantAIVisibilityActor" }, // 2389525272
		{ &Z_Construct_UFunction_ASBZAIVisibilityManager_UnregisterVisibilityComponent, "UnregisterVisibilityComponent" }, // 2616405319
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIVisibilityManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIVisibilityManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxComputedNodePerFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityManager" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxComputedNodePerFrame = { "MaxComputedNodePerFrame", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIVisibilityManager, MaxComputedNodePerFrame), METADATA_PARAMS(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxComputedNodePerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxComputedNodePerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxComputedCoverPointVisibilityPerFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityManager" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxComputedCoverPointVisibilityPerFrame = { "MaxComputedCoverPointVisibilityPerFrame", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIVisibilityManager, MaxComputedCoverPointVisibilityPerFrame), METADATA_PARAMS(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxComputedCoverPointVisibilityPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxComputedCoverPointVisibilityPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxDistFromObstacleToBeStandCovered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityManager" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxDistFromObstacleToBeStandCovered = { "MaxDistFromObstacleToBeStandCovered", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIVisibilityManager, MaxDistFromObstacleToBeStandCovered), METADATA_PARAMS(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxDistFromObstacleToBeStandCovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxDistFromObstacleToBeStandCovered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxDistFromObstacleToBeCrouchCovered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityManager" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxDistFromObstacleToBeCrouchCovered = { "MaxDistFromObstacleToBeCrouchCovered", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIVisibilityManager, MaxDistFromObstacleToBeCrouchCovered), METADATA_PARAMS(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxDistFromObstacleToBeCrouchCovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxDistFromObstacleToBeCrouchCovered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MinDistFromEnemyToBeCrouchCovered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityManager" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MinDistFromEnemyToBeCrouchCovered = { "MinDistFromEnemyToBeCrouchCovered", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIVisibilityManager, MinDistFromEnemyToBeCrouchCovered), METADATA_PARAMS(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MinDistFromEnemyToBeCrouchCovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MinDistFromEnemyToBeCrouchCovered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MinDistFromEnemyToBeStandCovered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityManager" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MinDistFromEnemyToBeStandCovered = { "MinDistFromEnemyToBeStandCovered", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIVisibilityManager, MinDistFromEnemyToBeStandCovered), METADATA_PARAMS(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MinDistFromEnemyToBeStandCovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MinDistFromEnemyToBeStandCovered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_VisibilityComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_VisibilityComponent = { "VisibilityComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIVisibilityManager, VisibilityComponent), Z_Construct_UClass_USBZAIVisibilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_VisibilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_VisibilityComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsEveryFrame_Inner = { "AIVisibilityRelevantActorsEveryFrame", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsEveryFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityManager" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsEveryFrame = { "AIVisibilityRelevantActorsEveryFrame", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIVisibilityManager, AIVisibilityRelevantActorsEveryFrame), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsEveryFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsEveryFrame_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsAutomatic_Inner = { "AIVisibilityRelevantActorsAutomatic", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsAutomatic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityManager" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsAutomatic = { "AIVisibilityRelevantActorsAutomatic", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIVisibilityManager, AIVisibilityRelevantActorsAutomatic), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsAutomatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsAutomatic_MetaData)) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevants_ValueProp = { "AIVisibilityRelevants", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZAIVisibilityRelevant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevants_Key_KeyProp = { "AIVisibilityRelevants_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevants_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityManager" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevants = { "AIVisibilityRelevants", nullptr, (EPropertyFlags)0x0024080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIVisibilityManager, AIVisibilityRelevants), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevants_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevants_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsToRefreshAfterUpdate_Inner = { "AIVisibilityRelevantActorsToRefreshAfterUpdate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsToRefreshAfterUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityManager" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsToRefreshAfterUpdate = { "AIVisibilityRelevantActorsToRefreshAfterUpdate", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIVisibilityManager, AIVisibilityRelevantActorsToRefreshAfterUpdate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsToRefreshAfterUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsToRefreshAfterUpdate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_CoverPointVisibilityChecks_ValueProp = { "CoverPointVisibilityChecks", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZCoverPointVisibilityCheckData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_CoverPointVisibilityChecks_Key_KeyProp = { "CoverPointVisibilityChecks_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_CoverPointVisibilityChecks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityManager" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_CoverPointVisibilityChecks = { "CoverPointVisibilityChecks", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIVisibilityManager, CoverPointVisibilityChecks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_CoverPointVisibilityChecks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_CoverPointVisibilityChecks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RandomSublevelVisComponents_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RandomSublevelVisComponents_Inner = { "RandomSublevelVisComponents", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAIVisibilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RandomSublevelVisComponents_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RandomSublevelVisComponents_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RandomSublevelVisComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RandomSublevelVisComponents = { "RandomSublevelVisComponents", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIVisibilityManager, RandomSublevelVisComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RandomSublevelVisComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RandomSublevelVisComponents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RSLVisComponentTransforms_ValueProp = { "RSLVisComponentTransforms", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RSLVisComponentTransforms_Key_KeyProp = { "RSLVisComponentTransforms_Key", nullptr, (EPropertyFlags)0x0000000000080001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAIVisibilityComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RSLVisComponentTransforms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIVisibilityManager" },
		{ "ModuleRelativePath", "Public/SBZAIVisibilityManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RSLVisComponentTransforms = { "RSLVisComponentTransforms", nullptr, (EPropertyFlags)0x0020088000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIVisibilityManager, RSLVisComponentTransforms), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RSLVisComponentTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RSLVisComponentTransforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAIVisibilityManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxComputedNodePerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxComputedCoverPointVisibilityPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxDistFromObstacleToBeStandCovered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MaxDistFromObstacleToBeCrouchCovered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MinDistFromEnemyToBeCrouchCovered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_MinDistFromEnemyToBeStandCovered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_VisibilityComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsEveryFrame_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsEveryFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsAutomatic_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsAutomatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevants_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevants_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevants,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsToRefreshAfterUpdate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_AIVisibilityRelevantActorsToRefreshAfterUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_CoverPointVisibilityChecks_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_CoverPointVisibilityChecks_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_CoverPointVisibilityChecks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RandomSublevelVisComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RandomSublevelVisComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RSLVisComponentTransforms_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RSLVisComponentTransforms_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIVisibilityManager_Statics::NewProp_RSLVisComponentTransforms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAIVisibilityManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAIVisibilityManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAIVisibilityManager_Statics::ClassParams = {
		&ASBZAIVisibilityManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAIVisibilityManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIVisibilityManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAIVisibilityManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAIVisibilityManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAIVisibilityManager, 1288931100);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAIVisibilityManager>()
	{
		return ASBZAIVisibilityManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAIVisibilityManager(Z_Construct_UClass_ASBZAIVisibilityManager, &ASBZAIVisibilityManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAIVisibilityManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAIVisibilityManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
