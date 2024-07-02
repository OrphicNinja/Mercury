// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZExplosiveChargesLevelProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZExplosiveChargesLevelProp() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZExplosiveChargesLevelProp_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZExplosiveChargesLevelProp();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZExplosiveLevelProp();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnChargesChangedDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(ASBZExplosiveChargesLevelProp::execDecrementPlacedExplosiveCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecrementPlacedExplosiveCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZExplosiveChargesLevelProp::execIncrementPlacedExplosiveCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementPlacedExplosiveCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZExplosiveChargesLevelProp::execMulticast_SetEnabled)
	{
		P_GET_UBOOL(Z_Param_bInIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetEnabled_Implementation(Z_Param_bInIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZExplosiveChargesLevelProp::execOnRep_IsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZExplosiveChargesLevelProp::execOnRep_IsExploded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsExploded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZExplosiveChargesLevelProp::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bInIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bInIsEnabled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZExplosiveChargesLevelProp_BP_EnabledChanged = FName(TEXT("BP_EnabledChanged"));
	void ASBZExplosiveChargesLevelProp::BP_EnabledChanged(bool bEnabled, bool bDoCosmetics)
	{
		SBZExplosiveChargesLevelProp_eventBP_EnabledChanged_Parms Parms;
		Parms.bEnabled=bEnabled ? true : false;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZExplosiveChargesLevelProp_BP_EnabledChanged),&Parms);
	}
	static FName NAME_ASBZExplosiveChargesLevelProp_Multicast_SetEnabled = FName(TEXT("Multicast_SetEnabled"));
	void ASBZExplosiveChargesLevelProp::Multicast_SetEnabled(bool bInIsEnabled)
	{
		SBZExplosiveChargesLevelProp_eventMulticast_SetEnabled_Parms Parms;
		Parms.bInIsEnabled=bInIsEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZExplosiveChargesLevelProp_Multicast_SetEnabled),&Parms);
	}
	void ASBZExplosiveChargesLevelProp::StaticRegisterNativesASBZExplosiveChargesLevelProp()
	{
		UClass* Class = ASBZExplosiveChargesLevelProp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecrementPlacedExplosiveCount", &ASBZExplosiveChargesLevelProp::execDecrementPlacedExplosiveCount },
			{ "IncrementPlacedExplosiveCount", &ASBZExplosiveChargesLevelProp::execIncrementPlacedExplosiveCount },
			{ "Multicast_SetEnabled", &ASBZExplosiveChargesLevelProp::execMulticast_SetEnabled },
			{ "OnRep_IsEnabled", &ASBZExplosiveChargesLevelProp::execOnRep_IsEnabled },
			{ "OnRep_IsExploded", &ASBZExplosiveChargesLevelProp::execOnRep_IsExploded },
			{ "SetEnabled", &ASBZExplosiveChargesLevelProp::execSetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged_Statics
	{
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZExplosiveChargesLevelProp_eventBP_EnabledChanged_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZExplosiveChargesLevelProp_eventBP_EnabledChanged_Parms), &Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZExplosiveChargesLevelProp_eventBP_EnabledChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZExplosiveChargesLevelProp_eventBP_EnabledChanged_Parms), &Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveChargesLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveChargesLevelProp, nullptr, "BP_EnabledChanged", nullptr, nullptr, sizeof(SBZExplosiveChargesLevelProp_eventBP_EnabledChanged_Parms), Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_DecrementPlacedExplosiveCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_DecrementPlacedExplosiveCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveChargesLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_DecrementPlacedExplosiveCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveChargesLevelProp, nullptr, "DecrementPlacedExplosiveCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_DecrementPlacedExplosiveCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_DecrementPlacedExplosiveCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_DecrementPlacedExplosiveCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_DecrementPlacedExplosiveCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_IncrementPlacedExplosiveCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_IncrementPlacedExplosiveCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveChargesLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_IncrementPlacedExplosiveCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveChargesLevelProp, nullptr, "IncrementPlacedExplosiveCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_IncrementPlacedExplosiveCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_IncrementPlacedExplosiveCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_IncrementPlacedExplosiveCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_IncrementPlacedExplosiveCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_Multicast_SetEnabled_Statics
	{
		static void NewProp_bInIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_Multicast_SetEnabled_Statics::NewProp_bInIsEnabled_SetBit(void* Obj)
	{
		((SBZExplosiveChargesLevelProp_eventMulticast_SetEnabled_Parms*)Obj)->bInIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_Multicast_SetEnabled_Statics::NewProp_bInIsEnabled = { "bInIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZExplosiveChargesLevelProp_eventMulticast_SetEnabled_Parms), &Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_Multicast_SetEnabled_Statics::NewProp_bInIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_Multicast_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_Multicast_SetEnabled_Statics::NewProp_bInIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_Multicast_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveChargesLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_Multicast_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveChargesLevelProp, nullptr, "Multicast_SetEnabled", nullptr, nullptr, sizeof(SBZExplosiveChargesLevelProp_eventMulticast_SetEnabled_Parms), Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_Multicast_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_Multicast_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_Multicast_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_Multicast_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_Multicast_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_Multicast_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_OnRep_IsEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_OnRep_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveChargesLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_OnRep_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveChargesLevelProp, nullptr, "OnRep_IsEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_OnRep_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_OnRep_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_OnRep_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_OnRep_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_OnRep_IsExploded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_OnRep_IsExploded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveChargesLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_OnRep_IsExploded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveChargesLevelProp, nullptr, "OnRep_IsExploded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_OnRep_IsExploded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_OnRep_IsExploded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_OnRep_IsExploded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_OnRep_IsExploded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_SetEnabled_Statics
	{
		struct SBZExplosiveChargesLevelProp_eventSetEnabled_Parms
		{
			bool bInIsEnabled;
		};
		static void NewProp_bInIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_SetEnabled_Statics::NewProp_bInIsEnabled_SetBit(void* Obj)
	{
		((SBZExplosiveChargesLevelProp_eventSetEnabled_Parms*)Obj)->bInIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_SetEnabled_Statics::NewProp_bInIsEnabled = { "bInIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZExplosiveChargesLevelProp_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_SetEnabled_Statics::NewProp_bInIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_SetEnabled_Statics::NewProp_bInIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveChargesLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveChargesLevelProp, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZExplosiveChargesLevelProp_eventSetEnabled_Parms), Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZExplosiveChargesLevelProp_NoRegister()
	{
		return ASBZExplosiveChargesLevelProp::StaticClass();
	}
	struct Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerOnChargesChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ServerOnChargesChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfExplosivesToPlace_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfExplosivesToPlace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanCancelExplosiveTimer_MetaData[];
#endif
		static void NewProp_bCanCancelExplosiveTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanCancelExplosiveTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsExploded_MetaData[];
#endif
		static void NewProp_bIsExploded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExploded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacedExplosivesCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlacedExplosivesCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZExplosiveLevelProp,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_BP_EnabledChanged, "BP_EnabledChanged" }, // 451179923
		{ &Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_DecrementPlacedExplosiveCount, "DecrementPlacedExplosiveCount" }, // 359712968
		{ &Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_IncrementPlacedExplosiveCount, "IncrementPlacedExplosiveCount" }, // 201750485
		{ &Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_Multicast_SetEnabled, "Multicast_SetEnabled" }, // 2865118383
		{ &Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_OnRep_IsEnabled, "OnRep_IsEnabled" }, // 3597937453
		{ &Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_OnRep_IsExploded, "OnRep_IsExploded" }, // 1648118050
		{ &Z_Construct_UFunction_ASBZExplosiveChargesLevelProp_SetEnabled, "SetEnabled" }, // 2905167199
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZExplosiveChargesLevelProp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZExplosiveChargesLevelProp.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_ServerOnChargesChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveChargesLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveChargesLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_ServerOnChargesChanged = { "ServerOnChargesChanged", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveChargesLevelProp, ServerOnChargesChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnChargesChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_ServerOnChargesChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_ServerOnChargesChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_NumberOfExplosivesToPlace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveChargesLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveChargesLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_NumberOfExplosivesToPlace = { "NumberOfExplosivesToPlace", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveChargesLevelProp, NumberOfExplosivesToPlace), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_NumberOfExplosivesToPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_NumberOfExplosivesToPlace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bCanCancelExplosiveTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveChargesLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveChargesLevelProp.h" },
	};
#endif
	void Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bCanCancelExplosiveTimer_SetBit(void* Obj)
	{
		((ASBZExplosiveChargesLevelProp*)Obj)->bCanCancelExplosiveTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bCanCancelExplosiveTimer = { "bCanCancelExplosiveTimer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZExplosiveChargesLevelProp), &Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bCanCancelExplosiveTimer_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bCanCancelExplosiveTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bCanCancelExplosiveTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bIsExploded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveChargesLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveChargesLevelProp.h" },
	};
#endif
	void Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bIsExploded_SetBit(void* Obj)
	{
		((ASBZExplosiveChargesLevelProp*)Obj)->bIsExploded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bIsExploded = { "bIsExploded", "OnRep_IsExploded", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZExplosiveChargesLevelProp), &Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bIsExploded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bIsExploded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bIsExploded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_PlacedExplosivesCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveChargesLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveChargesLevelProp.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_PlacedExplosivesCount = { "PlacedExplosivesCount", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveChargesLevelProp, PlacedExplosivesCount), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_PlacedExplosivesCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_PlacedExplosivesCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveChargesLevelProp" },
		{ "ModuleRelativePath", "Public/SBZExplosiveChargesLevelProp.h" },
	};
#endif
	void Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((ASBZExplosiveChargesLevelProp*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bIsEnabled = { "bIsEnabled", "OnRep_IsEnabled", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZExplosiveChargesLevelProp), &Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bIsEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_ServerOnChargesChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_NumberOfExplosivesToPlace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bCanCancelExplosiveTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bIsExploded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_PlacedExplosivesCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::NewProp_bIsEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZExplosiveChargesLevelProp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::ClassParams = {
		&ASBZExplosiveChargesLevelProp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZExplosiveChargesLevelProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZExplosiveChargesLevelProp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZExplosiveChargesLevelProp, 358932433);
	template<> STARBREEZE_API UClass* StaticClass<ASBZExplosiveChargesLevelProp>()
	{
		return ASBZExplosiveChargesLevelProp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZExplosiveChargesLevelProp(Z_Construct_UClass_ASBZExplosiveChargesLevelProp, &ASBZExplosiveChargesLevelProp::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZExplosiveChargesLevelProp"), false, nullptr, nullptr, nullptr);

	void ASBZExplosiveChargesLevelProp::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsExploded(TEXT("bIsExploded"));
		static const FName Name_PlacedExplosivesCount(TEXT("PlacedExplosivesCount"));
		static const FName Name_bIsEnabled(TEXT("bIsEnabled"));

		const bool bIsValid = true
			&& Name_bIsExploded == ClassReps[(int32)ENetFields_Private::bIsExploded].Property->GetFName()
			&& Name_PlacedExplosivesCount == ClassReps[(int32)ENetFields_Private::PlacedExplosivesCount].Property->GetFName()
			&& Name_bIsEnabled == ClassReps[(int32)ENetFields_Private::bIsEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZExplosiveChargesLevelProp"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZExplosiveChargesLevelProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
