// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPowerUpCharges.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPowerUpCharges() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPowerUpCharges_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPowerUpCharges();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPowerUp();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPowerUpChargesState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPowerUpChargesStateDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPowerUpCharges::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZPowerUpChargesState*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPowerUpCharges::execMulticast_SetState)
	{
		P_GET_ENUM(ESBZPowerUpChargesState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetState_Implementation(ESBZPowerUpChargesState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPowerUpCharges::execOnAckCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InteractableComp);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckCompleteInteraction(Z_Param_InteractableComp,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPowerUpCharges::execOnRep_ChargesLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ChargesLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPowerUpCharges::execOnRep_CurrentState)
	{
		P_GET_ENUM(ESBZPowerUpChargesState,Z_Param_OldState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentState(ESBZPowerUpChargesState(Z_Param_OldState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPowerUpCharges::execSetState)
	{
		P_GET_ENUM(ESBZPowerUpChargesState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(ESBZPowerUpChargesState(Z_Param_NewState));
		P_NATIVE_END;
	}
	static FName NAME_ASBZPowerUpCharges_BP_OnChargesChanged = FName(TEXT("BP_OnChargesChanged"));
	void ASBZPowerUpCharges::BP_OnChargesChanged(int32 NewCharges, bool bDoCosmetics)
	{
		SBZPowerUpCharges_eventBP_OnChargesChanged_Parms Parms;
		Parms.NewCharges=NewCharges;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPowerUpCharges_BP_OnChargesChanged),&Parms);
	}
	static FName NAME_ASBZPowerUpCharges_BP_OnStateChanged = FName(TEXT("BP_OnStateChanged"));
	void ASBZPowerUpCharges::BP_OnStateChanged(ESBZPowerUpChargesState OldState, ESBZPowerUpChargesState NewState, bool bDoCosmetics)
	{
		SBZPowerUpCharges_eventBP_OnStateChanged_Parms Parms;
		Parms.OldState=OldState;
		Parms.NewState=NewState;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPowerUpCharges_BP_OnStateChanged),&Parms);
	}
	static FName NAME_ASBZPowerUpCharges_Multicast_SetState = FName(TEXT("Multicast_SetState"));
	void ASBZPowerUpCharges::Multicast_SetState(ESBZPowerUpChargesState NewState)
	{
		SBZPowerUpCharges_eventMulticast_SetState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPowerUpCharges_Multicast_SetState),&Parms);
	}
	void ASBZPowerUpCharges::StaticRegisterNativesASBZPowerUpCharges()
	{
		UClass* Class = ASBZPowerUpCharges::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &ASBZPowerUpCharges::execGetCurrentState },
			{ "Multicast_SetState", &ASBZPowerUpCharges::execMulticast_SetState },
			{ "OnAckCompleteInteraction", &ASBZPowerUpCharges::execOnAckCompleteInteraction },
			{ "OnRep_ChargesLeft", &ASBZPowerUpCharges::execOnRep_ChargesLeft },
			{ "OnRep_CurrentState", &ASBZPowerUpCharges::execOnRep_CurrentState },
			{ "SetState", &ASBZPowerUpCharges::execSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnChargesChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewCharges;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnChargesChanged_Statics::NewProp_NewCharges = { "NewCharges", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPowerUpCharges_eventBP_OnChargesChanged_Parms, NewCharges), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnChargesChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZPowerUpCharges_eventBP_OnChargesChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnChargesChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPowerUpCharges_eventBP_OnChargesChanged_Parms), &Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnChargesChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnChargesChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnChargesChanged_Statics::NewProp_NewCharges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnChargesChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnChargesChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPowerUpCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnChargesChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPowerUpCharges, nullptr, "BP_OnChargesChanged", nullptr, nullptr, sizeof(SBZPowerUpCharges_eventBP_OnChargesChanged_Parms), Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnChargesChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnChargesChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnChargesChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnChargesChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnChargesChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnChargesChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPowerUpCharges_eventBP_OnStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_ESBZPowerUpChargesState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPowerUpCharges_eventBP_OnStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZPowerUpChargesState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZPowerUpCharges_eventBP_OnStateChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPowerUpCharges_eventBP_OnStateChanged_Parms), &Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPowerUpCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPowerUpCharges, nullptr, "BP_OnStateChanged", nullptr, nullptr, sizeof(SBZPowerUpCharges_eventBP_OnStateChanged_Parms), Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPowerUpCharges_GetCurrentState_Statics
	{
		struct SBZPowerUpCharges_eventGetCurrentState_Parms
		{
			ESBZPowerUpChargesState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPowerUpCharges_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPowerUpCharges_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPowerUpCharges_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZPowerUpChargesState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPowerUpCharges_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPowerUpCharges_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPowerUpCharges_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPowerUpCharges_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPowerUpCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPowerUpCharges_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPowerUpCharges, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(SBZPowerUpCharges_eventGetCurrentState_Parms), Z_Construct_UFunction_ASBZPowerUpCharges_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPowerUpCharges_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPowerUpCharges_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPowerUpCharges_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPowerUpCharges_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPowerUpCharges_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPowerUpCharges_Multicast_SetState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPowerUpCharges_Multicast_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPowerUpCharges_Multicast_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPowerUpCharges_eventMulticast_SetState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZPowerUpChargesState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPowerUpCharges_Multicast_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPowerUpCharges_Multicast_SetState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPowerUpCharges_Multicast_SetState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPowerUpCharges_Multicast_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPowerUpCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPowerUpCharges_Multicast_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPowerUpCharges, nullptr, "Multicast_SetState", nullptr, nullptr, sizeof(SBZPowerUpCharges_eventMulticast_SetState_Parms), Z_Construct_UFunction_ASBZPowerUpCharges_Multicast_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPowerUpCharges_Multicast_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPowerUpCharges_Multicast_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPowerUpCharges_Multicast_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPowerUpCharges_Multicast_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPowerUpCharges_Multicast_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics
	{
		struct SBZPowerUpCharges_eventOnAckCompleteInteraction_Parms
		{
			USBZBaseInteractableComponent* InteractableComp;
			USBZInteractorComponent* Interactor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComp;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::NewProp_InteractableComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::NewProp_InteractableComp = { "InteractableComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPowerUpCharges_eventOnAckCompleteInteraction_Parms, InteractableComp), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::NewProp_InteractableComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::NewProp_InteractableComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPowerUpCharges_eventOnAckCompleteInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZPowerUpCharges_eventOnAckCompleteInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPowerUpCharges_eventOnAckCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::NewProp_InteractableComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPowerUpCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPowerUpCharges, nullptr, "OnAckCompleteInteraction", nullptr, nullptr, sizeof(SBZPowerUpCharges_eventOnAckCompleteInteraction_Parms), Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_ChargesLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_ChargesLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPowerUpCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_ChargesLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPowerUpCharges, nullptr, "OnRep_ChargesLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_ChargesLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_ChargesLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_ChargesLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_ChargesLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_CurrentState_Statics
	{
		struct SBZPowerUpCharges_eventOnRep_CurrentState_Parms
		{
			ESBZPowerUpChargesState OldState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_CurrentState_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_CurrentState_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPowerUpCharges_eventOnRep_CurrentState_Parms, OldState), Z_Construct_UEnum_Starbreeze_ESBZPowerUpChargesState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_CurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_CurrentState_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_CurrentState_Statics::NewProp_OldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_CurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPowerUpCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_CurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPowerUpCharges, nullptr, "OnRep_CurrentState", nullptr, nullptr, sizeof(SBZPowerUpCharges_eventOnRep_CurrentState_Parms), Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_CurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_CurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_CurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_CurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_CurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_CurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPowerUpCharges_SetState_Statics
	{
		struct SBZPowerUpCharges_eventSetState_Parms
		{
			ESBZPowerUpChargesState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPowerUpCharges_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPowerUpCharges_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPowerUpCharges_eventSetState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZPowerUpChargesState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPowerUpCharges_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPowerUpCharges_SetState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPowerUpCharges_SetState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPowerUpCharges_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPowerUpCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPowerUpCharges_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPowerUpCharges, nullptr, "SetState", nullptr, nullptr, sizeof(SBZPowerUpCharges_eventSetState_Parms), Z_Construct_UFunction_ASBZPowerUpCharges_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPowerUpCharges_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPowerUpCharges_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPowerUpCharges_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPowerUpCharges_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPowerUpCharges_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPowerUpCharges_NoRegister()
	{
		return ASBZPowerUpCharges::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPowerUpCharges_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfCharges_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfCharges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLoudOnly_MetaData[];
#endif
		static void NewProp_bIsLoudOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoudOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargesLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChargesLeft;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPowerUpCharges_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPowerUp,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPowerUpCharges_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnChargesChanged, "BP_OnChargesChanged" }, // 3836808881
		{ &Z_Construct_UFunction_ASBZPowerUpCharges_BP_OnStateChanged, "BP_OnStateChanged" }, // 467629763
		{ &Z_Construct_UFunction_ASBZPowerUpCharges_GetCurrentState, "GetCurrentState" }, // 2894272163
		{ &Z_Construct_UFunction_ASBZPowerUpCharges_Multicast_SetState, "Multicast_SetState" }, // 3102016060
		{ &Z_Construct_UFunction_ASBZPowerUpCharges_OnAckCompleteInteraction, "OnAckCompleteInteraction" }, // 233242060
		{ &Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_ChargesLeft, "OnRep_ChargesLeft" }, // 4246320520
		{ &Z_Construct_UFunction_ASBZPowerUpCharges_OnRep_CurrentState, "OnRep_CurrentState" }, // 119695936
		{ &Z_Construct_UFunction_ASBZPowerUpCharges_SetState, "SetState" }, // 2187554926
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPowerUpCharges_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPowerUpCharges.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPowerUpCharges.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_NumberOfCharges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPowerUpCharges" },
		{ "ModuleRelativePath", "Public/SBZPowerUpCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_NumberOfCharges = { "NumberOfCharges", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPowerUpCharges, NumberOfCharges), METADATA_PARAMS(Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_NumberOfCharges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_NumberOfCharges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_bIsLoudOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPowerUpCharges" },
		{ "ModuleRelativePath", "Public/SBZPowerUpCharges.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_bIsLoudOnly_SetBit(void* Obj)
	{
		((ASBZPowerUpCharges*)Obj)->bIsLoudOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_bIsLoudOnly = { "bIsLoudOnly", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPowerUpCharges), &Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_bIsLoudOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_bIsLoudOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_bIsLoudOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_OnStateChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPowerUpCharges" },
		{ "ModuleRelativePath", "Public/SBZPowerUpCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_OnStateChanged = { "OnStateChanged", nullptr, (EPropertyFlags)0x0020280010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPowerUpCharges, OnStateChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZPowerUpChargesStateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_OnStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_OnStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_ChargesLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPowerUpCharges" },
		{ "ModuleRelativePath", "Public/SBZPowerUpCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_ChargesLeft = { "ChargesLeft", "OnRep_ChargesLeft", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPowerUpCharges, ChargesLeft), METADATA_PARAMS(Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_ChargesLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_ChargesLeft_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_CurrentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPowerUpCharges" },
		{ "ModuleRelativePath", "Public/SBZPowerUpCharges.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_CurrentState = { "CurrentState", "OnRep_CurrentState", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPowerUpCharges, CurrentState), Z_Construct_UEnum_Starbreeze_ESBZPowerUpChargesState, METADATA_PARAMS(Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_CurrentState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPowerUpCharges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_NumberOfCharges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_bIsLoudOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_OnStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_ChargesLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_CurrentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPowerUpCharges_Statics::NewProp_CurrentState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPowerUpCharges_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPowerUpCharges>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPowerUpCharges_Statics::ClassParams = {
		&ASBZPowerUpCharges::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPowerUpCharges_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPowerUpCharges_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPowerUpCharges_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPowerUpCharges_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPowerUpCharges()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPowerUpCharges_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPowerUpCharges, 2115481825);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPowerUpCharges>()
	{
		return ASBZPowerUpCharges::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPowerUpCharges(Z_Construct_UClass_ASBZPowerUpCharges, &ASBZPowerUpCharges::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPowerUpCharges"), false, nullptr, nullptr, nullptr);

	void ASBZPowerUpCharges::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ChargesLeft(TEXT("ChargesLeft"));
		static const FName Name_CurrentState(TEXT("CurrentState"));

		const bool bIsValid = true
			&& Name_ChargesLeft == ClassReps[(int32)ENetFields_Private::ChargesLeft].Property->GetFName()
			&& Name_CurrentState == ClassReps[(int32)ENetFields_Private::CurrentState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZPowerUpCharges"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPowerUpCharges);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
