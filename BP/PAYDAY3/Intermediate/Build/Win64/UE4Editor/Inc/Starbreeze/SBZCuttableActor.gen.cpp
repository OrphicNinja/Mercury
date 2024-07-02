// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCuttableActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCuttableActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCuttableActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCuttableActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnCuttableActorCutComplete__DelegateSignature();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuttableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuttableSplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuttableInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBreakableInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZCuttableActor::execOnBoxBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBoxBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCuttableActor::execOnBoxEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBoxEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCuttableActor::execOnServerCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerCompleteInteraction(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCuttableActor::execPropDamageReached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PropDamageReached();
		P_NATIVE_END;
	}
	static FName NAME_ASBZCuttableActor_BP_OnCuttingEnabledChanged = FName(TEXT("BP_OnCuttingEnabledChanged"));
	void ASBZCuttableActor::BP_OnCuttingEnabledChanged(bool bCuttingEnabled)
	{
		SBZCuttableActor_eventBP_OnCuttingEnabledChanged_Parms Parms;
		Parms.bCuttingEnabled=bCuttingEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZCuttableActor_BP_OnCuttingEnabledChanged),&Parms);
	}
	static FName NAME_ASBZCuttableActor_OnCutCompleted = FName(TEXT("OnCutCompleted"));
	void ASBZCuttableActor::OnCutCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZCuttableActor_OnCutCompleted),NULL);
	}
	void ASBZCuttableActor::StaticRegisterNativesASBZCuttableActor()
	{
		UClass* Class = ASBZCuttableActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBoxBeginOverlap", &ASBZCuttableActor::execOnBoxBeginOverlap },
			{ "OnBoxEndOverlap", &ASBZCuttableActor::execOnBoxEndOverlap },
			{ "OnServerCompleteInteraction", &ASBZCuttableActor::execOnServerCompleteInteraction },
			{ "PropDamageReached", &ASBZCuttableActor::execPropDamageReached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZCuttableActor_BP_OnCuttingEnabledChanged_Statics
	{
		static void NewProp_bCuttingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCuttingEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZCuttableActor_BP_OnCuttingEnabledChanged_Statics::NewProp_bCuttingEnabled_SetBit(void* Obj)
	{
		((SBZCuttableActor_eventBP_OnCuttingEnabledChanged_Parms*)Obj)->bCuttingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCuttableActor_BP_OnCuttingEnabledChanged_Statics::NewProp_bCuttingEnabled = { "bCuttingEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCuttableActor_eventBP_OnCuttingEnabledChanged_Parms), &Z_Construct_UFunction_ASBZCuttableActor_BP_OnCuttingEnabledChanged_Statics::NewProp_bCuttingEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCuttableActor_BP_OnCuttingEnabledChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCuttableActor_BP_OnCuttingEnabledChanged_Statics::NewProp_bCuttingEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCuttableActor_BP_OnCuttingEnabledChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCuttableActor_BP_OnCuttingEnabledChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCuttableActor, nullptr, "BP_OnCuttingEnabledChanged", nullptr, nullptr, sizeof(SBZCuttableActor_eventBP_OnCuttingEnabledChanged_Parms), Z_Construct_UFunction_ASBZCuttableActor_BP_OnCuttingEnabledChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCuttableActor_BP_OnCuttingEnabledChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCuttableActor_BP_OnCuttingEnabledChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCuttableActor_BP_OnCuttingEnabledChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCuttableActor_BP_OnCuttingEnabledChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCuttableActor_BP_OnCuttingEnabledChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics
	{
		struct SBZCuttableActor_eventOnBoxBeginOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableActor_eventOnBoxBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableActor_eventOnBoxBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableActor_eventOnBoxBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableActor_eventOnBoxBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SBZCuttableActor_eventOnBoxBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCuttableActor_eventOnBoxBeginOverlap_Parms), &Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableActor_eventOnBoxBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCuttableActor, nullptr, "OnBoxBeginOverlap", nullptr, nullptr, sizeof(SBZCuttableActor_eventOnBoxBeginOverlap_Parms), Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics
	{
		struct SBZCuttableActor_eventOnBoxEndOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableActor_eventOnBoxEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableActor_eventOnBoxEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableActor_eventOnBoxEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableActor_eventOnBoxEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCuttableActor, nullptr, "OnBoxEndOverlap", nullptr, nullptr, sizeof(SBZCuttableActor_eventOnBoxEndOverlap_Parms), Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCuttableActor_OnCutCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCuttableActor_OnCutCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCuttableActor_OnCutCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCuttableActor, nullptr, "OnCutCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCuttableActor_OnCutCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCuttableActor_OnCutCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCuttableActor_OnCutCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCuttableActor_OnCutCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics
	{
		struct SBZCuttableActor_eventOnServerCompleteInteraction_Parms
		{
			USBZBaseInteractableComponent* Interactable;
			USBZInteractorComponent* Interactor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableActor_eventOnServerCompleteInteraction_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableActor_eventOnServerCompleteInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZCuttableActor_eventOnServerCompleteInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCuttableActor_eventOnServerCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCuttableActor, nullptr, "OnServerCompleteInteraction", nullptr, nullptr, sizeof(SBZCuttableActor_eventOnServerCompleteInteraction_Parms), Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCuttableActor_PropDamageReached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCuttableActor_PropDamageReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCuttableActor_PropDamageReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCuttableActor, nullptr, "PropDamageReached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCuttableActor_PropDamageReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCuttableActor_PropDamageReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCuttableActor_PropDamageReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCuttableActor_PropDamageReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZCuttableActor_NoRegister()
	{
		return ASBZCuttableActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZCuttableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCuttableActorCutComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCuttableActorCutComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuttableVFXComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CuttableVFXComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WholeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WholeMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CutMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutOutlineMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CutOutlineMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeltingMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeltingMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuttableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CuttableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuttableSplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CuttableSplineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuttableCollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CuttableCollisionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHinged_MetaData[];
#endif
		static void NewProp_bIsHinged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHinged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZCuttableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZCuttableActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZCuttableActor_BP_OnCuttingEnabledChanged, "BP_OnCuttingEnabledChanged" }, // 1887186291
		{ &Z_Construct_UFunction_ASBZCuttableActor_OnBoxBeginOverlap, "OnBoxBeginOverlap" }, // 695949124
		{ &Z_Construct_UFunction_ASBZCuttableActor_OnBoxEndOverlap, "OnBoxEndOverlap" }, // 3540535373
		{ &Z_Construct_UFunction_ASBZCuttableActor_OnCutCompleted, "OnCutCompleted" }, // 3912005909
		{ &Z_Construct_UFunction_ASBZCuttableActor_OnServerCompleteInteraction, "OnServerCompleteInteraction" }, // 3190096357
		{ &Z_Construct_UFunction_ASBZCuttableActor_PropDamageReached, "PropDamageReached" }, // 385045007
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttableActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCuttableActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_OnCuttableActorCutComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableActor" },
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_OnCuttableActorCutComplete = { "OnCuttableActorCutComplete", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttableActor, OnCuttableActorCutComplete), Z_Construct_UDelegateFunction_Starbreeze_SBZOnCuttableActorCutComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_OnCuttableActorCutComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_OnCuttableActorCutComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableVFXComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableVFXComponent = { "CuttableVFXComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttableActor, CuttableVFXComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableVFXComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableVFXComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_WholeMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_WholeMesh = { "WholeMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttableActor, WholeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_WholeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_WholeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CutMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CutMesh = { "CutMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttableActor, CutMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CutMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CutMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CutOutlineMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CutOutlineMesh = { "CutOutlineMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttableActor, CutOutlineMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CutOutlineMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CutOutlineMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_MeltingMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_MeltingMesh = { "MeltingMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttableActor, MeltingMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_MeltingMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_MeltingMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttableActor, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableComponent = { "CuttableComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttableActor, CuttableComponent), Z_Construct_UClass_USBZCuttableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableSplineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableSplineComponent = { "CuttableSplineComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttableActor, CuttableSplineComponent), Z_Construct_UClass_USBZCuttableSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableSplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableSplineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_MaterialInterface_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableActor" },
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttableActor, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_MaterialInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_MaterialInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_InteractableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttableActor, InteractableComponent), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_InteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_InteractableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableCollisionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableActor" },
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableCollisionComponent = { "CuttableCollisionComponent", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttableActor, CuttableCollisionComponent), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableCollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableCollisionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_bIsHinged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableActor" },
		{ "ModuleRelativePath", "Public/SBZCuttableActor.h" },
	};
#endif
	void Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_bIsHinged_SetBit(void* Obj)
	{
		((ASBZCuttableActor*)Obj)->bIsHinged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_bIsHinged = { "bIsHinged", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZCuttableActor), &Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_bIsHinged_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_bIsHinged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_bIsHinged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZCuttableActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_OnCuttableActorCutComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableVFXComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_WholeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CutMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CutOutlineMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_MeltingMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableSplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_MaterialInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_InteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_CuttableCollisionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttableActor_Statics::NewProp_bIsHinged,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZCuttableActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZCuttableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZCuttableActor, ISBZCuttableInterface), false },
			{ Z_Construct_UClass_USBZBreakableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZCuttableActor, ISBZBreakableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZCuttableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZCuttableActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZCuttableActor_Statics::ClassParams = {
		&ASBZCuttableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZCuttableActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttableActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZCuttableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZCuttableActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZCuttableActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZCuttableActor, 1967680178);
	template<> STARBREEZE_API UClass* StaticClass<ASBZCuttableActor>()
	{
		return ASBZCuttableActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZCuttableActor(Z_Construct_UClass_ASBZCuttableActor, &ASBZCuttableActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZCuttableActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZCuttableActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
