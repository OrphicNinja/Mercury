// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZKeypadBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZKeypadBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZKeypadBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZKeypadBase();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZModuleActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnCodeEntered__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCodeViewerSet();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZKeypadBase::execMulticast_StartRandomization)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StartRandomization_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZKeypadBase::execOnFocusChanged)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InteractableComp);
		P_GET_UBOOL(Z_Param_bInNewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFocusChanged(Z_Param_InteractableComp,Z_Param_bInNewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZKeypadBase::execOnKeypadPressed)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InteractableComp);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKeypadPressed(Z_Param_InteractableComp,Z_Param_Interactor,Z_Param_bIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZKeypadBase::execOnLanternCapsuleBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLanternCapsuleBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZKeypadBase::execOnLanternCapsuleEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLanternCapsuleEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZKeypadBase::execOnRep_GuessedCode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_GuessedCode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZKeypadBase::execOnRep_HasRandomized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HasRandomized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZKeypadBase::execOnRep_IsInteractable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsInteractable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZKeypadBase::execSetInteractionEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZKeypadBase::execStartRandomization)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRandomization();
		P_NATIVE_END;
	}
	static FName NAME_ASBZKeypadBase_BP_HandleLanternOverlapBegin = FName(TEXT("BP_HandleLanternOverlapBegin"));
	void ASBZKeypadBase::BP_HandleLanternOverlapBegin(TArray<AActor*> const& PlayerAttachedActors, USkeletalMeshComponent* PlayerMesh, FName SocketToAttach, FTransform SpawnTransform)
	{
		SBZKeypadBase_eventBP_HandleLanternOverlapBegin_Parms Parms;
		Parms.PlayerAttachedActors=PlayerAttachedActors;
		Parms.PlayerMesh=PlayerMesh;
		Parms.SocketToAttach=SocketToAttach;
		Parms.SpawnTransform=SpawnTransform;
		ProcessEvent(FindFunctionChecked(NAME_ASBZKeypadBase_BP_HandleLanternOverlapBegin),&Parms);
	}
	static FName NAME_ASBZKeypadBase_BP_HandleLanternOverlapEnd = FName(TEXT("BP_HandleLanternOverlapEnd"));
	void ASBZKeypadBase::BP_HandleLanternOverlapEnd(TArray<AActor*> const& PlayerAttachedActors)
	{
		SBZKeypadBase_eventBP_HandleLanternOverlapEnd_Parms Parms;
		Parms.PlayerAttachedActors=PlayerAttachedActors;
		ProcessEvent(FindFunctionChecked(NAME_ASBZKeypadBase_BP_HandleLanternOverlapEnd),&Parms);
	}
	static FName NAME_ASBZKeypadBase_BP_OnGuessedCodeChanged = FName(TEXT("BP_OnGuessedCodeChanged"));
	void ASBZKeypadBase::BP_OnGuessedCodeChanged(FText const& GuessedCodeText)
	{
		SBZKeypadBase_eventBP_OnGuessedCodeChanged_Parms Parms;
		Parms.GuessedCodeText=GuessedCodeText;
		ProcessEvent(FindFunctionChecked(NAME_ASBZKeypadBase_BP_OnGuessedCodeChanged),&Parms);
	}
	static FName NAME_ASBZKeypadBase_BP_OnKeypadFocusChanged = FName(TEXT("BP_OnKeypadFocusChanged"));
	void ASBZKeypadBase::BP_OnKeypadFocusChanged(const int32 KeyIndex, bool bInNewState)
	{
		SBZKeypadBase_eventBP_OnKeypadFocusChanged_Parms Parms;
		Parms.KeyIndex=KeyIndex;
		Parms.bInNewState=bInNewState ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZKeypadBase_BP_OnKeypadFocusChanged),&Parms);
	}
	static FName NAME_ASBZKeypadBase_BP_OnKeypadPressed = FName(TEXT("BP_OnKeypadPressed"));
	void ASBZKeypadBase::BP_OnKeypadPressed(const int32 KeyIndexPressed)
	{
		SBZKeypadBase_eventBP_OnKeypadPressed_Parms Parms;
		Parms.KeyIndexPressed=KeyIndexPressed;
		ProcessEvent(FindFunctionChecked(NAME_ASBZKeypadBase_BP_OnKeypadPressed),&Parms);
	}
	static FName NAME_ASBZKeypadBase_BP_UpdateHighlights = FName(TEXT("BP_UpdateHighlights"));
	void ASBZKeypadBase::BP_UpdateHighlights(TArray<int32> const& GeneratedCode)
	{
		SBZKeypadBase_eventBP_UpdateHighlights_Parms Parms;
		Parms.GeneratedCode=GeneratedCode;
		ProcessEvent(FindFunctionChecked(NAME_ASBZKeypadBase_BP_UpdateHighlights),&Parms);
	}
	static FName NAME_ASBZKeypadBase_Multicast_StartRandomization = FName(TEXT("Multicast_StartRandomization"));
	void ASBZKeypadBase::Multicast_StartRandomization()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZKeypadBase_Multicast_StartRandomization),NULL);
	}
	void ASBZKeypadBase::StaticRegisterNativesASBZKeypadBase()
	{
		UClass* Class = ASBZKeypadBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_StartRandomization", &ASBZKeypadBase::execMulticast_StartRandomization },
			{ "OnFocusChanged", &ASBZKeypadBase::execOnFocusChanged },
			{ "OnKeypadPressed", &ASBZKeypadBase::execOnKeypadPressed },
			{ "OnLanternCapsuleBeginOverlap", &ASBZKeypadBase::execOnLanternCapsuleBeginOverlap },
			{ "OnLanternCapsuleEndOverlap", &ASBZKeypadBase::execOnLanternCapsuleEndOverlap },
			{ "OnRep_GuessedCode", &ASBZKeypadBase::execOnRep_GuessedCode },
			{ "OnRep_HasRandomized", &ASBZKeypadBase::execOnRep_HasRandomized },
			{ "OnRep_IsInteractable", &ASBZKeypadBase::execOnRep_IsInteractable },
			{ "SetInteractionEnabled", &ASBZKeypadBase::execSetInteractionEnabled },
			{ "StartRandomization", &ASBZKeypadBase::execStartRandomization },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerAttachedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerAttachedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerAttachedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerMesh;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketToAttach;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::NewProp_PlayerAttachedActors_Inner = { "PlayerAttachedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::NewProp_PlayerAttachedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::NewProp_PlayerAttachedActors = { "PlayerAttachedActors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventBP_HandleLanternOverlapBegin_Parms, PlayerAttachedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::NewProp_PlayerAttachedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::NewProp_PlayerAttachedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::NewProp_PlayerMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::NewProp_PlayerMesh = { "PlayerMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventBP_HandleLanternOverlapBegin_Parms, PlayerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::NewProp_PlayerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::NewProp_PlayerMesh_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::NewProp_SocketToAttach = { "SocketToAttach", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventBP_HandleLanternOverlapBegin_Parms, SocketToAttach), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventBP_HandleLanternOverlapBegin_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::NewProp_PlayerAttachedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::NewProp_PlayerAttachedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::NewProp_PlayerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::NewProp_SocketToAttach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::NewProp_SpawnTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKeypadBase, nullptr, "BP_HandleLanternOverlapBegin", nullptr, nullptr, sizeof(SBZKeypadBase_eventBP_HandleLanternOverlapBegin_Parms), Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC80808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapEnd_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerAttachedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerAttachedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerAttachedActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapEnd_Statics::NewProp_PlayerAttachedActors_Inner = { "PlayerAttachedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapEnd_Statics::NewProp_PlayerAttachedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapEnd_Statics::NewProp_PlayerAttachedActors = { "PlayerAttachedActors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventBP_HandleLanternOverlapEnd_Parms, PlayerAttachedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapEnd_Statics::NewProp_PlayerAttachedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapEnd_Statics::NewProp_PlayerAttachedActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapEnd_Statics::NewProp_PlayerAttachedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapEnd_Statics::NewProp_PlayerAttachedActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKeypadBase, nullptr, "BP_HandleLanternOverlapEnd", nullptr, nullptr, sizeof(SBZKeypadBase_eventBP_HandleLanternOverlapEnd_Parms), Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKeypadBase_BP_OnGuessedCodeChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuessedCodeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_GuessedCodeText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_BP_OnGuessedCodeChanged_Statics::NewProp_GuessedCodeText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ASBZKeypadBase_BP_OnGuessedCodeChanged_Statics::NewProp_GuessedCodeText = { "GuessedCodeText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventBP_OnGuessedCodeChanged_Parms, GuessedCodeText), METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_BP_OnGuessedCodeChanged_Statics::NewProp_GuessedCodeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_OnGuessedCodeChanged_Statics::NewProp_GuessedCodeText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZKeypadBase_BP_OnGuessedCodeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_BP_OnGuessedCodeChanged_Statics::NewProp_GuessedCodeText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_BP_OnGuessedCodeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKeypadBase_BP_OnGuessedCodeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKeypadBase, nullptr, "BP_OnGuessedCodeChanged", nullptr, nullptr, sizeof(SBZKeypadBase_eventBP_OnGuessedCodeChanged_Parms), Z_Construct_UFunction_ASBZKeypadBase_BP_OnGuessedCodeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_OnGuessedCodeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_BP_OnGuessedCodeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_OnGuessedCodeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKeypadBase_BP_OnGuessedCodeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKeypadBase_BP_OnGuessedCodeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KeyIndex;
		static void NewProp_bInNewState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInNewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged_Statics::NewProp_KeyIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged_Statics::NewProp_KeyIndex = { "KeyIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventBP_OnKeypadFocusChanged_Parms, KeyIndex), METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged_Statics::NewProp_KeyIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged_Statics::NewProp_KeyIndex_MetaData)) };
	void Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged_Statics::NewProp_bInNewState_SetBit(void* Obj)
	{
		((SBZKeypadBase_eventBP_OnKeypadFocusChanged_Parms*)Obj)->bInNewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged_Statics::NewProp_bInNewState = { "bInNewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZKeypadBase_eventBP_OnKeypadFocusChanged_Parms), &Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged_Statics::NewProp_bInNewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged_Statics::NewProp_KeyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged_Statics::NewProp_bInNewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKeypadBase, nullptr, "BP_OnKeypadFocusChanged", nullptr, nullptr, sizeof(SBZKeypadBase_eventBP_OnKeypadFocusChanged_Parms), Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyIndexPressed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KeyIndexPressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadPressed_Statics::NewProp_KeyIndexPressed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadPressed_Statics::NewProp_KeyIndexPressed = { "KeyIndexPressed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventBP_OnKeypadPressed_Parms, KeyIndexPressed), METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadPressed_Statics::NewProp_KeyIndexPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadPressed_Statics::NewProp_KeyIndexPressed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadPressed_Statics::NewProp_KeyIndexPressed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKeypadBase, nullptr, "BP_OnKeypadPressed", nullptr, nullptr, sizeof(SBZKeypadBase_eventBP_OnKeypadPressed_Parms), Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKeypadBase_BP_UpdateHighlights_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GeneratedCode_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GeneratedCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZKeypadBase_BP_UpdateHighlights_Statics::NewProp_GeneratedCode_Inner = { "GeneratedCode", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_BP_UpdateHighlights_Statics::NewProp_GeneratedCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZKeypadBase_BP_UpdateHighlights_Statics::NewProp_GeneratedCode = { "GeneratedCode", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventBP_UpdateHighlights_Parms, GeneratedCode), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_BP_UpdateHighlights_Statics::NewProp_GeneratedCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_UpdateHighlights_Statics::NewProp_GeneratedCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZKeypadBase_BP_UpdateHighlights_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_BP_UpdateHighlights_Statics::NewProp_GeneratedCode_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_BP_UpdateHighlights_Statics::NewProp_GeneratedCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_BP_UpdateHighlights_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKeypadBase_BP_UpdateHighlights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKeypadBase, nullptr, "BP_UpdateHighlights", nullptr, nullptr, sizeof(SBZKeypadBase_eventBP_UpdateHighlights_Parms), Z_Construct_UFunction_ASBZKeypadBase_BP_UpdateHighlights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_UpdateHighlights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_BP_UpdateHighlights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_BP_UpdateHighlights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKeypadBase_BP_UpdateHighlights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKeypadBase_BP_UpdateHighlights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKeypadBase_Multicast_StartRandomization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_Multicast_StartRandomization_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKeypadBase_Multicast_StartRandomization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKeypadBase, nullptr, "Multicast_StartRandomization", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_Multicast_StartRandomization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_Multicast_StartRandomization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKeypadBase_Multicast_StartRandomization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKeypadBase_Multicast_StartRandomization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged_Statics
	{
		struct SBZKeypadBase_eventOnFocusChanged_Parms
		{
			const USBZBaseInteractableComponent* InteractableComp;
			bool bInNewState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComp;
		static void NewProp_bInNewState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInNewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged_Statics::NewProp_InteractableComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged_Statics::NewProp_InteractableComp = { "InteractableComp", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventOnFocusChanged_Parms, InteractableComp), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged_Statics::NewProp_InteractableComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged_Statics::NewProp_InteractableComp_MetaData)) };
	void Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged_Statics::NewProp_bInNewState_SetBit(void* Obj)
	{
		((SBZKeypadBase_eventOnFocusChanged_Parms*)Obj)->bInNewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged_Statics::NewProp_bInNewState = { "bInNewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZKeypadBase_eventOnFocusChanged_Parms), &Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged_Statics::NewProp_bInNewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged_Statics::NewProp_InteractableComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged_Statics::NewProp_bInNewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKeypadBase, nullptr, "OnFocusChanged", nullptr, nullptr, sizeof(SBZKeypadBase_eventOnFocusChanged_Parms), Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics
	{
		struct SBZKeypadBase_eventOnKeypadPressed_Parms
		{
			USBZBaseInteractableComponent* InteractableComp;
			USBZInteractorComponent* Interactor;
			bool bIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::NewProp_InteractableComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::NewProp_InteractableComp = { "InteractableComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventOnKeypadPressed_Parms, InteractableComp), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::NewProp_InteractableComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::NewProp_InteractableComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventOnKeypadPressed_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::NewProp_bIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZKeypadBase_eventOnKeypadPressed_Parms*)Obj)->bIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::NewProp_bIsLocallyControlled = { "bIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZKeypadBase_eventOnKeypadPressed_Parms), &Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::NewProp_bIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::NewProp_InteractableComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::NewProp_bIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKeypadBase, nullptr, "OnKeypadPressed", nullptr, nullptr, sizeof(SBZKeypadBase_eventOnKeypadPressed_Parms), Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics
	{
		struct SBZKeypadBase_eventOnLanternCapsuleBeginOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventOnLanternCapsuleBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventOnLanternCapsuleBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventOnLanternCapsuleBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventOnLanternCapsuleBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SBZKeypadBase_eventOnLanternCapsuleBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZKeypadBase_eventOnLanternCapsuleBeginOverlap_Parms), &Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventOnLanternCapsuleBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKeypadBase, nullptr, "OnLanternCapsuleBeginOverlap", nullptr, nullptr, sizeof(SBZKeypadBase_eventOnLanternCapsuleBeginOverlap_Parms), Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics
	{
		struct SBZKeypadBase_eventOnLanternCapsuleEndOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventOnLanternCapsuleEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventOnLanternCapsuleEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventOnLanternCapsuleEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKeypadBase_eventOnLanternCapsuleEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKeypadBase, nullptr, "OnLanternCapsuleEndOverlap", nullptr, nullptr, sizeof(SBZKeypadBase_eventOnLanternCapsuleEndOverlap_Parms), Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKeypadBase_OnRep_GuessedCode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_OnRep_GuessedCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKeypadBase_OnRep_GuessedCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKeypadBase, nullptr, "OnRep_GuessedCode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_OnRep_GuessedCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnRep_GuessedCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKeypadBase_OnRep_GuessedCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKeypadBase_OnRep_GuessedCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKeypadBase_OnRep_HasRandomized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_OnRep_HasRandomized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKeypadBase_OnRep_HasRandomized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKeypadBase, nullptr, "OnRep_HasRandomized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_OnRep_HasRandomized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnRep_HasRandomized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKeypadBase_OnRep_HasRandomized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKeypadBase_OnRep_HasRandomized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKeypadBase_OnRep_IsInteractable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_OnRep_IsInteractable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKeypadBase_OnRep_IsInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKeypadBase, nullptr, "OnRep_IsInteractable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_OnRep_IsInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_OnRep_IsInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKeypadBase_OnRep_IsInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKeypadBase_OnRep_IsInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKeypadBase_SetInteractionEnabled_Statics
	{
		struct SBZKeypadBase_eventSetInteractionEnabled_Parms
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
	void Z_Construct_UFunction_ASBZKeypadBase_SetInteractionEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZKeypadBase_eventSetInteractionEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZKeypadBase_SetInteractionEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZKeypadBase_eventSetInteractionEnabled_Parms), &Z_Construct_UFunction_ASBZKeypadBase_SetInteractionEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZKeypadBase_SetInteractionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZKeypadBase_SetInteractionEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_SetInteractionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKeypadBase_SetInteractionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKeypadBase, nullptr, "SetInteractionEnabled", nullptr, nullptr, sizeof(SBZKeypadBase_eventSetInteractionEnabled_Parms), Z_Construct_UFunction_ASBZKeypadBase_SetInteractionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_SetInteractionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_SetInteractionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_SetInteractionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKeypadBase_SetInteractionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKeypadBase_SetInteractionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZKeypadBase_StartRandomization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZKeypadBase_StartRandomization_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZKeypadBase_StartRandomization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZKeypadBase, nullptr, "StartRandomization", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZKeypadBase_StartRandomization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZKeypadBase_StartRandomization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZKeypadBase_StartRandomization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZKeypadBase_StartRandomization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZKeypadBase_NoRegister()
	{
		return ASBZKeypadBase::StaticClass();
	}
	struct Z_Construct_UClass_ASBZKeypadBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCodeCorrect_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCodeCorrect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCodeIncorrect_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCodeIncorrect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuessedCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GuessedCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Inputs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeypadInteractableComponentArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeypadInteractableComponentArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeypadInteractableComponentArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeypadInteractableComponentArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseKeypadMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseKeypadMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CodeWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CodeWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LanternCapsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LanternCapsule;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PossibleCodeViewerSets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PossibleCodeViewerSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PossibleCodeViewerSets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInteractable_MetaData[];
#endif
		static void NewProp_bIsInteractable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncorrectCodeWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IncorrectCodeWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomizeOnBeginPlay_MetaData[];
#endif
		static void NewProp_bRandomizeOnBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomizeOnBeginPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasRandomized_MetaData[];
#endif
		static void NewProp_bHasRandomized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasRandomized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZKeypadBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZModuleActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZKeypadBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapBegin, "BP_HandleLanternOverlapBegin" }, // 771076770
		{ &Z_Construct_UFunction_ASBZKeypadBase_BP_HandleLanternOverlapEnd, "BP_HandleLanternOverlapEnd" }, // 2182968399
		{ &Z_Construct_UFunction_ASBZKeypadBase_BP_OnGuessedCodeChanged, "BP_OnGuessedCodeChanged" }, // 3399382901
		{ &Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadFocusChanged, "BP_OnKeypadFocusChanged" }, // 3310981981
		{ &Z_Construct_UFunction_ASBZKeypadBase_BP_OnKeypadPressed, "BP_OnKeypadPressed" }, // 3439873773
		{ &Z_Construct_UFunction_ASBZKeypadBase_BP_UpdateHighlights, "BP_UpdateHighlights" }, // 847759630
		{ &Z_Construct_UFunction_ASBZKeypadBase_Multicast_StartRandomization, "Multicast_StartRandomization" }, // 1475135829
		{ &Z_Construct_UFunction_ASBZKeypadBase_OnFocusChanged, "OnFocusChanged" }, // 61094851
		{ &Z_Construct_UFunction_ASBZKeypadBase_OnKeypadPressed, "OnKeypadPressed" }, // 146601277
		{ &Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleBeginOverlap, "OnLanternCapsuleBeginOverlap" }, // 745772421
		{ &Z_Construct_UFunction_ASBZKeypadBase_OnLanternCapsuleEndOverlap, "OnLanternCapsuleEndOverlap" }, // 2468270839
		{ &Z_Construct_UFunction_ASBZKeypadBase_OnRep_GuessedCode, "OnRep_GuessedCode" }, // 1219483121
		{ &Z_Construct_UFunction_ASBZKeypadBase_OnRep_HasRandomized, "OnRep_HasRandomized" }, // 1745845750
		{ &Z_Construct_UFunction_ASBZKeypadBase_OnRep_IsInteractable, "OnRep_IsInteractable" }, // 3326093102
		{ &Z_Construct_UFunction_ASBZKeypadBase_SetInteractionEnabled, "SetInteractionEnabled" }, // 1949504502
		{ &Z_Construct_UFunction_ASBZKeypadBase_StartRandomization, "StartRandomization" }, // 4187488686
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKeypadBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZKeypadBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_OnCodeCorrect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeypadBase" },
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_OnCodeCorrect = { "OnCodeCorrect", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZKeypadBase, OnCodeCorrect), Z_Construct_UDelegateFunction_Starbreeze_SBZOnCodeEntered__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_OnCodeCorrect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_OnCodeCorrect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_OnCodeIncorrect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeypadBase" },
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_OnCodeIncorrect = { "OnCodeIncorrect", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZKeypadBase, OnCodeIncorrect), Z_Construct_UDelegateFunction_Starbreeze_SBZOnCodeEntered__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_OnCodeIncorrect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_OnCodeIncorrect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_GuessedCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeypadBase" },
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_GuessedCode = { "GuessedCode", "OnRep_GuessedCode", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZKeypadBase, GuessedCode), METADATA_PARAMS(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_GuessedCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_GuessedCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_Inputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeypadBase" },
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZKeypadBase, Inputs), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_Inputs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_KeypadInteractableComponentArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeypadBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_KeypadInteractableComponentArray_Inner = { "KeypadInteractableComponentArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_KeypadInteractableComponentArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_KeypadInteractableComponentArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_KeypadInteractableComponentArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeypadBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_KeypadInteractableComponentArray = { "KeypadInteractableComponentArray", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZKeypadBase, KeypadInteractableComponentArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_KeypadInteractableComponentArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_KeypadInteractableComponentArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_BaseKeypadMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeypadBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_BaseKeypadMesh = { "BaseKeypadMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZKeypadBase, BaseKeypadMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_BaseKeypadMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_BaseKeypadMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_CodeWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeypadBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_CodeWidget = { "CodeWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZKeypadBase, CodeWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_CodeWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_CodeWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_LanternCapsule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeypadBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_LanternCapsule = { "LanternCapsule", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZKeypadBase, LanternCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_LanternCapsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_LanternCapsule_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_PossibleCodeViewerSets_Inner = { "PossibleCodeViewerSets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCodeViewerSet, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_PossibleCodeViewerSets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeypadBase" },
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_PossibleCodeViewerSets = { "PossibleCodeViewerSets", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZKeypadBase, PossibleCodeViewerSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_PossibleCodeViewerSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_PossibleCodeViewerSets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bIsInteractable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeypadBase" },
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bIsInteractable_SetBit(void* Obj)
	{
		((ASBZKeypadBase*)Obj)->bIsInteractable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bIsInteractable = { "bIsInteractable", "OnRep_IsInteractable", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZKeypadBase), &Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bIsInteractable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bIsInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bIsInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_IncorrectCodeWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeypadBase" },
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_IncorrectCodeWaitTime = { "IncorrectCodeWaitTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZKeypadBase, IncorrectCodeWaitTime), METADATA_PARAMS(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_IncorrectCodeWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_IncorrectCodeWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_ButtonSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeypadBase" },
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_ButtonSoundEvent = { "ButtonSoundEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZKeypadBase, ButtonSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_ButtonSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_ButtonSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_Code_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeypadBase" },
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZKeypadBase, Code), METADATA_PARAMS(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeypadBase" },
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZKeypadBase, Seed), METADATA_PARAMS(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bRandomizeOnBeginPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeypadBase" },
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bRandomizeOnBeginPlay_SetBit(void* Obj)
	{
		((ASBZKeypadBase*)Obj)->bRandomizeOnBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bRandomizeOnBeginPlay = { "bRandomizeOnBeginPlay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZKeypadBase), &Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bRandomizeOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bRandomizeOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bRandomizeOnBeginPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bHasRandomized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeypadBase" },
		{ "ModuleRelativePath", "Public/SBZKeypadBase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bHasRandomized_SetBit(void* Obj)
	{
		((ASBZKeypadBase*)Obj)->bHasRandomized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bHasRandomized = { "bHasRandomized", "OnRep_HasRandomized", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZKeypadBase), &Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bHasRandomized_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bHasRandomized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bHasRandomized_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZKeypadBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_OnCodeCorrect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_OnCodeIncorrect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_GuessedCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_Inputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_KeypadInteractableComponentArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_KeypadInteractableComponentArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_BaseKeypadMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_CodeWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_LanternCapsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_PossibleCodeViewerSets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_PossibleCodeViewerSets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bIsInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_IncorrectCodeWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_ButtonSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_Code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bRandomizeOnBeginPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZKeypadBase_Statics::NewProp_bHasRandomized,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZKeypadBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZKeypadBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZKeypadBase_Statics::ClassParams = {
		&ASBZKeypadBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZKeypadBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZKeypadBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZKeypadBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZKeypadBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZKeypadBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZKeypadBase, 2287545965);
	template<> STARBREEZE_API UClass* StaticClass<ASBZKeypadBase>()
	{
		return ASBZKeypadBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZKeypadBase(Z_Construct_UClass_ASBZKeypadBase, &ASBZKeypadBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZKeypadBase"), false, nullptr, nullptr, nullptr);

	void ASBZKeypadBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_GuessedCode(TEXT("GuessedCode"));
		static const FName Name_Inputs(TEXT("Inputs"));
		static const FName Name_bIsInteractable(TEXT("bIsInteractable"));
		static const FName Name_bHasRandomized(TEXT("bHasRandomized"));

		const bool bIsValid = true
			&& Name_GuessedCode == ClassReps[(int32)ENetFields_Private::GuessedCode].Property->GetFName()
			&& Name_Inputs == ClassReps[(int32)ENetFields_Private::Inputs].Property->GetFName()
			&& Name_bIsInteractable == ClassReps[(int32)ENetFields_Private::bIsInteractable].Property->GetFName()
			&& Name_bHasRandomized == ClassReps[(int32)ENetFields_Private::bHasRandomized].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZKeypadBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZKeypadBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
