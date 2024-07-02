// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCombiningLootProcessor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCombiningLootProcessor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCombiningLootProcessor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCombiningLootProcessor();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLootProcessorBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZCombiningLootProcesorDelegate__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCombinedBagType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagHandle();
// End Cross Module References
	DEFINE_FUNCTION(ASBZCombiningLootProcessor::execMulticast_UpdateCombinedBagsCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_UpdateCombinedBagsCount_Implementation(Z_Param_NewCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCombiningLootProcessor::execOnServerClaimCombinedBagInteractionComplete)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerClaimCombinedBagInteractionComplete(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZCombiningLootProcessor_BP_OnCombinedBagCountUpdated = FName(TEXT("BP_OnCombinedBagCountUpdated"));
	void ASBZCombiningLootProcessor::BP_OnCombinedBagCountUpdated(int32 Count)
	{
		SBZCombiningLootProcessor_eventBP_OnCombinedBagCountUpdated_Parms Parms;
		Parms.Count=Count;
		ProcessEvent(FindFunctionChecked(NAME_ASBZCombiningLootProcessor_BP_OnCombinedBagCountUpdated),&Parms);
	}
	static FName NAME_ASBZCombiningLootProcessor_Multicast_UpdateCombinedBagsCount = FName(TEXT("Multicast_UpdateCombinedBagsCount"));
	void ASBZCombiningLootProcessor::Multicast_UpdateCombinedBagsCount(int32 NewCount)
	{
		SBZCombiningLootProcessor_eventMulticast_UpdateCombinedBagsCount_Parms Parms;
		Parms.NewCount=NewCount;
		ProcessEvent(FindFunctionChecked(NAME_ASBZCombiningLootProcessor_Multicast_UpdateCombinedBagsCount),&Parms);
	}
	void ASBZCombiningLootProcessor::StaticRegisterNativesASBZCombiningLootProcessor()
	{
		UClass* Class = ASBZCombiningLootProcessor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_UpdateCombinedBagsCount", &ASBZCombiningLootProcessor::execMulticast_UpdateCombinedBagsCount },
			{ "OnServerClaimCombinedBagInteractionComplete", &ASBZCombiningLootProcessor::execOnServerClaimCombinedBagInteractionComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZCombiningLootProcessor_BP_OnCombinedBagCountUpdated_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZCombiningLootProcessor_BP_OnCombinedBagCountUpdated_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCombiningLootProcessor_eventBP_OnCombinedBagCountUpdated_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCombiningLootProcessor_BP_OnCombinedBagCountUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCombiningLootProcessor_BP_OnCombinedBagCountUpdated_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCombiningLootProcessor_BP_OnCombinedBagCountUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCombiningLootProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCombiningLootProcessor_BP_OnCombinedBagCountUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCombiningLootProcessor, nullptr, "BP_OnCombinedBagCountUpdated", nullptr, nullptr, sizeof(SBZCombiningLootProcessor_eventBP_OnCombinedBagCountUpdated_Parms), Z_Construct_UFunction_ASBZCombiningLootProcessor_BP_OnCombinedBagCountUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCombiningLootProcessor_BP_OnCombinedBagCountUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCombiningLootProcessor_BP_OnCombinedBagCountUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCombiningLootProcessor_BP_OnCombinedBagCountUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCombiningLootProcessor_BP_OnCombinedBagCountUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCombiningLootProcessor_BP_OnCombinedBagCountUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCombiningLootProcessor_Multicast_UpdateCombinedBagsCount_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZCombiningLootProcessor_Multicast_UpdateCombinedBagsCount_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCombiningLootProcessor_eventMulticast_UpdateCombinedBagsCount_Parms, NewCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCombiningLootProcessor_Multicast_UpdateCombinedBagsCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCombiningLootProcessor_Multicast_UpdateCombinedBagsCount_Statics::NewProp_NewCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCombiningLootProcessor_Multicast_UpdateCombinedBagsCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCombiningLootProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCombiningLootProcessor_Multicast_UpdateCombinedBagsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCombiningLootProcessor, nullptr, "Multicast_UpdateCombinedBagsCount", nullptr, nullptr, sizeof(SBZCombiningLootProcessor_eventMulticast_UpdateCombinedBagsCount_Parms), Z_Construct_UFunction_ASBZCombiningLootProcessor_Multicast_UpdateCombinedBagsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCombiningLootProcessor_Multicast_UpdateCombinedBagsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCombiningLootProcessor_Multicast_UpdateCombinedBagsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCombiningLootProcessor_Multicast_UpdateCombinedBagsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCombiningLootProcessor_Multicast_UpdateCombinedBagsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCombiningLootProcessor_Multicast_UpdateCombinedBagsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics
	{
		struct SBZCombiningLootProcessor_eventOnServerClaimCombinedBagInteractionComplete_Parms
		{
			USBZBaseInteractableComponent* Interactable;
			USBZInteractorComponent* Interactor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCombiningLootProcessor_eventOnServerClaimCombinedBagInteractionComplete_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCombiningLootProcessor_eventOnServerClaimCombinedBagInteractionComplete_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZCombiningLootProcessor_eventOnServerClaimCombinedBagInteractionComplete_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCombiningLootProcessor_eventOnServerClaimCombinedBagInteractionComplete_Parms), &Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCombiningLootProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCombiningLootProcessor, nullptr, "OnServerClaimCombinedBagInteractionComplete", nullptr, nullptr, sizeof(SBZCombiningLootProcessor_eventOnServerClaimCombinedBagInteractionComplete_Parms), Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZCombiningLootProcessor_NoRegister()
	{
		return ASBZCombiningLootProcessor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZCombiningLootProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBagProcessed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBagProcessed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinedBagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CombinedBagType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfBagsToCombine_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfBagsToCombine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClaimCombinedBagInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClaimCombinedBagInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinedBags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CombinedBags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinedBagHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CombinedBagHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZLootProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZCombiningLootProcessor_BP_OnCombinedBagCountUpdated, "BP_OnCombinedBagCountUpdated" }, // 2007478763
		{ &Z_Construct_UFunction_ASBZCombiningLootProcessor_Multicast_UpdateCombinedBagsCount, "Multicast_UpdateCombinedBagsCount" }, // 2243181315
		{ &Z_Construct_UFunction_ASBZCombiningLootProcessor_OnServerClaimCombinedBagInteractionComplete, "OnServerClaimCombinedBagInteractionComplete" }, // 1011258709
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCombiningLootProcessor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCombiningLootProcessor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_OnBagProcessed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCombiningLootProcessor" },
		{ "ModuleRelativePath", "Public/SBZCombiningLootProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_OnBagProcessed = { "OnBagProcessed", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCombiningLootProcessor, OnBagProcessed), Z_Construct_UDelegateFunction_Starbreeze_SBZCombiningLootProcesorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_OnBagProcessed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_OnBagProcessed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_CombinedBagType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCombiningLootProcessor" },
		{ "ModuleRelativePath", "Public/SBZCombiningLootProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_CombinedBagType = { "CombinedBagType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCombiningLootProcessor, CombinedBagType), Z_Construct_UScriptStruct_FSBZCombinedBagType, METADATA_PARAMS(Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_CombinedBagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_CombinedBagType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_NumberOfBagsToCombine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCombiningLootProcessor" },
		{ "ModuleRelativePath", "Public/SBZCombiningLootProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_NumberOfBagsToCombine = { "NumberOfBagsToCombine", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCombiningLootProcessor, NumberOfBagsToCombine), METADATA_PARAMS(Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_NumberOfBagsToCombine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_NumberOfBagsToCombine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_ClaimCombinedBagInteractable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCombiningLootProcessor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCombiningLootProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_ClaimCombinedBagInteractable = { "ClaimCombinedBagInteractable", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCombiningLootProcessor, ClaimCombinedBagInteractable), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_ClaimCombinedBagInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_ClaimCombinedBagInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_CombinedBags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCombiningLootProcessor" },
		{ "ModuleRelativePath", "Public/SBZCombiningLootProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_CombinedBags = { "CombinedBags", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCombiningLootProcessor, CombinedBags), METADATA_PARAMS(Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_CombinedBags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_CombinedBags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_CombinedBagHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCombiningLootProcessor" },
		{ "ModuleRelativePath", "Public/SBZCombiningLootProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_CombinedBagHandle = { "CombinedBagHandle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCombiningLootProcessor, CombinedBagHandle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_CombinedBagHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_CombinedBagHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_OnBagProcessed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_CombinedBagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_NumberOfBagsToCombine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_ClaimCombinedBagInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_CombinedBags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::NewProp_CombinedBagHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZCombiningLootProcessor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::ClassParams = {
		&ASBZCombiningLootProcessor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZCombiningLootProcessor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZCombiningLootProcessor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZCombiningLootProcessor, 4091175298);
	template<> STARBREEZE_API UClass* StaticClass<ASBZCombiningLootProcessor>()
	{
		return ASBZCombiningLootProcessor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZCombiningLootProcessor(Z_Construct_UClass_ASBZCombiningLootProcessor, &ASBZCombiningLootProcessor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZCombiningLootProcessor"), false, nullptr, nullptr, nullptr);

	void ASBZCombiningLootProcessor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CombinedBags(TEXT("CombinedBags"));

		const bool bIsValid = true
			&& Name_CombinedBags == ClassReps[(int32)ENetFields_Private::CombinedBags].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZCombiningLootProcessor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZCombiningLootProcessor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
