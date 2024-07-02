// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIController() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIOrderMode();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnPawnKilled__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIVisualDetectionComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFactionIdHelper();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableFamily();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPathFocusHandler();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGateNavAgentInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAIController::execGetCurrentEnemy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetCurrentEnemy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIController::execOnActionCanceled)
	{
		P_GET_OBJECT(USBZAIAction,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionCanceled(Z_Param_Action);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIController::execOnActionCompleted)
	{
		P_GET_OBJECT(USBZAIAction,Z_Param_Action);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionCompleted(Z_Param_Action,Z_Param_Actor,Z_Param_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIController::execOnEnemyKilled)
	{
		P_GET_OBJECT(APawn,Z_Param_KilledPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnemyKilled(Z_Param_KilledPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIController::execOnOrderCompleted)
	{
		P_GET_OBJECT(USBZAIOrder,Z_Param_Order);
		P_GET_OBJECT(APawn,Z_Param_OrderPawn);
		P_GET_PROPERTY(FByteProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOrderCompleted(Z_Param_Order,Z_Param_OrderPawn,EBTNodeResult::Type(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIController::execPushAction)
	{
		P_GET_OBJECT(UClass,Z_Param_ActionClass);
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZAIAction**)Z_Param__Result=P_THIS->PushAction(Z_Param_ActionClass,Z_Param_TargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIController::execPushOrder)
	{
		P_GET_OBJECT(USBZAIOrder,Z_Param_Order);
		P_GET_ENUM(ESBZAIOrderMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PushOrder(Z_Param_Order,ESBZAIOrderMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIController::execSetAIEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAIEnabled(Z_Param_bIsEnabled,Z_Param_Out_Reason);
		P_NATIVE_END;
	}
	static FName NAME_ASBZAIController_BP_OnCurrentEnemyAssigned = FName(TEXT("BP_OnCurrentEnemyAssigned"));
	void ASBZAIController::BP_OnCurrentEnemyAssigned()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIController_BP_OnCurrentEnemyAssigned),NULL);
	}
	void ASBZAIController::StaticRegisterNativesASBZAIController()
	{
		UClass* Class = ASBZAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentEnemy", &ASBZAIController::execGetCurrentEnemy },
			{ "OnActionCanceled", &ASBZAIController::execOnActionCanceled },
			{ "OnActionCompleted", &ASBZAIController::execOnActionCompleted },
			{ "OnEnemyKilled", &ASBZAIController::execOnEnemyKilled },
			{ "OnOrderCompleted", &ASBZAIController::execOnOrderCompleted },
			{ "PushAction", &ASBZAIController::execPushAction },
			{ "PushOrder", &ASBZAIController::execPushOrder },
			{ "SetAIEnabled", &ASBZAIController::execSetAIEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAIController_BP_OnCurrentEnemyAssigned_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIController_BP_OnCurrentEnemyAssigned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIController_BP_OnCurrentEnemyAssigned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIController, nullptr, "BP_OnCurrentEnemyAssigned", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIController_BP_OnCurrentEnemyAssigned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIController_BP_OnCurrentEnemyAssigned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIController_BP_OnCurrentEnemyAssigned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIController_BP_OnCurrentEnemyAssigned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIController_GetCurrentEnemy_Statics
	{
		struct SBZAIController_eventGetCurrentEnemy_Parms
		{
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIController_GetCurrentEnemy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIController_eventGetCurrentEnemy_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIController_GetCurrentEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIController_GetCurrentEnemy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIController_GetCurrentEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIController_GetCurrentEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIController, nullptr, "GetCurrentEnemy", nullptr, nullptr, sizeof(SBZAIController_eventGetCurrentEnemy_Parms), Z_Construct_UFunction_ASBZAIController_GetCurrentEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIController_GetCurrentEnemy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIController_GetCurrentEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIController_GetCurrentEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIController_GetCurrentEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIController_GetCurrentEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIController_OnActionCanceled_Statics
	{
		struct SBZAIController_eventOnActionCanceled_Parms
		{
			USBZAIAction* Action;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIController_OnActionCanceled_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIController_eventOnActionCanceled_Parms, Action), Z_Construct_UClass_USBZAIAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIController_OnActionCanceled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIController_OnActionCanceled_Statics::NewProp_Action,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIController_OnActionCanceled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIController_OnActionCanceled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIController, nullptr, "OnActionCanceled", nullptr, nullptr, sizeof(SBZAIController_eventOnActionCanceled_Parms), Z_Construct_UFunction_ASBZAIController_OnActionCanceled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIController_OnActionCanceled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIController_OnActionCanceled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIController_OnActionCanceled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIController_OnActionCanceled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIController_OnActionCanceled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIController_OnActionCompleted_Statics
	{
		struct SBZAIController_eventOnActionCompleted_Parms
		{
			USBZAIAction* Action;
			AActor* Actor;
			bool bSuccess;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIController_OnActionCompleted_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIController_eventOnActionCompleted_Parms, Action), Z_Construct_UClass_USBZAIAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIController_OnActionCompleted_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIController_eventOnActionCompleted_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIController_OnActionCompleted_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((SBZAIController_eventOnActionCompleted_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIController_OnActionCompleted_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIController_eventOnActionCompleted_Parms), &Z_Construct_UFunction_ASBZAIController_OnActionCompleted_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIController_OnActionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIController_OnActionCompleted_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIController_OnActionCompleted_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIController_OnActionCompleted_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIController_OnActionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIController_OnActionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIController, nullptr, "OnActionCompleted", nullptr, nullptr, sizeof(SBZAIController_eventOnActionCompleted_Parms), Z_Construct_UFunction_ASBZAIController_OnActionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIController_OnActionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIController_OnActionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIController_OnActionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIController_OnActionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIController_OnActionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIController_OnEnemyKilled_Statics
	{
		struct SBZAIController_eventOnEnemyKilled_Parms
		{
			APawn* KilledPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KilledPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIController_OnEnemyKilled_Statics::NewProp_KilledPawn = { "KilledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIController_eventOnEnemyKilled_Parms, KilledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIController_OnEnemyKilled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIController_OnEnemyKilled_Statics::NewProp_KilledPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIController_OnEnemyKilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIController_OnEnemyKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIController, nullptr, "OnEnemyKilled", nullptr, nullptr, sizeof(SBZAIController_eventOnEnemyKilled_Parms), Z_Construct_UFunction_ASBZAIController_OnEnemyKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIController_OnEnemyKilled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIController_OnEnemyKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIController_OnEnemyKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIController_OnEnemyKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIController_OnEnemyKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIController_OnOrderCompleted_Statics
	{
		struct SBZAIController_eventOnOrderCompleted_Parms
		{
			USBZAIOrder* Order;
			APawn* OrderPawn;
			TEnumAsByte<EBTNodeResult::Type> Result;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Order;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrderPawn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIController_OnOrderCompleted_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIController_eventOnOrderCompleted_Parms, Order), Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIController_OnOrderCompleted_Statics::NewProp_OrderPawn = { "OrderPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIController_eventOnOrderCompleted_Parms, OrderPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIController_OnOrderCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIController_eventOnOrderCompleted_Parms, Result), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIController_OnOrderCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIController_OnOrderCompleted_Statics::NewProp_Order,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIController_OnOrderCompleted_Statics::NewProp_OrderPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIController_OnOrderCompleted_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIController_OnOrderCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIController_OnOrderCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIController, nullptr, "OnOrderCompleted", nullptr, nullptr, sizeof(SBZAIController_eventOnOrderCompleted_Parms), Z_Construct_UFunction_ASBZAIController_OnOrderCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIController_OnOrderCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIController_OnOrderCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIController_OnOrderCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIController_OnOrderCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIController_OnOrderCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIController_PushAction_Statics
	{
		struct SBZAIController_eventPushAction_Parms
		{
			TSubclassOf<USBZAIAction>  ActionClass;
			AActor* TargetActor;
			USBZAIAction* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActionClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASBZAIController_PushAction_Statics::NewProp_ActionClass = { "ActionClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIController_eventPushAction_Parms, ActionClass), Z_Construct_UClass_USBZAIAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIController_PushAction_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIController_eventPushAction_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIController_PushAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIController_eventPushAction_Parms, ReturnValue), Z_Construct_UClass_USBZAIAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIController_PushAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIController_PushAction_Statics::NewProp_ActionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIController_PushAction_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIController_PushAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIController_PushAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIController_PushAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIController, nullptr, "PushAction", nullptr, nullptr, sizeof(SBZAIController_eventPushAction_Parms), Z_Construct_UFunction_ASBZAIController_PushAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIController_PushAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIController_PushAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIController_PushAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIController_PushAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIController_PushAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIController_PushOrder_Statics
	{
		struct SBZAIController_eventPushOrder_Parms
		{
			USBZAIOrder* Order;
			ESBZAIOrderMode Mode;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Order;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIController_PushOrder_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIController_eventPushOrder_Parms, Order), Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIController_PushOrder_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAIController_PushOrder_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIController_eventPushOrder_Parms, Mode), Z_Construct_UEnum_Starbreeze_ESBZAIOrderMode, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIController_PushOrder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIController_eventPushOrder_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIController_PushOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIController_eventPushOrder_Parms), &Z_Construct_UFunction_ASBZAIController_PushOrder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIController_PushOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIController_PushOrder_Statics::NewProp_Order,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIController_PushOrder_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIController_PushOrder_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIController_PushOrder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIController_PushOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIController_PushOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIController, nullptr, "PushOrder", nullptr, nullptr, sizeof(SBZAIController_eventPushOrder_Parms), Z_Construct_UFunction_ASBZAIController_PushOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIController_PushOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIController_PushOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIController_PushOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIController_PushOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIController_PushOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIController_SetAIEnabled_Statics
	{
		struct SBZAIController_eventSetAIEnabled_Parms
		{
			bool bIsEnabled;
			FName Reason;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZAIController_SetAIEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((SBZAIController_eventSetAIEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIController_SetAIEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIController_eventSetAIEnabled_Parms), &Z_Construct_UFunction_ASBZAIController_SetAIEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIController_SetAIEnabled_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASBZAIController_SetAIEnabled_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIController_eventSetAIEnabled_Parms, Reason), METADATA_PARAMS(Z_Construct_UFunction_ASBZAIController_SetAIEnabled_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIController_SetAIEnabled_Statics::NewProp_Reason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIController_SetAIEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIController_SetAIEnabled_Statics::NewProp_bIsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIController_SetAIEnabled_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIController_SetAIEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIController_SetAIEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIController, nullptr, "SetAIEnabled", nullptr, nullptr, sizeof(SBZAIController_eventSetAIEnabled_Parms), Z_Construct_UFunction_ASBZAIController_SetAIEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIController_SetAIEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIController_SetAIEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIController_SetAIEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIController_SetAIEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIController_SetAIEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAIController_NoRegister()
	{
		return ASBZAIController::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAIPawnKilled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAIPawnKilled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YawAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualDetectionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisualDetectionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UtilityComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UtilityComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FactionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LerpedControlRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LerpedControlRotation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentActions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentOrder;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrderQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OrderQueue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisableTargetFocusWhilePathingEFs_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DisableTargetFocusWhilePathingEFs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableTargetFocusWhilePathingEFs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisableTargetFocusWhilePathingEFs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFocusHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathFocusHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCoverScoreToFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_MinCoverScoreToFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistFromTraversalNavLinkToFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistFromTraversalNavLinkToFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SameRoomTargetFocusDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SameRoomTargetFocusDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTargetFocusEnabled_MetaData[];
#endif
		static void NewProp_bIsTargetFocusEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTargetFocusEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusOnLastVisibleLocationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusOnLastVisibleLocationDuration;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DisabledReasonArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledReasonArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisabledReasonArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastDisabledReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LastDisabledReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NearRangeCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NearRangeCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredRangeCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreferredRangeCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistStateAlert_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HeistStateAlert;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAIController_BP_OnCurrentEnemyAssigned, "BP_OnCurrentEnemyAssigned" }, // 3852547882
		{ &Z_Construct_UFunction_ASBZAIController_GetCurrentEnemy, "GetCurrentEnemy" }, // 552479162
		{ &Z_Construct_UFunction_ASBZAIController_OnActionCanceled, "OnActionCanceled" }, // 2042034921
		{ &Z_Construct_UFunction_ASBZAIController_OnActionCompleted, "OnActionCompleted" }, // 3397696942
		{ &Z_Construct_UFunction_ASBZAIController_OnEnemyKilled, "OnEnemyKilled" }, // 1575676161
		{ &Z_Construct_UFunction_ASBZAIController_OnOrderCompleted, "OnOrderCompleted" }, // 755691134
		{ &Z_Construct_UFunction_ASBZAIController_PushAction, "PushAction" }, // 4054759910
		{ &Z_Construct_UFunction_ASBZAIController_PushOrder, "PushOrder" }, // 1130196607
		{ &Z_Construct_UFunction_ASBZAIController_SetAIEnabled, "SetAIEnabled" }, // 1069486147
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZAIController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_OnAIPawnKilled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_OnAIPawnKilled = { "OnAIPawnKilled", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, OnAIPawnKilled), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPawnKilled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_OnAIPawnKilled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_OnAIPawnKilled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_YawAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_YawAngle = { "YawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, YawAngle), Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle, METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_YawAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_YawAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_PitchAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_PitchAngle = { "PitchAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, PitchAngle), Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle, METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_PitchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_PitchAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_VisualDetectionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_VisualDetectionComponent = { "VisualDetectionComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, VisualDetectionComponent), Z_Construct_UClass_USBZAIVisualDetectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_VisualDetectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_VisualDetectionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_UtilityComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_UtilityComponent = { "UtilityComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, UtilityComponent), Z_Construct_UClass_USBZAIUtilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_UtilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_UtilityComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_BlackboardAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_BlackboardAsset = { "BlackboardAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_BlackboardAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_BlackboardAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_FactionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_FactionId = { "FactionId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, FactionId), Z_Construct_UScriptStruct_FSBZFactionIdHelper, METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_FactionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_FactionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_LerpedControlRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_LerpedControlRotation = { "LerpedControlRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, LerpedControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_LerpedControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_LerpedControlRotation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_CurrentActions_Inner = { "CurrentActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAIAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_CurrentActions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_CurrentActions = { "CurrentActions", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, CurrentActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_CurrentActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_CurrentActions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_CurrentOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_CurrentOrder = { "CurrentOrder", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, CurrentOrder), Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_CurrentOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_CurrentOrder_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_OrderQueue_Inner = { "OrderQueue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_OrderQueue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_OrderQueue = { "OrderQueue", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, OrderQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_OrderQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_OrderQueue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_DisableTargetFocusWhilePathingEFs_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_DisableTargetFocusWhilePathingEFs_Inner = { "DisableTargetFocusWhilePathingEFs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZEquippableFamily, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_DisableTargetFocusWhilePathingEFs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_DisableTargetFocusWhilePathingEFs = { "DisableTargetFocusWhilePathingEFs", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, DisableTargetFocusWhilePathingEFs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_DisableTargetFocusWhilePathingEFs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_DisableTargetFocusWhilePathingEFs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_PathFocusHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_PathFocusHandler = { "PathFocusHandler", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, PathFocusHandler), Z_Construct_UScriptStruct_FSBZPathFocusHandler, METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_PathFocusHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_PathFocusHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_MinCoverScoreToFocus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_MinCoverScoreToFocus = { "MinCoverScoreToFocus", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, MinCoverScoreToFocus), METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_MinCoverScoreToFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_MinCoverScoreToFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_MinDistFromTraversalNavLinkToFocus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_MinDistFromTraversalNavLinkToFocus = { "MinDistFromTraversalNavLinkToFocus", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, MinDistFromTraversalNavLinkToFocus), METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_MinDistFromTraversalNavLinkToFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_MinDistFromTraversalNavLinkToFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_SameRoomTargetFocusDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_SameRoomTargetFocusDistance = { "SameRoomTargetFocusDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, SameRoomTargetFocusDistance), METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_SameRoomTargetFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_SameRoomTargetFocusDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_bIsTargetFocusEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAIController_Statics::NewProp_bIsTargetFocusEnabled_SetBit(void* Obj)
	{
		((ASBZAIController*)Obj)->bIsTargetFocusEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_bIsTargetFocusEnabled = { "bIsTargetFocusEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAIController), &Z_Construct_UClass_ASBZAIController_Statics::NewProp_bIsTargetFocusEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_bIsTargetFocusEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_bIsTargetFocusEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_FocusOnLastVisibleLocationDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_FocusOnLastVisibleLocationDuration = { "FocusOnLastVisibleLocationDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, FocusOnLastVisibleLocationDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_FocusOnLastVisibleLocationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_FocusOnLastVisibleLocationDuration_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_DisabledReasonArray_Inner = { "DisabledReasonArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_DisabledReasonArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_DisabledReasonArray = { "DisabledReasonArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, DisabledReasonArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_DisabledReasonArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_DisabledReasonArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_LastDisabledReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_LastDisabledReason = { "LastDisabledReason", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, LastDisabledReason), METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_LastDisabledReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_LastDisabledReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_NearRangeCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_NearRangeCurve = { "NearRangeCurve", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, NearRangeCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_NearRangeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_NearRangeCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_PreferredRangeCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_PreferredRangeCurve = { "PreferredRangeCurve", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, PreferredRangeCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_PreferredRangeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_PreferredRangeCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIController_Statics::NewProp_HeistStateAlert_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIController" },
		{ "ModuleRelativePath", "Public/SBZAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAIController_Statics::NewProp_HeistStateAlert = { "HeistStateAlert", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIController, HeistStateAlert), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::NewProp_HeistStateAlert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::NewProp_HeistStateAlert_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_OnAIPawnKilled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_YawAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_PitchAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_VisualDetectionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_UtilityComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_BlackboardAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_FactionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_LerpedControlRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_CurrentActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_CurrentActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_CurrentOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_OrderQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_OrderQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_DisableTargetFocusWhilePathingEFs_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_DisableTargetFocusWhilePathingEFs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_DisableTargetFocusWhilePathingEFs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_PathFocusHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_MinCoverScoreToFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_MinDistFromTraversalNavLinkToFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_SameRoomTargetFocusDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_bIsTargetFocusEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_FocusOnLastVisibleLocationDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_DisabledReasonArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_DisabledReasonArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_LastDisabledReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_NearRangeCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_PreferredRangeCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIController_Statics::NewProp_HeistStateAlert,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZAIController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZGateNavAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIController, ISBZGateNavAgentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAIController_Statics::ClassParams = {
		&ASBZAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAIController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAIController, 3697501725);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAIController>()
	{
		return ASBZAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAIController(Z_Construct_UClass_ASBZAIController, &ASBZAIController::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
