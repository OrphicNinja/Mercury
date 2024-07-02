// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCarriedBag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCarriedBag() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCarriedBag_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCarriedBag();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	ANIMATIONBUDGETALLOCATOR_API UClass* Z_Construct_UClass_USkeletalMeshComponentBudgeted_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableCarriedBagComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagHandle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(ASBZCarriedBag::execOnInteractionComplete)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractionComplete(Z_Param_InInteractable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZCarriedBag_BP_AdjustAttachment = FName(TEXT("BP_AdjustAttachment"));
	void ASBZCarriedBag::BP_AdjustAttachment(int32 Index, int32 NewCount, FTransform const& NewStrapTransformOffset)
	{
		SBZCarriedBag_eventBP_AdjustAttachment_Parms Parms;
		Parms.Index=Index;
		Parms.NewCount=NewCount;
		Parms.NewStrapTransformOffset=NewStrapTransformOffset;
		ProcessEvent(FindFunctionChecked(NAME_ASBZCarriedBag_BP_AdjustAttachment),&Parms);
	}
	static FName NAME_ASBZCarriedBag_BP_AttachmentComplete = FName(TEXT("BP_AttachmentComplete"));
	void ASBZCarriedBag::BP_AttachmentComplete(USkeletalMeshComponent* ParentSkeletalMeshComponent)
	{
		SBZCarriedBag_eventBP_AttachmentComplete_Parms Parms;
		Parms.ParentSkeletalMeshComponent=ParentSkeletalMeshComponent;
		ProcessEvent(FindFunctionChecked(NAME_ASBZCarriedBag_BP_AttachmentComplete),&Parms);
	}
	static FName NAME_ASBZCarriedBag_BP_OnDegradationChanged = FName(TEXT("BP_OnDegradationChanged"));
	void ASBZCarriedBag::BP_OnDegradationChanged(const int32 DegredationLevel)
	{
		SBZCarriedBag_eventBP_OnDegradationChanged_Parms Parms;
		Parms.DegredationLevel=DegredationLevel;
		ProcessEvent(FindFunctionChecked(NAME_ASBZCarriedBag_BP_OnDegradationChanged),&Parms);
	}
	void ASBZCarriedBag::StaticRegisterNativesASBZCarriedBag()
	{
		UClass* Class = ASBZCarriedBag::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInteractionComplete", &ASBZCarriedBag::execOnInteractionComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewStrapTransformOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewStrapTransformOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCarriedBag_eventBP_AdjustAttachment_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCarriedBag_eventBP_AdjustAttachment_Parms, NewCount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment_Statics::NewProp_NewStrapTransformOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment_Statics::NewProp_NewStrapTransformOffset = { "NewStrapTransformOffset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCarriedBag_eventBP_AdjustAttachment_Parms, NewStrapTransformOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment_Statics::NewProp_NewStrapTransformOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment_Statics::NewProp_NewStrapTransformOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment_Statics::NewProp_NewCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment_Statics::NewProp_NewStrapTransformOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarriedBag.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCarriedBag, nullptr, "BP_AdjustAttachment", nullptr, nullptr, sizeof(SBZCarriedBag_eventBP_AdjustAttachment_Parms), Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC80800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCarriedBag_BP_AttachmentComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentSkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentSkeletalMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedBag_BP_AttachmentComplete_Statics::NewProp_ParentSkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCarriedBag_BP_AttachmentComplete_Statics::NewProp_ParentSkeletalMeshComponent = { "ParentSkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCarriedBag_eventBP_AttachmentComplete_Parms, ParentSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedBag_BP_AttachmentComplete_Statics::NewProp_ParentSkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedBag_BP_AttachmentComplete_Statics::NewProp_ParentSkeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCarriedBag_BP_AttachmentComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCarriedBag_BP_AttachmentComplete_Statics::NewProp_ParentSkeletalMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedBag_BP_AttachmentComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarriedBag.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCarriedBag_BP_AttachmentComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCarriedBag, nullptr, "BP_AttachmentComplete", nullptr, nullptr, sizeof(SBZCarriedBag_eventBP_AttachmentComplete_Parms), Z_Construct_UFunction_ASBZCarriedBag_BP_AttachmentComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedBag_BP_AttachmentComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedBag_BP_AttachmentComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedBag_BP_AttachmentComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCarriedBag_BP_AttachmentComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCarriedBag_BP_AttachmentComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCarriedBag_BP_OnDegradationChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DegredationLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DegredationLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedBag_BP_OnDegradationChanged_Statics::NewProp_DegredationLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZCarriedBag_BP_OnDegradationChanged_Statics::NewProp_DegredationLevel = { "DegredationLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCarriedBag_eventBP_OnDegradationChanged_Parms, DegredationLevel), METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedBag_BP_OnDegradationChanged_Statics::NewProp_DegredationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedBag_BP_OnDegradationChanged_Statics::NewProp_DegredationLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCarriedBag_BP_OnDegradationChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCarriedBag_BP_OnDegradationChanged_Statics::NewProp_DegredationLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedBag_BP_OnDegradationChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarriedBag.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCarriedBag_BP_OnDegradationChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCarriedBag, nullptr, "BP_OnDegradationChanged", nullptr, nullptr, sizeof(SBZCarriedBag_eventBP_OnDegradationChanged_Parms), Z_Construct_UFunction_ASBZCarriedBag_BP_OnDegradationChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedBag_BP_OnDegradationChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedBag_BP_OnDegradationChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedBag_BP_OnDegradationChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCarriedBag_BP_OnDegradationChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCarriedBag_BP_OnDegradationChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics
	{
		struct SBZCarriedBag_eventOnInteractionComplete_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* Interactor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCarriedBag_eventOnInteractionComplete_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCarriedBag_eventOnInteractionComplete_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZCarriedBag_eventOnInteractionComplete_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCarriedBag_eventOnInteractionComplete_Parms), &Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCarriedBag.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCarriedBag, nullptr, "OnInteractionComplete", nullptr, nullptr, sizeof(SBZCarriedBag_eventOnInteractionComplete_Parms), Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZCarriedBag_NoRegister()
	{
		return ASBZCarriedBag::StaticClass();
	}
	struct Z_Construct_UClass_ASBZCarriedBag_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponentBudgeted_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponentBudgeted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIBagOutlineAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIBagOutlineAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BagHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOffsetScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOffsetScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOffsetScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOffsetScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZCarriedBag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZCarriedBag_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZCarriedBag_BP_AdjustAttachment, "BP_AdjustAttachment" }, // 1192514620
		{ &Z_Construct_UFunction_ASBZCarriedBag_BP_AttachmentComplete, "BP_AttachmentComplete" }, // 1020816428
		{ &Z_Construct_UFunction_ASBZCarriedBag_BP_OnDegradationChanged, "BP_OnDegradationChanged" }, // 3112247811
		{ &Z_Construct_UFunction_ASBZCarriedBag_OnInteractionComplete, "OnInteractionComplete" }, // 1777176661
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedBag_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCarriedBag.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCarriedBag.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_SkeletalMeshComponentBudgeted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedBag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCarriedBag.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_SkeletalMeshComponentBudgeted = { "SkeletalMeshComponentBudgeted", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedBag, SkeletalMeshComponentBudgeted), Z_Construct_UClass_USkeletalMeshComponentBudgeted_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_SkeletalMeshComponentBudgeted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_SkeletalMeshComponentBudgeted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_OwningCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedBag" },
		{ "ModuleRelativePath", "Public/SBZCarriedBag.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_OwningCharacter = { "OwningCharacter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedBag, OwningCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_OwningCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_OwningCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_AIBagOutlineAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedBag" },
		{ "ModuleRelativePath", "Public/SBZCarriedBag.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_AIBagOutlineAsset = { "AIBagOutlineAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedBag, AIBagOutlineAsset), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_AIBagOutlineAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_AIBagOutlineAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_InteractableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedBag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCarriedBag.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedBag, InteractableComponent), Z_Construct_UClass_USBZInteractableCarriedBagComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_InteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_InteractableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_BagHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedBag" },
		{ "ModuleRelativePath", "Public/SBZCarriedBag.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_BagHandle = { "BagHandle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedBag, BagHandle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_BagHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_BagHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_LocationOffsetScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedBag" },
		{ "ModuleRelativePath", "Public/SBZCarriedBag.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_LocationOffsetScale = { "LocationOffsetScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedBag, LocationOffsetScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_LocationOffsetScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_LocationOffsetScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_RotationOffsetScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarriedBag" },
		{ "ModuleRelativePath", "Public/SBZCarriedBag.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_RotationOffsetScale = { "RotationOffsetScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCarriedBag, RotationOffsetScale), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_RotationOffsetScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_RotationOffsetScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZCarriedBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_SkeletalMeshComponentBudgeted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_OwningCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_AIBagOutlineAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_InteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_BagHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_LocationOffsetScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCarriedBag_Statics::NewProp_RotationOffsetScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZCarriedBag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZCarriedBag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZCarriedBag_Statics::ClassParams = {
		&ASBZCarriedBag::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZCarriedBag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedBag_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZCarriedBag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCarriedBag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZCarriedBag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZCarriedBag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZCarriedBag, 4242008070);
	template<> STARBREEZE_API UClass* StaticClass<ASBZCarriedBag>()
	{
		return ASBZCarriedBag::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZCarriedBag(Z_Construct_UClass_ASBZCarriedBag, &ASBZCarriedBag::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZCarriedBag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZCarriedBag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
