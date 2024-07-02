// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOutlineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOutlineComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
// End Cross Module References
	DEFINE_FUNCTION(USBZOutlineComponent::execAddMesh)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_Mesh);
		P_GET_UBOOL(Z_Param_bAddToSelectorsIfUninitialized);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMesh(Z_Param_Mesh,Z_Param_bAddToSelectorsIfUninitialized);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOutlineComponent::execHandleInteractionEnabledStateChanged)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InteractableComponent);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInteractionEnabledStateChanged(Z_Param_InteractableComponent,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOutlineComponent::execHandleInteractionFocusChanged)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InteractableComponent);
		P_GET_UBOOL(Z_Param_bInFocus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInteractionFocusChanged(Z_Param_InteractableComponent,Z_Param_bInFocus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOutlineComponent::execMulticast_SetActiveReplicated)
	{
		P_GET_OBJECT(USBZOutlineAsset,Z_Param_NewActiveReplicated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetActiveReplicated_Implementation(Z_Param_NewActiveReplicated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOutlineComponent::execMulticast_SetReplicatedHidden)
	{
		P_GET_UBOOL(Z_Param_bInIsReplicatedHidden);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetReplicatedHidden_Implementation(Z_Param_bInIsReplicatedHidden);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOutlineComponent::execOnRep_ActiveReplicated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ActiveReplicated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOutlineComponent::execOnRep_IsReplicatedHidden)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsReplicatedHidden();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOutlineComponent::execRemoveMesh)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_Mesh);
		P_GET_UBOOL(Z_Param_bRemoveFromSelectorsIfUninitialized);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMesh(Z_Param_Mesh,Z_Param_bRemoveFromSelectorsIfUninitialized);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOutlineComponent::execSetGloballyHideAllOutlines)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOutlineComponent::SetGloballyHideAllOutlines(Z_Param_WorldContextObject,Z_Param_bVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOutlineComponent::execSetReplicatedHidden)
	{
		P_GET_UBOOL(Z_Param_bInIsReplicatedHidden);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReplicatedHidden(Z_Param_bInIsReplicatedHidden);
		P_NATIVE_END;
	}
	static FName NAME_USBZOutlineComponent_Multicast_SetActiveReplicated = FName(TEXT("Multicast_SetActiveReplicated"));
	void USBZOutlineComponent::Multicast_SetActiveReplicated(USBZOutlineAsset* NewActiveReplicated)
	{
		SBZOutlineComponent_eventMulticast_SetActiveReplicated_Parms Parms;
		Parms.NewActiveReplicated=NewActiveReplicated;
		ProcessEvent(FindFunctionChecked(NAME_USBZOutlineComponent_Multicast_SetActiveReplicated),&Parms);
	}
	static FName NAME_USBZOutlineComponent_Multicast_SetReplicatedHidden = FName(TEXT("Multicast_SetReplicatedHidden"));
	void USBZOutlineComponent::Multicast_SetReplicatedHidden(bool bInIsReplicatedHidden)
	{
		SBZOutlineComponent_eventMulticast_SetReplicatedHidden_Parms Parms;
		Parms.bInIsReplicatedHidden=bInIsReplicatedHidden ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZOutlineComponent_Multicast_SetReplicatedHidden),&Parms);
	}
	void USBZOutlineComponent::StaticRegisterNativesUSBZOutlineComponent()
	{
		UClass* Class = USBZOutlineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMesh", &USBZOutlineComponent::execAddMesh },
			{ "HandleInteractionEnabledStateChanged", &USBZOutlineComponent::execHandleInteractionEnabledStateChanged },
			{ "HandleInteractionFocusChanged", &USBZOutlineComponent::execHandleInteractionFocusChanged },
			{ "Multicast_SetActiveReplicated", &USBZOutlineComponent::execMulticast_SetActiveReplicated },
			{ "Multicast_SetReplicatedHidden", &USBZOutlineComponent::execMulticast_SetReplicatedHidden },
			{ "OnRep_ActiveReplicated", &USBZOutlineComponent::execOnRep_ActiveReplicated },
			{ "OnRep_IsReplicatedHidden", &USBZOutlineComponent::execOnRep_IsReplicatedHidden },
			{ "RemoveMesh", &USBZOutlineComponent::execRemoveMesh },
			{ "SetGloballyHideAllOutlines", &USBZOutlineComponent::execSetGloballyHideAllOutlines },
			{ "SetReplicatedHidden", &USBZOutlineComponent::execSetReplicatedHidden },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZOutlineComponent_AddMesh_Statics
	{
		struct SBZOutlineComponent_eventAddMesh_Parms
		{
			UMeshComponent* Mesh;
			bool bAddToSelectorsIfUninitialized;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static void NewProp_bAddToSelectorsIfUninitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToSelectorsIfUninitialized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOutlineComponent_AddMesh_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOutlineComponent_AddMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOutlineComponent_eventAddMesh_Parms, Mesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOutlineComponent_AddMesh_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_AddMesh_Statics::NewProp_Mesh_MetaData)) };
	void Z_Construct_UFunction_USBZOutlineComponent_AddMesh_Statics::NewProp_bAddToSelectorsIfUninitialized_SetBit(void* Obj)
	{
		((SBZOutlineComponent_eventAddMesh_Parms*)Obj)->bAddToSelectorsIfUninitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOutlineComponent_AddMesh_Statics::NewProp_bAddToSelectorsIfUninitialized = { "bAddToSelectorsIfUninitialized", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOutlineComponent_eventAddMesh_Parms), &Z_Construct_UFunction_USBZOutlineComponent_AddMesh_Statics::NewProp_bAddToSelectorsIfUninitialized_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOutlineComponent_AddMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOutlineComponent_AddMesh_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOutlineComponent_AddMesh_Statics::NewProp_bAddToSelectorsIfUninitialized,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOutlineComponent_AddMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOutlineComponent_AddMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOutlineComponent, nullptr, "AddMesh", nullptr, nullptr, sizeof(SBZOutlineComponent_eventAddMesh_Parms), Z_Construct_UFunction_USBZOutlineComponent_AddMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_AddMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOutlineComponent_AddMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_AddMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOutlineComponent_AddMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOutlineComponent_AddMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged_Statics
	{
		struct SBZOutlineComponent_eventHandleInteractionEnabledStateChanged_Parms
		{
			const USBZBaseInteractableComponent* InteractableComponent;
			bool bEnabled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOutlineComponent_eventHandleInteractionEnabledStateChanged_Parms, InteractableComponent), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent_MetaData)) };
	void Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZOutlineComponent_eventHandleInteractionEnabledStateChanged_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOutlineComponent_eventHandleInteractionEnabledStateChanged_Parms), &Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged_Statics::NewProp_InteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOutlineComponent, nullptr, "HandleInteractionEnabledStateChanged", nullptr, nullptr, sizeof(SBZOutlineComponent_eventHandleInteractionEnabledStateChanged_Parms), Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged_Statics
	{
		struct SBZOutlineComponent_eventHandleInteractionFocusChanged_Parms
		{
			const USBZBaseInteractableComponent* InteractableComponent;
			bool bInFocus;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
		static void NewProp_bInFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged_Statics::NewProp_InteractableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOutlineComponent_eventHandleInteractionFocusChanged_Parms, InteractableComponent), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged_Statics::NewProp_InteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged_Statics::NewProp_InteractableComponent_MetaData)) };
	void Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged_Statics::NewProp_bInFocus_SetBit(void* Obj)
	{
		((SBZOutlineComponent_eventHandleInteractionFocusChanged_Parms*)Obj)->bInFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged_Statics::NewProp_bInFocus = { "bInFocus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOutlineComponent_eventHandleInteractionFocusChanged_Parms), &Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged_Statics::NewProp_bInFocus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged_Statics::NewProp_InteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged_Statics::NewProp_bInFocus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOutlineComponent, nullptr, "HandleInteractionFocusChanged", nullptr, nullptr, sizeof(SBZOutlineComponent_eventHandleInteractionFocusChanged_Parms), Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetActiveReplicated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewActiveReplicated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetActiveReplicated_Statics::NewProp_NewActiveReplicated = { "NewActiveReplicated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOutlineComponent_eventMulticast_SetActiveReplicated_Parms, NewActiveReplicated), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetActiveReplicated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetActiveReplicated_Statics::NewProp_NewActiveReplicated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetActiveReplicated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetActiveReplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOutlineComponent, nullptr, "Multicast_SetActiveReplicated", nullptr, nullptr, sizeof(SBZOutlineComponent_eventMulticast_SetActiveReplicated_Parms), Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetActiveReplicated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetActiveReplicated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetActiveReplicated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetActiveReplicated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetActiveReplicated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetActiveReplicated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetReplicatedHidden_Statics
	{
		static void NewProp_bInIsReplicatedHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsReplicatedHidden;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetReplicatedHidden_Statics::NewProp_bInIsReplicatedHidden_SetBit(void* Obj)
	{
		((SBZOutlineComponent_eventMulticast_SetReplicatedHidden_Parms*)Obj)->bInIsReplicatedHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetReplicatedHidden_Statics::NewProp_bInIsReplicatedHidden = { "bInIsReplicatedHidden", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOutlineComponent_eventMulticast_SetReplicatedHidden_Parms), &Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetReplicatedHidden_Statics::NewProp_bInIsReplicatedHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetReplicatedHidden_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetReplicatedHidden_Statics::NewProp_bInIsReplicatedHidden,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetReplicatedHidden_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetReplicatedHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOutlineComponent, nullptr, "Multicast_SetReplicatedHidden", nullptr, nullptr, sizeof(SBZOutlineComponent_eventMulticast_SetReplicatedHidden_Parms), Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetReplicatedHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetReplicatedHidden_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetReplicatedHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetReplicatedHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetReplicatedHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetReplicatedHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOutlineComponent_OnRep_ActiveReplicated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOutlineComponent_OnRep_ActiveReplicated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOutlineComponent_OnRep_ActiveReplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOutlineComponent, nullptr, "OnRep_ActiveReplicated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOutlineComponent_OnRep_ActiveReplicated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_OnRep_ActiveReplicated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOutlineComponent_OnRep_ActiveReplicated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOutlineComponent_OnRep_ActiveReplicated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOutlineComponent_OnRep_IsReplicatedHidden_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOutlineComponent_OnRep_IsReplicatedHidden_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOutlineComponent_OnRep_IsReplicatedHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOutlineComponent, nullptr, "OnRep_IsReplicatedHidden", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOutlineComponent_OnRep_IsReplicatedHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_OnRep_IsReplicatedHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOutlineComponent_OnRep_IsReplicatedHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOutlineComponent_OnRep_IsReplicatedHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh_Statics
	{
		struct SBZOutlineComponent_eventRemoveMesh_Parms
		{
			UMeshComponent* Mesh;
			bool bRemoveFromSelectorsIfUninitialized;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static void NewProp_bRemoveFromSelectorsIfUninitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveFromSelectorsIfUninitialized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOutlineComponent_eventRemoveMesh_Parms, Mesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh_Statics::NewProp_Mesh_MetaData)) };
	void Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh_Statics::NewProp_bRemoveFromSelectorsIfUninitialized_SetBit(void* Obj)
	{
		((SBZOutlineComponent_eventRemoveMesh_Parms*)Obj)->bRemoveFromSelectorsIfUninitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh_Statics::NewProp_bRemoveFromSelectorsIfUninitialized = { "bRemoveFromSelectorsIfUninitialized", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOutlineComponent_eventRemoveMesh_Parms), &Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh_Statics::NewProp_bRemoveFromSelectorsIfUninitialized_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh_Statics::NewProp_bRemoveFromSelectorsIfUninitialized,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOutlineComponent, nullptr, "RemoveMesh", nullptr, nullptr, sizeof(SBZOutlineComponent_eventRemoveMesh_Parms), Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines_Statics
	{
		struct SBZOutlineComponent_eventSetGloballyHideAllOutlines_Parms
		{
			const UObject* WorldContextObject;
			bool bVal;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bVal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOutlineComponent_eventSetGloballyHideAllOutlines_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines_Statics::NewProp_bVal_SetBit(void* Obj)
	{
		((SBZOutlineComponent_eventSetGloballyHideAllOutlines_Parms*)Obj)->bVal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines_Statics::NewProp_bVal = { "bVal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOutlineComponent_eventSetGloballyHideAllOutlines_Parms), &Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines_Statics::NewProp_bVal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines_Statics::NewProp_bVal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOutlineComponent, nullptr, "SetGloballyHideAllOutlines", nullptr, nullptr, sizeof(SBZOutlineComponent_eventSetGloballyHideAllOutlines_Parms), Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOutlineComponent_SetReplicatedHidden_Statics
	{
		struct SBZOutlineComponent_eventSetReplicatedHidden_Parms
		{
			bool bInIsReplicatedHidden;
		};
		static void NewProp_bInIsReplicatedHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsReplicatedHidden;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZOutlineComponent_SetReplicatedHidden_Statics::NewProp_bInIsReplicatedHidden_SetBit(void* Obj)
	{
		((SBZOutlineComponent_eventSetReplicatedHidden_Parms*)Obj)->bInIsReplicatedHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOutlineComponent_SetReplicatedHidden_Statics::NewProp_bInIsReplicatedHidden = { "bInIsReplicatedHidden", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOutlineComponent_eventSetReplicatedHidden_Parms), &Z_Construct_UFunction_USBZOutlineComponent_SetReplicatedHidden_Statics::NewProp_bInIsReplicatedHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOutlineComponent_SetReplicatedHidden_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOutlineComponent_SetReplicatedHidden_Statics::NewProp_bInIsReplicatedHidden,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOutlineComponent_SetReplicatedHidden_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOutlineComponent_SetReplicatedHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOutlineComponent, nullptr, "SetReplicatedHidden", nullptr, nullptr, sizeof(SBZOutlineComponent_eventSetReplicatedHidden_Parms), Z_Construct_UFunction_USBZOutlineComponent_SetReplicatedHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_SetReplicatedHidden_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOutlineComponent_SetReplicatedHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOutlineComponent_SetReplicatedHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOutlineComponent_SetReplicatedHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOutlineComponent_SetReplicatedHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister()
	{
		return USBZOutlineComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZOutlineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultAsset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshSelectors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshSelectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshSelectors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractableSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableFocusAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableFocusAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHiddenManagedByInteractable_MetaData[];
#endif
		static void NewProp_bIsHiddenManagedByInteractable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHiddenManagedByInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meshes_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Meshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveReplicated_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveReplicated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReplicatedHidden_MetaData[];
#endif
		static void NewProp_bIsReplicatedHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReplicatedHidden;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZOutlineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZOutlineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZOutlineComponent_AddMesh, "AddMesh" }, // 988465375
		{ &Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionEnabledStateChanged, "HandleInteractionEnabledStateChanged" }, // 278437068
		{ &Z_Construct_UFunction_USBZOutlineComponent_HandleInteractionFocusChanged, "HandleInteractionFocusChanged" }, // 4092873560
		{ &Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetActiveReplicated, "Multicast_SetActiveReplicated" }, // 2547194556
		{ &Z_Construct_UFunction_USBZOutlineComponent_Multicast_SetReplicatedHidden, "Multicast_SetReplicatedHidden" }, // 2026248872
		{ &Z_Construct_UFunction_USBZOutlineComponent_OnRep_ActiveReplicated, "OnRep_ActiveReplicated" }, // 1428227766
		{ &Z_Construct_UFunction_USBZOutlineComponent_OnRep_IsReplicatedHidden, "OnRep_IsReplicatedHidden" }, // 1573604264
		{ &Z_Construct_UFunction_USBZOutlineComponent_RemoveMesh, "RemoveMesh" }, // 2384216905
		{ &Z_Construct_UFunction_USBZOutlineComponent_SetGloballyHideAllOutlines, "SetGloballyHideAllOutlines" }, // 3583496944
		{ &Z_Construct_UFunction_USBZOutlineComponent_SetReplicatedHidden, "SetReplicatedHidden" }, // 1041057457
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOutlineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZOutlineComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_DefaultAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOutlineComponent" },
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_DefaultAsset = { "DefaultAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOutlineComponent, DefaultAsset), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_DefaultAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_DefaultAsset_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_MeshSelectors_Inner = { "MeshSelectors", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_MeshSelectors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOutlineComponent" },
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_MeshSelectors = { "MeshSelectors", nullptr, (EPropertyFlags)0x0040008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOutlineComponent, MeshSelectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_MeshSelectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_MeshSelectors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_InteractableSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOutlineComponent" },
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_InteractableSelector = { "InteractableSelector", nullptr, (EPropertyFlags)0x0040008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOutlineComponent, InteractableSelector), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_InteractableSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_InteractableSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_InteractableFocusAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOutlineComponent" },
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_InteractableFocusAsset = { "InteractableFocusAsset", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOutlineComponent, InteractableFocusAsset), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_InteractableFocusAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_InteractableFocusAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_bIsHiddenManagedByInteractable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOutlineComponent" },
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_bIsHiddenManagedByInteractable_SetBit(void* Obj)
	{
		((USBZOutlineComponent*)Obj)->bIsHiddenManagedByInteractable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_bIsHiddenManagedByInteractable = { "bIsHiddenManagedByInteractable", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZOutlineComponent), &Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_bIsHiddenManagedByInteractable_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_bIsHiddenManagedByInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_bIsHiddenManagedByInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_Meshes_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOutlineComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_Meshes_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_Meshes_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_Meshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOutlineComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOutlineComponent, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_Meshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_ActiveAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOutlineComponent" },
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_ActiveAsset = { "ActiveAsset", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOutlineComponent, ActiveAsset), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_ActiveAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_ActiveAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_ActiveReplicated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOutlineComponent" },
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_ActiveReplicated = { "ActiveReplicated", "OnRep_ActiveReplicated", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOutlineComponent, ActiveReplicated), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_ActiveReplicated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_ActiveReplicated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_bIsReplicatedHidden_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOutlineComponent" },
		{ "ModuleRelativePath", "Public/SBZOutlineComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_bIsReplicatedHidden_SetBit(void* Obj)
	{
		((USBZOutlineComponent*)Obj)->bIsReplicatedHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_bIsReplicatedHidden = { "bIsReplicatedHidden", "OnRep_IsReplicatedHidden", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZOutlineComponent), &Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_bIsReplicatedHidden_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_bIsReplicatedHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_bIsReplicatedHidden_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZOutlineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_DefaultAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_MeshSelectors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_MeshSelectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_InteractableSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_InteractableFocusAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_bIsHiddenManagedByInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_Meshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_Meshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_ActiveAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_ActiveReplicated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOutlineComponent_Statics::NewProp_bIsReplicatedHidden,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZOutlineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZOutlineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZOutlineComponent_Statics::ClassParams = {
		&USBZOutlineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZOutlineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZOutlineComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZOutlineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOutlineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZOutlineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZOutlineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZOutlineComponent, 4016777852);
	template<> STARBREEZE_API UClass* StaticClass<USBZOutlineComponent>()
	{
		return USBZOutlineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZOutlineComponent(Z_Construct_UClass_USBZOutlineComponent, &USBZOutlineComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZOutlineComponent"), false, nullptr, nullptr, nullptr);

	void USBZOutlineComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ActiveReplicated(TEXT("ActiveReplicated"));
		static const FName Name_bIsReplicatedHidden(TEXT("bIsReplicatedHidden"));

		const bool bIsValid = true
			&& Name_ActiveReplicated == ClassReps[(int32)ENetFields_Private::ActiveReplicated].Property->GetFName()
			&& Name_bIsReplicatedHidden == ClassReps[(int32)ENetFields_Private::bIsReplicatedHidden].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZOutlineComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZOutlineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
