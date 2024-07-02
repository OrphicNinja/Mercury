// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFilteredTriggerVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFilteredTriggerVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZFilteredTriggerVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZFilteredTriggerVolume();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorFilterComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZFilterActorDynamicDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZFilterDesiredCountDynamicDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZFilterAllDesiredCountsDynamicDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(ASBZFilteredTriggerVolume::execOnFilteredActorBeginOverlapping)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Identifier);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentTotalActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFilteredActorBeginOverlapping(Z_Param_Identifier,Z_Param_Actor,Z_Param_CurrentTotalActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZFilteredTriggerVolume::execOnFilteredActorEndOverlapping)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Identifier);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentTotalActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFilteredActorEndOverlapping(Z_Param_Identifier,Z_Param_Actor,Z_Param_CurrentTotalActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZFilteredTriggerVolume::execOnFilterHasDesiredCountChanged)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Identifer);
		P_GET_UBOOL(Z_Param_bState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFilterHasDesiredCountChanged(Z_Param_Identifer,Z_Param_bState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZFilteredTriggerVolume::execOnFiltersAllHaveDesiredCountsChanged)
	{
		P_GET_UBOOL(Z_Param_bState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFiltersAllHaveDesiredCountsChanged(Z_Param_bState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZFilteredTriggerVolume::execSetVolumeEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumeEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void ASBZFilteredTriggerVolume::StaticRegisterNativesASBZFilteredTriggerVolume()
	{
		UClass* Class = ASBZFilteredTriggerVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFilteredActorBeginOverlapping", &ASBZFilteredTriggerVolume::execOnFilteredActorBeginOverlapping },
			{ "OnFilteredActorEndOverlapping", &ASBZFilteredTriggerVolume::execOnFilteredActorEndOverlapping },
			{ "OnFilterHasDesiredCountChanged", &ASBZFilteredTriggerVolume::execOnFilterHasDesiredCountChanged },
			{ "OnFiltersAllHaveDesiredCountsChanged", &ASBZFilteredTriggerVolume::execOnFiltersAllHaveDesiredCountsChanged },
			{ "SetVolumeEnabled", &ASBZFilteredTriggerVolume::execSetVolumeEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorBeginOverlapping_Statics
	{
		struct SBZFilteredTriggerVolume_eventOnFilteredActorBeginOverlapping_Parms
		{
			FName Identifier;
			AActor* Actor;
			int32 CurrentTotalActors;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentTotalActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorBeginOverlapping_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFilteredTriggerVolume_eventOnFilteredActorBeginOverlapping_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorBeginOverlapping_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFilteredTriggerVolume_eventOnFilteredActorBeginOverlapping_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorBeginOverlapping_Statics::NewProp_CurrentTotalActors = { "CurrentTotalActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFilteredTriggerVolume_eventOnFilteredActorBeginOverlapping_Parms, CurrentTotalActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorBeginOverlapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorBeginOverlapping_Statics::NewProp_Identifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorBeginOverlapping_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorBeginOverlapping_Statics::NewProp_CurrentTotalActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorBeginOverlapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFilteredTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorBeginOverlapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZFilteredTriggerVolume, nullptr, "OnFilteredActorBeginOverlapping", nullptr, nullptr, sizeof(SBZFilteredTriggerVolume_eventOnFilteredActorBeginOverlapping_Parms), Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorBeginOverlapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorBeginOverlapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorBeginOverlapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorBeginOverlapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorBeginOverlapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorBeginOverlapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorEndOverlapping_Statics
	{
		struct SBZFilteredTriggerVolume_eventOnFilteredActorEndOverlapping_Parms
		{
			FName Identifier;
			AActor* Actor;
			int32 CurrentTotalActors;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentTotalActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorEndOverlapping_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFilteredTriggerVolume_eventOnFilteredActorEndOverlapping_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorEndOverlapping_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFilteredTriggerVolume_eventOnFilteredActorEndOverlapping_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorEndOverlapping_Statics::NewProp_CurrentTotalActors = { "CurrentTotalActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFilteredTriggerVolume_eventOnFilteredActorEndOverlapping_Parms, CurrentTotalActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorEndOverlapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorEndOverlapping_Statics::NewProp_Identifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorEndOverlapping_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorEndOverlapping_Statics::NewProp_CurrentTotalActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorEndOverlapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFilteredTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorEndOverlapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZFilteredTriggerVolume, nullptr, "OnFilteredActorEndOverlapping", nullptr, nullptr, sizeof(SBZFilteredTriggerVolume_eventOnFilteredActorEndOverlapping_Parms), Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorEndOverlapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorEndOverlapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorEndOverlapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorEndOverlapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorEndOverlapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorEndOverlapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilterHasDesiredCountChanged_Statics
	{
		struct SBZFilteredTriggerVolume_eventOnFilterHasDesiredCountChanged_Parms
		{
			FName Identifer;
			bool bState;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Identifer;
		static void NewProp_bState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilterHasDesiredCountChanged_Statics::NewProp_Identifer = { "Identifer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFilteredTriggerVolume_eventOnFilterHasDesiredCountChanged_Parms, Identifer), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilterHasDesiredCountChanged_Statics::NewProp_bState_SetBit(void* Obj)
	{
		((SBZFilteredTriggerVolume_eventOnFilterHasDesiredCountChanged_Parms*)Obj)->bState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilterHasDesiredCountChanged_Statics::NewProp_bState = { "bState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZFilteredTriggerVolume_eventOnFilterHasDesiredCountChanged_Parms), &Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilterHasDesiredCountChanged_Statics::NewProp_bState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilterHasDesiredCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilterHasDesiredCountChanged_Statics::NewProp_Identifer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilterHasDesiredCountChanged_Statics::NewProp_bState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilterHasDesiredCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFilteredTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilterHasDesiredCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZFilteredTriggerVolume, nullptr, "OnFilterHasDesiredCountChanged", nullptr, nullptr, sizeof(SBZFilteredTriggerVolume_eventOnFilterHasDesiredCountChanged_Parms), Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilterHasDesiredCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilterHasDesiredCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilterHasDesiredCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilterHasDesiredCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilterHasDesiredCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilterHasDesiredCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFiltersAllHaveDesiredCountsChanged_Statics
	{
		struct SBZFilteredTriggerVolume_eventOnFiltersAllHaveDesiredCountsChanged_Parms
		{
			bool bState;
		};
		static void NewProp_bState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFiltersAllHaveDesiredCountsChanged_Statics::NewProp_bState_SetBit(void* Obj)
	{
		((SBZFilteredTriggerVolume_eventOnFiltersAllHaveDesiredCountsChanged_Parms*)Obj)->bState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFiltersAllHaveDesiredCountsChanged_Statics::NewProp_bState = { "bState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZFilteredTriggerVolume_eventOnFiltersAllHaveDesiredCountsChanged_Parms), &Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFiltersAllHaveDesiredCountsChanged_Statics::NewProp_bState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFiltersAllHaveDesiredCountsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFiltersAllHaveDesiredCountsChanged_Statics::NewProp_bState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFiltersAllHaveDesiredCountsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFilteredTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFiltersAllHaveDesiredCountsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZFilteredTriggerVolume, nullptr, "OnFiltersAllHaveDesiredCountsChanged", nullptr, nullptr, sizeof(SBZFilteredTriggerVolume_eventOnFiltersAllHaveDesiredCountsChanged_Parms), Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFiltersAllHaveDesiredCountsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFiltersAllHaveDesiredCountsChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFiltersAllHaveDesiredCountsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFiltersAllHaveDesiredCountsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFiltersAllHaveDesiredCountsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFiltersAllHaveDesiredCountsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZFilteredTriggerVolume_SetVolumeEnabled_Statics
	{
		struct SBZFilteredTriggerVolume_eventSetVolumeEnabled_Parms
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
	void Z_Construct_UFunction_ASBZFilteredTriggerVolume_SetVolumeEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZFilteredTriggerVolume_eventSetVolumeEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZFilteredTriggerVolume_SetVolumeEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZFilteredTriggerVolume_eventSetVolumeEnabled_Parms), &Z_Construct_UFunction_ASBZFilteredTriggerVolume_SetVolumeEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZFilteredTriggerVolume_SetVolumeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZFilteredTriggerVolume_SetVolumeEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZFilteredTriggerVolume_SetVolumeEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFilteredTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZFilteredTriggerVolume_SetVolumeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZFilteredTriggerVolume, nullptr, "SetVolumeEnabled", nullptr, nullptr, sizeof(SBZFilteredTriggerVolume_eventSetVolumeEnabled_Parms), Z_Construct_UFunction_ASBZFilteredTriggerVolume_SetVolumeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredTriggerVolume_SetVolumeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZFilteredTriggerVolume_SetVolumeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZFilteredTriggerVolume_SetVolumeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZFilteredTriggerVolume_SetVolumeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZFilteredTriggerVolume_SetVolumeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZFilteredTriggerVolume_NoRegister()
	{
		return ASBZFilteredTriggerVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorFilterComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorFilterComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldStartEnabled_MetaData[];
#endif
		static void NewProp_bShouldStartEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldStartEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilteredActorBeginOverlapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FilteredActorBeginOverlapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilteredActorEndOverlapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FilteredActorEndOverlapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterHasDesiredCountChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FilterHasDesiredCountChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiltersAllHaveDesiredCountsChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FiltersAllHaveDesiredCountsChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorBeginOverlapping, "OnFilteredActorBeginOverlapping" }, // 2708472317
		{ &Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilteredActorEndOverlapping, "OnFilteredActorEndOverlapping" }, // 3078562656
		{ &Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFilterHasDesiredCountChanged, "OnFilterHasDesiredCountChanged" }, // 1639744605
		{ &Z_Construct_UFunction_ASBZFilteredTriggerVolume_OnFiltersAllHaveDesiredCountsChanged, "OnFiltersAllHaveDesiredCountsChanged" }, // 1102333225
		{ &Z_Construct_UFunction_ASBZFilteredTriggerVolume_SetVolumeEnabled, "SetVolumeEnabled" }, // 4067563432
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZFilteredTriggerVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFilteredTriggerVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_ActorFilterComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredTriggerVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZFilteredTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_ActorFilterComponent = { "ActorFilterComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFilteredTriggerVolume, ActorFilterComponent), Z_Construct_UClass_USBZActorFilterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_ActorFilterComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_ActorFilterComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_bShouldStartEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZFilteredTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_bShouldStartEnabled_SetBit(void* Obj)
	{
		((ASBZFilteredTriggerVolume*)Obj)->bShouldStartEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_bShouldStartEnabled = { "bShouldStartEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZFilteredTriggerVolume), &Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_bShouldStartEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_bShouldStartEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_bShouldStartEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FilteredActorBeginOverlapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZFilteredTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FilteredActorBeginOverlapping = { "FilteredActorBeginOverlapping", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFilteredTriggerVolume, FilteredActorBeginOverlapping), Z_Construct_UDelegateFunction_Starbreeze_SBZFilterActorDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FilteredActorBeginOverlapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FilteredActorBeginOverlapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FilteredActorEndOverlapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZFilteredTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FilteredActorEndOverlapping = { "FilteredActorEndOverlapping", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFilteredTriggerVolume, FilteredActorEndOverlapping), Z_Construct_UDelegateFunction_Starbreeze_SBZFilterActorDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FilteredActorEndOverlapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FilteredActorEndOverlapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FilterHasDesiredCountChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZFilteredTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FilterHasDesiredCountChanged = { "FilterHasDesiredCountChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFilteredTriggerVolume, FilterHasDesiredCountChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZFilterDesiredCountDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FilterHasDesiredCountChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FilterHasDesiredCountChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FiltersAllHaveDesiredCountsChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFilteredTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZFilteredTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FiltersAllHaveDesiredCountsChanged = { "FiltersAllHaveDesiredCountsChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZFilteredTriggerVolume, FiltersAllHaveDesiredCountsChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZFilterAllDesiredCountsDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FiltersAllHaveDesiredCountsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FiltersAllHaveDesiredCountsChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_ActorFilterComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_bShouldStartEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FilteredActorBeginOverlapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FilteredActorEndOverlapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FilterHasDesiredCountChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::NewProp_FiltersAllHaveDesiredCountsChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZFilteredTriggerVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::ClassParams = {
		&ASBZFilteredTriggerVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZFilteredTriggerVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZFilteredTriggerVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZFilteredTriggerVolume, 2104330340);
	template<> STARBREEZE_API UClass* StaticClass<ASBZFilteredTriggerVolume>()
	{
		return ASBZFilteredTriggerVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZFilteredTriggerVolume(Z_Construct_UClass_ASBZFilteredTriggerVolume, &ASBZFilteredTriggerVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZFilteredTriggerVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZFilteredTriggerVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
