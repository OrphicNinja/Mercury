// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIObjectiveComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIObjectiveComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIObjectiveComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIObjectiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EAIObjectiveInteractionTypes();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EAIObjectivePriority();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIController_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FInteractableDataContainer();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FColliderDataContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIObjectiveInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIObjectiveComponent::execGetCurrentRoom_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZRoomVolume**)Z_Param__Result=P_THIS->GetCurrentRoom_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIObjectiveComponent::execGetLastKnownRoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZRoomVolume**)Z_Param__Result=P_THIS->GetLastKnownRoom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIObjectiveComponent::execOnCollisionChanged)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ActorPrimitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCollisionChanged(Z_Param_ActorPrimitive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIObjectiveComponent::execOnInteractStateChanged)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractStateChanged(Z_Param_Interactable,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIObjectiveComponent::execOnOrderCompleted)
	{
		P_GET_OBJECT(USBZAIOrder,Z_Param_Order);
		P_GET_OBJECT(APawn,Z_Param_Owner);
		P_GET_PROPERTY(FByteProperty,Z_Param_OrderResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOrderCompleted(Z_Param_Order,Z_Param_Owner,EBTNodeResult::Type(Z_Param_OrderResult));
		P_NATIVE_END;
	}
	void USBZAIObjectiveComponent::StaticRegisterNativesUSBZAIObjectiveComponent()
	{
		UClass* Class = USBZAIObjectiveComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentRoom_Implementation", &USBZAIObjectiveComponent::execGetCurrentRoom_Implementation },
			{ "GetLastKnownRoom", &USBZAIObjectiveComponent::execGetLastKnownRoom },
			{ "OnCollisionChanged", &USBZAIObjectiveComponent::execOnCollisionChanged },
			{ "OnInteractStateChanged", &USBZAIObjectiveComponent::execOnInteractStateChanged },
			{ "OnOrderCompleted", &USBZAIObjectiveComponent::execOnOrderCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIObjectiveComponent_GetCurrentRoom_Implementation_Statics
	{
		struct SBZAIObjectiveComponent_eventGetCurrentRoom_Implementation_Parms
		{
			ASBZRoomVolume* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIObjectiveComponent_GetCurrentRoom_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIObjectiveComponent_eventGetCurrentRoom_Implementation_Parms, ReturnValue), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIObjectiveComponent_GetCurrentRoom_Implementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIObjectiveComponent_GetCurrentRoom_Implementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIObjectiveComponent_GetCurrentRoom_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIObjectiveComponent_GetCurrentRoom_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIObjectiveComponent, nullptr, "GetCurrentRoom_Implementation", nullptr, nullptr, sizeof(SBZAIObjectiveComponent_eventGetCurrentRoom_Implementation_Parms), Z_Construct_UFunction_USBZAIObjectiveComponent_GetCurrentRoom_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIObjectiveComponent_GetCurrentRoom_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIObjectiveComponent_GetCurrentRoom_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIObjectiveComponent_GetCurrentRoom_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIObjectiveComponent_GetCurrentRoom_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIObjectiveComponent_GetCurrentRoom_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIObjectiveComponent_GetLastKnownRoom_Statics
	{
		struct SBZAIObjectiveComponent_eventGetLastKnownRoom_Parms
		{
			ASBZRoomVolume* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIObjectiveComponent_GetLastKnownRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIObjectiveComponent_eventGetLastKnownRoom_Parms, ReturnValue), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIObjectiveComponent_GetLastKnownRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIObjectiveComponent_GetLastKnownRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIObjectiveComponent_GetLastKnownRoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIObjectiveComponent_GetLastKnownRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIObjectiveComponent, nullptr, "GetLastKnownRoom", nullptr, nullptr, sizeof(SBZAIObjectiveComponent_eventGetLastKnownRoom_Parms), Z_Construct_UFunction_USBZAIObjectiveComponent_GetLastKnownRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIObjectiveComponent_GetLastKnownRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIObjectiveComponent_GetLastKnownRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIObjectiveComponent_GetLastKnownRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIObjectiveComponent_GetLastKnownRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIObjectiveComponent_GetLastKnownRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIObjectiveComponent_OnCollisionChanged_Statics
	{
		struct SBZAIObjectiveComponent_eventOnCollisionChanged_Parms
		{
			UPrimitiveComponent* ActorPrimitive;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorPrimitive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorPrimitive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIObjectiveComponent_OnCollisionChanged_Statics::NewProp_ActorPrimitive_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIObjectiveComponent_OnCollisionChanged_Statics::NewProp_ActorPrimitive = { "ActorPrimitive", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIObjectiveComponent_eventOnCollisionChanged_Parms, ActorPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAIObjectiveComponent_OnCollisionChanged_Statics::NewProp_ActorPrimitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIObjectiveComponent_OnCollisionChanged_Statics::NewProp_ActorPrimitive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIObjectiveComponent_OnCollisionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIObjectiveComponent_OnCollisionChanged_Statics::NewProp_ActorPrimitive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIObjectiveComponent_OnCollisionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIObjectiveComponent_OnCollisionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIObjectiveComponent, nullptr, "OnCollisionChanged", nullptr, nullptr, sizeof(SBZAIObjectiveComponent_eventOnCollisionChanged_Parms), Z_Construct_UFunction_USBZAIObjectiveComponent_OnCollisionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIObjectiveComponent_OnCollisionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIObjectiveComponent_OnCollisionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIObjectiveComponent_OnCollisionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIObjectiveComponent_OnCollisionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIObjectiveComponent_OnCollisionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged_Statics
	{
		struct SBZAIObjectiveComponent_eventOnInteractStateChanged_Parms
		{
			const USBZBaseInteractableComponent* Interactable;
			bool bEnabled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIObjectiveComponent_eventOnInteractStateChanged_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged_Statics::NewProp_Interactable_MetaData)) };
	void Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZAIObjectiveComponent_eventOnInteractStateChanged_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIObjectiveComponent_eventOnInteractStateChanged_Parms), &Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIObjectiveComponent, nullptr, "OnInteractStateChanged", nullptr, nullptr, sizeof(SBZAIObjectiveComponent_eventOnInteractStateChanged_Parms), Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIObjectiveComponent_OnOrderCompleted_Statics
	{
		struct SBZAIObjectiveComponent_eventOnOrderCompleted_Parms
		{
			USBZAIOrder* Order;
			APawn* Owner;
			TEnumAsByte<EBTNodeResult::Type> OrderResult;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Order;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OrderResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIObjectiveComponent_OnOrderCompleted_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIObjectiveComponent_eventOnOrderCompleted_Parms, Order), Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIObjectiveComponent_OnOrderCompleted_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIObjectiveComponent_eventOnOrderCompleted_Parms, Owner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIObjectiveComponent_OnOrderCompleted_Statics::NewProp_OrderResult = { "OrderResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIObjectiveComponent_eventOnOrderCompleted_Parms, OrderResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIObjectiveComponent_OnOrderCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIObjectiveComponent_OnOrderCompleted_Statics::NewProp_Order,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIObjectiveComponent_OnOrderCompleted_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIObjectiveComponent_OnOrderCompleted_Statics::NewProp_OrderResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIObjectiveComponent_OnOrderCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIObjectiveComponent_OnOrderCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIObjectiveComponent, nullptr, "OnOrderCompleted", nullptr, nullptr, sizeof(SBZAIObjectiveComponent_eventOnOrderCompleted_Parms), Z_Construct_UFunction_USBZAIObjectiveComponent_OnOrderCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIObjectiveComponent_OnOrderCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIObjectiveComponent_OnOrderCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIObjectiveComponent_OnOrderCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIObjectiveComponent_OnOrderCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIObjectiveComponent_OnOrderCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIObjectiveComponent_NoRegister()
	{
		return USBZAIObjectiveComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIObjectiveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRegisterToWorldRuntime_MetaData[];
#endif
		static void NewProp_bRegisterToWorldRuntime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRegisterToWorldRuntime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExcludeInteractableAfterUse_MetaData[];
#endif
		static void NewProp_bExcludeInteractableAfterUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExcludeInteractableAfterUse;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InteractionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InteractionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InteractionPriority_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InteractionPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasIteractionItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HasIteractionItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoesNotHaveIteractionItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DoesNotHaveIteractionItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentUser;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectiveInteractables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveInteractables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectiveInteractables;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveInteractables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveInteractables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveInteractables;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InteractableExclusionList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableExclusionList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InteractableExclusionList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectiveColliders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveColliders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectiveColliders;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveColliders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveColliders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveColliders;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveToPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveToPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialObjectiveLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialObjectiveLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentInteractable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomVolumes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastKnownRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastKnownRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveToPosEQSQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveToPosEQSQuery;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIObjectiveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIObjectiveComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIObjectiveComponent_GetCurrentRoom_Implementation, "GetCurrentRoom_Implementation" }, // 687547365
		{ &Z_Construct_UFunction_USBZAIObjectiveComponent_GetLastKnownRoom, "GetLastKnownRoom" }, // 625954258
		{ &Z_Construct_UFunction_USBZAIObjectiveComponent_OnCollisionChanged, "OnCollisionChanged" }, // 1970987268
		{ &Z_Construct_UFunction_USBZAIObjectiveComponent_OnInteractStateChanged, "OnInteractStateChanged" }, // 2693461518
		{ &Z_Construct_UFunction_USBZAIObjectiveComponent_OnOrderCompleted, "OnOrderCompleted" }, // 2622627819
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZAIObjectiveComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_bRegisterToWorldRuntime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_bRegisterToWorldRuntime_SetBit(void* Obj)
	{
		((USBZAIObjectiveComponent*)Obj)->bRegisterToWorldRuntime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_bRegisterToWorldRuntime = { "bRegisterToWorldRuntime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIObjectiveComponent), &Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_bRegisterToWorldRuntime_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_bRegisterToWorldRuntime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_bRegisterToWorldRuntime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_bExcludeInteractableAfterUse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_bExcludeInteractableAfterUse_SetBit(void* Obj)
	{
		((USBZAIObjectiveComponent*)Obj)->bExcludeInteractableAfterUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_bExcludeInteractableAfterUse = { "bExcludeInteractableAfterUse", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIObjectiveComponent), &Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_bExcludeInteractableAfterUse_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_bExcludeInteractableAfterUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_bExcludeInteractableAfterUse_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIObjectiveComponent, InteractionType), Z_Construct_UEnum_Starbreeze_EAIObjectiveInteractionTypes, METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionPriority = { "InteractionPriority", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIObjectiveComponent, InteractionPriority), Z_Construct_UEnum_Starbreeze_EAIObjectivePriority, METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_HasIteractionItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_HasIteractionItems = { "HasIteractionItems", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIObjectiveComponent, HasIteractionItems), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_HasIteractionItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_HasIteractionItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_DoesNotHaveIteractionItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_DoesNotHaveIteractionItems = { "DoesNotHaveIteractionItems", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIObjectiveComponent, DoesNotHaveIteractionItems), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_DoesNotHaveIteractionItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_DoesNotHaveIteractionItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_CurrentUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_CurrentUser = { "CurrentUser", nullptr, (EPropertyFlags)0x0024080000002005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIObjectiveComponent, CurrentUser), Z_Construct_UClass_ASBZAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_CurrentUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_CurrentUser_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ObjectiveInteractables_Inner = { "ObjectiveInteractables", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInteractableDataContainer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ObjectiveInteractables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ObjectiveInteractables = { "ObjectiveInteractables", nullptr, (EPropertyFlags)0x0020088000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIObjectiveComponent, ObjectiveInteractables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ObjectiveInteractables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ObjectiveInteractables_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ActiveInteractables_Inner = { "ActiveInteractables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ActiveInteractables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ActiveInteractables = { "ActiveInteractables", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIObjectiveComponent, ActiveInteractables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ActiveInteractables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ActiveInteractables_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractableExclusionList_Inner = { "InteractableExclusionList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractableExclusionList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractableExclusionList = { "InteractableExclusionList", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIObjectiveComponent, InteractableExclusionList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractableExclusionList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractableExclusionList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ObjectiveColliders_Inner = { "ObjectiveColliders", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColliderDataContainer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ObjectiveColliders_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ObjectiveColliders = { "ObjectiveColliders", nullptr, (EPropertyFlags)0x0020088000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIObjectiveComponent, ObjectiveColliders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ObjectiveColliders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ObjectiveColliders_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ActiveColliders_Inner = { "ActiveColliders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ActiveColliders_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ActiveColliders = { "ActiveColliders", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIObjectiveComponent, ActiveColliders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ActiveColliders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ActiveColliders_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionPoint = { "InteractionPoint", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIObjectiveComponent, InteractionPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_MoveToPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_MoveToPosition = { "MoveToPosition", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIObjectiveComponent, MoveToPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_MoveToPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_MoveToPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InitialObjectiveLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InitialObjectiveLocation = { "InitialObjectiveLocation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIObjectiveComponent, InitialObjectiveLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InitialObjectiveLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InitialObjectiveLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_CurrentInteractable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_CurrentInteractable = { "CurrentInteractable", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIObjectiveComponent, CurrentInteractable), METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_CurrentInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_CurrentInteractable_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_RoomVolumes_Inner = { "RoomVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_RoomVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_RoomVolumes = { "RoomVolumes", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIObjectiveComponent, RoomVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_RoomVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_RoomVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_LastKnownRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_LastKnownRoom = { "LastKnownRoom", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIObjectiveComponent, LastKnownRoom), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_LastKnownRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_LastKnownRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_MoveToPosEQSQuery_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIObjectiveComponent" },
		{ "ModuleRelativePath", "Public/SBZAIObjectiveComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_MoveToPosEQSQuery = { "MoveToPosEQSQuery", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIObjectiveComponent, MoveToPosEQSQuery), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_MoveToPosEQSQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_MoveToPosEQSQuery_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIObjectiveComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_bRegisterToWorldRuntime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_bExcludeInteractableAfterUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionPriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_HasIteractionItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_DoesNotHaveIteractionItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_CurrentUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ObjectiveInteractables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ObjectiveInteractables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ActiveInteractables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ActiveInteractables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractableExclusionList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractableExclusionList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ObjectiveColliders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ObjectiveColliders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ActiveColliders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_ActiveColliders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InteractionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_MoveToPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_InitialObjectiveLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_CurrentInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_RoomVolumes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_RoomVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_LastKnownRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIObjectiveComponent_Statics::NewProp_MoveToPosEQSQuery,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAIObjectiveInterface_NoRegister, (int32)VTABLE_OFFSET(USBZAIObjectiveComponent, ISBZAIObjectiveInterface), false },
			{ Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister, (int32)VTABLE_OFFSET(USBZAIObjectiveComponent, ISBZRoomVolumeInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIObjectiveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIObjectiveComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIObjectiveComponent_Statics::ClassParams = {
		&USBZAIObjectiveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIObjectiveComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIObjectiveComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIObjectiveComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIObjectiveComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIObjectiveComponent, 619237738);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIObjectiveComponent>()
	{
		return USBZAIObjectiveComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIObjectiveComponent(Z_Construct_UClass_USBZAIObjectiveComponent, &USBZAIObjectiveComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIObjectiveComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIObjectiveComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
