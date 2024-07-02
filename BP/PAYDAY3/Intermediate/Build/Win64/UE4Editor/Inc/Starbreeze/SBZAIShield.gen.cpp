// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIShield.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIShield() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIShield_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIShield();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIShieldAttributeSet_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIShield::execMulticast_ShieldBreak)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ShieldBreak_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIShield::execOnCharacterAnimEventActive)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_EventTag);
		P_GET_UBOOL(Z_Param_bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterAnimEventActive(Z_Param_Out_EventTag,Z_Param_bActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIShield::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIShield::execOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIShield::execOnPlayerEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerEndPlay(Z_Param_InActor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIShield::execOnRep_ShieldBreak)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ShieldBreak();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIShield::execOnShieldEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShieldEndPlay(Z_Param_InActor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	static FName NAME_USBZAIShield_Multicast_ShieldBreak = FName(TEXT("Multicast_ShieldBreak"));
	void USBZAIShield::Multicast_ShieldBreak()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZAIShield_Multicast_ShieldBreak),NULL);
	}
	void USBZAIShield::StaticRegisterNativesUSBZAIShield()
	{
		UClass* Class = USBZAIShield::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_ShieldBreak", &USBZAIShield::execMulticast_ShieldBreak },
			{ "OnCharacterAnimEventActive", &USBZAIShield::execOnCharacterAnimEventActive },
			{ "OnOverlapBegin", &USBZAIShield::execOnOverlapBegin },
			{ "OnOverlapEnd", &USBZAIShield::execOnOverlapEnd },
			{ "OnPlayerEndPlay", &USBZAIShield::execOnPlayerEndPlay },
			{ "OnRep_ShieldBreak", &USBZAIShield::execOnRep_ShieldBreak },
			{ "OnShieldEndPlay", &USBZAIShield::execOnShieldEndPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIShield_Multicast_ShieldBreak_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIShield_Multicast_ShieldBreak_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIShield_Multicast_ShieldBreak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIShield, nullptr, "Multicast_ShieldBreak", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIShield_Multicast_ShieldBreak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShield_Multicast_ShieldBreak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIShield_Multicast_ShieldBreak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIShield_Multicast_ShieldBreak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive_Statics
	{
		struct SBZAIShield_eventOnCharacterAnimEventActive_Parms
		{
			FGameplayTag EventTag;
			bool bActive;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive_Statics::NewProp_EventTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIShield_eventOnCharacterAnimEventActive_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive_Statics::NewProp_EventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive_Statics::NewProp_EventTag_MetaData)) };
	void Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((SBZAIShield_eventOnCharacterAnimEventActive_Parms*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIShield_eventOnCharacterAnimEventActive_Parms), &Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive_Statics::NewProp_EventTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive_Statics::NewProp_bActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIShield, nullptr, "OnCharacterAnimEventActive", nullptr, nullptr, sizeof(SBZAIShield_eventOnCharacterAnimEventActive_Parms), Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics
	{
		struct SBZAIShield_eventOnOverlapBegin_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIShield_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIShield_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIShield_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIShield_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SBZAIShield_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIShield_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIShield_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIShield, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(SBZAIShield_eventOnOverlapBegin_Parms), Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIShield_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIShield_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics
	{
		struct SBZAIShield_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIShield_eventOnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIShield_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIShield_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIShield_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIShield, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(SBZAIShield_eventOnOverlapEnd_Parms), Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIShield_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIShield_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIShield_OnPlayerEndPlay_Statics
	{
		struct SBZAIShield_eventOnPlayerEndPlay_Parms
		{
			AActor* InActor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIShield_OnPlayerEndPlay_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIShield_eventOnPlayerEndPlay_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIShield_OnPlayerEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIShield_eventOnPlayerEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIShield_OnPlayerEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIShield_OnPlayerEndPlay_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIShield_OnPlayerEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIShield_OnPlayerEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIShield_OnPlayerEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIShield, nullptr, "OnPlayerEndPlay", nullptr, nullptr, sizeof(SBZAIShield_eventOnPlayerEndPlay_Parms), Z_Construct_UFunction_USBZAIShield_OnPlayerEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShield_OnPlayerEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIShield_OnPlayerEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShield_OnPlayerEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIShield_OnPlayerEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIShield_OnPlayerEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIShield_OnRep_ShieldBreak_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIShield_OnRep_ShieldBreak_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIShield_OnRep_ShieldBreak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIShield, nullptr, "OnRep_ShieldBreak", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIShield_OnRep_ShieldBreak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShield_OnRep_ShieldBreak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIShield_OnRep_ShieldBreak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIShield_OnRep_ShieldBreak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIShield_OnShieldEndPlay_Statics
	{
		struct SBZAIShield_eventOnShieldEndPlay_Parms
		{
			AActor* InActor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIShield_OnShieldEndPlay_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIShield_eventOnShieldEndPlay_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIShield_OnShieldEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIShield_eventOnShieldEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIShield_OnShieldEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIShield_OnShieldEndPlay_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIShield_OnShieldEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIShield_OnShieldEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIShield_OnShieldEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIShield, nullptr, "OnShieldEndPlay", nullptr, nullptr, sizeof(SBZAIShield_eventOnShieldEndPlay_Parms), Z_Construct_UFunction_USBZAIShield_OnShieldEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShield_OnShieldEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIShield_OnShieldEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIShield_OnShieldEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIShield_OnShieldEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIShield_OnShieldEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIShield_NoRegister()
	{
		return USBZAIShield::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIShield_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisorArmor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisorArmor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldArmorHardness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShieldArmorHardness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisorArmorHardness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisorArmorHardness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontAttachSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FrontAttachSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackAttachSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BackAttachSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BreakEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BreakComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldAttributSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShieldAttributSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBroken_MetaData[];
#endif
		static void NewProp_bIsBroken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBroken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsIndestructible_MetaData[];
#endif
		static void NewProp_bIsIndestructible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsIndestructible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldVisor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShieldVisor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisorCPDIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VisorCPDIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisorCPDVal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisorCPDVal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisorDamageSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VisorDamageSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DedicatedServerAttachmentOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DedicatedServerAttachmentOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionBlockDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionBlockDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionBlockDot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionBlockDot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightConeWidthDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightConeWidthDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLightDirectionMinDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerLightDirectionMinDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponentSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NiagaraComponentSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectorShieldRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReflectorShieldRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMaterialEmissiveValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightMaterialEmissiveValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialOnOffCPDIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialOnOffCPDIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedCPDIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RedCPDIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenCPDIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GreenCPDIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueCPDIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlueCPDIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialEmissiveCPDIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialEmissiveCPDIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CurrentVisiblePlayerMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentVisiblePlayerMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVisiblePlayerMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CurrentVisiblePlayerMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIShield_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIShield_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIShield_Multicast_ShieldBreak, "Multicast_ShieldBreak" }, // 1376866031
		{ &Z_Construct_UFunction_USBZAIShield_OnCharacterAnimEventActive, "OnCharacterAnimEventActive" }, // 2145286382
		{ &Z_Construct_UFunction_USBZAIShield_OnOverlapBegin, "OnOverlapBegin" }, // 4020704455
		{ &Z_Construct_UFunction_USBZAIShield_OnOverlapEnd, "OnOverlapEnd" }, // 1949939267
		{ &Z_Construct_UFunction_USBZAIShield_OnPlayerEndPlay, "OnPlayerEndPlay" }, // 3266204183
		{ &Z_Construct_UFunction_USBZAIShield_OnRep_ShieldBreak, "OnRep_ShieldBreak" }, // 543730877
		{ &Z_Construct_UFunction_USBZAIShield_OnShieldEndPlay, "OnShieldEndPlay" }, // 532476894
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "SBZAIShield.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorArmor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorArmor = { "VisorArmor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(VisorArmor, USBZAIShield), STRUCT_OFFSET(USBZAIShield, VisorArmor), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorArmor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorArmor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_ShieldArmorHardness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_ShieldArmorHardness = { "ShieldArmorHardness", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ShieldArmorHardness, USBZAIShield), STRUCT_OFFSET(USBZAIShield, ShieldArmorHardness), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_ShieldArmorHardness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_ShieldArmorHardness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorArmorHardness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorArmorHardness = { "VisorArmorHardness", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(VisorArmorHardness, USBZAIShield), STRUCT_OFFSET(USBZAIShield, VisorArmorHardness), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorArmorHardness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorArmorHardness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_FrontAttachSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_FrontAttachSocketName = { "FrontAttachSocketName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, FrontAttachSocketName), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_FrontAttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_FrontAttachSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_BackAttachSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_BackAttachSocketName = { "BackAttachSocketName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, BackAttachSocketName), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_BackAttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_BackAttachSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_BreakEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_BreakEvent = { "BreakEvent", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, BreakEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_BreakEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_BreakEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_BreakComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_BreakComment = { "BreakComment", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, BreakComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_BreakComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_BreakComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_ShieldAttributSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_ShieldAttributSet = { "ShieldAttributSet", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, ShieldAttributSet), Z_Construct_UClass_USBZAIShieldAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_ShieldAttributSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_ShieldAttributSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_bIsBroken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIShield_Statics::NewProp_bIsBroken_SetBit(void* Obj)
	{
		((USBZAIShield*)Obj)->bIsBroken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_bIsBroken = { "bIsBroken", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIShield), &Z_Construct_UClass_USBZAIShield_Statics::NewProp_bIsBroken_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_bIsBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_bIsBroken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_bIsIndestructible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIShield_Statics::NewProp_bIsIndestructible_SetBit(void* Obj)
	{
		((USBZAIShield*)Obj)->bIsIndestructible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_bIsIndestructible = { "bIsIndestructible", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIShield), &Z_Construct_UClass_USBZAIShield_Statics::NewProp_bIsIndestructible_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_bIsIndestructible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_bIsIndestructible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_ShieldVisor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_ShieldVisor = { "ShieldVisor", nullptr, (EPropertyFlags)0x0040008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, ShieldVisor), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_ShieldVisor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_ShieldVisor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorCPDIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorCPDIndex = { "VisorCPDIndex", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, VisorCPDIndex), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorCPDIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorCPDIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorCPDVal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorCPDVal = { "VisorCPDVal", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, VisorCPDVal), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorCPDVal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorCPDVal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorDamageSteps_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorDamageSteps = { "VisorDamageSteps", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, VisorDamageSteps), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorDamageSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorDamageSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_DedicatedServerAttachmentOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_DedicatedServerAttachmentOffset = { "DedicatedServerAttachmentOffset", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, DedicatedServerAttachmentOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_DedicatedServerAttachmentOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_DedicatedServerAttachmentOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_ExplosionBlockDegrees_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_ExplosionBlockDegrees = { "ExplosionBlockDegrees", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, ExplosionBlockDegrees), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_ExplosionBlockDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_ExplosionBlockDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_ExplosionBlockDot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_ExplosionBlockDot = { "ExplosionBlockDot", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, ExplosionBlockDot), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_ExplosionBlockDot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_ExplosionBlockDot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightConeWidthDegrees_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightConeWidthDegrees = { "LightConeWidthDegrees", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, LightConeWidthDegrees), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightConeWidthDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightConeWidthDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_PlayerLightDirectionMinDegrees_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_PlayerLightDirectionMinDegrees = { "PlayerLightDirectionMinDegrees", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, PlayerLightDirectionMinDegrees), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_PlayerLightDirectionMinDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_PlayerLightDirectionMinDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_NiagaraComponentSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_NiagaraComponentSelector = { "NiagaraComponentSelector", nullptr, (EPropertyFlags)0x0040008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, NiagaraComponentSelector), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_NiagaraComponentSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_NiagaraComponentSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, LightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_ReflectorShieldRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_ReflectorShieldRadius = { "ReflectorShieldRadius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, ReflectorShieldRadius), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_ReflectorShieldRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_ReflectorShieldRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightMaterialEmissiveValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightMaterialEmissiveValue = { "LightMaterialEmissiveValue", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, LightMaterialEmissiveValue), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightMaterialEmissiveValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightMaterialEmissiveValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightLength = { "LightLength", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, LightLength), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightMaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightMaxDistance = { "LightMaxDistance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, LightMaxDistance), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_MaterialOnOffCPDIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_MaterialOnOffCPDIndex = { "MaterialOnOffCPDIndex", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, MaterialOnOffCPDIndex), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_MaterialOnOffCPDIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_MaterialOnOffCPDIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_RedCPDIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_RedCPDIndex = { "RedCPDIndex", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, RedCPDIndex), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_RedCPDIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_RedCPDIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_GreenCPDIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_GreenCPDIndex = { "GreenCPDIndex", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, GreenCPDIndex), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_GreenCPDIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_GreenCPDIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_BlueCPDIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_BlueCPDIndex = { "BlueCPDIndex", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, BlueCPDIndex), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_BlueCPDIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_BlueCPDIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_MaterialEmissiveCPDIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_MaterialEmissiveCPDIndex = { "MaterialEmissiveCPDIndex", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, MaterialEmissiveCPDIndex), METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_MaterialEmissiveCPDIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_MaterialEmissiveCPDIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_NiagaraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_NiagaraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_NiagaraComponent_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_CurrentVisiblePlayerMap_ValueProp = { "CurrentVisiblePlayerMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_CurrentVisiblePlayerMap_Key_KeyProp = { "CurrentVisiblePlayerMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShield_Statics::NewProp_CurrentVisiblePlayerMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShield" },
		{ "ModuleRelativePath", "Public/SBZAIShield.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZAIShield_Statics::NewProp_CurrentVisiblePlayerMap = { "CurrentVisiblePlayerMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIShield, CurrentVisiblePlayerMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::NewProp_CurrentVisiblePlayerMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::NewProp_CurrentVisiblePlayerMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIShield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorArmor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_ShieldArmorHardness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorArmorHardness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_FrontAttachSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_BackAttachSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_BreakEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_BreakComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_ShieldAttributSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_bIsBroken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_bIsIndestructible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_ShieldVisor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorCPDIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorCPDVal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_VisorDamageSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_DedicatedServerAttachmentOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_ExplosionBlockDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_ExplosionBlockDot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightConeWidthDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_PlayerLightDirectionMinDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_SphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_NiagaraComponentSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_ReflectorShieldRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightMaterialEmissiveValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_LightMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_MaterialOnOffCPDIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_RedCPDIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_GreenCPDIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_BlueCPDIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_MaterialEmissiveCPDIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_NiagaraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_CurrentVisiblePlayerMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_CurrentVisiblePlayerMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIShield_Statics::NewProp_CurrentVisiblePlayerMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIShield_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIShield>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIShield_Statics::ClassParams = {
		&USBZAIShield::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIShield_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIShield_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShield_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIShield()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIShield_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIShield, 2579337675);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIShield>()
	{
		return USBZAIShield::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIShield(Z_Construct_UClass_USBZAIShield, &USBZAIShield::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIShield"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIShield);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
