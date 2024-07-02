// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplicatedIntStateActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplicatedIntStateActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZReplicatedIntStateActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZReplicatedIntStateActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBreakableInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZReplicatedIntStateActor::execDecreaseState)
	{
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseState(Z_Param_bDoCosmetics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZReplicatedIntStateActor::execIncreaseState)
	{
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseState(Z_Param_bDoCosmetics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZReplicatedIntStateActor::execMulticast_SetState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetState_Implementation(Z_Param_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZReplicatedIntStateActor::execOnRep_State)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OldState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_State(Z_Param_OldState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZReplicatedIntStateActor::execSetLocalState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewState);
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalState(Z_Param_NewState,Z_Param_bDoCosmetics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZReplicatedIntStateActor::execSetState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewState);
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(Z_Param_NewState,Z_Param_bDoCosmetics);
		P_NATIVE_END;
	}
	static FName NAME_ASBZReplicatedIntStateActor_Multicast_SetState = FName(TEXT("Multicast_SetState"));
	void ASBZReplicatedIntStateActor::Multicast_SetState(int32 NewState)
	{
		SBZReplicatedIntStateActor_eventMulticast_SetState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZReplicatedIntStateActor_Multicast_SetState),&Parms);
	}
	static FName NAME_ASBZReplicatedIntStateActor_OnStateChanged = FName(TEXT("OnStateChanged"));
	void ASBZReplicatedIntStateActor::OnStateChanged(int32 OldState, int32 NewState, bool bDoCosmetics)
	{
		SBZReplicatedIntStateActor_eventOnStateChanged_Parms Parms;
		Parms.OldState=OldState;
		Parms.NewState=NewState;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZReplicatedIntStateActor_OnStateChanged),&Parms);
	}
	void ASBZReplicatedIntStateActor::StaticRegisterNativesASBZReplicatedIntStateActor()
	{
		UClass* Class = ASBZReplicatedIntStateActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecreaseState", &ASBZReplicatedIntStateActor::execDecreaseState },
			{ "IncreaseState", &ASBZReplicatedIntStateActor::execIncreaseState },
			{ "Multicast_SetState", &ASBZReplicatedIntStateActor::execMulticast_SetState },
			{ "OnRep_State", &ASBZReplicatedIntStateActor::execOnRep_State },
			{ "SetLocalState", &ASBZReplicatedIntStateActor::execSetLocalState },
			{ "SetState", &ASBZReplicatedIntStateActor::execSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZReplicatedIntStateActor_DecreaseState_Statics
	{
		struct SBZReplicatedIntStateActor_eventDecreaseState_Parms
		{
			bool bDoCosmetics;
		};
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZReplicatedIntStateActor_DecreaseState_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZReplicatedIntStateActor_eventDecreaseState_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZReplicatedIntStateActor_DecreaseState_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplicatedIntStateActor_eventDecreaseState_Parms), &Z_Construct_UFunction_ASBZReplicatedIntStateActor_DecreaseState_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZReplicatedIntStateActor_DecreaseState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedIntStateActor_DecreaseState_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZReplicatedIntStateActor_DecreaseState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplicatedIntStateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZReplicatedIntStateActor_DecreaseState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZReplicatedIntStateActor, nullptr, "DecreaseState", nullptr, nullptr, sizeof(SBZReplicatedIntStateActor_eventDecreaseState_Parms), Z_Construct_UFunction_ASBZReplicatedIntStateActor_DecreaseState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedIntStateActor_DecreaseState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZReplicatedIntStateActor_DecreaseState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedIntStateActor_DecreaseState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZReplicatedIntStateActor_DecreaseState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZReplicatedIntStateActor_DecreaseState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZReplicatedIntStateActor_IncreaseState_Statics
	{
		struct SBZReplicatedIntStateActor_eventIncreaseState_Parms
		{
			bool bDoCosmetics;
		};
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZReplicatedIntStateActor_IncreaseState_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZReplicatedIntStateActor_eventIncreaseState_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZReplicatedIntStateActor_IncreaseState_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplicatedIntStateActor_eventIncreaseState_Parms), &Z_Construct_UFunction_ASBZReplicatedIntStateActor_IncreaseState_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZReplicatedIntStateActor_IncreaseState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedIntStateActor_IncreaseState_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZReplicatedIntStateActor_IncreaseState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplicatedIntStateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZReplicatedIntStateActor_IncreaseState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZReplicatedIntStateActor, nullptr, "IncreaseState", nullptr, nullptr, sizeof(SBZReplicatedIntStateActor_eventIncreaseState_Parms), Z_Construct_UFunction_ASBZReplicatedIntStateActor_IncreaseState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedIntStateActor_IncreaseState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZReplicatedIntStateActor_IncreaseState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedIntStateActor_IncreaseState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZReplicatedIntStateActor_IncreaseState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZReplicatedIntStateActor_IncreaseState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZReplicatedIntStateActor_Multicast_SetState_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZReplicatedIntStateActor_Multicast_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplicatedIntStateActor_eventMulticast_SetState_Parms, NewState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZReplicatedIntStateActor_Multicast_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedIntStateActor_Multicast_SetState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZReplicatedIntStateActor_Multicast_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplicatedIntStateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZReplicatedIntStateActor_Multicast_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZReplicatedIntStateActor, nullptr, "Multicast_SetState", nullptr, nullptr, sizeof(SBZReplicatedIntStateActor_eventMulticast_SetState_Parms), Z_Construct_UFunction_ASBZReplicatedIntStateActor_Multicast_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedIntStateActor_Multicast_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZReplicatedIntStateActor_Multicast_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedIntStateActor_Multicast_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZReplicatedIntStateActor_Multicast_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZReplicatedIntStateActor_Multicast_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnRep_State_Statics
	{
		struct SBZReplicatedIntStateActor_eventOnRep_State_Parms
		{
			int32 OldState;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnRep_State_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplicatedIntStateActor_eventOnRep_State_Parms, OldState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnRep_State_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnRep_State_Statics::NewProp_OldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnRep_State_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplicatedIntStateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnRep_State_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZReplicatedIntStateActor, nullptr, "OnRep_State", nullptr, nullptr, sizeof(SBZReplicatedIntStateActor_eventOnRep_State_Parms), Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnRep_State_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnRep_State_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnRep_State_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnRep_State_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnRep_State()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnRep_State_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewState;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplicatedIntStateActor_eventOnStateChanged_Parms, OldState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplicatedIntStateActor_eventOnStateChanged_Parms, NewState), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZReplicatedIntStateActor_eventOnStateChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplicatedIntStateActor_eventOnStateChanged_Parms), &Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplicatedIntStateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZReplicatedIntStateActor, nullptr, "OnStateChanged", nullptr, nullptr, sizeof(SBZReplicatedIntStateActor_eventOnStateChanged_Parms), Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetLocalState_Statics
	{
		struct SBZReplicatedIntStateActor_eventSetLocalState_Parms
		{
			int32 NewState;
			bool bDoCosmetics;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewState;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetLocalState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplicatedIntStateActor_eventSetLocalState_Parms, NewState), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetLocalState_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZReplicatedIntStateActor_eventSetLocalState_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetLocalState_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplicatedIntStateActor_eventSetLocalState_Parms), &Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetLocalState_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetLocalState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetLocalState_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetLocalState_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetLocalState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplicatedIntStateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetLocalState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZReplicatedIntStateActor, nullptr, "SetLocalState", nullptr, nullptr, sizeof(SBZReplicatedIntStateActor_eventSetLocalState_Parms), Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetLocalState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetLocalState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetLocalState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetLocalState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetLocalState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetLocalState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetState_Statics
	{
		struct SBZReplicatedIntStateActor_eventSetState_Parms
		{
			int32 NewState;
			bool bDoCosmetics;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewState;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplicatedIntStateActor_eventSetState_Parms, NewState), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetState_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZReplicatedIntStateActor_eventSetState_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetState_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplicatedIntStateActor_eventSetState_Parms), &Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetState_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetState_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetState_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplicatedIntStateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZReplicatedIntStateActor, nullptr, "SetState", nullptr, nullptr, sizeof(SBZReplicatedIntStateActor_eventSetState_Parms), Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZReplicatedIntStateActor_NoRegister()
	{
		return ASBZReplicatedIntStateActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClientDelayStateFromServer_MetaData[];
#endif
		static void NewProp_bClientDelayStateFromServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClientDelayStateFromServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientStateDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClientStateDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZReplicatedIntStateActor_DecreaseState, "DecreaseState" }, // 3064190403
		{ &Z_Construct_UFunction_ASBZReplicatedIntStateActor_IncreaseState, "IncreaseState" }, // 3698405824
		{ &Z_Construct_UFunction_ASBZReplicatedIntStateActor_Multicast_SetState, "Multicast_SetState" }, // 156348701
		{ &Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnRep_State, "OnRep_State" }, // 105976156
		{ &Z_Construct_UFunction_ASBZReplicatedIntStateActor_OnStateChanged, "OnStateChanged" }, // 2001158395
		{ &Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetLocalState, "SetLocalState" }, // 1095764632
		{ &Z_Construct_UFunction_ASBZReplicatedIntStateActor_SetState, "SetState" }, // 3061903497
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZReplicatedIntStateActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReplicatedIntStateActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicatedIntStateActor" },
		{ "ModuleRelativePath", "Public/SBZReplicatedIntStateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::NewProp_State = { "State", "OnRep_State", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZReplicatedIntStateActor, State), METADATA_PARAMS(Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::NewProp_bClientDelayStateFromServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicatedIntStateActor" },
		{ "ModuleRelativePath", "Public/SBZReplicatedIntStateActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::NewProp_bClientDelayStateFromServer_SetBit(void* Obj)
	{
		((ASBZReplicatedIntStateActor*)Obj)->bClientDelayStateFromServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::NewProp_bClientDelayStateFromServer = { "bClientDelayStateFromServer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZReplicatedIntStateActor), &Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::NewProp_bClientDelayStateFromServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::NewProp_bClientDelayStateFromServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::NewProp_bClientDelayStateFromServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::NewProp_ClientStateDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicatedIntStateActor" },
		{ "ModuleRelativePath", "Public/SBZReplicatedIntStateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::NewProp_ClientStateDelay = { "ClientStateDelay", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZReplicatedIntStateActor, ClientStateDelay), METADATA_PARAMS(Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::NewProp_ClientStateDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::NewProp_ClientStateDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::NewProp_bClientDelayStateFromServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::NewProp_ClientStateDelay,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZBreakableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZReplicatedIntStateActor, ISBZBreakableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZReplicatedIntStateActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::ClassParams = {
		&ASBZReplicatedIntStateActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZReplicatedIntStateActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZReplicatedIntStateActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZReplicatedIntStateActor, 1168704970);
	template<> STARBREEZE_API UClass* StaticClass<ASBZReplicatedIntStateActor>()
	{
		return ASBZReplicatedIntStateActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZReplicatedIntStateActor(Z_Construct_UClass_ASBZReplicatedIntStateActor, &ASBZReplicatedIntStateActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZReplicatedIntStateActor"), false, nullptr, nullptr, nullptr);

	void ASBZReplicatedIntStateActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_State(TEXT("State"));

		const bool bIsValid = true
			&& Name_State == ClassReps[(int32)ENetFields_Private::State].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZReplicatedIntStateActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZReplicatedIntStateActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
