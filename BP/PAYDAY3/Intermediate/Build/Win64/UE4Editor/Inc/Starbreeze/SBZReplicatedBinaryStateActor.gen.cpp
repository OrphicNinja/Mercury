// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplicatedBinaryStateActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplicatedBinaryStateActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZReplicatedBinaryStateActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZReplicatedBinaryStateActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBreakableInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZReplicatedBinaryStateActor::execMulticast_SetState)
	{
		P_GET_UBOOL(Z_Param_bNewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetState_Implementation(Z_Param_bNewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZReplicatedBinaryStateActor::execOnRep_State)
	{
		P_GET_UBOOL(Z_Param_bOldState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_State(Z_Param_bOldState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZReplicatedBinaryStateActor::execSetLocalState)
	{
		P_GET_UBOOL(Z_Param_bNewState);
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalState(Z_Param_bNewState,Z_Param_bDoCosmetics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZReplicatedBinaryStateActor::execSetState)
	{
		P_GET_UBOOL(Z_Param_bNewState);
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(Z_Param_bNewState,Z_Param_bDoCosmetics);
		P_NATIVE_END;
	}
	static FName NAME_ASBZReplicatedBinaryStateActor_Multicast_SetState = FName(TEXT("Multicast_SetState"));
	void ASBZReplicatedBinaryStateActor::Multicast_SetState(bool bNewState)
	{
		SBZReplicatedBinaryStateActor_eventMulticast_SetState_Parms Parms;
		Parms.bNewState=bNewState ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZReplicatedBinaryStateActor_Multicast_SetState),&Parms);
	}
	static FName NAME_ASBZReplicatedBinaryStateActor_OnStateChanged = FName(TEXT("OnStateChanged"));
	void ASBZReplicatedBinaryStateActor::OnStateChanged(bool bStateToChangeTo, bool bDoCosmetics)
	{
		SBZReplicatedBinaryStateActor_eventOnStateChanged_Parms Parms;
		Parms.bStateToChangeTo=bStateToChangeTo ? true : false;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZReplicatedBinaryStateActor_OnStateChanged),&Parms);
	}
	void ASBZReplicatedBinaryStateActor::StaticRegisterNativesASBZReplicatedBinaryStateActor()
	{
		UClass* Class = ASBZReplicatedBinaryStateActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetState", &ASBZReplicatedBinaryStateActor::execMulticast_SetState },
			{ "OnRep_State", &ASBZReplicatedBinaryStateActor::execOnRep_State },
			{ "SetLocalState", &ASBZReplicatedBinaryStateActor::execSetLocalState },
			{ "SetState", &ASBZReplicatedBinaryStateActor::execSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_Multicast_SetState_Statics
	{
		static void NewProp_bNewState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_Multicast_SetState_Statics::NewProp_bNewState_SetBit(void* Obj)
	{
		((SBZReplicatedBinaryStateActor_eventMulticast_SetState_Parms*)Obj)->bNewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_Multicast_SetState_Statics::NewProp_bNewState = { "bNewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplicatedBinaryStateActor_eventMulticast_SetState_Parms), &Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_Multicast_SetState_Statics::NewProp_bNewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_Multicast_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_Multicast_SetState_Statics::NewProp_bNewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_Multicast_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplicatedBinaryStateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_Multicast_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZReplicatedBinaryStateActor, nullptr, "Multicast_SetState", nullptr, nullptr, sizeof(SBZReplicatedBinaryStateActor_eventMulticast_SetState_Parms), Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_Multicast_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_Multicast_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_Multicast_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_Multicast_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_Multicast_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_Multicast_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnRep_State_Statics
	{
		struct SBZReplicatedBinaryStateActor_eventOnRep_State_Parms
		{
			bool bOldState;
		};
		static void NewProp_bOldState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOldState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnRep_State_Statics::NewProp_bOldState_SetBit(void* Obj)
	{
		((SBZReplicatedBinaryStateActor_eventOnRep_State_Parms*)Obj)->bOldState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnRep_State_Statics::NewProp_bOldState = { "bOldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplicatedBinaryStateActor_eventOnRep_State_Parms), &Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnRep_State_Statics::NewProp_bOldState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnRep_State_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnRep_State_Statics::NewProp_bOldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnRep_State_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplicatedBinaryStateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnRep_State_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZReplicatedBinaryStateActor, nullptr, "OnRep_State", nullptr, nullptr, sizeof(SBZReplicatedBinaryStateActor_eventOnRep_State_Parms), Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnRep_State_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnRep_State_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnRep_State_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnRep_State_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnRep_State()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnRep_State_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged_Statics
	{
		static void NewProp_bStateToChangeTo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStateToChangeTo;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged_Statics::NewProp_bStateToChangeTo_SetBit(void* Obj)
	{
		((SBZReplicatedBinaryStateActor_eventOnStateChanged_Parms*)Obj)->bStateToChangeTo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged_Statics::NewProp_bStateToChangeTo = { "bStateToChangeTo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplicatedBinaryStateActor_eventOnStateChanged_Parms), &Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged_Statics::NewProp_bStateToChangeTo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZReplicatedBinaryStateActor_eventOnStateChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplicatedBinaryStateActor_eventOnStateChanged_Parms), &Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged_Statics::NewProp_bStateToChangeTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplicatedBinaryStateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZReplicatedBinaryStateActor, nullptr, "OnStateChanged", nullptr, nullptr, sizeof(SBZReplicatedBinaryStateActor_eventOnStateChanged_Parms), Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState_Statics
	{
		struct SBZReplicatedBinaryStateActor_eventSetLocalState_Parms
		{
			bool bNewState;
			bool bDoCosmetics;
		};
		static void NewProp_bNewState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewState;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState_Statics::NewProp_bNewState_SetBit(void* Obj)
	{
		((SBZReplicatedBinaryStateActor_eventSetLocalState_Parms*)Obj)->bNewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState_Statics::NewProp_bNewState = { "bNewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplicatedBinaryStateActor_eventSetLocalState_Parms), &Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState_Statics::NewProp_bNewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZReplicatedBinaryStateActor_eventSetLocalState_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplicatedBinaryStateActor_eventSetLocalState_Parms), &Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState_Statics::NewProp_bNewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplicatedBinaryStateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZReplicatedBinaryStateActor, nullptr, "SetLocalState", nullptr, nullptr, sizeof(SBZReplicatedBinaryStateActor_eventSetLocalState_Parms), Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState_Statics
	{
		struct SBZReplicatedBinaryStateActor_eventSetState_Parms
		{
			bool bNewState;
			bool bDoCosmetics;
		};
		static void NewProp_bNewState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewState;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState_Statics::NewProp_bNewState_SetBit(void* Obj)
	{
		((SBZReplicatedBinaryStateActor_eventSetState_Parms*)Obj)->bNewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState_Statics::NewProp_bNewState = { "bNewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplicatedBinaryStateActor_eventSetState_Parms), &Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState_Statics::NewProp_bNewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZReplicatedBinaryStateActor_eventSetState_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZReplicatedBinaryStateActor_eventSetState_Parms), &Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState_Statics::NewProp_bNewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplicatedBinaryStateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZReplicatedBinaryStateActor, nullptr, "SetState", nullptr, nullptr, sizeof(SBZReplicatedBinaryStateActor_eventSetState_Parms), Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZReplicatedBinaryStateActor_NoRegister()
	{
		return ASBZReplicatedBinaryStateActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bState_MetaData[];
#endif
		static void NewProp_bState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bState;
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
	UObject* (*const Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_Multicast_SetState, "Multicast_SetState" }, // 3547657463
		{ &Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnRep_State, "OnRep_State" }, // 1384984692
		{ &Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_OnStateChanged, "OnStateChanged" }, // 2792797324
		{ &Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetLocalState, "SetLocalState" }, // 424995787
		{ &Z_Construct_UFunction_ASBZReplicatedBinaryStateActor_SetState, "SetState" }, // 1230645593
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZReplicatedBinaryStateActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReplicatedBinaryStateActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_bState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicatedBinaryStateActor" },
		{ "ModuleRelativePath", "Public/SBZReplicatedBinaryStateActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_bState_SetBit(void* Obj)
	{
		((ASBZReplicatedBinaryStateActor*)Obj)->bState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_bState = { "bState", "OnRep_State", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZReplicatedBinaryStateActor), &Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_bState_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_bState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_bState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_bClientDelayStateFromServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicatedBinaryStateActor" },
		{ "ModuleRelativePath", "Public/SBZReplicatedBinaryStateActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_bClientDelayStateFromServer_SetBit(void* Obj)
	{
		((ASBZReplicatedBinaryStateActor*)Obj)->bClientDelayStateFromServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_bClientDelayStateFromServer = { "bClientDelayStateFromServer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZReplicatedBinaryStateActor), &Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_bClientDelayStateFromServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_bClientDelayStateFromServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_bClientDelayStateFromServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_ClientStateDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicatedBinaryStateActor" },
		{ "ModuleRelativePath", "Public/SBZReplicatedBinaryStateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_ClientStateDelay = { "ClientStateDelay", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZReplicatedBinaryStateActor, ClientStateDelay), METADATA_PARAMS(Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_ClientStateDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_ClientStateDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_bState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_bClientDelayStateFromServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::NewProp_ClientStateDelay,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZBreakableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZReplicatedBinaryStateActor, ISBZBreakableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZReplicatedBinaryStateActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::ClassParams = {
		&ASBZReplicatedBinaryStateActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZReplicatedBinaryStateActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZReplicatedBinaryStateActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZReplicatedBinaryStateActor, 507553681);
	template<> STARBREEZE_API UClass* StaticClass<ASBZReplicatedBinaryStateActor>()
	{
		return ASBZReplicatedBinaryStateActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZReplicatedBinaryStateActor(Z_Construct_UClass_ASBZReplicatedBinaryStateActor, &ASBZReplicatedBinaryStateActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZReplicatedBinaryStateActor"), false, nullptr, nullptr, nullptr);

	void ASBZReplicatedBinaryStateActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bState(TEXT("bState"));

		const bool bIsValid = true
			&& Name_bState == ClassReps[(int32)ENetFields_Private::bState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZReplicatedBinaryStateActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZReplicatedBinaryStateActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
