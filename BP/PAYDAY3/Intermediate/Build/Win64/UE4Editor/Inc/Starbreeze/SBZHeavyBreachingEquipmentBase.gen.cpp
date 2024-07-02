// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHeavyBreachingEquipmentBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHeavyBreachingEquipmentBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBreachingEquipmentBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZHeavyBreachingEquipmentBase::execMulticast_OnPartAdded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnPartAdded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHeavyBreachingEquipmentBase::execMulticast_SetEstimatedFuelEndTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InEstimatedFuelEndTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetEstimatedFuelEndTime_Implementation(Z_Param_InEstimatedFuelEndTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHeavyBreachingEquipmentBase::execOnRep_PartsAdded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PartsAdded();
		P_NATIVE_END;
	}
	static FName NAME_ASBZHeavyBreachingEquipmentBase_BP_PartAdded = FName(TEXT("BP_PartAdded"));
	void ASBZHeavyBreachingEquipmentBase::BP_PartAdded(int32 Amount)
	{
		SBZHeavyBreachingEquipmentBase_eventBP_PartAdded_Parms Parms;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_ASBZHeavyBreachingEquipmentBase_BP_PartAdded),&Parms);
	}
	static FName NAME_ASBZHeavyBreachingEquipmentBase_Multicast_OnPartAdded = FName(TEXT("Multicast_OnPartAdded"));
	void ASBZHeavyBreachingEquipmentBase::Multicast_OnPartAdded()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZHeavyBreachingEquipmentBase_Multicast_OnPartAdded),NULL);
	}
	static FName NAME_ASBZHeavyBreachingEquipmentBase_Multicast_SetEstimatedFuelEndTime = FName(TEXT("Multicast_SetEstimatedFuelEndTime"));
	void ASBZHeavyBreachingEquipmentBase::Multicast_SetEstimatedFuelEndTime(float InEstimatedFuelEndTime)
	{
		SBZHeavyBreachingEquipmentBase_eventMulticast_SetEstimatedFuelEndTime_Parms Parms;
		Parms.InEstimatedFuelEndTime=InEstimatedFuelEndTime;
		ProcessEvent(FindFunctionChecked(NAME_ASBZHeavyBreachingEquipmentBase_Multicast_SetEstimatedFuelEndTime),&Parms);
	}
	void ASBZHeavyBreachingEquipmentBase::StaticRegisterNativesASBZHeavyBreachingEquipmentBase()
	{
		UClass* Class = ASBZHeavyBreachingEquipmentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_OnPartAdded", &ASBZHeavyBreachingEquipmentBase::execMulticast_OnPartAdded },
			{ "Multicast_SetEstimatedFuelEndTime", &ASBZHeavyBreachingEquipmentBase::execMulticast_SetEstimatedFuelEndTime },
			{ "OnRep_PartsAdded", &ASBZHeavyBreachingEquipmentBase::execOnRep_PartsAdded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_BP_PartAdded_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_BP_PartAdded_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHeavyBreachingEquipmentBase_eventBP_PartAdded_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_BP_PartAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_BP_PartAdded_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_BP_PartAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHeavyBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_BP_PartAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase, nullptr, "BP_PartAdded", nullptr, nullptr, sizeof(SBZHeavyBreachingEquipmentBase_eventBP_PartAdded_Parms), Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_BP_PartAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_BP_PartAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_BP_PartAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_BP_PartAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_BP_PartAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_BP_PartAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_OnPartAdded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_OnPartAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHeavyBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_OnPartAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase, nullptr, "Multicast_OnPartAdded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_OnPartAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_OnPartAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_OnPartAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_OnPartAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_SetEstimatedFuelEndTime_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InEstimatedFuelEndTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_SetEstimatedFuelEndTime_Statics::NewProp_InEstimatedFuelEndTime = { "InEstimatedFuelEndTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHeavyBreachingEquipmentBase_eventMulticast_SetEstimatedFuelEndTime_Parms, InEstimatedFuelEndTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_SetEstimatedFuelEndTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_SetEstimatedFuelEndTime_Statics::NewProp_InEstimatedFuelEndTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_SetEstimatedFuelEndTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHeavyBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_SetEstimatedFuelEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase, nullptr, "Multicast_SetEstimatedFuelEndTime", nullptr, nullptr, sizeof(SBZHeavyBreachingEquipmentBase_eventMulticast_SetEstimatedFuelEndTime_Parms), Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_SetEstimatedFuelEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_SetEstimatedFuelEndTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_SetEstimatedFuelEndTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_SetEstimatedFuelEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_SetEstimatedFuelEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_SetEstimatedFuelEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_OnRep_PartsAdded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_OnRep_PartsAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHeavyBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_OnRep_PartsAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase, nullptr, "OnRep_PartsAdded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_OnRep_PartsAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_OnRep_PartsAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_OnRep_PartsAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_OnRep_PartsAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_NoRegister()
	{
		return ASBZHeavyBreachingEquipmentBase::StaticClass();
	}
	struct Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquipmentParts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentParts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquipmentParts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentTimes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquipmentTimes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatupTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeatupTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfPartsAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NumberOfPartsAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EstimatedFuelEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EstimatedFuelEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentPartMeshes_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipmentPartMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentPartMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquipmentPartMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartAddedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartAddedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZBreachingEquipmentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_BP_PartAdded, "BP_PartAdded" }, // 2045188410
		{ &Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_OnPartAdded, "Multicast_OnPartAdded" }, // 105694504
		{ &Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_Multicast_SetEstimatedFuelEndTime, "Multicast_SetEstimatedFuelEndTime" }, // 153727123
		{ &Z_Construct_UFunction_ASBZHeavyBreachingEquipmentBase_OnRep_PartsAdded, "OnRep_PartsAdded" }, // 4002279269
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHeavyBreachingEquipmentBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHeavyBreachingEquipmentBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentParts_Inner = { "EquipmentParts", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentParts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeavyBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZHeavyBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentParts = { "EquipmentParts", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHeavyBreachingEquipmentBase, EquipmentParts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentParts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentParts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentTimes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeavyBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZHeavyBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentTimes = { "EquipmentTimes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHeavyBreachingEquipmentBase, EquipmentTimes), Z_Construct_UScriptStruct_FSBZBreachingEquipmentTimes, METADATA_PARAMS(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentTimes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_HeatupTimeSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeavyBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZHeavyBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_HeatupTimeSeconds = { "HeatupTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHeavyBreachingEquipmentBase, HeatupTimeSeconds), METADATA_PARAMS(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_HeatupTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_HeatupTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_NumberOfPartsAdded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeavyBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZHeavyBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_NumberOfPartsAdded = { "NumberOfPartsAdded", "OnRep_PartsAdded", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHeavyBreachingEquipmentBase, NumberOfPartsAdded), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_NumberOfPartsAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_NumberOfPartsAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EstimatedFuelEndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeavyBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZHeavyBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EstimatedFuelEndTime = { "EstimatedFuelEndTime", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHeavyBreachingEquipmentBase, EstimatedFuelEndTime), METADATA_PARAMS(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EstimatedFuelEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EstimatedFuelEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentPartMeshes_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeavyBreachingEquipmentBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHeavyBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentPartMeshes_Inner = { "EquipmentPartMeshes", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentPartMeshes_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentPartMeshes_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentPartMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeavyBreachingEquipmentBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHeavyBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentPartMeshes = { "EquipmentPartMeshes", nullptr, (EPropertyFlags)0x001000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHeavyBreachingEquipmentBase, EquipmentPartMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentPartMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentPartMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_PartAddedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeavyBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZHeavyBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_PartAddedEvent = { "PartAddedEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHeavyBreachingEquipmentBase, PartAddedEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_PartAddedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_PartAddedEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentParts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentParts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentTimes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_HeatupTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_NumberOfPartsAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EstimatedFuelEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentPartMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_EquipmentPartMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::NewProp_PartAddedEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZHeavyBreachingEquipmentBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::ClassParams = {
		&ASBZHeavyBreachingEquipmentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZHeavyBreachingEquipmentBase, 1673644958);
	template<> STARBREEZE_API UClass* StaticClass<ASBZHeavyBreachingEquipmentBase>()
	{
		return ASBZHeavyBreachingEquipmentBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZHeavyBreachingEquipmentBase(Z_Construct_UClass_ASBZHeavyBreachingEquipmentBase, &ASBZHeavyBreachingEquipmentBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZHeavyBreachingEquipmentBase"), false, nullptr, nullptr, nullptr);

	void ASBZHeavyBreachingEquipmentBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_NumberOfPartsAdded(TEXT("NumberOfPartsAdded"));
		static const FName Name_EstimatedFuelEndTime(TEXT("EstimatedFuelEndTime"));

		const bool bIsValid = true
			&& Name_NumberOfPartsAdded == ClassReps[(int32)ENetFields_Private::NumberOfPartsAdded].Property->GetFName()
			&& Name_EstimatedFuelEndTime == ClassReps[(int32)ENetFields_Private::EstimatedFuelEndTime].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZHeavyBreachingEquipmentBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZHeavyBreachingEquipmentBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
