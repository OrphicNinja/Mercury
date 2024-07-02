// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCarriedHackableKey.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCarriedHackableKey() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCarriedHackableKey_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCarriedHackableKey();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCarriedStaticInteractionActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZCarriedHackableKeyDelegate__DelegateSignature();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(ASBZCarriedHackableKey::execMulticast_OnHackComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnHackComplete_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCarriedHackableKey::execOnHackerEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHackerEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCarriedHackableKey::execOnInteractionEnabledStateChanged)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InteractableComponent);
		P_GET_UBOOL(Z_Param_bInNewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractionEnabledStateChanged(Z_Param_InteractableComponent,Z_Param_bInNewState);
		P_NATIVE_END;
	}
	static FName NAME_ASBZCarriedHackableKey_BP_OnHackAborted = FName(TEXT("BP_OnHackAborted"));
	void ASBZCarriedHackableKey::BP_OnHackAborted()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZCarriedHackableKey_BP_OnHackAborted),NULL);
	}
	static FName NAME_ASBZCarriedHackableKey_BP_OnHackComplete = FName(TEXT("BP_OnHackComplete"));
	void ASBZCarriedHackableKey::BP_OnHackComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZCarriedHackableKey_BP_OnHackComplete),NULL);
	}
	static FName NAME_ASBZCarriedHackableKey_BP_OnHackStarted = FName(TEXT("BP_OnHackStarted"));
	void ASBZCarriedHackableKey::BP_OnHackStarted(bool bIsLocallyControlled)
	{
		SBZCarriedHackableKey_eventBP_OnHackStarted_Parms Parms;
		Parms.bIsLocallyControlled=bIsLocallyControlled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZCarriedHackableKey_BP_OnHackStarted),&Parms);
	}
	static FName NAME_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked = FName(TEXT("BP_OnPlayerInRangeChecked"));
	void ASBZCarriedHackableKey::BP_OnPlayerInRangeChecked(bool bInRange, bool bWasInRange, const float Progress)
	{
		SBZCarriedHackableKey_eventBP_OnPlayerInRangeChecked_Parms Parms;
		Parms.bInRange=bInRange ? true : false;
		Parms.bWasInRange=bWasInRange ? true : false;
		Parms.Progress=Progress;
		ProcessEvent(FindFunctionChecked(NAME_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked),&Parms);
	}
	static FName NAME_ASBZCarriedHackableKey_Multicast_OnHackComplete = FName(TEXT("Multicast_OnHackComplete"));
	void ASBZCarriedHackableKey::Multicast_OnHackComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZCarriedHackableKey_Multicast_OnHackComplete),NULL);
	}
	void ASBZCarriedHackableKey::StaticRegisterNativesASBZCarriedHackableKey()
	{
		UClass* Class = ASBZCarriedHackableKey::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_OnHackComplete", &ASBZCarriedHackableKey::execMulticast_OnHackComplete },
			{ "OnHackerEndPlay", &ASBZCarriedHackableKey::execOnHackerEndPlay },
			{ "OnInteractionEnabledStateChanged", &ASBZCarriedHackableKey::execOnInteractionEnabledStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackAborted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackAborted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackAborted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCarriedHackableKey, nullptr, "BP_OnHackAborted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackAborted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackAborted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackAborted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackAborted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCarriedHackableKey, nullptr, "BP_OnHackComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackStarted_Statics
	{
		static void NewProp_bIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackStarted_Statics::NewProp_bIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZCarriedHackableKey_eventBP_OnHackStarted_Parms*)Obj)->bIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackStarted_Statics::NewProp_bIsLocallyControlled = { "bIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCarriedHackableKey_eventBP_OnHackStarted_Parms), &Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackStarted_Statics::NewProp_bIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackStarted_Statics::NewProp_bIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCarriedHackableKey, nullptr, "BP_OnHackStarted", nullptr, nullptr, sizeof(SBZCarriedHackableKey_eventBP_OnHackStarted_Parms), Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInRange_MetaData[];
#endif
		static void NewProp_bInRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasInRange_MetaData[];
#endif
		static void NewProp_bWasInRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasInRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_bInRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_bInRange_SetBit(void* Obj)
	{
		((SBZCarriedHackableKey_eventBP_OnPlayerInRangeChecked_Parms*)Obj)->bInRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_bInRange = { "bInRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCarriedHackableKey_eventBP_OnPlayerInRangeChecked_Parms), &Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_bInRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_bInRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_bInRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_bWasInRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_bWasInRange_SetBit(void* Obj)
	{
		((SBZCarriedHackableKey_eventBP_OnPlayerInRangeChecked_Parms*)Obj)->bWasInRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_bWasInRange = { "bWasInRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCarriedHackableKey_eventBP_OnPlayerInRangeChecked_Parms), &Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_bWasInRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_bWasInRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_bWasInRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_Progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCarriedHackableKey_eventBP_OnPlayerInRangeChecked_Parms, Progress), METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_Progress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_bInRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_bWasInRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCarriedHackableKey, nullptr, "BP_OnPlayerInRangeChecked", nullptr, nullptr, sizeof(SBZCarriedHackableKey_eventBP_OnPlayerInRangeChecked_Parms), Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCarriedHackableKey_Multicast_OnHackComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedHackableKey_Multicast_OnHackComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCarriedHackableKey_Multicast_OnHackComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCarriedHackableKey, nullptr, "Multicast_OnHackComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedHackableKey_Multicast_OnHackComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedHackableKey_Multicast_OnHackComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCarriedHackableKey_Multicast_OnHackComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCarriedHackableKey_Multicast_OnHackComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCarriedHackableKey_OnHackerEndPlay_Statics
	{
		struct SBZCarriedHackableKey_eventOnHackerEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCarriedHackableKey_OnHackerEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCarriedHackableKey_eventOnHackerEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZCarriedHackableKey_OnHackerEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCarriedHackableKey_eventOnHackerEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCarriedHackableKey_OnHackerEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCarriedHackableKey_OnHackerEndPlay_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCarriedHackableKey_OnHackerEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedHackableKey_OnHackerEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCarriedHackableKey_OnHackerEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCarriedHackableKey, nullptr, "OnHackerEndPlay", nullptr, nullptr, sizeof(SBZCarriedHackableKey_eventOnHackerEndPlay_Parms), Z_Construct_UFunction_ASBZCarriedHackableKey_OnHackerEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedHackableKey_OnHackerEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedHackableKey_OnHackerEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedHackableKey_OnHackerEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCarriedHackableKey_OnHackerEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCarriedHackableKey_OnHackerEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged_Statics
	{
		struct SBZCarriedHackableKey_eventOnInteractionEnabledStateChanged_Parms
		{
			const USBZBaseInteractableComponent* InteractableComponent;
			bool bInNewState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
		static void NewProp_bInNewState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInNewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCarriedHackableKey_eventOnInteractionEnabledStateChanged_Parms, InteractableComponent), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent_MetaData)) };
	void Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged_Statics::NewProp_bInNewState_SetBit(void* Obj)
	{
		((SBZCarriedHackableKey_eventOnInteractionEnabledStateChanged_Parms*)Obj)->bInNewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged_Statics::NewProp_bInNewState = { "bInNewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCarriedHackableKey_eventOnInteractionEnabledStateChanged_Parms), &Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged_Statics::NewProp_bInNewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged_Statics::NewProp_bInNewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCarriedHackableKey, nullptr, "OnInteractionEnabledStateChanged", nullptr, nullptr, sizeof(SBZCarriedHackableKey_eventOnInteractionEnabledStateChanged_Parms), Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZCarriedHackableKey_NoRegister()
	{
		return ASBZCarriedHackableKey::StaticClass();
	}
	struct Z_Construct_UClass_ASBZCarriedHackableKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCanceled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCanceled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZoneEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HackDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedKeyItemTagsToGrant_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedKeyItemTagsToGrant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceCheckFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceCheckFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAllowedDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxChecksOutsideOfAllowedDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxChecksOutsideOfAllowedDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHackingCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentHackingCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckOutsideCircleCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CheckOutsideCircleCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChecksMade_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChecksMade;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZCarriedHackableKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZCarriedStaticInteractionActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZCarriedHackableKey_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackAborted, "BP_OnHackAborted" }, // 2607868185
		{ &Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackComplete, "BP_OnHackComplete" }, // 3712858370
		{ &Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnHackStarted, "BP_OnHackStarted" }, // 3015697486
		{ &Z_Construct_UFunction_ASBZCarriedHackableKey_BP_OnPlayerInRangeChecked, "BP_OnPlayerInRangeChecked" }, // 1221563122
		{ &Z_Construct_UFunction_ASBZCarriedHackableKey_Multicast_OnHackComplete, "Multicast_OnHackComplete" }, // 428993560
		{ &Z_Construct_UFunction_ASBZCarriedHackableKey_OnHackerEndPlay, "OnHackerEndPlay" }, // 2877700568
		{ &Z_Construct_UFunction_ASBZCarriedHackableKey_OnInteractionEnabledStateChanged, "OnInteractionEnabledStateChanged" }, // 260908776
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedHackableKey_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCarriedHackableKey.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_OnComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedHackableKey" },
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedHackableKey, OnComplete), Z_Construct_UDelegateFunction_Starbreeze_SBZCarriedHackableKeyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_OnComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_OnCanceled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedHackableKey" },
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_OnCanceled = { "OnCanceled", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedHackableKey, OnCanceled), Z_Construct_UDelegateFunction_Starbreeze_SBZCarriedHackableKeyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_OnCanceled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_OnCanceled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_ZoneEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedHackableKey" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_ZoneEffect = { "ZoneEffect", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedHackableKey, ZoneEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_ZoneEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_ZoneEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_HackDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedHackableKey" },
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_HackDuration = { "HackDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedHackableKey, HackDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_HackDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_HackDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_SharedKeyItemTagsToGrant_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedHackableKey" },
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_SharedKeyItemTagsToGrant = { "SharedKeyItemTagsToGrant", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedHackableKey, SharedKeyItemTagsToGrant), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_SharedKeyItemTagsToGrant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_SharedKeyItemTagsToGrant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_DistanceCheckFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedHackableKey" },
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_DistanceCheckFrequency = { "DistanceCheckFrequency", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedHackableKey, DistanceCheckFrequency), METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_DistanceCheckFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_DistanceCheckFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_MaxAllowedDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedHackableKey" },
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_MaxAllowedDistance = { "MaxAllowedDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedHackableKey, MaxAllowedDistance), METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_MaxAllowedDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_MaxAllowedDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_MaxChecksOutsideOfAllowedDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedHackableKey" },
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_MaxChecksOutsideOfAllowedDistance = { "MaxChecksOutsideOfAllowedDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedHackableKey, MaxChecksOutsideOfAllowedDistance), METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_MaxChecksOutsideOfAllowedDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_MaxChecksOutsideOfAllowedDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_CurrentHackingCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedHackableKey" },
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_CurrentHackingCharacter = { "CurrentHackingCharacter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedHackableKey, CurrentHackingCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_CurrentHackingCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_CurrentHackingCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_CheckOutsideCircleCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedHackableKey" },
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_CheckOutsideCircleCount = { "CheckOutsideCircleCount", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedHackableKey, CheckOutsideCircleCount), METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_CheckOutsideCircleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_CheckOutsideCircleCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_ChecksMade_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedHackableKey" },
		{ "ModuleRelativePath", "Public/SBZCarriedHackableKey.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_ChecksMade = { "ChecksMade", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedHackableKey, ChecksMade), METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_ChecksMade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_ChecksMade_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZCarriedHackableKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_OnComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_OnCanceled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_ZoneEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_HackDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_SharedKeyItemTagsToGrant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_DistanceCheckFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_MaxAllowedDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_MaxChecksOutsideOfAllowedDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_CurrentHackingCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_CheckOutsideCircleCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedHackableKey_Statics::NewProp_ChecksMade,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZCarriedHackableKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZCarriedHackableKey>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZCarriedHackableKey_Statics::ClassParams = {
		&ASBZCarriedHackableKey::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZCarriedHackableKey_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedHackableKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZCarriedHackableKey()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZCarriedHackableKey_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZCarriedHackableKey, 1686170649);
	template<> STARBREEZE_API UClass* StaticClass<ASBZCarriedHackableKey>()
	{
		return ASBZCarriedHackableKey::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZCarriedHackableKey(Z_Construct_UClass_ASBZCarriedHackableKey, &ASBZCarriedHackableKey::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZCarriedHackableKey"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZCarriedHackableKey);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
