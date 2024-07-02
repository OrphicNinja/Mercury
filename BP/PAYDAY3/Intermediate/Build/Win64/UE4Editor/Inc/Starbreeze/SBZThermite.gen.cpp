// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThermite.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThermite() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZThermite_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZThermite();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZThermiteBurnState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZThermiteDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTimedObjectiveInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBreakableInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZThermite::execMulticast_SetOutsideInterference)
	{
		P_GET_UBOOL(Z_Param_bInIsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetOutsideInterference_Implementation(Z_Param_bInIsActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermite::execMulticast_SetState)
	{
		P_GET_ENUM(ESBZThermiteBurnState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetState_Implementation(ESBZThermiteBurnState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermite::execMulticast_ThermiteBagOverlapped)
	{
		P_GET_UBOOL(Z_Param_bIsInitialBag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ThermiteBagOverlapped_Implementation(Z_Param_bIsInitialBag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermite::execOnAckCompleteIgnition)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckCompleteIgnition(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermite::execOnBoxComponentBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBoxComponentBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermite::execOnRep_CurrentState)
	{
		P_GET_ENUM(ESBZThermiteBurnState,Z_Param_OldState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentState(ESBZThermiteBurnState(Z_Param_OldState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermite::execOnRep_IsInterfered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsInterfered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermite::execOnRep_Seed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Seed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermite::execSetBagOverlapBoxEnabled)
	{
		P_GET_UBOOL(Z_Param_bInEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBagOverlapBoxEnabled(Z_Param_bInEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThermite::execSetOutsideInterferenceActive)
	{
		P_GET_UBOOL(Z_Param_bInActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutsideInterferenceActive(Z_Param_bInActive);
		P_NATIVE_END;
	}
	static FName NAME_ASBZThermite_BP_OnFlashOver = FName(TEXT("BP_OnFlashOver"));
	void ASBZThermite::BP_OnFlashOver()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZThermite_BP_OnFlashOver),NULL);
	}
	static FName NAME_ASBZThermite_BP_OnInterferenceChanged = FName(TEXT("BP_OnInterferenceChanged"));
	void ASBZThermite::BP_OnInterferenceChanged(bool bInterfered)
	{
		SBZThermite_eventBP_OnInterferenceChanged_Parms Parms;
		Parms.bInterfered=bInterfered ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZThermite_BP_OnInterferenceChanged),&Parms);
	}
	static FName NAME_ASBZThermite_BP_OnStateChanged = FName(TEXT("BP_OnStateChanged"));
	void ASBZThermite::BP_OnStateChanged(ESBZThermiteBurnState OldState, ESBZThermiteBurnState NewState, bool bDoCosmetics)
	{
		SBZThermite_eventBP_OnStateChanged_Parms Parms;
		Parms.OldState=OldState;
		Parms.NewState=NewState;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZThermite_BP_OnStateChanged),&Parms);
	}
	static FName NAME_ASBZThermite_BP_OnSteamExplosion = FName(TEXT("BP_OnSteamExplosion"));
	void ASBZThermite::BP_OnSteamExplosion()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZThermite_BP_OnSteamExplosion),NULL);
	}
	static FName NAME_ASBZThermite_BP_OnThermiteBagOverlapped = FName(TEXT("BP_OnThermiteBagOverlapped"));
	void ASBZThermite::BP_OnThermiteBagOverlapped(bool bIsInitialBag)
	{
		SBZThermite_eventBP_OnThermiteBagOverlapped_Parms Parms;
		Parms.bIsInitialBag=bIsInitialBag ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZThermite_BP_OnThermiteBagOverlapped),&Parms);
	}
	static FName NAME_ASBZThermite_Multicast_SetOutsideInterference = FName(TEXT("Multicast_SetOutsideInterference"));
	void ASBZThermite::Multicast_SetOutsideInterference(bool bInIsActive)
	{
		SBZThermite_eventMulticast_SetOutsideInterference_Parms Parms;
		Parms.bInIsActive=bInIsActive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZThermite_Multicast_SetOutsideInterference),&Parms);
	}
	static FName NAME_ASBZThermite_Multicast_SetState = FName(TEXT("Multicast_SetState"));
	void ASBZThermite::Multicast_SetState(ESBZThermiteBurnState NewState)
	{
		SBZThermite_eventMulticast_SetState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZThermite_Multicast_SetState),&Parms);
	}
	static FName NAME_ASBZThermite_Multicast_ThermiteBagOverlapped = FName(TEXT("Multicast_ThermiteBagOverlapped"));
	void ASBZThermite::Multicast_ThermiteBagOverlapped(bool bIsInitialBag)
	{
		SBZThermite_eventMulticast_ThermiteBagOverlapped_Parms Parms;
		Parms.bIsInitialBag=bIsInitialBag ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZThermite_Multicast_ThermiteBagOverlapped),&Parms);
	}
	void ASBZThermite::StaticRegisterNativesASBZThermite()
	{
		UClass* Class = ASBZThermite::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetOutsideInterference", &ASBZThermite::execMulticast_SetOutsideInterference },
			{ "Multicast_SetState", &ASBZThermite::execMulticast_SetState },
			{ "Multicast_ThermiteBagOverlapped", &ASBZThermite::execMulticast_ThermiteBagOverlapped },
			{ "OnAckCompleteIgnition", &ASBZThermite::execOnAckCompleteIgnition },
			{ "OnBoxComponentBeginOverlap", &ASBZThermite::execOnBoxComponentBeginOverlap },
			{ "OnRep_CurrentState", &ASBZThermite::execOnRep_CurrentState },
			{ "OnRep_IsInterfered", &ASBZThermite::execOnRep_IsInterfered },
			{ "OnRep_Seed", &ASBZThermite::execOnRep_Seed },
			{ "SetBagOverlapBoxEnabled", &ASBZThermite::execSetBagOverlapBoxEnabled },
			{ "SetOutsideInterferenceActive", &ASBZThermite::execSetOutsideInterferenceActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZThermite_BP_OnFlashOver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_BP_OnFlashOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermite_BP_OnFlashOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermite, nullptr, "BP_OnFlashOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_BP_OnFlashOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_BP_OnFlashOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermite_BP_OnFlashOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermite_BP_OnFlashOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermite_BP_OnInterferenceChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInterfered_MetaData[];
#endif
		static void NewProp_bInterfered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterfered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_BP_OnInterferenceChanged_Statics::NewProp_bInterfered_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASBZThermite_BP_OnInterferenceChanged_Statics::NewProp_bInterfered_SetBit(void* Obj)
	{
		((SBZThermite_eventBP_OnInterferenceChanged_Parms*)Obj)->bInterfered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThermite_BP_OnInterferenceChanged_Statics::NewProp_bInterfered = { "bInterfered", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThermite_eventBP_OnInterferenceChanged_Parms), &Z_Construct_UFunction_ASBZThermite_BP_OnInterferenceChanged_Statics::NewProp_bInterfered_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_BP_OnInterferenceChanged_Statics::NewProp_bInterfered_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_BP_OnInterferenceChanged_Statics::NewProp_bInterfered_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermite_BP_OnInterferenceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_BP_OnInterferenceChanged_Statics::NewProp_bInterfered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_BP_OnInterferenceChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermite_BP_OnInterferenceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermite, nullptr, "BP_OnInterferenceChanged", nullptr, nullptr, sizeof(SBZThermite_eventBP_OnInterferenceChanged_Parms), Z_Construct_UFunction_ASBZThermite_BP_OnInterferenceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_BP_OnInterferenceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_BP_OnInterferenceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_BP_OnInterferenceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermite_BP_OnInterferenceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermite_BP_OnInterferenceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermite_eventBP_OnStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_ESBZThermiteBurnState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermite_eventBP_OnStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZThermiteBurnState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZThermite_eventBP_OnStateChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThermite_eventBP_OnStateChanged_Parms), &Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermite, nullptr, "BP_OnStateChanged", nullptr, nullptr, sizeof(SBZThermite_eventBP_OnStateChanged_Parms), Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermite_BP_OnSteamExplosion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_BP_OnSteamExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermite_BP_OnSteamExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermite, nullptr, "BP_OnSteamExplosion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_BP_OnSteamExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_BP_OnSteamExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermite_BP_OnSteamExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermite_BP_OnSteamExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermite_BP_OnThermiteBagOverlapped_Statics
	{
		static void NewProp_bIsInitialBag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInitialBag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZThermite_BP_OnThermiteBagOverlapped_Statics::NewProp_bIsInitialBag_SetBit(void* Obj)
	{
		((SBZThermite_eventBP_OnThermiteBagOverlapped_Parms*)Obj)->bIsInitialBag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThermite_BP_OnThermiteBagOverlapped_Statics::NewProp_bIsInitialBag = { "bIsInitialBag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThermite_eventBP_OnThermiteBagOverlapped_Parms), &Z_Construct_UFunction_ASBZThermite_BP_OnThermiteBagOverlapped_Statics::NewProp_bIsInitialBag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermite_BP_OnThermiteBagOverlapped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_BP_OnThermiteBagOverlapped_Statics::NewProp_bIsInitialBag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_BP_OnThermiteBagOverlapped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermite_BP_OnThermiteBagOverlapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermite, nullptr, "BP_OnThermiteBagOverlapped", nullptr, nullptr, sizeof(SBZThermite_eventBP_OnThermiteBagOverlapped_Parms), Z_Construct_UFunction_ASBZThermite_BP_OnThermiteBagOverlapped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_BP_OnThermiteBagOverlapped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_BP_OnThermiteBagOverlapped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_BP_OnThermiteBagOverlapped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermite_BP_OnThermiteBagOverlapped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermite_BP_OnThermiteBagOverlapped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermite_Multicast_SetOutsideInterference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInIsActive_MetaData[];
#endif
		static void NewProp_bInIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_Multicast_SetOutsideInterference_Statics::NewProp_bInIsActive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASBZThermite_Multicast_SetOutsideInterference_Statics::NewProp_bInIsActive_SetBit(void* Obj)
	{
		((SBZThermite_eventMulticast_SetOutsideInterference_Parms*)Obj)->bInIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThermite_Multicast_SetOutsideInterference_Statics::NewProp_bInIsActive = { "bInIsActive", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThermite_eventMulticast_SetOutsideInterference_Parms), &Z_Construct_UFunction_ASBZThermite_Multicast_SetOutsideInterference_Statics::NewProp_bInIsActive_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_Multicast_SetOutsideInterference_Statics::NewProp_bInIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_Multicast_SetOutsideInterference_Statics::NewProp_bInIsActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermite_Multicast_SetOutsideInterference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_Multicast_SetOutsideInterference_Statics::NewProp_bInIsActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_Multicast_SetOutsideInterference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermite_Multicast_SetOutsideInterference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermite, nullptr, "Multicast_SetOutsideInterference", nullptr, nullptr, sizeof(SBZThermite_eventMulticast_SetOutsideInterference_Parms), Z_Construct_UFunction_ASBZThermite_Multicast_SetOutsideInterference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_Multicast_SetOutsideInterference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_Multicast_SetOutsideInterference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_Multicast_SetOutsideInterference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermite_Multicast_SetOutsideInterference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermite_Multicast_SetOutsideInterference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermite_Multicast_SetState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZThermite_Multicast_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZThermite_Multicast_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermite_eventMulticast_SetState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZThermiteBurnState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermite_Multicast_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_Multicast_SetState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_Multicast_SetState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_Multicast_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermite_Multicast_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermite, nullptr, "Multicast_SetState", nullptr, nullptr, sizeof(SBZThermite_eventMulticast_SetState_Parms), Z_Construct_UFunction_ASBZThermite_Multicast_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_Multicast_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_Multicast_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_Multicast_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermite_Multicast_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermite_Multicast_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermite_Multicast_ThermiteBagOverlapped_Statics
	{
		static void NewProp_bIsInitialBag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInitialBag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZThermite_Multicast_ThermiteBagOverlapped_Statics::NewProp_bIsInitialBag_SetBit(void* Obj)
	{
		((SBZThermite_eventMulticast_ThermiteBagOverlapped_Parms*)Obj)->bIsInitialBag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThermite_Multicast_ThermiteBagOverlapped_Statics::NewProp_bIsInitialBag = { "bIsInitialBag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThermite_eventMulticast_ThermiteBagOverlapped_Parms), &Z_Construct_UFunction_ASBZThermite_Multicast_ThermiteBagOverlapped_Statics::NewProp_bIsInitialBag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermite_Multicast_ThermiteBagOverlapped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_Multicast_ThermiteBagOverlapped_Statics::NewProp_bIsInitialBag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_Multicast_ThermiteBagOverlapped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermite_Multicast_ThermiteBagOverlapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermite, nullptr, "Multicast_ThermiteBagOverlapped", nullptr, nullptr, sizeof(SBZThermite_eventMulticast_ThermiteBagOverlapped_Parms), Z_Construct_UFunction_ASBZThermite_Multicast_ThermiteBagOverlapped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_Multicast_ThermiteBagOverlapped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_Multicast_ThermiteBagOverlapped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_Multicast_ThermiteBagOverlapped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermite_Multicast_ThermiteBagOverlapped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermite_Multicast_ThermiteBagOverlapped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics
	{
		struct SBZThermite_eventOnAckCompleteIgnition_Parms
		{
			USBZBaseInteractableComponent* Interactable;
			USBZInteractorComponent* Interactor;
			bool bIsLocallyControlledInteractor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledInteractor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermite_eventOnAckCompleteIgnition_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermite_eventOnAckCompleteIgnition_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZThermite_eventOnAckCompleteIgnition_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThermite_eventOnAckCompleteIgnition_Parms), &Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermite, nullptr, "OnAckCompleteIgnition", nullptr, nullptr, sizeof(SBZThermite_eventOnAckCompleteIgnition_Parms), Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics
	{
		struct SBZThermite_eventOnBoxComponentBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermite_eventOnBoxComponentBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermite_eventOnBoxComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermite_eventOnBoxComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermite_eventOnBoxComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SBZThermite_eventOnBoxComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThermite_eventOnBoxComponentBeginOverlap_Parms), &Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermite_eventOnBoxComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermite, nullptr, "OnBoxComponentBeginOverlap", nullptr, nullptr, sizeof(SBZThermite_eventOnBoxComponentBeginOverlap_Parms), Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermite_OnRep_CurrentState_Statics
	{
		struct SBZThermite_eventOnRep_CurrentState_Parms
		{
			ESBZThermiteBurnState OldState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZThermite_OnRep_CurrentState_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZThermite_OnRep_CurrentState_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermite_eventOnRep_CurrentState_Parms, OldState), Z_Construct_UEnum_Starbreeze_ESBZThermiteBurnState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermite_OnRep_CurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_OnRep_CurrentState_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_OnRep_CurrentState_Statics::NewProp_OldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_OnRep_CurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermite_OnRep_CurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermite, nullptr, "OnRep_CurrentState", nullptr, nullptr, sizeof(SBZThermite_eventOnRep_CurrentState_Parms), Z_Construct_UFunction_ASBZThermite_OnRep_CurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_OnRep_CurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_OnRep_CurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_OnRep_CurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermite_OnRep_CurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermite_OnRep_CurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermite_OnRep_IsInterfered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_OnRep_IsInterfered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermite_OnRep_IsInterfered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermite, nullptr, "OnRep_IsInterfered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_OnRep_IsInterfered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_OnRep_IsInterfered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermite_OnRep_IsInterfered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermite_OnRep_IsInterfered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermite_OnRep_Seed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_OnRep_Seed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermite_OnRep_Seed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermite, nullptr, "OnRep_Seed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_OnRep_Seed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_OnRep_Seed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermite_OnRep_Seed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermite_OnRep_Seed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermite_SetBagOverlapBoxEnabled_Statics
	{
		struct SBZThermite_eventSetBagOverlapBoxEnabled_Parms
		{
			bool bInEnabled;
		};
		static void NewProp_bInEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZThermite_SetBagOverlapBoxEnabled_Statics::NewProp_bInEnabled_SetBit(void* Obj)
	{
		((SBZThermite_eventSetBagOverlapBoxEnabled_Parms*)Obj)->bInEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThermite_SetBagOverlapBoxEnabled_Statics::NewProp_bInEnabled = { "bInEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThermite_eventSetBagOverlapBoxEnabled_Parms), &Z_Construct_UFunction_ASBZThermite_SetBagOverlapBoxEnabled_Statics::NewProp_bInEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermite_SetBagOverlapBoxEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_SetBagOverlapBoxEnabled_Statics::NewProp_bInEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_SetBagOverlapBoxEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermite_SetBagOverlapBoxEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermite, nullptr, "SetBagOverlapBoxEnabled", nullptr, nullptr, sizeof(SBZThermite_eventSetBagOverlapBoxEnabled_Parms), Z_Construct_UFunction_ASBZThermite_SetBagOverlapBoxEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_SetBagOverlapBoxEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_SetBagOverlapBoxEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_SetBagOverlapBoxEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermite_SetBagOverlapBoxEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermite_SetBagOverlapBoxEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThermite_SetOutsideInterferenceActive_Statics
	{
		struct SBZThermite_eventSetOutsideInterferenceActive_Parms
		{
			bool bInActive;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInActive_MetaData[];
#endif
		static void NewProp_bInActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_SetOutsideInterferenceActive_Statics::NewProp_bInActive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASBZThermite_SetOutsideInterferenceActive_Statics::NewProp_bInActive_SetBit(void* Obj)
	{
		((SBZThermite_eventSetOutsideInterferenceActive_Parms*)Obj)->bInActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThermite_SetOutsideInterferenceActive_Statics::NewProp_bInActive = { "bInActive", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThermite_eventSetOutsideInterferenceActive_Parms), &Z_Construct_UFunction_ASBZThermite_SetOutsideInterferenceActive_Statics::NewProp_bInActive_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_SetOutsideInterferenceActive_Statics::NewProp_bInActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_SetOutsideInterferenceActive_Statics::NewProp_bInActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThermite_SetOutsideInterferenceActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThermite_SetOutsideInterferenceActive_Statics::NewProp_bInActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThermite_SetOutsideInterferenceActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThermite_SetOutsideInterferenceActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThermite, nullptr, "SetOutsideInterferenceActive", nullptr, nullptr, sizeof(SBZThermite_eventSetOutsideInterferenceActive_Parms), Z_Construct_UFunction_ASBZThermite_SetOutsideInterferenceActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_SetOutsideInterferenceActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThermite_SetOutsideInterferenceActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThermite_SetOutsideInterferenceActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThermite_SetOutsideInterferenceActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThermite_SetOutsideInterferenceActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZThermite_NoRegister()
	{
		return ASBZThermite::StaticClass();
	}
	struct Z_Construct_UClass_ASBZThermite_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnThermiteComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnThermiteComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnIgnited_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIgnited;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFlashOver_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFlashOver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPrimaryThermiteSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPrimaryThermiteSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBagEntered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBagEntered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagOverlapBoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagOverlapBoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnitionInteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnitionInteractableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurnDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BurnDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CriticalBurnInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CriticalBurnInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenExplosionChecks_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenExplosionChecks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialBagTypeTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialBagTypeTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalBagTypeTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalBagTypeTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldDestroyOnComplete_MetaData[];
#endif
		static void NewProp_bShouldDestroyOnComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldDestroyOnComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartEnabled_MetaData[];
#endif
		static void NewProp_bStartEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedBurnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedBurnTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentBurnState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBurnState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentBurnState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CriticalBurnTimeLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CriticalBurnTimeLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInterfered_MetaData[];
#endif
		static void NewProp_bIsInterfered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInterfered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurnModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BurnModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSinceLastExplosionCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSinceLastExplosionCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialSeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZThermite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZThermite_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZThermite_BP_OnFlashOver, "BP_OnFlashOver" }, // 2538268487
		{ &Z_Construct_UFunction_ASBZThermite_BP_OnInterferenceChanged, "BP_OnInterferenceChanged" }, // 975204223
		{ &Z_Construct_UFunction_ASBZThermite_BP_OnStateChanged, "BP_OnStateChanged" }, // 1742744732
		{ &Z_Construct_UFunction_ASBZThermite_BP_OnSteamExplosion, "BP_OnSteamExplosion" }, // 2344631350
		{ &Z_Construct_UFunction_ASBZThermite_BP_OnThermiteBagOverlapped, "BP_OnThermiteBagOverlapped" }, // 1001614103
		{ &Z_Construct_UFunction_ASBZThermite_Multicast_SetOutsideInterference, "Multicast_SetOutsideInterference" }, // 2012334845
		{ &Z_Construct_UFunction_ASBZThermite_Multicast_SetState, "Multicast_SetState" }, // 1427280445
		{ &Z_Construct_UFunction_ASBZThermite_Multicast_ThermiteBagOverlapped, "Multicast_ThermiteBagOverlapped" }, // 4084937998
		{ &Z_Construct_UFunction_ASBZThermite_OnAckCompleteIgnition, "OnAckCompleteIgnition" }, // 930553148
		{ &Z_Construct_UFunction_ASBZThermite_OnBoxComponentBeginOverlap, "OnBoxComponentBeginOverlap" }, // 1718346592
		{ &Z_Construct_UFunction_ASBZThermite_OnRep_CurrentState, "OnRep_CurrentState" }, // 362872118
		{ &Z_Construct_UFunction_ASBZThermite_OnRep_IsInterfered, "OnRep_IsInterfered" }, // 1587453166
		{ &Z_Construct_UFunction_ASBZThermite_OnRep_Seed, "OnRep_Seed" }, // 2069034293
		{ &Z_Construct_UFunction_ASBZThermite_SetBagOverlapBoxEnabled, "SetBagOverlapBoxEnabled" }, // 1043716155
		{ &Z_Construct_UFunction_ASBZThermite_SetOutsideInterferenceActive, "SetOutsideInterferenceActive" }, // 4159776153
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZThermite.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnThermiteComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnThermiteComplete = { "OnThermiteComplete", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, OnThermiteComplete), Z_Construct_UDelegateFunction_Starbreeze_SBZThermiteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnThermiteComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnThermiteComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnIgnited_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnIgnited = { "OnIgnited", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, OnIgnited), Z_Construct_UDelegateFunction_Starbreeze_SBZThermiteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnIgnited_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnIgnited_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnFlashOver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnFlashOver = { "OnFlashOver", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, OnFlashOver), Z_Construct_UDelegateFunction_Starbreeze_SBZThermiteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnFlashOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnFlashOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnPrimaryThermiteSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnPrimaryThermiteSet = { "OnPrimaryThermiteSet", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, OnPrimaryThermiteSet), Z_Construct_UDelegateFunction_Starbreeze_SBZThermiteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnPrimaryThermiteSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnPrimaryThermiteSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnBagEntered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnBagEntered = { "OnBagEntered", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, OnBagEntered), Z_Construct_UDelegateFunction_Starbreeze_SBZThermiteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnBagEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnBagEntered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_BagOverlapBoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_BagOverlapBoxComponent = { "BagOverlapBoxComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, BagOverlapBoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_BagOverlapBoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_BagOverlapBoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_IgnitionInteractableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_IgnitionInteractableComponent = { "IgnitionInteractableComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, IgnitionInteractableComponent), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_IgnitionInteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_IgnitionInteractableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_BurnDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_BurnDuration = { "BurnDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, BurnDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_BurnDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_BurnDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_CriticalBurnInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_CriticalBurnInterval = { "CriticalBurnInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, CriticalBurnInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_CriticalBurnInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_CriticalBurnInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_ExplosionChance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_ExplosionChance = { "ExplosionChance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, ExplosionChance), METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_ExplosionChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_ExplosionChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_TimeBetweenExplosionChecks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_TimeBetweenExplosionChecks = { "TimeBetweenExplosionChecks", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, TimeBetweenExplosionChecks), METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_TimeBetweenExplosionChecks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_TimeBetweenExplosionChecks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_InitialBagTypeTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_InitialBagTypeTag = { "InitialBagTypeTag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, InitialBagTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_InitialBagTypeTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_InitialBagTypeTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_AdditionalBagTypeTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_AdditionalBagTypeTag = { "AdditionalBagTypeTag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, AdditionalBagTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_AdditionalBagTypeTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_AdditionalBagTypeTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_bShouldDestroyOnComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	void Z_Construct_UClass_ASBZThermite_Statics::NewProp_bShouldDestroyOnComplete_SetBit(void* Obj)
	{
		((ASBZThermite*)Obj)->bShouldDestroyOnComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_bShouldDestroyOnComplete = { "bShouldDestroyOnComplete", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZThermite), &Z_Construct_UClass_ASBZThermite_Statics::NewProp_bShouldDestroyOnComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_bShouldDestroyOnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_bShouldDestroyOnComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_bStartEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	void Z_Construct_UClass_ASBZThermite_Statics::NewProp_bStartEnabled_SetBit(void* Obj)
	{
		((ASBZThermite*)Obj)->bStartEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_bStartEnabled = { "bStartEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZThermite), &Z_Construct_UClass_ASBZThermite_Statics::NewProp_bStartEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_bStartEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_bStartEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_ElapsedBurnTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_ElapsedBurnTime = { "ElapsedBurnTime", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, ElapsedBurnTime), METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_ElapsedBurnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_ElapsedBurnTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_CurrentBurnState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_CurrentBurnState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_CurrentBurnState = { "CurrentBurnState", "OnRep_CurrentState", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, CurrentBurnState), Z_Construct_UEnum_Starbreeze_ESBZThermiteBurnState, METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_CurrentBurnState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_CurrentBurnState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_CriticalBurnTimeLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_CriticalBurnTimeLeft = { "CriticalBurnTimeLeft", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, CriticalBurnTimeLeft), METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_CriticalBurnTimeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_CriticalBurnTimeLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_Seed = { "Seed", "OnRep_Seed", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, Seed), METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_bIsInterfered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	void Z_Construct_UClass_ASBZThermite_Statics::NewProp_bIsInterfered_SetBit(void* Obj)
	{
		((ASBZThermite*)Obj)->bIsInterfered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_bIsInterfered = { "bIsInterfered", "OnRep_IsInterfered", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZThermite), &Z_Construct_UClass_ASBZThermite_Statics::NewProp_bIsInterfered_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_bIsInterfered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_bIsInterfered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_BurnModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_BurnModifier = { "BurnModifier", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, BurnModifier), METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_BurnModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_BurnModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_TimeSinceLastExplosionCheck_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_TimeSinceLastExplosionCheck = { "TimeSinceLastExplosionCheck", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, TimeSinceLastExplosionCheck), METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_TimeSinceLastExplosionCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_TimeSinceLastExplosionCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThermite_Statics::NewProp_InitialSeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermite" },
		{ "ModuleRelativePath", "Public/SBZThermite.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZThermite_Statics::NewProp_InitialSeed = { "InitialSeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThermite, InitialSeed), METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::NewProp_InitialSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::NewProp_InitialSeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZThermite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnThermiteComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnIgnited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnFlashOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnPrimaryThermiteSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_OnBagEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_BagOverlapBoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_IgnitionInteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_BurnDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_CriticalBurnInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_ExplosionChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_TimeBetweenExplosionChecks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_InitialBagTypeTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_AdditionalBagTypeTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_bShouldDestroyOnComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_bStartEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_ElapsedBurnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_CurrentBurnState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_CurrentBurnState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_CriticalBurnTimeLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_bIsInterfered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_BurnModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_TimeSinceLastExplosionCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThermite_Statics::NewProp_InitialSeed,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZThermite_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZTimedObjectiveInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZThermite, ISBZTimedObjectiveInterface), false },
			{ Z_Construct_UClass_USBZBreakableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZThermite, ISBZBreakableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZThermite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZThermite>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZThermite_Statics::ClassParams = {
		&ASBZThermite::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZThermite_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZThermite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThermite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZThermite()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZThermite_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZThermite, 1977302918);
	template<> STARBREEZE_API UClass* StaticClass<ASBZThermite>()
	{
		return ASBZThermite::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZThermite(Z_Construct_UClass_ASBZThermite, &ASBZThermite::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZThermite"), false, nullptr, nullptr, nullptr);

	void ASBZThermite::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ElapsedBurnTime(TEXT("ElapsedBurnTime"));
		static const FName Name_CurrentBurnState(TEXT("CurrentBurnState"));
		static const FName Name_CriticalBurnTimeLeft(TEXT("CriticalBurnTimeLeft"));
		static const FName Name_Seed(TEXT("Seed"));
		static const FName Name_bIsInterfered(TEXT("bIsInterfered"));
		static const FName Name_TimeSinceLastExplosionCheck(TEXT("TimeSinceLastExplosionCheck"));

		const bool bIsValid = true
			&& Name_ElapsedBurnTime == ClassReps[(int32)ENetFields_Private::ElapsedBurnTime].Property->GetFName()
			&& Name_CurrentBurnState == ClassReps[(int32)ENetFields_Private::CurrentBurnState].Property->GetFName()
			&& Name_CriticalBurnTimeLeft == ClassReps[(int32)ENetFields_Private::CriticalBurnTimeLeft].Property->GetFName()
			&& Name_Seed == ClassReps[(int32)ENetFields_Private::Seed].Property->GetFName()
			&& Name_bIsInterfered == ClassReps[(int32)ENetFields_Private::bIsInterfered].Property->GetFName()
			&& Name_TimeSinceLastExplosionCheck == ClassReps[(int32)ENetFields_Private::TimeSinceLastExplosionCheck].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZThermite"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZThermite);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
