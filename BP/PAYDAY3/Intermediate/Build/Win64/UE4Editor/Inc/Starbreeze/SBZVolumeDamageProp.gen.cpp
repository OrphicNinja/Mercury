// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVolumeDamageProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVolumeDamageProp() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZVolumeDamageProp_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZVolumeDamageProp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVolumeDamageInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZVolumeDamageProp::execMulticast_CollisionEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_CollisionEnabled_Implementation(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZVolumeDamageProp::execOnRep_IsCollisionEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsCollisionEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZVolumeDamageProp::execOnVolumeBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVolumeBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZVolumeDamageProp::execOnVolumeCollisionChanged)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ChangedComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVolumeCollisionChanged(Z_Param_ChangedComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZVolumeDamageProp::execOnVolumeEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVolumeEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZVolumeDamageProp::execSetServerDamageEnabled)
	{
		P_GET_TINTERFACE_REF(IAbilitySystemInterface,Z_Param_Out_AbilitySystemScriptInterface);
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetServerDamageEnabled(Z_Param_Out_AbilitySystemScriptInterface,Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZVolumeDamageProp_BP_OnVolumeEnabledChanged = FName(TEXT("BP_OnVolumeEnabledChanged"));
	void ASBZVolumeDamageProp::BP_OnVolumeEnabledChanged(bool bIsEnabled)
	{
		SBZVolumeDamageProp_eventBP_OnVolumeEnabledChanged_Parms Parms;
		Parms.bIsEnabled=bIsEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZVolumeDamageProp_BP_OnVolumeEnabledChanged),&Parms);
	}
	static FName NAME_ASBZVolumeDamageProp_Multicast_CollisionEnabled = FName(TEXT("Multicast_CollisionEnabled"));
	void ASBZVolumeDamageProp::Multicast_CollisionEnabled(bool bIsEnabled)
	{
		SBZVolumeDamageProp_eventMulticast_CollisionEnabled_Parms Parms;
		Parms.bIsEnabled=bIsEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZVolumeDamageProp_Multicast_CollisionEnabled),&Parms);
	}
	void ASBZVolumeDamageProp::StaticRegisterNativesASBZVolumeDamageProp()
	{
		UClass* Class = ASBZVolumeDamageProp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_CollisionEnabled", &ASBZVolumeDamageProp::execMulticast_CollisionEnabled },
			{ "OnRep_IsCollisionEnabled", &ASBZVolumeDamageProp::execOnRep_IsCollisionEnabled },
			{ "OnVolumeBeginOverlap", &ASBZVolumeDamageProp::execOnVolumeBeginOverlap },
			{ "OnVolumeCollisionChanged", &ASBZVolumeDamageProp::execOnVolumeCollisionChanged },
			{ "OnVolumeEndOverlap", &ASBZVolumeDamageProp::execOnVolumeEndOverlap },
			{ "SetServerDamageEnabled", &ASBZVolumeDamageProp::execSetServerDamageEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZVolumeDamageProp_BP_OnVolumeEnabledChanged_Statics
	{
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZVolumeDamageProp_BP_OnVolumeEnabledChanged_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((SBZVolumeDamageProp_eventBP_OnVolumeEnabledChanged_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZVolumeDamageProp_BP_OnVolumeEnabledChanged_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVolumeDamageProp_eventBP_OnVolumeEnabledChanged_Parms), &Z_Construct_UFunction_ASBZVolumeDamageProp_BP_OnVolumeEnabledChanged_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZVolumeDamageProp_BP_OnVolumeEnabledChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVolumeDamageProp_BP_OnVolumeEnabledChanged_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVolumeDamageProp_BP_OnVolumeEnabledChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVolumeDamageProp_BP_OnVolumeEnabledChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVolumeDamageProp, nullptr, "BP_OnVolumeEnabledChanged", nullptr, nullptr, sizeof(SBZVolumeDamageProp_eventBP_OnVolumeEnabledChanged_Parms), Z_Construct_UFunction_ASBZVolumeDamageProp_BP_OnVolumeEnabledChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVolumeDamageProp_BP_OnVolumeEnabledChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080804, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVolumeDamageProp_BP_OnVolumeEnabledChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVolumeDamageProp_BP_OnVolumeEnabledChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVolumeDamageProp_BP_OnVolumeEnabledChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVolumeDamageProp_BP_OnVolumeEnabledChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZVolumeDamageProp_Multicast_CollisionEnabled_Statics
	{
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZVolumeDamageProp_Multicast_CollisionEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((SBZVolumeDamageProp_eventMulticast_CollisionEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZVolumeDamageProp_Multicast_CollisionEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVolumeDamageProp_eventMulticast_CollisionEnabled_Parms), &Z_Construct_UFunction_ASBZVolumeDamageProp_Multicast_CollisionEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZVolumeDamageProp_Multicast_CollisionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVolumeDamageProp_Multicast_CollisionEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVolumeDamageProp_Multicast_CollisionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVolumeDamageProp_Multicast_CollisionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVolumeDamageProp, nullptr, "Multicast_CollisionEnabled", nullptr, nullptr, sizeof(SBZVolumeDamageProp_eventMulticast_CollisionEnabled_Parms), Z_Construct_UFunction_ASBZVolumeDamageProp_Multicast_CollisionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVolumeDamageProp_Multicast_CollisionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVolumeDamageProp_Multicast_CollisionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVolumeDamageProp_Multicast_CollisionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVolumeDamageProp_Multicast_CollisionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVolumeDamageProp_Multicast_CollisionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZVolumeDamageProp_OnRep_IsCollisionEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVolumeDamageProp_OnRep_IsCollisionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVolumeDamageProp_OnRep_IsCollisionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVolumeDamageProp, nullptr, "OnRep_IsCollisionEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVolumeDamageProp_OnRep_IsCollisionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVolumeDamageProp_OnRep_IsCollisionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVolumeDamageProp_OnRep_IsCollisionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVolumeDamageProp_OnRep_IsCollisionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeBeginOverlap_Statics
	{
		struct SBZVolumeDamageProp_eventOnVolumeBeginOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeDamageProp_eventOnVolumeBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeDamageProp_eventOnVolumeBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeBeginOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVolumeDamageProp, nullptr, "OnVolumeBeginOverlap", nullptr, nullptr, sizeof(SBZVolumeDamageProp_eventOnVolumeBeginOverlap_Parms), Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeCollisionChanged_Statics
	{
		struct SBZVolumeDamageProp_eventOnVolumeCollisionChanged_Parms
		{
			UPrimitiveComponent* ChangedComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChangedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeCollisionChanged_Statics::NewProp_ChangedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeCollisionChanged_Statics::NewProp_ChangedComponent = { "ChangedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeDamageProp_eventOnVolumeCollisionChanged_Parms, ChangedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeCollisionChanged_Statics::NewProp_ChangedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeCollisionChanged_Statics::NewProp_ChangedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeCollisionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeCollisionChanged_Statics::NewProp_ChangedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeCollisionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeCollisionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVolumeDamageProp, nullptr, "OnVolumeCollisionChanged", nullptr, nullptr, sizeof(SBZVolumeDamageProp_eventOnVolumeCollisionChanged_Parms), Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeCollisionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeCollisionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeCollisionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeCollisionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeCollisionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeCollisionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeEndOverlap_Statics
	{
		struct SBZVolumeDamageProp_eventOnVolumeEndOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeEndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeDamageProp_eventOnVolumeEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeDamageProp_eventOnVolumeEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeEndOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeEndOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVolumeDamageProp, nullptr, "OnVolumeEndOverlap", nullptr, nullptr, sizeof(SBZVolumeDamageProp_eventOnVolumeEndOverlap_Parms), Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled_Statics
	{
		struct SBZVolumeDamageProp_eventSetServerDamageEnabled_Parms
		{
			TScriptInterface<IAbilitySystemInterface> AbilitySystemScriptInterface;
			bool bIsEnabled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemScriptInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_AbilitySystemScriptInterface;
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled_Statics::NewProp_AbilitySystemScriptInterface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled_Statics::NewProp_AbilitySystemScriptInterface = { "AbilitySystemScriptInterface", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeDamageProp_eventSetServerDamageEnabled_Parms, AbilitySystemScriptInterface), Z_Construct_UClass_UAbilitySystemInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled_Statics::NewProp_AbilitySystemScriptInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled_Statics::NewProp_AbilitySystemScriptInterface_MetaData)) };
	void Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((SBZVolumeDamageProp_eventSetServerDamageEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVolumeDamageProp_eventSetServerDamageEnabled_Parms), &Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled_Statics::NewProp_AbilitySystemScriptInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVolumeDamageProp, nullptr, "SetServerDamageEnabled", nullptr, nullptr, sizeof(SBZVolumeDamageProp_eventSetServerDamageEnabled_Parms), Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZVolumeDamageProp_NoRegister()
	{
		return ASBZVolumeDamageProp::StaticClass();
	}
	struct Z_Construct_UClass_ASBZVolumeDamageProp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_VolumeSelector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectInnerLocationArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectInnerLocationArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EffectInnerLocationArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectInnerLocationArrayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectInnerLocationArrayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectInnerLocationCountName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectInnerLocationCountName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectBorderLocationArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectBorderLocationArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EffectBorderLocationArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectBorderLocationArrayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectBorderLocationArrayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectBorderLocationCountName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectBorderLocationCountName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDurationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectDurationName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEffectRotationSupported_MetaData[];
#endif
		static void NewProp_bIsEffectRotationSupported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEffectRotationSupported;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCollisionEnabled_MetaData[];
#endif
		static void NewProp_bIsCollisionEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCollisionEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZVolumeDamageProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZVolumeDamageProp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZVolumeDamageProp_BP_OnVolumeEnabledChanged, "BP_OnVolumeEnabledChanged" }, // 1465371784
		{ &Z_Construct_UFunction_ASBZVolumeDamageProp_Multicast_CollisionEnabled, "Multicast_CollisionEnabled" }, // 1239961852
		{ &Z_Construct_UFunction_ASBZVolumeDamageProp_OnRep_IsCollisionEnabled, "OnRep_IsCollisionEnabled" }, // 4118330380
		{ &Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeBeginOverlap, "OnVolumeBeginOverlap" }, // 2249297467
		{ &Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeCollisionChanged, "OnVolumeCollisionChanged" }, // 2812579749
		{ &Z_Construct_UFunction_ASBZVolumeDamageProp_OnVolumeEndOverlap, "OnVolumeEndOverlap" }, // 3123843899
		{ &Z_Construct_UFunction_ASBZVolumeDamageProp_SetServerDamageEnabled, "SetServerDamageEnabled" }, // 3608130472
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZVolumeDamageProp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZVolumeDamageProp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_VolumeSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeDamageProp" },
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_VolumeSelector = { "VolumeSelector", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZVolumeDamageProp, VolumeSelector), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_VolumeSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_VolumeSelector_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectInnerLocationArray_Inner = { "EffectInnerLocationArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectInnerLocationArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeDamageProp" },
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectInnerLocationArray = { "EffectInnerLocationArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZVolumeDamageProp, EffectInnerLocationArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectInnerLocationArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectInnerLocationArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectInnerLocationArrayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeDamageProp" },
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectInnerLocationArrayName = { "EffectInnerLocationArrayName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZVolumeDamageProp, EffectInnerLocationArrayName), METADATA_PARAMS(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectInnerLocationArrayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectInnerLocationArrayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectInnerLocationCountName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeDamageProp" },
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectInnerLocationCountName = { "EffectInnerLocationCountName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZVolumeDamageProp, EffectInnerLocationCountName), METADATA_PARAMS(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectInnerLocationCountName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectInnerLocationCountName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectBorderLocationArray_Inner = { "EffectBorderLocationArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectBorderLocationArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeDamageProp" },
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectBorderLocationArray = { "EffectBorderLocationArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZVolumeDamageProp, EffectBorderLocationArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectBorderLocationArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectBorderLocationArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectBorderLocationArrayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeDamageProp" },
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectBorderLocationArrayName = { "EffectBorderLocationArrayName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZVolumeDamageProp, EffectBorderLocationArrayName), METADATA_PARAMS(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectBorderLocationArrayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectBorderLocationArrayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectBorderLocationCountName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeDamageProp" },
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectBorderLocationCountName = { "EffectBorderLocationCountName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZVolumeDamageProp, EffectBorderLocationCountName), METADATA_PARAMS(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectBorderLocationCountName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectBorderLocationCountName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectDurationName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeDamageProp" },
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectDurationName = { "EffectDurationName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZVolumeDamageProp, EffectDurationName), METADATA_PARAMS(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectDurationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectDurationName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeDamageProp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectComponent = { "EffectComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZVolumeDamageProp, EffectComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeDamageProp" },
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectAsset = { "EffectAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZVolumeDamageProp, EffectAsset), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_bIsEffectRotationSupported_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeDamageProp" },
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	void Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_bIsEffectRotationSupported_SetBit(void* Obj)
	{
		((ASBZVolumeDamageProp*)Obj)->bIsEffectRotationSupported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_bIsEffectRotationSupported = { "bIsEffectRotationSupported", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZVolumeDamageProp), &Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_bIsEffectRotationSupported_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_bIsEffectRotationSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_bIsEffectRotationSupported_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_bIsCollisionEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeDamageProp" },
		{ "ModuleRelativePath", "Public/SBZVolumeDamageProp.h" },
	};
#endif
	void Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_bIsCollisionEnabled_SetBit(void* Obj)
	{
		((ASBZVolumeDamageProp*)Obj)->bIsCollisionEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_bIsCollisionEnabled = { "bIsCollisionEnabled", "OnRep_IsCollisionEnabled", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZVolumeDamageProp), &Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_bIsCollisionEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_bIsCollisionEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_bIsCollisionEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZVolumeDamageProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_VolumeSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectInnerLocationArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectInnerLocationArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectInnerLocationArrayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectInnerLocationCountName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectBorderLocationArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectBorderLocationArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectBorderLocationArrayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectBorderLocationCountName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectDurationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_EffectAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_bIsEffectRotationSupported,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZVolumeDamageProp_Statics::NewProp_bIsCollisionEnabled,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZVolumeDamageProp_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZVolumeDamageInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZVolumeDamageProp, ISBZVolumeDamageInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZVolumeDamageProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZVolumeDamageProp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZVolumeDamageProp_Statics::ClassParams = {
		&ASBZVolumeDamageProp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZVolumeDamageProp_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZVolumeDamageProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZVolumeDamageProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZVolumeDamageProp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZVolumeDamageProp, 291032326);
	template<> STARBREEZE_API UClass* StaticClass<ASBZVolumeDamageProp>()
	{
		return ASBZVolumeDamageProp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZVolumeDamageProp(Z_Construct_UClass_ASBZVolumeDamageProp, &ASBZVolumeDamageProp::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZVolumeDamageProp"), false, nullptr, nullptr, nullptr);

	void ASBZVolumeDamageProp::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsCollisionEnabled(TEXT("bIsCollisionEnabled"));

		const bool bIsValid = true
			&& Name_bIsCollisionEnabled == ClassReps[(int32)ENetFields_Private::bIsCollisionEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZVolumeDamageProp"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZVolumeDamageProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
