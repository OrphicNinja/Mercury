// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZIntStateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZIntStateComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZIntStateComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZIntStateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZIntStateChangedSignature__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZIntStateComponent::execDecreaseState)
	{
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseState(Z_Param_bDoCosmetics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZIntStateComponent::execIncreaseState)
	{
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseState(Z_Param_bDoCosmetics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZIntStateComponent::execMulticast_SetState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetState_Implementation(Z_Param_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZIntStateComponent::execOnRep_State)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OldState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_State(Z_Param_OldState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZIntStateComponent::execSetLocalState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewState);
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalState(Z_Param_NewState,Z_Param_bDoCosmetics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZIntStateComponent::execSetState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewState);
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(Z_Param_NewState,Z_Param_bDoCosmetics);
		P_NATIVE_END;
	}
	static FName NAME_USBZIntStateComponent_Multicast_SetState = FName(TEXT("Multicast_SetState"));
	void USBZIntStateComponent::Multicast_SetState(int32 NewState)
	{
		SBZIntStateComponent_eventMulticast_SetState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_USBZIntStateComponent_Multicast_SetState),&Parms);
	}
	void USBZIntStateComponent::StaticRegisterNativesUSBZIntStateComponent()
	{
		UClass* Class = USBZIntStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecreaseState", &USBZIntStateComponent::execDecreaseState },
			{ "IncreaseState", &USBZIntStateComponent::execIncreaseState },
			{ "Multicast_SetState", &USBZIntStateComponent::execMulticast_SetState },
			{ "OnRep_State", &USBZIntStateComponent::execOnRep_State },
			{ "SetLocalState", &USBZIntStateComponent::execSetLocalState },
			{ "SetState", &USBZIntStateComponent::execSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZIntStateComponent_DecreaseState_Statics
	{
		struct SBZIntStateComponent_eventDecreaseState_Parms
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
	void Z_Construct_UFunction_USBZIntStateComponent_DecreaseState_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZIntStateComponent_eventDecreaseState_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZIntStateComponent_DecreaseState_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZIntStateComponent_eventDecreaseState_Parms), &Z_Construct_UFunction_USBZIntStateComponent_DecreaseState_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZIntStateComponent_DecreaseState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZIntStateComponent_DecreaseState_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZIntStateComponent_DecreaseState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZIntStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZIntStateComponent_DecreaseState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZIntStateComponent, nullptr, "DecreaseState", nullptr, nullptr, sizeof(SBZIntStateComponent_eventDecreaseState_Parms), Z_Construct_UFunction_USBZIntStateComponent_DecreaseState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZIntStateComponent_DecreaseState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZIntStateComponent_DecreaseState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZIntStateComponent_DecreaseState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZIntStateComponent_DecreaseState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZIntStateComponent_DecreaseState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZIntStateComponent_IncreaseState_Statics
	{
		struct SBZIntStateComponent_eventIncreaseState_Parms
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
	void Z_Construct_UFunction_USBZIntStateComponent_IncreaseState_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZIntStateComponent_eventIncreaseState_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZIntStateComponent_IncreaseState_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZIntStateComponent_eventIncreaseState_Parms), &Z_Construct_UFunction_USBZIntStateComponent_IncreaseState_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZIntStateComponent_IncreaseState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZIntStateComponent_IncreaseState_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZIntStateComponent_IncreaseState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZIntStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZIntStateComponent_IncreaseState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZIntStateComponent, nullptr, "IncreaseState", nullptr, nullptr, sizeof(SBZIntStateComponent_eventIncreaseState_Parms), Z_Construct_UFunction_USBZIntStateComponent_IncreaseState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZIntStateComponent_IncreaseState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZIntStateComponent_IncreaseState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZIntStateComponent_IncreaseState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZIntStateComponent_IncreaseState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZIntStateComponent_IncreaseState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZIntStateComponent_Multicast_SetState_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZIntStateComponent_Multicast_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZIntStateComponent_eventMulticast_SetState_Parms, NewState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZIntStateComponent_Multicast_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZIntStateComponent_Multicast_SetState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZIntStateComponent_Multicast_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZIntStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZIntStateComponent_Multicast_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZIntStateComponent, nullptr, "Multicast_SetState", nullptr, nullptr, sizeof(SBZIntStateComponent_eventMulticast_SetState_Parms), Z_Construct_UFunction_USBZIntStateComponent_Multicast_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZIntStateComponent_Multicast_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZIntStateComponent_Multicast_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZIntStateComponent_Multicast_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZIntStateComponent_Multicast_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZIntStateComponent_Multicast_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZIntStateComponent_OnRep_State_Statics
	{
		struct SBZIntStateComponent_eventOnRep_State_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZIntStateComponent_OnRep_State_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZIntStateComponent_eventOnRep_State_Parms, OldState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZIntStateComponent_OnRep_State_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZIntStateComponent_OnRep_State_Statics::NewProp_OldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZIntStateComponent_OnRep_State_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZIntStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZIntStateComponent_OnRep_State_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZIntStateComponent, nullptr, "OnRep_State", nullptr, nullptr, sizeof(SBZIntStateComponent_eventOnRep_State_Parms), Z_Construct_UFunction_USBZIntStateComponent_OnRep_State_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZIntStateComponent_OnRep_State_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZIntStateComponent_OnRep_State_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZIntStateComponent_OnRep_State_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZIntStateComponent_OnRep_State()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZIntStateComponent_OnRep_State_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZIntStateComponent_SetLocalState_Statics
	{
		struct SBZIntStateComponent_eventSetLocalState_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZIntStateComponent_SetLocalState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZIntStateComponent_eventSetLocalState_Parms, NewState), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZIntStateComponent_SetLocalState_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZIntStateComponent_eventSetLocalState_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZIntStateComponent_SetLocalState_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZIntStateComponent_eventSetLocalState_Parms), &Z_Construct_UFunction_USBZIntStateComponent_SetLocalState_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZIntStateComponent_SetLocalState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZIntStateComponent_SetLocalState_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZIntStateComponent_SetLocalState_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZIntStateComponent_SetLocalState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZIntStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZIntStateComponent_SetLocalState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZIntStateComponent, nullptr, "SetLocalState", nullptr, nullptr, sizeof(SBZIntStateComponent_eventSetLocalState_Parms), Z_Construct_UFunction_USBZIntStateComponent_SetLocalState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZIntStateComponent_SetLocalState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZIntStateComponent_SetLocalState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZIntStateComponent_SetLocalState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZIntStateComponent_SetLocalState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZIntStateComponent_SetLocalState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZIntStateComponent_SetState_Statics
	{
		struct SBZIntStateComponent_eventSetState_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZIntStateComponent_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZIntStateComponent_eventSetState_Parms, NewState), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZIntStateComponent_SetState_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZIntStateComponent_eventSetState_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZIntStateComponent_SetState_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZIntStateComponent_eventSetState_Parms), &Z_Construct_UFunction_USBZIntStateComponent_SetState_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZIntStateComponent_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZIntStateComponent_SetState_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZIntStateComponent_SetState_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZIntStateComponent_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZIntStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZIntStateComponent_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZIntStateComponent, nullptr, "SetState", nullptr, nullptr, sizeof(SBZIntStateComponent_eventSetState_Parms), Z_Construct_UFunction_USBZIntStateComponent_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZIntStateComponent_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZIntStateComponent_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZIntStateComponent_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZIntStateComponent_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZIntStateComponent_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZIntStateComponent_NoRegister()
	{
		return USBZIntStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZIntStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateChanged;
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZIntStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZIntStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZIntStateComponent_DecreaseState, "DecreaseState" }, // 3535695655
		{ &Z_Construct_UFunction_USBZIntStateComponent_IncreaseState, "IncreaseState" }, // 2647026757
		{ &Z_Construct_UFunction_USBZIntStateComponent_Multicast_SetState, "Multicast_SetState" }, // 2332687852
		{ &Z_Construct_UFunction_USBZIntStateComponent_OnRep_State, "OnRep_State" }, // 3215819873
		{ &Z_Construct_UFunction_USBZIntStateComponent_SetLocalState, "SetLocalState" }, // 4044647955
		{ &Z_Construct_UFunction_USBZIntStateComponent_SetState, "SetState" }, // 1106166741
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZIntStateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZIntStateComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZIntStateComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_OnStateChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZIntStateComponent" },
		{ "ModuleRelativePath", "Public/SBZIntStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_OnStateChanged = { "OnStateChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZIntStateComponent, OnStateChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZIntStateChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_OnStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_OnStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZIntStateComponent" },
		{ "ModuleRelativePath", "Public/SBZIntStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_State = { "State", "OnRep_State", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZIntStateComponent, State), METADATA_PARAMS(Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_bClientDelayStateFromServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZIntStateComponent" },
		{ "ModuleRelativePath", "Public/SBZIntStateComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_bClientDelayStateFromServer_SetBit(void* Obj)
	{
		((USBZIntStateComponent*)Obj)->bClientDelayStateFromServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_bClientDelayStateFromServer = { "bClientDelayStateFromServer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZIntStateComponent), &Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_bClientDelayStateFromServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_bClientDelayStateFromServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_bClientDelayStateFromServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_ClientStateDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZIntStateComponent" },
		{ "ModuleRelativePath", "Public/SBZIntStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_ClientStateDelay = { "ClientStateDelay", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZIntStateComponent, ClientStateDelay), METADATA_PARAMS(Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_ClientStateDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_ClientStateDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZIntStateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_OnStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_bClientDelayStateFromServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZIntStateComponent_Statics::NewProp_ClientStateDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZIntStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZIntStateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZIntStateComponent_Statics::ClassParams = {
		&USBZIntStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZIntStateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZIntStateComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZIntStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZIntStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZIntStateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZIntStateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZIntStateComponent, 2742733601);
	template<> STARBREEZE_API UClass* StaticClass<USBZIntStateComponent>()
	{
		return USBZIntStateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZIntStateComponent(Z_Construct_UClass_USBZIntStateComponent, &USBZIntStateComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZIntStateComponent"), false, nullptr, nullptr, nullptr);

	void USBZIntStateComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_State(TEXT("State"));

		const bool bIsValid = true
			&& Name_State == ClassReps[(int32)ENetFields_Private::State].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZIntStateComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZIntStateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
