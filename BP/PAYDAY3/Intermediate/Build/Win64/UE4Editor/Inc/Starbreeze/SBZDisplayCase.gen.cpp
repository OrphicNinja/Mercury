// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDisplayCase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDisplayCase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDisplayCase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDisplayCase();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCuttableActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDisplayCaseState();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3MiniGameState();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPropDamageContext();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZDisplayCaseStateChangedEvent__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMiniGameActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHackingMinigameActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionNotificationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPropDamageComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZDisplayCase::execSetAttractorInstigator)
	{
		P_GET_OBJECT(APawn,Z_Param_NewInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttractorInstigator(Z_Param_NewInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDisplayCase::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDisplayCase::execMulticast_SetIsLarmed)
	{
		P_GET_UBOOL(Z_Param_bInIsLarmed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetIsLarmed_Implementation(Z_Param_bInIsLarmed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDisplayCase::execMulticast_SetIsLocked)
	{
		P_GET_UBOOL(Z_Param_bInIsLocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetIsLocked_Implementation(Z_Param_bInIsLocked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDisplayCase::execMulticast_SetState)
	{
		P_GET_ENUM(ESBZDisplayCaseState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetState_Implementation(ESBZDisplayCaseState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDisplayCase::execOnDoorTimelineDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDoorTimelineDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDisplayCase::execOnHackingStateChanged)
	{
		P_GET_ENUM(EPD3MiniGameState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHackingStateChanged(EPD3MiniGameState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDisplayCase::execOnHeistStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDisplayCase::execOnLockpickStateChanged)
	{
		P_GET_ENUM(EPD3MiniGameState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLockpickStateChanged(EPD3MiniGameState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDisplayCase::execOnPropDamageHits)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_HitComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_Hits);
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_GET_STRUCT_REF(FSBZPropDamageContext,Z_Param_Out_DamageContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPropDamageHits(Z_Param_HitComponent,Z_Param_Hits,Z_Param_bDoCosmetics,Z_Param_Out_DamageContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDisplayCase::execOnRep_CurrentState)
	{
		P_GET_ENUM(ESBZDisplayCaseState,Z_Param_OldState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentState(ESBZDisplayCaseState(Z_Param_OldState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDisplayCase::execSetDisplayCaseLarmed)
	{
		P_GET_UBOOL(Z_Param_bInIsLarmed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayCaseLarmed(Z_Param_bInIsLarmed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDisplayCase::execSetDisplayCaseLocked)
	{
		P_GET_UBOOL(Z_Param_bInIsLocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayCaseLocked(Z_Param_bInIsLocked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDisplayCase::execSetLockdownActive)
	{
		P_GET_UBOOL(Z_Param_bInActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLockdownActive(Z_Param_bInActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDisplayCase::execSetLockdownEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLockdownEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZDisplayCase_BP_OnGlassBroken = FName(TEXT("BP_OnGlassBroken"));
	void ASBZDisplayCase::BP_OnGlassBroken(bool bDoCosmetics)
	{
		SBZDisplayCase_eventBP_OnGlassBroken_Parms Parms;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZDisplayCase_BP_OnGlassBroken),&Parms);
	}
	static FName NAME_ASBZDisplayCase_BP_OnStateChanged = FName(TEXT("BP_OnStateChanged"));
	void ASBZDisplayCase::BP_OnStateChanged(ESBZDisplayCaseState OldState, ESBZDisplayCaseState NewState, bool bDoCosmetics)
	{
		SBZDisplayCase_eventBP_OnStateChanged_Parms Parms;
		Parms.OldState=OldState;
		Parms.NewState=NewState;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZDisplayCase_BP_OnStateChanged),&Parms);
	}
	static FName NAME_ASBZDisplayCase_Multicast_SetIsLarmed = FName(TEXT("Multicast_SetIsLarmed"));
	void ASBZDisplayCase::Multicast_SetIsLarmed(bool bInIsLarmed)
	{
		SBZDisplayCase_eventMulticast_SetIsLarmed_Parms Parms;
		Parms.bInIsLarmed=bInIsLarmed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZDisplayCase_Multicast_SetIsLarmed),&Parms);
	}
	static FName NAME_ASBZDisplayCase_Multicast_SetIsLocked = FName(TEXT("Multicast_SetIsLocked"));
	void ASBZDisplayCase::Multicast_SetIsLocked(bool bInIsLocked)
	{
		SBZDisplayCase_eventMulticast_SetIsLocked_Parms Parms;
		Parms.bInIsLocked=bInIsLocked ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZDisplayCase_Multicast_SetIsLocked),&Parms);
	}
	static FName NAME_ASBZDisplayCase_Multicast_SetState = FName(TEXT("Multicast_SetState"));
	void ASBZDisplayCase::Multicast_SetState(ESBZDisplayCaseState NewState)
	{
		SBZDisplayCase_eventMulticast_SetState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZDisplayCase_Multicast_SetState),&Parms);
	}
	void ASBZDisplayCase::StaticRegisterNativesASBZDisplayCase()
	{
		UClass* Class = ASBZDisplayCase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetIsLarmed", &ASBZDisplayCase::execMulticast_SetIsLarmed },
			{ "Multicast_SetIsLocked", &ASBZDisplayCase::execMulticast_SetIsLocked },
			{ "Multicast_SetState", &ASBZDisplayCase::execMulticast_SetState },
			{ "OnDoorTimelineDone", &ASBZDisplayCase::execOnDoorTimelineDone },
			{ "OnHackingStateChanged", &ASBZDisplayCase::execOnHackingStateChanged },
			{ "OnHeistStateChanged", &ASBZDisplayCase::execOnHeistStateChanged },
			{ "OnLockpickStateChanged", &ASBZDisplayCase::execOnLockpickStateChanged },
			{ "OnPropDamageHits", &ASBZDisplayCase::execOnPropDamageHits },
			{ "OnRep_CurrentState", &ASBZDisplayCase::execOnRep_CurrentState },
			{ "SetAttractorInstigator", &ASBZDisplayCase::execSetAttractorInstigator },
			{ "SetDisplayCaseLarmed", &ASBZDisplayCase::execSetDisplayCaseLarmed },
			{ "SetDisplayCaseLocked", &ASBZDisplayCase::execSetDisplayCaseLocked },
			{ "SetEnabled", &ASBZDisplayCase::execSetEnabled },
			{ "SetLockdownActive", &ASBZDisplayCase::execSetLockdownActive },
			{ "SetLockdownEnabled", &ASBZDisplayCase::execSetLockdownEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZDisplayCase_BP_OnGlassBroken_Statics
	{
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZDisplayCase_BP_OnGlassBroken_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZDisplayCase_eventBP_OnGlassBroken_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDisplayCase_BP_OnGlassBroken_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDisplayCase_eventBP_OnGlassBroken_Parms), &Z_Construct_UFunction_ASBZDisplayCase_BP_OnGlassBroken_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDisplayCase_BP_OnGlassBroken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_BP_OnGlassBroken_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_BP_OnGlassBroken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDisplayCase_BP_OnGlassBroken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDisplayCase, nullptr, "BP_OnGlassBroken", nullptr, nullptr, sizeof(SBZDisplayCase_eventBP_OnGlassBroken_Parms), Z_Construct_UFunction_ASBZDisplayCase_BP_OnGlassBroken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_BP_OnGlassBroken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_BP_OnGlassBroken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_BP_OnGlassBroken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDisplayCase_BP_OnGlassBroken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDisplayCase_BP_OnGlassBroken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDisplayCase_eventBP_OnStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_ESBZDisplayCaseState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDisplayCase_eventBP_OnStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZDisplayCaseState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZDisplayCase_eventBP_OnStateChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDisplayCase_eventBP_OnStateChanged_Parms), &Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDisplayCase, nullptr, "BP_OnStateChanged", nullptr, nullptr, sizeof(SBZDisplayCase_eventBP_OnStateChanged_Parms), Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLarmed_Statics
	{
		static void NewProp_bInIsLarmed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLarmed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLarmed_Statics::NewProp_bInIsLarmed_SetBit(void* Obj)
	{
		((SBZDisplayCase_eventMulticast_SetIsLarmed_Parms*)Obj)->bInIsLarmed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLarmed_Statics::NewProp_bInIsLarmed = { "bInIsLarmed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDisplayCase_eventMulticast_SetIsLarmed_Parms), &Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLarmed_Statics::NewProp_bInIsLarmed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLarmed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLarmed_Statics::NewProp_bInIsLarmed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLarmed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLarmed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDisplayCase, nullptr, "Multicast_SetIsLarmed", nullptr, nullptr, sizeof(SBZDisplayCase_eventMulticast_SetIsLarmed_Parms), Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLarmed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLarmed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLarmed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLarmed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLarmed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLarmed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLocked_Statics
	{
		static void NewProp_bInIsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLocked_Statics::NewProp_bInIsLocked_SetBit(void* Obj)
	{
		((SBZDisplayCase_eventMulticast_SetIsLocked_Parms*)Obj)->bInIsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLocked_Statics::NewProp_bInIsLocked = { "bInIsLocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDisplayCase_eventMulticast_SetIsLocked_Parms), &Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLocked_Statics::NewProp_bInIsLocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLocked_Statics::NewProp_bInIsLocked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDisplayCase, nullptr, "Multicast_SetIsLocked", nullptr, nullptr, sizeof(SBZDisplayCase_eventMulticast_SetIsLocked_Parms), Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDisplayCase_eventMulticast_SetState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZDisplayCaseState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDisplayCase, nullptr, "Multicast_SetState", nullptr, nullptr, sizeof(SBZDisplayCase_eventMulticast_SetState_Parms), Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDisplayCase_OnDoorTimelineDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_OnDoorTimelineDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDisplayCase_OnDoorTimelineDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDisplayCase, nullptr, "OnDoorTimelineDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_OnDoorTimelineDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_OnDoorTimelineDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDisplayCase_OnDoorTimelineDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDisplayCase_OnDoorTimelineDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDisplayCase_OnHackingStateChanged_Statics
	{
		struct SBZDisplayCase_eventOnHackingStateChanged_Parms
		{
			EPD3MiniGameState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZDisplayCase_OnHackingStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZDisplayCase_OnHackingStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDisplayCase_eventOnHackingStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3MiniGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDisplayCase_OnHackingStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_OnHackingStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_OnHackingStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_OnHackingStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDisplayCase_OnHackingStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDisplayCase, nullptr, "OnHackingStateChanged", nullptr, nullptr, sizeof(SBZDisplayCase_eventOnHackingStateChanged_Parms), Z_Construct_UFunction_ASBZDisplayCase_OnHackingStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_OnHackingStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_OnHackingStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_OnHackingStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDisplayCase_OnHackingStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDisplayCase_OnHackingStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged_Statics
	{
		struct SBZDisplayCase_eventOnHeistStateChanged_Parms
		{
			EPD3HeistState OldState;
			EPD3HeistState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDisplayCase_eventOnHeistStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDisplayCase_eventOnHeistStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDisplayCase, nullptr, "OnHeistStateChanged", nullptr, nullptr, sizeof(SBZDisplayCase_eventOnHeistStateChanged_Parms), Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDisplayCase_OnLockpickStateChanged_Statics
	{
		struct SBZDisplayCase_eventOnLockpickStateChanged_Parms
		{
			EPD3MiniGameState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZDisplayCase_OnLockpickStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZDisplayCase_OnLockpickStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDisplayCase_eventOnLockpickStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3MiniGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDisplayCase_OnLockpickStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_OnLockpickStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_OnLockpickStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_OnLockpickStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDisplayCase_OnLockpickStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDisplayCase, nullptr, "OnLockpickStateChanged", nullptr, nullptr, sizeof(SBZDisplayCase_eventOnLockpickStateChanged_Parms), Z_Construct_UFunction_ASBZDisplayCase_OnLockpickStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_OnLockpickStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_OnLockpickStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_OnLockpickStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDisplayCase_OnLockpickStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDisplayCase_OnLockpickStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics
	{
		struct SBZDisplayCase_eventOnPropDamageHits_Parms
		{
			UActorComponent* HitComponent;
			int32 Hits;
			bool bDoCosmetics;
			FSBZPropDamageContext DamageContext;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hits;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDisplayCase_eventOnPropDamageHits_Parms, HitComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDisplayCase_eventOnPropDamageHits_Parms, Hits), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZDisplayCase_eventOnPropDamageHits_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDisplayCase_eventOnPropDamageHits_Parms), &Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::NewProp_DamageContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::NewProp_DamageContext = { "DamageContext", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDisplayCase_eventOnPropDamageHits_Parms, DamageContext), Z_Construct_UScriptStruct_FSBZPropDamageContext, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::NewProp_DamageContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::NewProp_DamageContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::NewProp_Hits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::NewProp_bDoCosmetics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::NewProp_DamageContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDisplayCase, nullptr, "OnPropDamageHits", nullptr, nullptr, sizeof(SBZDisplayCase_eventOnPropDamageHits_Parms), Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDisplayCase_OnRep_CurrentState_Statics
	{
		struct SBZDisplayCase_eventOnRep_CurrentState_Parms
		{
			ESBZDisplayCaseState OldState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZDisplayCase_OnRep_CurrentState_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZDisplayCase_OnRep_CurrentState_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDisplayCase_eventOnRep_CurrentState_Parms, OldState), Z_Construct_UEnum_Starbreeze_ESBZDisplayCaseState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDisplayCase_OnRep_CurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_OnRep_CurrentState_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_OnRep_CurrentState_Statics::NewProp_OldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_OnRep_CurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDisplayCase_OnRep_CurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDisplayCase, nullptr, "OnRep_CurrentState", nullptr, nullptr, sizeof(SBZDisplayCase_eventOnRep_CurrentState_Parms), Z_Construct_UFunction_ASBZDisplayCase_OnRep_CurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_OnRep_CurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_OnRep_CurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_OnRep_CurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDisplayCase_OnRep_CurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDisplayCase_OnRep_CurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDisplayCase_SetAttractorInstigator_Statics
	{
		struct SBZDisplayCase_eventSetAttractorInstigator_Parms
		{
			APawn* NewInstigator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDisplayCase_SetAttractorInstigator_Statics::NewProp_NewInstigator = { "NewInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDisplayCase_eventSetAttractorInstigator_Parms, NewInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDisplayCase_SetAttractorInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_SetAttractorInstigator_Statics::NewProp_NewInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_SetAttractorInstigator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDisplayCase_SetAttractorInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDisplayCase, nullptr, "SetAttractorInstigator", nullptr, nullptr, sizeof(SBZDisplayCase_eventSetAttractorInstigator_Parms), Z_Construct_UFunction_ASBZDisplayCase_SetAttractorInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_SetAttractorInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_SetAttractorInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_SetAttractorInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDisplayCase_SetAttractorInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDisplayCase_SetAttractorInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLarmed_Statics
	{
		struct SBZDisplayCase_eventSetDisplayCaseLarmed_Parms
		{
			bool bInIsLarmed;
		};
		static void NewProp_bInIsLarmed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLarmed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLarmed_Statics::NewProp_bInIsLarmed_SetBit(void* Obj)
	{
		((SBZDisplayCase_eventSetDisplayCaseLarmed_Parms*)Obj)->bInIsLarmed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLarmed_Statics::NewProp_bInIsLarmed = { "bInIsLarmed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDisplayCase_eventSetDisplayCaseLarmed_Parms), &Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLarmed_Statics::NewProp_bInIsLarmed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLarmed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLarmed_Statics::NewProp_bInIsLarmed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLarmed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLarmed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDisplayCase, nullptr, "SetDisplayCaseLarmed", nullptr, nullptr, sizeof(SBZDisplayCase_eventSetDisplayCaseLarmed_Parms), Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLarmed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLarmed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLarmed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLarmed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLarmed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLarmed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLocked_Statics
	{
		struct SBZDisplayCase_eventSetDisplayCaseLocked_Parms
		{
			bool bInIsLocked;
		};
		static void NewProp_bInIsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLocked_Statics::NewProp_bInIsLocked_SetBit(void* Obj)
	{
		((SBZDisplayCase_eventSetDisplayCaseLocked_Parms*)Obj)->bInIsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLocked_Statics::NewProp_bInIsLocked = { "bInIsLocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDisplayCase_eventSetDisplayCaseLocked_Parms), &Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLocked_Statics::NewProp_bInIsLocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLocked_Statics::NewProp_bInIsLocked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDisplayCase, nullptr, "SetDisplayCaseLocked", nullptr, nullptr, sizeof(SBZDisplayCase_eventSetDisplayCaseLocked_Parms), Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDisplayCase_SetEnabled_Statics
	{
		struct SBZDisplayCase_eventSetEnabled_Parms
		{
			bool bEnabled;
			bool ReturnValue;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZDisplayCase_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZDisplayCase_eventSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDisplayCase_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDisplayCase_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZDisplayCase_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZDisplayCase_SetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZDisplayCase_eventSetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDisplayCase_SetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDisplayCase_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZDisplayCase_SetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDisplayCase_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_SetEnabled_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_SetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDisplayCase_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDisplayCase, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZDisplayCase_eventSetEnabled_Parms), Z_Construct_UFunction_ASBZDisplayCase_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDisplayCase_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDisplayCase_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDisplayCase_SetLockdownActive_Statics
	{
		struct SBZDisplayCase_eventSetLockdownActive_Parms
		{
			bool bInActive;
		};
		static void NewProp_bInActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZDisplayCase_SetLockdownActive_Statics::NewProp_bInActive_SetBit(void* Obj)
	{
		((SBZDisplayCase_eventSetLockdownActive_Parms*)Obj)->bInActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDisplayCase_SetLockdownActive_Statics::NewProp_bInActive = { "bInActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDisplayCase_eventSetLockdownActive_Parms), &Z_Construct_UFunction_ASBZDisplayCase_SetLockdownActive_Statics::NewProp_bInActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDisplayCase_SetLockdownActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_SetLockdownActive_Statics::NewProp_bInActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_SetLockdownActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDisplayCase_SetLockdownActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDisplayCase, nullptr, "SetLockdownActive", nullptr, nullptr, sizeof(SBZDisplayCase_eventSetLockdownActive_Parms), Z_Construct_UFunction_ASBZDisplayCase_SetLockdownActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_SetLockdownActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_SetLockdownActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_SetLockdownActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDisplayCase_SetLockdownActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDisplayCase_SetLockdownActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDisplayCase_SetLockdownEnabled_Statics
	{
		struct SBZDisplayCase_eventSetLockdownEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZDisplayCase_SetLockdownEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZDisplayCase_eventSetLockdownEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDisplayCase_SetLockdownEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDisplayCase_eventSetLockdownEnabled_Parms), &Z_Construct_UFunction_ASBZDisplayCase_SetLockdownEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDisplayCase_SetLockdownEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDisplayCase_SetLockdownEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDisplayCase_SetLockdownEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDisplayCase_SetLockdownEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDisplayCase, nullptr, "SetLockdownEnabled", nullptr, nullptr, sizeof(SBZDisplayCase_eventSetLockdownEnabled_Parms), Z_Construct_UFunction_ASBZDisplayCase_SetLockdownEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_SetLockdownEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDisplayCase_SetLockdownEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDisplayCase_SetLockdownEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDisplayCase_SetLockdownEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDisplayCase_SetLockdownEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZDisplayCase_NoRegister()
	{
		return ASBZDisplayCase::StaticClass();
	}
	struct Z_Construct_UClass_ASBZDisplayCase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisplayCaseStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisplayCaseStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasLock_MetaData[];
#endif
		static void NewProp_bHasLock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasAlarm_MetaData[];
#endif
		static void NewProp_bHasAlarm_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAlarm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasLockdown_MetaData[];
#endif
		static void NewProp_bHasLockdown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasLockdown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldHackLiftLockdown_MetaData[];
#endif
		static void NewProp_bShouldHackLiftLockdown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldHackLiftLockdown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeClosed_MetaData[];
#endif
		static void NewProp_bCanBeClosed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeClosed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockActorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockActorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LockActorArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMustLockpickAllLocks_MetaData[];
#endif
		static void NewProp_bMustLockpickAllLocks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMustLockpickAllLocks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocksDisabledOnLockdown_MetaData[];
#endif
		static void NewProp_bIsLocksDisabledOnLockdown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocksDisabledOnLockdown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreachSoundTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BreachSoundTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SoundRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[];
#endif
		static void NewProp_bIsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLarmed_MetaData[];
#endif
		static void NewProp_bIsLarmed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLarmed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttractorComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlarmActorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlarmActorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AlarmActorArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlarmNotificationAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlarmNotificationAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShutterMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShutterMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLock_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAlarm_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultAlarm;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PropDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrokenMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrokenMesh;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviousState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviousState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockAttachSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LockAttachSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlarmAttachSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlarmAttachSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LootAttachComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LootAttachComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedLoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachedLoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZDisplayCase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZCuttableActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZDisplayCase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZDisplayCase_BP_OnGlassBroken, "BP_OnGlassBroken" }, // 3814526791
		{ &Z_Construct_UFunction_ASBZDisplayCase_BP_OnStateChanged, "BP_OnStateChanged" }, // 3915649165
		{ &Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLarmed, "Multicast_SetIsLarmed" }, // 931102892
		{ &Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetIsLocked, "Multicast_SetIsLocked" }, // 2187904953
		{ &Z_Construct_UFunction_ASBZDisplayCase_Multicast_SetState, "Multicast_SetState" }, // 2650494878
		{ &Z_Construct_UFunction_ASBZDisplayCase_OnDoorTimelineDone, "OnDoorTimelineDone" }, // 2938612159
		{ &Z_Construct_UFunction_ASBZDisplayCase_OnHackingStateChanged, "OnHackingStateChanged" }, // 2257949578
		{ &Z_Construct_UFunction_ASBZDisplayCase_OnHeistStateChanged, "OnHeistStateChanged" }, // 1954663380
		{ &Z_Construct_UFunction_ASBZDisplayCase_OnLockpickStateChanged, "OnLockpickStateChanged" }, // 2504401621
		{ &Z_Construct_UFunction_ASBZDisplayCase_OnPropDamageHits, "OnPropDamageHits" }, // 472929813
		{ &Z_Construct_UFunction_ASBZDisplayCase_OnRep_CurrentState, "OnRep_CurrentState" }, // 406621936
		{ &Z_Construct_UFunction_ASBZDisplayCase_SetAttractorInstigator, "SetAttractorInstigator" }, // 1744320481
		{ &Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLarmed, "SetDisplayCaseLarmed" }, // 1223663171
		{ &Z_Construct_UFunction_ASBZDisplayCase_SetDisplayCaseLocked, "SetDisplayCaseLocked" }, // 3637331408
		{ &Z_Construct_UFunction_ASBZDisplayCase_SetEnabled, "SetEnabled" }, // 1582539255
		{ &Z_Construct_UFunction_ASBZDisplayCase_SetLockdownActive, "SetLockdownActive" }, // 1775075278
		{ &Z_Construct_UFunction_ASBZDisplayCase_SetLockdownEnabled, "SetLockdownEnabled" }, // 3586100664
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDisplayCase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_OnDisplayCaseStateChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_OnDisplayCaseStateChanged = { "OnDisplayCaseStateChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, OnDisplayCaseStateChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZDisplayCaseStateChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_OnDisplayCaseStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_OnDisplayCaseStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasLock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasLock_SetBit(void* Obj)
	{
		((ASBZDisplayCase*)Obj)->bHasLock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasLock = { "bHasLock", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZDisplayCase), &Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasLock_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasAlarm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasAlarm_SetBit(void* Obj)
	{
		((ASBZDisplayCase*)Obj)->bHasAlarm = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasAlarm = { "bHasAlarm", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZDisplayCase), &Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasAlarm_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasAlarm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasAlarm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasLockdown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasLockdown_SetBit(void* Obj)
	{
		((ASBZDisplayCase*)Obj)->bHasLockdown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasLockdown = { "bHasLockdown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZDisplayCase), &Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasLockdown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasLockdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasLockdown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bShouldHackLiftLockdown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bShouldHackLiftLockdown_SetBit(void* Obj)
	{
		((ASBZDisplayCase*)Obj)->bShouldHackLiftLockdown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bShouldHackLiftLockdown = { "bShouldHackLiftLockdown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZDisplayCase), &Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bShouldHackLiftLockdown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bShouldHackLiftLockdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bShouldHackLiftLockdown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bCanBeClosed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bCanBeClosed_SetBit(void* Obj)
	{
		((ASBZDisplayCase*)Obj)->bCanBeClosed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bCanBeClosed = { "bCanBeClosed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZDisplayCase), &Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bCanBeClosed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bCanBeClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bCanBeClosed_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_LockActorArray_Inner = { "LockActorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZMiniGameActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_LockActorArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_LockActorArray = { "LockActorArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, LockActorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_LockActorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_LockActorArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bMustLockpickAllLocks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bMustLockpickAllLocks_SetBit(void* Obj)
	{
		((ASBZDisplayCase*)Obj)->bMustLockpickAllLocks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bMustLockpickAllLocks = { "bMustLockpickAllLocks", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZDisplayCase), &Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bMustLockpickAllLocks_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bMustLockpickAllLocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bMustLockpickAllLocks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLocksDisabledOnLockdown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLocksDisabledOnLockdown_SetBit(void* Obj)
	{
		((ASBZDisplayCase*)Obj)->bIsLocksDisabledOnLockdown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLocksDisabledOnLockdown = { "bIsLocksDisabledOnLockdown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZDisplayCase), &Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLocksDisabledOnLockdown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLocksDisabledOnLockdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLocksDisabledOnLockdown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_BreachSoundTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_BreachSoundTag = { "BreachSoundTag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, BreachSoundTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_BreachSoundTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_BreachSoundTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_SoundRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_SoundRange = { "SoundRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, SoundRange), METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_SoundRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_SoundRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLocked_SetBit(void* Obj)
	{
		((ASBZDisplayCase*)Obj)->bIsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZDisplayCase), &Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLarmed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLarmed_SetBit(void* Obj)
	{
		((ASBZDisplayCase*)Obj)->bIsLarmed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLarmed = { "bIsLarmed", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZDisplayCase), &Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLarmed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLarmed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLarmed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AttractorComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AttractorComponent = { "AttractorComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, AttractorComponent), Z_Construct_UClass_USBZAIAttractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AttractorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AttractorComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AlarmActorArray_Inner = { "AlarmActorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZHackingMinigameActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AlarmActorArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AlarmActorArray = { "AlarmActorArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, AlarmActorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AlarmActorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AlarmActorArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AlarmNotificationAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AlarmNotificationAsset = { "AlarmNotificationAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, AlarmNotificationAsset), Z_Construct_UClass_USBZActionNotificationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AlarmNotificationAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AlarmNotificationAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_ShutterMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_ShutterMesh = { "ShutterMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, ShutterMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_ShutterMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_ShutterMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_DefaultLock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_DefaultLock = { "DefaultLock", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, DefaultLock), Z_Construct_UClass_ASBZMiniGameActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_DefaultLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_DefaultLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_DefaultAlarm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_DefaultAlarm = { "DefaultAlarm", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, DefaultAlarm), Z_Construct_UClass_ASBZHackingMinigameActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_DefaultAlarm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_DefaultAlarm_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_CurrentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_CurrentState = { "CurrentState", "OnRep_CurrentState", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, CurrentState), Z_Construct_UEnum_Starbreeze_ESBZDisplayCaseState, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_CurrentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_PropDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_PropDamage = { "PropDamage", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, PropDamage), Z_Construct_UClass_USBZPropDamageComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_PropDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_PropDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_BrokenMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_BrokenMesh = { "BrokenMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, BrokenMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_BrokenMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_BrokenMesh_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_PreviousState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_PreviousState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, PreviousState), Z_Construct_UEnum_Starbreeze_ESBZDisplayCaseState, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_PreviousState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_PreviousState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_TargetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_TargetState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_TargetState = { "TargetState", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, TargetState), Z_Construct_UEnum_Starbreeze_ESBZDisplayCaseState, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_TargetState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_TargetState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_LockAttachSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_LockAttachSelector = { "LockAttachSelector", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, LockAttachSelector), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_LockAttachSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_LockAttachSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AlarmAttachSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AlarmAttachSelector = { "AlarmAttachSelector", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, AlarmAttachSelector), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AlarmAttachSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AlarmAttachSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_LootAttachComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_LootAttachComponent = { "LootAttachComponent", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, LootAttachComponent), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_LootAttachComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_LootAttachComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AttachedLoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisplayCase" },
		{ "ModuleRelativePath", "Public/SBZDisplayCase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AttachedLoot = { "AttachedLoot", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDisplayCase, AttachedLoot), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AttachedLoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AttachedLoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZDisplayCase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_OnDisplayCaseStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasAlarm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bHasLockdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bShouldHackLiftLockdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bCanBeClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_LockActorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_LockActorArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bMustLockpickAllLocks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLocksDisabledOnLockdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_BreachSoundTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_SoundRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_bIsLarmed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AttractorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AlarmActorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AlarmActorArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AlarmNotificationAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_ShutterMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_DefaultLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_DefaultAlarm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_CurrentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_PropDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_BrokenMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_PreviousState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_PreviousState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_TargetState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_TargetState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_LockAttachSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AlarmAttachSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_LootAttachComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDisplayCase_Statics::NewProp_AttachedLoot,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZDisplayCase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAIAttractorInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZDisplayCase, ISBZAIAttractorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZDisplayCase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZDisplayCase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZDisplayCase_Statics::ClassParams = {
		&ASBZDisplayCase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZDisplayCase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZDisplayCase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDisplayCase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZDisplayCase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZDisplayCase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZDisplayCase, 2723524417);
	template<> STARBREEZE_API UClass* StaticClass<ASBZDisplayCase>()
	{
		return ASBZDisplayCase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZDisplayCase(Z_Construct_UClass_ASBZDisplayCase, &ASBZDisplayCase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZDisplayCase"), false, nullptr, nullptr, nullptr);

	void ASBZDisplayCase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsLocked(TEXT("bIsLocked"));
		static const FName Name_bIsLarmed(TEXT("bIsLarmed"));
		static const FName Name_CurrentState(TEXT("CurrentState"));

		const bool bIsValid = true
			&& Name_bIsLocked == ClassReps[(int32)ENetFields_Private::bIsLocked].Property->GetFName()
			&& Name_bIsLarmed == ClassReps[(int32)ENetFields_Private::bIsLarmed].Property->GetFName()
			&& Name_CurrentState == ClassReps[(int32)ENetFields_Private::CurrentState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZDisplayCase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZDisplayCase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
