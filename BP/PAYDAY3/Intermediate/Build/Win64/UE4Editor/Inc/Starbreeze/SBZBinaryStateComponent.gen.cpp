// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBinaryStateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBinaryStateComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBinaryStateComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBinaryStateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZBinaryStateChangedSignature__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZBinaryStateComponent::execMulticast_SetState)
	{
		P_GET_UBOOL(Z_Param_bNewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetState_Implementation(Z_Param_bNewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBinaryStateComponent::execOnRep_State)
	{
		P_GET_UBOOL(Z_Param_bOldState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_State(Z_Param_bOldState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBinaryStateComponent::execSetLocalState)
	{
		P_GET_UBOOL(Z_Param_bNewState);
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalState(Z_Param_bNewState,Z_Param_bDoCosmetics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBinaryStateComponent::execSetState)
	{
		P_GET_UBOOL(Z_Param_bNewState);
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(Z_Param_bNewState,Z_Param_bDoCosmetics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBinaryStateComponent::execToggleState)
	{
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleState(Z_Param_bDoCosmetics);
		P_NATIVE_END;
	}
	static FName NAME_USBZBinaryStateComponent_Multicast_SetState = FName(TEXT("Multicast_SetState"));
	void USBZBinaryStateComponent::Multicast_SetState(bool bNewState)
	{
		SBZBinaryStateComponent_eventMulticast_SetState_Parms Parms;
		Parms.bNewState=bNewState ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZBinaryStateComponent_Multicast_SetState),&Parms);
	}
	void USBZBinaryStateComponent::StaticRegisterNativesUSBZBinaryStateComponent()
	{
		UClass* Class = USBZBinaryStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetState", &USBZBinaryStateComponent::execMulticast_SetState },
			{ "OnRep_State", &USBZBinaryStateComponent::execOnRep_State },
			{ "SetLocalState", &USBZBinaryStateComponent::execSetLocalState },
			{ "SetState", &USBZBinaryStateComponent::execSetState },
			{ "ToggleState", &USBZBinaryStateComponent::execToggleState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBinaryStateComponent_Multicast_SetState_Statics
	{
		static void NewProp_bNewState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZBinaryStateComponent_Multicast_SetState_Statics::NewProp_bNewState_SetBit(void* Obj)
	{
		((SBZBinaryStateComponent_eventMulticast_SetState_Parms*)Obj)->bNewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBinaryStateComponent_Multicast_SetState_Statics::NewProp_bNewState = { "bNewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBinaryStateComponent_eventMulticast_SetState_Parms), &Z_Construct_UFunction_USBZBinaryStateComponent_Multicast_SetState_Statics::NewProp_bNewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBinaryStateComponent_Multicast_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBinaryStateComponent_Multicast_SetState_Statics::NewProp_bNewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBinaryStateComponent_Multicast_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBinaryStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBinaryStateComponent_Multicast_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBinaryStateComponent, nullptr, "Multicast_SetState", nullptr, nullptr, sizeof(SBZBinaryStateComponent_eventMulticast_SetState_Parms), Z_Construct_UFunction_USBZBinaryStateComponent_Multicast_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBinaryStateComponent_Multicast_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBinaryStateComponent_Multicast_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBinaryStateComponent_Multicast_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBinaryStateComponent_Multicast_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBinaryStateComponent_Multicast_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBinaryStateComponent_OnRep_State_Statics
	{
		struct SBZBinaryStateComponent_eventOnRep_State_Parms
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
	void Z_Construct_UFunction_USBZBinaryStateComponent_OnRep_State_Statics::NewProp_bOldState_SetBit(void* Obj)
	{
		((SBZBinaryStateComponent_eventOnRep_State_Parms*)Obj)->bOldState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBinaryStateComponent_OnRep_State_Statics::NewProp_bOldState = { "bOldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBinaryStateComponent_eventOnRep_State_Parms), &Z_Construct_UFunction_USBZBinaryStateComponent_OnRep_State_Statics::NewProp_bOldState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBinaryStateComponent_OnRep_State_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBinaryStateComponent_OnRep_State_Statics::NewProp_bOldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBinaryStateComponent_OnRep_State_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBinaryStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBinaryStateComponent_OnRep_State_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBinaryStateComponent, nullptr, "OnRep_State", nullptr, nullptr, sizeof(SBZBinaryStateComponent_eventOnRep_State_Parms), Z_Construct_UFunction_USBZBinaryStateComponent_OnRep_State_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBinaryStateComponent_OnRep_State_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBinaryStateComponent_OnRep_State_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBinaryStateComponent_OnRep_State_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBinaryStateComponent_OnRep_State()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBinaryStateComponent_OnRep_State_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState_Statics
	{
		struct SBZBinaryStateComponent_eventSetLocalState_Parms
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
	void Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState_Statics::NewProp_bNewState_SetBit(void* Obj)
	{
		((SBZBinaryStateComponent_eventSetLocalState_Parms*)Obj)->bNewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState_Statics::NewProp_bNewState = { "bNewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBinaryStateComponent_eventSetLocalState_Parms), &Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState_Statics::NewProp_bNewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZBinaryStateComponent_eventSetLocalState_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBinaryStateComponent_eventSetLocalState_Parms), &Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState_Statics::NewProp_bNewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBinaryStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBinaryStateComponent, nullptr, "SetLocalState", nullptr, nullptr, sizeof(SBZBinaryStateComponent_eventSetLocalState_Parms), Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBinaryStateComponent_SetState_Statics
	{
		struct SBZBinaryStateComponent_eventSetState_Parms
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
	void Z_Construct_UFunction_USBZBinaryStateComponent_SetState_Statics::NewProp_bNewState_SetBit(void* Obj)
	{
		((SBZBinaryStateComponent_eventSetState_Parms*)Obj)->bNewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBinaryStateComponent_SetState_Statics::NewProp_bNewState = { "bNewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBinaryStateComponent_eventSetState_Parms), &Z_Construct_UFunction_USBZBinaryStateComponent_SetState_Statics::NewProp_bNewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZBinaryStateComponent_SetState_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZBinaryStateComponent_eventSetState_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBinaryStateComponent_SetState_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBinaryStateComponent_eventSetState_Parms), &Z_Construct_UFunction_USBZBinaryStateComponent_SetState_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBinaryStateComponent_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBinaryStateComponent_SetState_Statics::NewProp_bNewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBinaryStateComponent_SetState_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBinaryStateComponent_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBinaryStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBinaryStateComponent_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBinaryStateComponent, nullptr, "SetState", nullptr, nullptr, sizeof(SBZBinaryStateComponent_eventSetState_Parms), Z_Construct_UFunction_USBZBinaryStateComponent_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBinaryStateComponent_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBinaryStateComponent_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBinaryStateComponent_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBinaryStateComponent_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBinaryStateComponent_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBinaryStateComponent_ToggleState_Statics
	{
		struct SBZBinaryStateComponent_eventToggleState_Parms
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
	void Z_Construct_UFunction_USBZBinaryStateComponent_ToggleState_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZBinaryStateComponent_eventToggleState_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBinaryStateComponent_ToggleState_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBinaryStateComponent_eventToggleState_Parms), &Z_Construct_UFunction_USBZBinaryStateComponent_ToggleState_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBinaryStateComponent_ToggleState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBinaryStateComponent_ToggleState_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBinaryStateComponent_ToggleState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBinaryStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBinaryStateComponent_ToggleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBinaryStateComponent, nullptr, "ToggleState", nullptr, nullptr, sizeof(SBZBinaryStateComponent_eventToggleState_Parms), Z_Construct_UFunction_USBZBinaryStateComponent_ToggleState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBinaryStateComponent_ToggleState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBinaryStateComponent_ToggleState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBinaryStateComponent_ToggleState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBinaryStateComponent_ToggleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBinaryStateComponent_ToggleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBinaryStateComponent_NoRegister()
	{
		return USBZBinaryStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZBinaryStateComponent_Statics
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBinaryStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBinaryStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBinaryStateComponent_Multicast_SetState, "Multicast_SetState" }, // 3288081656
		{ &Z_Construct_UFunction_USBZBinaryStateComponent_OnRep_State, "OnRep_State" }, // 3281389596
		{ &Z_Construct_UFunction_USBZBinaryStateComponent_SetLocalState, "SetLocalState" }, // 3090599722
		{ &Z_Construct_UFunction_USBZBinaryStateComponent_SetState, "SetState" }, // 1038608691
		{ &Z_Construct_UFunction_USBZBinaryStateComponent_ToggleState, "ToggleState" }, // 3106040681
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBinaryStateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZBinaryStateComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBinaryStateComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_OnStateChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBinaryStateComponent" },
		{ "ModuleRelativePath", "Public/SBZBinaryStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_OnStateChanged = { "OnStateChanged", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBinaryStateComponent, OnStateChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZBinaryStateChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_OnStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_OnStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_bState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBinaryStateComponent" },
		{ "ModuleRelativePath", "Public/SBZBinaryStateComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_bState_SetBit(void* Obj)
	{
		((USBZBinaryStateComponent*)Obj)->bState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_bState = { "bState", "OnRep_State", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZBinaryStateComponent), &Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_bState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_bState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_bState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_bClientDelayStateFromServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBinaryStateComponent" },
		{ "ModuleRelativePath", "Public/SBZBinaryStateComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_bClientDelayStateFromServer_SetBit(void* Obj)
	{
		((USBZBinaryStateComponent*)Obj)->bClientDelayStateFromServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_bClientDelayStateFromServer = { "bClientDelayStateFromServer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBinaryStateComponent), &Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_bClientDelayStateFromServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_bClientDelayStateFromServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_bClientDelayStateFromServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_ClientStateDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBinaryStateComponent" },
		{ "ModuleRelativePath", "Public/SBZBinaryStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_ClientStateDelay = { "ClientStateDelay", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBinaryStateComponent, ClientStateDelay), METADATA_PARAMS(Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_ClientStateDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_ClientStateDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBinaryStateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_OnStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_bState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_bClientDelayStateFromServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBinaryStateComponent_Statics::NewProp_ClientStateDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBinaryStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBinaryStateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBinaryStateComponent_Statics::ClassParams = {
		&USBZBinaryStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBinaryStateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBinaryStateComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBinaryStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBinaryStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBinaryStateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBinaryStateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBinaryStateComponent, 1971012612);
	template<> STARBREEZE_API UClass* StaticClass<USBZBinaryStateComponent>()
	{
		return USBZBinaryStateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBinaryStateComponent(Z_Construct_UClass_USBZBinaryStateComponent, &USBZBinaryStateComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBinaryStateComponent"), false, nullptr, nullptr, nullptr);

	void USBZBinaryStateComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bState(TEXT("bState"));

		const bool bIsValid = true
			&& Name_bState == ClassReps[(int32)ENetFields_Private::bState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZBinaryStateComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBinaryStateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
