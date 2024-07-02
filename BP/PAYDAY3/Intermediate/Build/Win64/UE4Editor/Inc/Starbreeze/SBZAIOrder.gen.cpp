// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIOrderMode();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIBehaviorCategory();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIOrder::execExecPredicate)
	{
		P_GET_OBJECT(UObject,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExecPredicate_Implementation(Z_Param_Owner);
		P_NATIVE_END;
	}
	static FName NAME_USBZAIOrder_ExecPredicate = FName(TEXT("ExecPredicate"));
	bool USBZAIOrder::ExecPredicate(const UObject* Owner) const
	{
		SBZAIOrder_eventExecPredicate_Parms Parms;
		Parms.Owner=Owner;
		const_cast<USBZAIOrder*>(this)->ProcessEvent(FindFunctionChecked(NAME_USBZAIOrder_ExecPredicate),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USBZAIOrder_OnCompletedBP = FName(TEXT("OnCompletedBP"));
	void USBZAIOrder::OnCompletedBP(APawn* Pawn, TEnumAsByte<EBTNodeResult::Type> const& NodeResult)
	{
		SBZAIOrder_eventOnCompletedBP_Parms Parms;
		Parms.Pawn=Pawn;
		Parms.NodeResult=NodeResult;
		ProcessEvent(FindFunctionChecked(NAME_USBZAIOrder_OnCompletedBP),&Parms);
	}
	static FName NAME_USBZAIOrder_OnDeselectedBP = FName(TEXT("OnDeselectedBP"));
	void USBZAIOrder::OnDeselectedBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZAIOrder_OnDeselectedBP),NULL);
	}
	static FName NAME_USBZAIOrder_OnSelectedBP = FName(TEXT("OnSelectedBP"));
	void USBZAIOrder::OnSelectedBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZAIOrder_OnSelectedBP),NULL);
	}
	static FName NAME_USBZAIOrder_OnStartedBP = FName(TEXT("OnStartedBP"));
	void USBZAIOrder::OnStartedBP(APawn* Pawn)
	{
		SBZAIOrder_eventOnStartedBP_Parms Parms;
		Parms.Pawn=Pawn;
		ProcessEvent(FindFunctionChecked(NAME_USBZAIOrder_OnStartedBP),&Parms);
	}
	static FName NAME_USBZAIOrder_OnStoppedBP = FName(TEXT("OnStoppedBP"));
	void USBZAIOrder::OnStoppedBP(APawn* Pawn, TEnumAsByte<EBTNodeResult::Type> const& NodeResult)
	{
		SBZAIOrder_eventOnStoppedBP_Parms Parms;
		Parms.Pawn=Pawn;
		Parms.NodeResult=NodeResult;
		ProcessEvent(FindFunctionChecked(NAME_USBZAIOrder_OnStoppedBP),&Parms);
	}
	void USBZAIOrder::StaticRegisterNativesUSBZAIOrder()
	{
		UClass* Class = USBZAIOrder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecPredicate", &USBZAIOrder::execExecPredicate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIOrder_ExecPredicate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_ExecPredicate_Statics::NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_ExecPredicate_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_eventExecPredicate_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_ExecPredicate_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_ExecPredicate_Statics::NewProp_Owner_MetaData)) };
	void Z_Construct_UFunction_USBZAIOrder_ExecPredicate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIOrder_eventExecPredicate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAIOrder_ExecPredicate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIOrder_eventExecPredicate_Parms), &Z_Construct_UFunction_USBZAIOrder_ExecPredicate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_ExecPredicate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_ExecPredicate_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_ExecPredicate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_ExecPredicate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_ExecPredicate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder, nullptr, "ExecPredicate", nullptr, nullptr, sizeof(SBZAIOrder_eventExecPredicate_Parms), Z_Construct_UFunction_USBZAIOrder_ExecPredicate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_ExecPredicate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_ExecPredicate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_ExecPredicate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_ExecPredicate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_ExecPredicate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIOrder_OnCompletedBP_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_OnCompletedBP_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_eventOnCompletedBP_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_OnCompletedBP_Statics::NewProp_NodeResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIOrder_OnCompletedBP_Statics::NewProp_NodeResult = { "NodeResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_eventOnCompletedBP_Parms, NodeResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_OnCompletedBP_Statics::NewProp_NodeResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_OnCompletedBP_Statics::NewProp_NodeResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_OnCompletedBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_OnCompletedBP_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_OnCompletedBP_Statics::NewProp_NodeResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_OnCompletedBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_OnCompletedBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder, nullptr, "OnCompletedBP", nullptr, nullptr, sizeof(SBZAIOrder_eventOnCompletedBP_Parms), Z_Construct_UFunction_USBZAIOrder_OnCompletedBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_OnCompletedBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_OnCompletedBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_OnCompletedBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_OnCompletedBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_OnCompletedBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIOrder_OnDeselectedBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_OnDeselectedBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_OnDeselectedBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder, nullptr, "OnDeselectedBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_OnDeselectedBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_OnDeselectedBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_OnDeselectedBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_OnDeselectedBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIOrder_OnSelectedBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_OnSelectedBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_OnSelectedBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder, nullptr, "OnSelectedBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_OnSelectedBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_OnSelectedBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_OnSelectedBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_OnSelectedBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIOrder_OnStartedBP_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_OnStartedBP_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_eventOnStartedBP_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_OnStartedBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_OnStartedBP_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_OnStartedBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_OnStartedBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder, nullptr, "OnStartedBP", nullptr, nullptr, sizeof(SBZAIOrder_eventOnStartedBP_Parms), Z_Construct_UFunction_USBZAIOrder_OnStartedBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_OnStartedBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_OnStartedBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_OnStartedBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_OnStartedBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_OnStartedBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIOrder_OnStoppedBP_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_OnStoppedBP_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_eventOnStoppedBP_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_OnStoppedBP_Statics::NewProp_NodeResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIOrder_OnStoppedBP_Statics::NewProp_NodeResult = { "NodeResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_eventOnStoppedBP_Parms, NodeResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_OnStoppedBP_Statics::NewProp_NodeResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_OnStoppedBP_Statics::NewProp_NodeResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_OnStoppedBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_OnStoppedBP_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_OnStoppedBP_Statics::NewProp_NodeResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_OnStoppedBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_OnStoppedBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder, nullptr, "OnStoppedBP", nullptr, nullptr, sizeof(SBZAIOrder_eventOnStoppedBP_Parms), Z_Construct_UFunction_USBZAIOrder_OnStoppedBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_OnStoppedBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_OnStoppedBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_OnStoppedBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_OnStoppedBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_OnStoppedBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIOrder_NoRegister()
	{
		return USBZAIOrder::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrderTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicablePawnTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApplicablePawnTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldRemoveTagsOnStopped_MetaData[];
#endif
		static void NewProp_bShouldRemoveTagsOnStopped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldRemoveTagsOnStopped;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInstanced_MetaData[];
#endif
		static void NewProp_bIsInstanced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInstanced;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPersistent_MetaData[];
#endif
		static void NewProp_bIsPersistent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPersistent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSelectionScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultSelectionScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultUtilityScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultUtilityScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Behavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Behavior;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrderOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompleteOnStop_MetaData[];
#endif
		static void NewProp_bCompleteOnStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompleteOnStop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIOrder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIOrder_ExecPredicate, "ExecPredicate" }, // 3712065643
		{ &Z_Construct_UFunction_USBZAIOrder_OnCompletedBP, "OnCompletedBP" }, // 2560996260
		{ &Z_Construct_UFunction_USBZAIOrder_OnDeselectedBP, "OnDeselectedBP" }, // 4049499170
		{ &Z_Construct_UFunction_USBZAIOrder_OnSelectedBP, "OnSelectedBP" }, // 801840918
		{ &Z_Construct_UFunction_USBZAIOrder_OnStartedBP, "OnStartedBP" }, // 3524609950
		{ &Z_Construct_UFunction_USBZAIOrder_OnStoppedBP, "OnStoppedBP" }, // 2147231583
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Statics::NewProp_OrderTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder" },
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIOrder_Statics::NewProp_OrderTypes = { "OrderTypes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder, OrderTypes), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_OrderTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_OrderTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Statics::NewProp_OverrideTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder" },
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIOrder_Statics::NewProp_OverrideTypes = { "OverrideTypes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder, OverrideTypes), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_OverrideTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_OverrideTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Statics::NewProp_ApplicablePawnTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder" },
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIOrder_Statics::NewProp_ApplicablePawnTypes = { "ApplicablePawnTypes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder, ApplicablePawnTypes), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_ApplicablePawnTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_ApplicablePawnTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder" },
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bShouldRemoveTagsOnStopped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder" },
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bShouldRemoveTagsOnStopped_SetBit(void* Obj)
	{
		((USBZAIOrder*)Obj)->bShouldRemoveTagsOnStopped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bShouldRemoveTagsOnStopped = { "bShouldRemoveTagsOnStopped", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIOrder), &Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bShouldRemoveTagsOnStopped_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bShouldRemoveTagsOnStopped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bShouldRemoveTagsOnStopped_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Mode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder" },
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder, Mode), Z_Construct_UEnum_Starbreeze_ESBZAIOrderMode, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Mode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bIsInstanced_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder" },
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bIsInstanced_SetBit(void* Obj)
	{
		((USBZAIOrder*)Obj)->bIsInstanced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bIsInstanced = { "bIsInstanced", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIOrder), &Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bIsInstanced_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bIsInstanced_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bIsInstanced_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bIsPersistent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder" },
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bIsPersistent_SetBit(void* Obj)
	{
		((USBZAIOrder*)Obj)->bIsPersistent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bIsPersistent = { "bIsPersistent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIOrder), &Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bIsPersistent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bIsPersistent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bIsPersistent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Statics::NewProp_DefaultSelectionScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder" },
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIOrder_Statics::NewProp_DefaultSelectionScore = { "DefaultSelectionScore", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder, DefaultSelectionScore), METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_DefaultSelectionScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_DefaultSelectionScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Statics::NewProp_DefaultUtilityScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder" },
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIOrder_Statics::NewProp_DefaultUtilityScore = { "DefaultUtilityScore", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder, DefaultUtilityScore), METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_DefaultUtilityScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_DefaultUtilityScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Behavior_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder" },
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Behavior = { "Behavior", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder, Behavior), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Behavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Behavior_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder" },
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder, Category), Z_Construct_UEnum_Starbreeze_ESBZAIBehaviorCategory, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Statics::NewProp_OrderOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder" },
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_Statics::NewProp_OrderOwner = { "OrderOwner", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder, OrderOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_OrderOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_OrderOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Statics::NewProp_TargetActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder" },
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bCompleteOnStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder" },
		{ "ModuleRelativePath", "Public/SBZAIOrder.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bCompleteOnStop_SetBit(void* Obj)
	{
		((USBZAIOrder*)Obj)->bCompleteOnStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bCompleteOnStop = { "bCompleteOnStop", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIOrder), &Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bCompleteOnStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bCompleteOnStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bCompleteOnStop_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Statics::NewProp_OrderTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Statics::NewProp_OverrideTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Statics::NewProp_ApplicablePawnTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bShouldRemoveTagsOnStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bIsInstanced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bIsPersistent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Statics::NewProp_DefaultSelectionScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Statics::NewProp_DefaultUtilityScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Behavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Statics::NewProp_OrderOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Statics::NewProp_bCompleteOnStop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_Statics::ClassParams = {
		&USBZAIOrder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIOrder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder, 3204336946);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder>()
	{
		return USBZAIOrder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder(Z_Construct_UClass_USBZAIOrder, &USBZAIOrder::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
