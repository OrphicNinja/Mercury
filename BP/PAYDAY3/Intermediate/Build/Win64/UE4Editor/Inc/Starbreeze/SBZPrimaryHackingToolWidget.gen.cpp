// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPrimaryHackingToolWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPrimaryHackingToolWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPrimaryHackingToolWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPrimaryHackingToolWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPrimaryToolWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(USBZPrimaryHackingToolWidget::execHasTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTag(Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	static FName NAME_USBZPrimaryHackingToolWidget_OnHackingDistanceToTarget = FName(TEXT("OnHackingDistanceToTarget"));
	void USBZPrimaryHackingToolWidget::OnHackingDistanceToTarget(float MaxDistance, float CurrentDistance)
	{
		SBZPrimaryHackingToolWidget_eventOnHackingDistanceToTarget_Parms Parms;
		Parms.MaxDistance=MaxDistance;
		Parms.CurrentDistance=CurrentDistance;
		ProcessEvent(FindFunctionChecked(NAME_USBZPrimaryHackingToolWidget_OnHackingDistanceToTarget),&Parms);
	}
	static FName NAME_USBZPrimaryHackingToolWidget_OnHackingSyncAborted = FName(TEXT("OnHackingSyncAborted"));
	void USBZPrimaryHackingToolWidget::OnHackingSyncAborted(bool bInAlreadySynched)
	{
		SBZPrimaryHackingToolWidget_eventOnHackingSyncAborted_Parms Parms;
		Parms.bInAlreadySynched=bInAlreadySynched ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZPrimaryHackingToolWidget_OnHackingSyncAborted),&Parms);
	}
	static FName NAME_USBZPrimaryHackingToolWidget_OnHackingSyncCompleted = FName(TEXT("OnHackingSyncCompleted"));
	void USBZPrimaryHackingToolWidget::OnHackingSyncCompleted(bool bAlreadyHacked)
	{
		SBZPrimaryHackingToolWidget_eventOnHackingSyncCompleted_Parms Parms;
		Parms.bAlreadyHacked=bAlreadyHacked ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZPrimaryHackingToolWidget_OnHackingSyncCompleted),&Parms);
	}
	static FName NAME_USBZPrimaryHackingToolWidget_OnHackingSyncNoAmmo = FName(TEXT("OnHackingSyncNoAmmo"));
	void USBZPrimaryHackingToolWidget::OnHackingSyncNoAmmo(int32 InCost, int32 InCurrent)
	{
		SBZPrimaryHackingToolWidget_eventOnHackingSyncNoAmmo_Parms Parms;
		Parms.InCost=InCost;
		Parms.InCurrent=InCurrent;
		ProcessEvent(FindFunctionChecked(NAME_USBZPrimaryHackingToolWidget_OnHackingSyncNoAmmo),&Parms);
	}
	static FName NAME_USBZPrimaryHackingToolWidget_OnHackingSyncProgressChanged = FName(TEXT("OnHackingSyncProgressChanged"));
	void USBZPrimaryHackingToolWidget::OnHackingSyncProgressChanged(float TimeRemaining)
	{
		SBZPrimaryHackingToolWidget_eventOnHackingSyncProgressChanged_Parms Parms;
		Parms.TimeRemaining=TimeRemaining;
		ProcessEvent(FindFunctionChecked(NAME_USBZPrimaryHackingToolWidget_OnHackingSyncProgressChanged),&Parms);
	}
	static FName NAME_USBZPrimaryHackingToolWidget_OnHackingSyncStarted = FName(TEXT("OnHackingSyncStarted"));
	void USBZPrimaryHackingToolWidget::OnHackingSyncStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZPrimaryHackingToolWidget_OnHackingSyncStarted),NULL);
	}
	static FName NAME_USBZPrimaryHackingToolWidget_OnHackinToolEquipped = FName(TEXT("OnHackinToolEquipped"));
	void USBZPrimaryHackingToolWidget::OnHackinToolEquipped(bool bHasUpgrade02)
	{
		SBZPrimaryHackingToolWidget_eventOnHackinToolEquipped_Parms Parms;
		Parms.bHasUpgrade02=bHasUpgrade02 ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZPrimaryHackingToolWidget_OnHackinToolEquipped),&Parms);
	}
	void USBZPrimaryHackingToolWidget::StaticRegisterNativesUSBZPrimaryHackingToolWidget()
	{
		UClass* Class = USBZPrimaryHackingToolWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasTag", &USBZPrimaryHackingToolWidget::execHasTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag_Statics
	{
		struct SBZPrimaryHackingToolWidget_eventHasTag_Parms
		{
			FGameplayTag Tag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPrimaryHackingToolWidget_eventHasTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag_Statics::NewProp_Tag_MetaData)) };
	void Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPrimaryHackingToolWidget_eventHasTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPrimaryHackingToolWidget_eventHasTag_Parms), &Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPrimaryHackingToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPrimaryHackingToolWidget, nullptr, "HasTag", nullptr, nullptr, sizeof(SBZPrimaryHackingToolWidget_eventHasTag_Parms), Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingDistanceToTarget_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingDistanceToTarget_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPrimaryHackingToolWidget_eventOnHackingDistanceToTarget_Parms, MaxDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingDistanceToTarget_Statics::NewProp_CurrentDistance = { "CurrentDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPrimaryHackingToolWidget_eventOnHackingDistanceToTarget_Parms, CurrentDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingDistanceToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingDistanceToTarget_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingDistanceToTarget_Statics::NewProp_CurrentDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingDistanceToTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPrimaryHackingToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingDistanceToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPrimaryHackingToolWidget, nullptr, "OnHackingDistanceToTarget", nullptr, nullptr, sizeof(SBZPrimaryHackingToolWidget_eventOnHackingDistanceToTarget_Parms), Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingDistanceToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingDistanceToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingDistanceToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingDistanceToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingDistanceToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingDistanceToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncAborted_Statics
	{
		static void NewProp_bInAlreadySynched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAlreadySynched;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncAborted_Statics::NewProp_bInAlreadySynched_SetBit(void* Obj)
	{
		((SBZPrimaryHackingToolWidget_eventOnHackingSyncAborted_Parms*)Obj)->bInAlreadySynched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncAborted_Statics::NewProp_bInAlreadySynched = { "bInAlreadySynched", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPrimaryHackingToolWidget_eventOnHackingSyncAborted_Parms), &Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncAborted_Statics::NewProp_bInAlreadySynched_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncAborted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncAborted_Statics::NewProp_bInAlreadySynched,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncAborted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPrimaryHackingToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncAborted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPrimaryHackingToolWidget, nullptr, "OnHackingSyncAborted", nullptr, nullptr, sizeof(SBZPrimaryHackingToolWidget_eventOnHackingSyncAborted_Parms), Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncAborted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncAborted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncAborted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncAborted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncAborted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncAborted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncCompleted_Statics
	{
		static void NewProp_bAlreadyHacked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlreadyHacked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncCompleted_Statics::NewProp_bAlreadyHacked_SetBit(void* Obj)
	{
		((SBZPrimaryHackingToolWidget_eventOnHackingSyncCompleted_Parms*)Obj)->bAlreadyHacked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncCompleted_Statics::NewProp_bAlreadyHacked = { "bAlreadyHacked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPrimaryHackingToolWidget_eventOnHackingSyncCompleted_Parms), &Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncCompleted_Statics::NewProp_bAlreadyHacked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncCompleted_Statics::NewProp_bAlreadyHacked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPrimaryHackingToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPrimaryHackingToolWidget, nullptr, "OnHackingSyncCompleted", nullptr, nullptr, sizeof(SBZPrimaryHackingToolWidget_eventOnHackingSyncCompleted_Parms), Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncNoAmmo_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InCost;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InCurrent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncNoAmmo_Statics::NewProp_InCost = { "InCost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPrimaryHackingToolWidget_eventOnHackingSyncNoAmmo_Parms, InCost), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncNoAmmo_Statics::NewProp_InCurrent = { "InCurrent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPrimaryHackingToolWidget_eventOnHackingSyncNoAmmo_Parms, InCurrent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncNoAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncNoAmmo_Statics::NewProp_InCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncNoAmmo_Statics::NewProp_InCurrent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncNoAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPrimaryHackingToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncNoAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPrimaryHackingToolWidget, nullptr, "OnHackingSyncNoAmmo", nullptr, nullptr, sizeof(SBZPrimaryHackingToolWidget_eventOnHackingSyncNoAmmo_Parms), Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncNoAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncNoAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncNoAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncNoAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncNoAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncNoAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncProgressChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncProgressChanged_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPrimaryHackingToolWidget_eventOnHackingSyncProgressChanged_Parms, TimeRemaining), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncProgressChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncProgressChanged_Statics::NewProp_TimeRemaining,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncProgressChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPrimaryHackingToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncProgressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPrimaryHackingToolWidget, nullptr, "OnHackingSyncProgressChanged", nullptr, nullptr, sizeof(SBZPrimaryHackingToolWidget_eventOnHackingSyncProgressChanged_Parms), Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncProgressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncProgressChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncProgressChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncProgressChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncProgressChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncProgressChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPrimaryHackingToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPrimaryHackingToolWidget, nullptr, "OnHackingSyncStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackinToolEquipped_Statics
	{
		static void NewProp_bHasUpgrade02_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasUpgrade02;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackinToolEquipped_Statics::NewProp_bHasUpgrade02_SetBit(void* Obj)
	{
		((SBZPrimaryHackingToolWidget_eventOnHackinToolEquipped_Parms*)Obj)->bHasUpgrade02 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackinToolEquipped_Statics::NewProp_bHasUpgrade02 = { "bHasUpgrade02", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPrimaryHackingToolWidget_eventOnHackinToolEquipped_Parms), &Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackinToolEquipped_Statics::NewProp_bHasUpgrade02_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackinToolEquipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackinToolEquipped_Statics::NewProp_bHasUpgrade02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackinToolEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPrimaryHackingToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackinToolEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPrimaryHackingToolWidget, nullptr, "OnHackinToolEquipped", nullptr, nullptr, sizeof(SBZPrimaryHackingToolWidget_eventOnHackinToolEquipped_Parms), Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackinToolEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackinToolEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackinToolEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackinToolEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackinToolEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackinToolEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPrimaryHackingToolWidget_NoRegister()
	{
		return USBZPrimaryHackingToolWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZPrimaryHackingToolWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPrimaryHackingToolWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPrimaryToolWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPrimaryHackingToolWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPrimaryHackingToolWidget_HasTag, "HasTag" }, // 2684379900
		{ &Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingDistanceToTarget, "OnHackingDistanceToTarget" }, // 1801941136
		{ &Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncAborted, "OnHackingSyncAborted" }, // 976555781
		{ &Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncCompleted, "OnHackingSyncCompleted" }, // 1437195811
		{ &Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncNoAmmo, "OnHackingSyncNoAmmo" }, // 1868240921
		{ &Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncProgressChanged, "OnHackingSyncProgressChanged" }, // 2782030510
		{ &Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackingSyncStarted, "OnHackingSyncStarted" }, // 2703242266
		{ &Z_Construct_UFunction_USBZPrimaryHackingToolWidget_OnHackinToolEquipped, "OnHackinToolEquipped" }, // 93637924
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPrimaryHackingToolWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPrimaryHackingToolWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPrimaryHackingToolWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPrimaryHackingToolWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPrimaryHackingToolWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPrimaryHackingToolWidget_Statics::ClassParams = {
		&USBZPrimaryHackingToolWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPrimaryHackingToolWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPrimaryHackingToolWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPrimaryHackingToolWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPrimaryHackingToolWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPrimaryHackingToolWidget, 1394222486);
	template<> STARBREEZE_API UClass* StaticClass<USBZPrimaryHackingToolWidget>()
	{
		return USBZPrimaryHackingToolWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPrimaryHackingToolWidget(Z_Construct_UClass_USBZPrimaryHackingToolWidget, &USBZPrimaryHackingToolWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPrimaryHackingToolWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPrimaryHackingToolWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
