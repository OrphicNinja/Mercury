// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAISearchManager.h"
#include "Starbreeze/Public/PD3HeistGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAISearchManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISearchManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISearchManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInvestigationRequest();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Investigate_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquadOrder_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquad_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInvestigationData();
// End Cross Module References
	DEFINE_FUNCTION(USBZAISearchManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZAISearchManager**)Z_Param__Result=USBZAISearchManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAISearchManager::execHasPendingInvestigationFor)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPendingInvestigationFor(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAISearchManager::execInvestigate)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZInvestigationRequest,Z_Param_Out_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZAISearchManager::Investigate(Z_Param_WorldContextObject,Z_Param_Out_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAISearchManager::execOnHeistStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldHeistState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewHeistState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistStateChanged(EPD3HeistState(Z_Param_OldHeistState),EPD3HeistState(Z_Param_NewHeistState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAISearchManager::execOnInvestigationCompleted)
	{
		P_GET_OBJECT(USBZAIOrder,Z_Param_Order);
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_PROPERTY(FByteProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInvestigationCompleted(Z_Param_Order,Z_Param_Pawn,EBTNodeResult::Type(Z_Param_Result));
		P_NATIVE_END;
	}
	void USBZAISearchManager::StaticRegisterNativesUSBZAISearchManager()
	{
		UClass* Class = USBZAISearchManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZAISearchManager::execGet },
			{ "HasPendingInvestigationFor", &USBZAISearchManager::execHasPendingInvestigationFor },
			{ "Investigate", &USBZAISearchManager::execInvestigate },
			{ "OnHeistStateChanged", &USBZAISearchManager::execOnHeistStateChanged },
			{ "OnInvestigationCompleted", &USBZAISearchManager::execOnInvestigationCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAISearchManager_Get_Statics
	{
		struct SBZAISearchManager_eventGet_Parms
		{
			const UObject* WorldContextObject;
			USBZAISearchManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAISearchManager_Get_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAISearchManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAISearchManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAISearchManager_Get_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISearchManager_Get_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAISearchManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAISearchManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZAISearchManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAISearchManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISearchManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISearchManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAISearchManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAISearchManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAISearchManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAISearchManager, nullptr, "Get", nullptr, nullptr, sizeof(SBZAISearchManager_eventGet_Parms), Z_Construct_UFunction_USBZAISearchManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISearchManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAISearchManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISearchManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAISearchManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAISearchManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAISearchManager_HasPendingInvestigationFor_Statics
	{
		struct SBZAISearchManager_eventHasPendingInvestigationFor_Parms
		{
			AActor* Target;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAISearchManager_HasPendingInvestigationFor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAISearchManager_eventHasPendingInvestigationFor_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZAISearchManager_HasPendingInvestigationFor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAISearchManager_eventHasPendingInvestigationFor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAISearchManager_HasPendingInvestigationFor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAISearchManager_eventHasPendingInvestigationFor_Parms), &Z_Construct_UFunction_USBZAISearchManager_HasPendingInvestigationFor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAISearchManager_HasPendingInvestigationFor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISearchManager_HasPendingInvestigationFor_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISearchManager_HasPendingInvestigationFor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAISearchManager_HasPendingInvestigationFor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAISearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAISearchManager_HasPendingInvestigationFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAISearchManager, nullptr, "HasPendingInvestigationFor", nullptr, nullptr, sizeof(SBZAISearchManager_eventHasPendingInvestigationFor_Parms), Z_Construct_UFunction_USBZAISearchManager_HasPendingInvestigationFor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISearchManager_HasPendingInvestigationFor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAISearchManager_HasPendingInvestigationFor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISearchManager_HasPendingInvestigationFor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAISearchManager_HasPendingInvestigationFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAISearchManager_HasPendingInvestigationFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics
	{
		struct SBZAISearchManager_eventInvestigate_Parms
		{
			const UObject* WorldContextObject;
			FSBZInvestigationRequest Request;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAISearchManager_eventInvestigate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAISearchManager_eventInvestigate_Parms, Request), Z_Construct_UScriptStruct_FSBZInvestigationRequest, METADATA_PARAMS(Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::NewProp_Request_MetaData)) };
	void Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAISearchManager_eventInvestigate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAISearchManager_eventInvestigate_Parms), &Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAISearchManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAISearchManager, nullptr, "Investigate", nullptr, nullptr, sizeof(SBZAISearchManager_eventInvestigate_Parms), Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAISearchManager_Investigate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAISearchManager_Investigate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged_Statics
	{
		struct SBZAISearchManager_eventOnHeistStateChanged_Parms
		{
			EPD3HeistState OldHeistState;
			EPD3HeistState NewHeistState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldHeistState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldHeistState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewHeistState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewHeistState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged_Statics::NewProp_OldHeistState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged_Statics::NewProp_OldHeistState = { "OldHeistState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAISearchManager_eventOnHeistStateChanged_Parms, OldHeistState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged_Statics::NewProp_NewHeistState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged_Statics::NewProp_NewHeistState = { "NewHeistState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAISearchManager_eventOnHeistStateChanged_Parms, NewHeistState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged_Statics::NewProp_OldHeistState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged_Statics::NewProp_OldHeistState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged_Statics::NewProp_NewHeistState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged_Statics::NewProp_NewHeistState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAISearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAISearchManager, nullptr, "OnHeistStateChanged", nullptr, nullptr, sizeof(SBZAISearchManager_eventOnHeistStateChanged_Parms), Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAISearchManager_OnInvestigationCompleted_Statics
	{
		struct SBZAISearchManager_eventOnInvestigationCompleted_Parms
		{
			USBZAIOrder* Order;
			APawn* Pawn;
			TEnumAsByte<EBTNodeResult::Type> Result;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Order;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAISearchManager_OnInvestigationCompleted_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAISearchManager_eventOnInvestigationCompleted_Parms, Order), Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAISearchManager_OnInvestigationCompleted_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAISearchManager_eventOnInvestigationCompleted_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAISearchManager_OnInvestigationCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAISearchManager_eventOnInvestigationCompleted_Parms, Result), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAISearchManager_OnInvestigationCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISearchManager_OnInvestigationCompleted_Statics::NewProp_Order,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISearchManager_OnInvestigationCompleted_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISearchManager_OnInvestigationCompleted_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAISearchManager_OnInvestigationCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAISearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAISearchManager_OnInvestigationCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAISearchManager, nullptr, "OnInvestigationCompleted", nullptr, nullptr, sizeof(SBZAISearchManager_eventOnInvestigationCompleted_Parms), Z_Construct_UFunction_USBZAISearchManager_OnInvestigationCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISearchManager_OnInvestigationCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAISearchManager_OnInvestigationCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISearchManager_OnInvestigationCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAISearchManager_OnInvestigationCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAISearchManager_OnInvestigationCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAISearchManager_NoRegister()
	{
		return USBZAISearchManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZAISearchManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvestigateOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InvestigateOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumSearchSquadSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaximumSearchSquadSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SearchOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CivilianEvacuateDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CivilianEvacuateDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentageEvacutingCivilians_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentageEvacutingCivilians;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInvestigateUpdatesBeforeArrest_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NumInvestigateUpdatesBeforeArrest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CivilianEvacuateOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CivilianEvacuateOrder;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SearchSquads_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchSquads_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SearchSquads;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchOriginRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SearchOriginRoom;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheckedRooms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedRooms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CheckedRooms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InvestigationData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvestigationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InvestigationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAISearchManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAISearchManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAISearchManager_Get, "Get" }, // 3374255506
		{ &Z_Construct_UFunction_USBZAISearchManager_HasPendingInvestigationFor, "HasPendingInvestigationFor" }, // 4076511882
		{ &Z_Construct_UFunction_USBZAISearchManager_Investigate, "Investigate" }, // 2987803638
		{ &Z_Construct_UFunction_USBZAISearchManager_OnHeistStateChanged, "OnHeistStateChanged" }, // 1214357460
		{ &Z_Construct_UFunction_USBZAISearchManager_OnInvestigationCompleted, "OnInvestigationCompleted" }, // 2080529863
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISearchManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAISearchManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAISearchManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_InvestigateOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISearchManager" },
		{ "ModuleRelativePath", "Public/SBZAISearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_InvestigateOrder = { "InvestigateOrder", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISearchManager, InvestigateOrder), Z_Construct_UClass_USBZAIOrder_Investigate_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_InvestigateOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_InvestigateOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_MaximumSearchSquadSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISearchManager" },
		{ "ModuleRelativePath", "Public/SBZAISearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_MaximumSearchSquadSize = { "MaximumSearchSquadSize", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISearchManager, MaximumSearchSquadSize), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_MaximumSearchSquadSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_MaximumSearchSquadSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_SearchOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISearchManager" },
		{ "ModuleRelativePath", "Public/SBZAISearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_SearchOrder = { "SearchOrder", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISearchManager, SearchOrder), Z_Construct_UClass_USBZAISquadOrder_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_SearchOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_SearchOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_CivilianEvacuateDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISearchManager" },
		{ "ModuleRelativePath", "Public/SBZAISearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_CivilianEvacuateDelay = { "CivilianEvacuateDelay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISearchManager, CivilianEvacuateDelay), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_CivilianEvacuateDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_CivilianEvacuateDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_PercentageEvacutingCivilians_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISearchManager" },
		{ "ModuleRelativePath", "Public/SBZAISearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_PercentageEvacutingCivilians = { "PercentageEvacutingCivilians", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISearchManager, PercentageEvacutingCivilians), METADATA_PARAMS(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_PercentageEvacutingCivilians_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_PercentageEvacutingCivilians_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_NumInvestigateUpdatesBeforeArrest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISearchManager" },
		{ "ModuleRelativePath", "Public/SBZAISearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_NumInvestigateUpdatesBeforeArrest = { "NumInvestigateUpdatesBeforeArrest", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISearchManager, NumInvestigateUpdatesBeforeArrest), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_NumInvestigateUpdatesBeforeArrest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_NumInvestigateUpdatesBeforeArrest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_CivilianEvacuateOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISearchManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAISearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_CivilianEvacuateOrder = { "CivilianEvacuateOrder", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISearchManager, CivilianEvacuateOrder), Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_CivilianEvacuateOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_CivilianEvacuateOrder_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_SearchSquads_Inner = { "SearchSquads", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAISquad_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_SearchSquads_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISearchManager" },
		{ "ModuleRelativePath", "Public/SBZAISearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_SearchSquads = { "SearchSquads", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISearchManager, SearchSquads), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_SearchSquads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_SearchSquads_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_SearchOriginRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISearchManager" },
		{ "ModuleRelativePath", "Public/SBZAISearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_SearchOriginRoom = { "SearchOriginRoom", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISearchManager, SearchOriginRoom), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_SearchOriginRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_SearchOriginRoom_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_CheckedRooms_Inner = { "CheckedRooms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_CheckedRooms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISearchManager" },
		{ "ModuleRelativePath", "Public/SBZAISearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_CheckedRooms = { "CheckedRooms", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISearchManager, CheckedRooms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_CheckedRooms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_CheckedRooms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_InvestigationData_Inner = { "InvestigationData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZInvestigationData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_InvestigationData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISearchManager" },
		{ "ModuleRelativePath", "Public/SBZAISearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_InvestigationData = { "InvestigationData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISearchManager, InvestigationData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_InvestigationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_InvestigationData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAISearchManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_InvestigateOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_MaximumSearchSquadSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_SearchOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_CivilianEvacuateDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_PercentageEvacutingCivilians,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_NumInvestigateUpdatesBeforeArrest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_CivilianEvacuateOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_SearchSquads_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_SearchSquads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_SearchOriginRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_CheckedRooms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_CheckedRooms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_InvestigationData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISearchManager_Statics::NewProp_InvestigationData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAISearchManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAISearchManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAISearchManager_Statics::ClassParams = {
		&USBZAISearchManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAISearchManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISearchManager_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAISearchManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISearchManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAISearchManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAISearchManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAISearchManager, 3275094878);
	template<> STARBREEZE_API UClass* StaticClass<USBZAISearchManager>()
	{
		return USBZAISearchManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAISearchManager(Z_Construct_UClass_USBZAISearchManager, &USBZAISearchManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAISearchManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAISearchManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
