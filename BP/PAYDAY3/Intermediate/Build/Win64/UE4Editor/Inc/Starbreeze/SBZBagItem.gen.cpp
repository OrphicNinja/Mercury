// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBagItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBagItem() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagItem_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZZipline_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZZiplineAudioController_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZZiplineMotor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSimplePhysicsCorrector_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIObjectiveComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagHandle();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZZiplineSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZZiplinerInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZBagItem::execMulticast_SetZipline)
	{
		P_GET_OBJECT(ASBZZipline,Z_Param_Zipline);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeOnZipline);
		P_GET_UBOOL(Z_Param_bInIsMovingForward);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetZipline_Implementation(Z_Param_Zipline,Z_Param_InTimeOnZipline,Z_Param_bInIsMovingForward);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBagItem::execOnPickup)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_NewInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPickup(Z_Param_NewInteractable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBagItem::execOnRep_BagId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BagId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBagItem::execOnRep_CurrentZipline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentZipline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBagItem::execSecureBag)
	{
		P_GET_UBOOL(Z_Param_bDestroyOnSecured);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SecureBag(Z_Param_bDestroyOnSecured);
		P_NATIVE_END;
	}
	static FName NAME_ASBZBagItem_BP_OnDegradationChanged = FName(TEXT("BP_OnDegradationChanged"));
	void ASBZBagItem::BP_OnDegradationChanged(const int32 DegredationLevel)
	{
		SBZBagItem_eventBP_OnDegradationChanged_Parms Parms;
		Parms.DegredationLevel=DegredationLevel;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBagItem_BP_OnDegradationChanged),&Parms);
	}
	static FName NAME_ASBZBagItem_BP_OnZiplineAttachmentChanged = FName(TEXT("BP_OnZiplineAttachmentChanged"));
	void ASBZBagItem::BP_OnZiplineAttachmentChanged(bool bIsAttached)
	{
		SBZBagItem_eventBP_OnZiplineAttachmentChanged_Parms Parms;
		Parms.bIsAttached=bIsAttached ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBagItem_BP_OnZiplineAttachmentChanged),&Parms);
	}
	static FName NAME_ASBZBagItem_Multicast_SetZipline = FName(TEXT("Multicast_SetZipline"));
	void ASBZBagItem::Multicast_SetZipline(ASBZZipline* Zipline, const float InTimeOnZipline, bool bInIsMovingForward)
	{
		SBZBagItem_eventMulticast_SetZipline_Parms Parms;
		Parms.Zipline=Zipline;
		Parms.InTimeOnZipline=InTimeOnZipline;
		Parms.bInIsMovingForward=bInIsMovingForward ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBagItem_Multicast_SetZipline),&Parms);
	}
	void ASBZBagItem::StaticRegisterNativesASBZBagItem()
	{
		UClass* Class = ASBZBagItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetZipline", &ASBZBagItem::execMulticast_SetZipline },
			{ "OnPickup", &ASBZBagItem::execOnPickup },
			{ "OnRep_BagId", &ASBZBagItem::execOnRep_BagId },
			{ "OnRep_CurrentZipline", &ASBZBagItem::execOnRep_CurrentZipline },
			{ "SecureBag", &ASBZBagItem::execSecureBag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZBagItem_BP_OnDegradationChanged_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagItem_BP_OnDegradationChanged_Statics::NewProp_DegredationLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZBagItem_BP_OnDegradationChanged_Statics::NewProp_DegredationLevel = { "DegredationLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagItem_eventBP_OnDegradationChanged_Parms, DegredationLevel), METADATA_PARAMS(Z_Construct_UFunction_ASBZBagItem_BP_OnDegradationChanged_Statics::NewProp_DegredationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagItem_BP_OnDegradationChanged_Statics::NewProp_DegredationLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBagItem_BP_OnDegradationChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagItem_BP_OnDegradationChanged_Statics::NewProp_DegredationLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagItem_BP_OnDegradationChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBagItem_BP_OnDegradationChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBagItem, nullptr, "BP_OnDegradationChanged", nullptr, nullptr, sizeof(SBZBagItem_eventBP_OnDegradationChanged_Parms), Z_Construct_UFunction_ASBZBagItem_BP_OnDegradationChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagItem_BP_OnDegradationChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagItem_BP_OnDegradationChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagItem_BP_OnDegradationChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBagItem_BP_OnDegradationChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBagItem_BP_OnDegradationChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBagItem_BP_OnZiplineAttachmentChanged_Statics
	{
		static void NewProp_bIsAttached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAttached;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZBagItem_BP_OnZiplineAttachmentChanged_Statics::NewProp_bIsAttached_SetBit(void* Obj)
	{
		((SBZBagItem_eventBP_OnZiplineAttachmentChanged_Parms*)Obj)->bIsAttached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBagItem_BP_OnZiplineAttachmentChanged_Statics::NewProp_bIsAttached = { "bIsAttached", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBagItem_eventBP_OnZiplineAttachmentChanged_Parms), &Z_Construct_UFunction_ASBZBagItem_BP_OnZiplineAttachmentChanged_Statics::NewProp_bIsAttached_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBagItem_BP_OnZiplineAttachmentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagItem_BP_OnZiplineAttachmentChanged_Statics::NewProp_bIsAttached,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagItem_BP_OnZiplineAttachmentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBagItem_BP_OnZiplineAttachmentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBagItem, nullptr, "BP_OnZiplineAttachmentChanged", nullptr, nullptr, sizeof(SBZBagItem_eventBP_OnZiplineAttachmentChanged_Parms), Z_Construct_UFunction_ASBZBagItem_BP_OnZiplineAttachmentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagItem_BP_OnZiplineAttachmentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagItem_BP_OnZiplineAttachmentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagItem_BP_OnZiplineAttachmentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBagItem_BP_OnZiplineAttachmentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBagItem_BP_OnZiplineAttachmentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Zipline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTimeOnZipline_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTimeOnZipline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInIsMovingForward_MetaData[];
#endif
		static void NewProp_bInIsMovingForward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsMovingForward;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::NewProp_Zipline = { "Zipline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagItem_eventMulticast_SetZipline_Parms, Zipline), Z_Construct_UClass_ASBZZipline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::NewProp_InTimeOnZipline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::NewProp_InTimeOnZipline = { "InTimeOnZipline", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagItem_eventMulticast_SetZipline_Parms, InTimeOnZipline), METADATA_PARAMS(Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::NewProp_InTimeOnZipline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::NewProp_InTimeOnZipline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::NewProp_bInIsMovingForward_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::NewProp_bInIsMovingForward_SetBit(void* Obj)
	{
		((SBZBagItem_eventMulticast_SetZipline_Parms*)Obj)->bInIsMovingForward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::NewProp_bInIsMovingForward = { "bInIsMovingForward", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBagItem_eventMulticast_SetZipline_Parms), &Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::NewProp_bInIsMovingForward_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::NewProp_bInIsMovingForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::NewProp_bInIsMovingForward_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::NewProp_Zipline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::NewProp_InTimeOnZipline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::NewProp_bInIsMovingForward,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBagItem, nullptr, "Multicast_SetZipline", nullptr, nullptr, sizeof(SBZBagItem_eventMulticast_SetZipline_Parms), Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics
	{
		struct SBZBagItem_eventOnPickup_Parms
		{
			USBZBaseInteractableComponent* NewInteractable;
			USBZInteractorComponent* Interactor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewInteractable;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::NewProp_NewInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::NewProp_NewInteractable = { "NewInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagItem_eventOnPickup_Parms, NewInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::NewProp_NewInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::NewProp_NewInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagItem_eventOnPickup_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZBagItem_eventOnPickup_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBagItem_eventOnPickup_Parms), &Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::NewProp_NewInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBagItem, nullptr, "OnPickup", nullptr, nullptr, sizeof(SBZBagItem_eventOnPickup_Parms), Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBagItem_OnPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBagItem_OnPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBagItem_OnRep_BagId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagItem_OnRep_BagId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBagItem_OnRep_BagId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBagItem, nullptr, "OnRep_BagId", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagItem_OnRep_BagId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagItem_OnRep_BagId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBagItem_OnRep_BagId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBagItem_OnRep_BagId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBagItem_OnRep_CurrentZipline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagItem_OnRep_CurrentZipline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBagItem_OnRep_CurrentZipline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBagItem, nullptr, "OnRep_CurrentZipline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagItem_OnRep_CurrentZipline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagItem_OnRep_CurrentZipline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBagItem_OnRep_CurrentZipline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBagItem_OnRep_CurrentZipline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBagItem_SecureBag_Statics
	{
		struct SBZBagItem_eventSecureBag_Parms
		{
			bool bDestroyOnSecured;
			bool ReturnValue;
		};
		static void NewProp_bDestroyOnSecured_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnSecured;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZBagItem_SecureBag_Statics::NewProp_bDestroyOnSecured_SetBit(void* Obj)
	{
		((SBZBagItem_eventSecureBag_Parms*)Obj)->bDestroyOnSecured = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBagItem_SecureBag_Statics::NewProp_bDestroyOnSecured = { "bDestroyOnSecured", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBagItem_eventSecureBag_Parms), &Z_Construct_UFunction_ASBZBagItem_SecureBag_Statics::NewProp_bDestroyOnSecured_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZBagItem_SecureBag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBagItem_eventSecureBag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBagItem_SecureBag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBagItem_eventSecureBag_Parms), &Z_Construct_UFunction_ASBZBagItem_SecureBag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBagItem_SecureBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagItem_SecureBag_Statics::NewProp_bDestroyOnSecured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBagItem_SecureBag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagItem_SecureBag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBagItem_SecureBag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBagItem, nullptr, "SecureBag", nullptr, nullptr, sizeof(SBZBagItem_eventSecureBag_Parms), Z_Construct_UFunction_ASBZBagItem_SecureBag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagItem_SecureBag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagItem_SecureBag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagItem_SecureBag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBagItem_SecureBag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBagItem_SecureBag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZBagItem_NoRegister()
	{
		return ASBZBagItem::StaticClass();
	}
	struct Z_Construct_UClass_ASBZBagItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZiplineAudioController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZiplineAudioController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideImpactEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideImpactEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumImpactVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumImpactVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZiplineMotorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ZiplineMotorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentZiplineMotor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentZiplineMotor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsCorrector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsCorrector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectiveComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentZipLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentZipLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeOnZipline_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeOnZipline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMovingOnZiplineForward_MetaData[];
#endif
		static void NewProp_bIsMovingOnZiplineForward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMovingOnZiplineForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BagId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZiplineParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZiplineParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanCrewAICarry_MetaData[];
#endif
		static void NewProp_bCanCrewAICarry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanCrewAICarry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBroadcastOnHitEvent_MetaData[];
#endif
		static void NewProp_bShouldBroadcastOnHitEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBroadcastOnHitEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MarkerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZBagItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZBagItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZBagItem_BP_OnDegradationChanged, "BP_OnDegradationChanged" }, // 2130504700
		{ &Z_Construct_UFunction_ASBZBagItem_BP_OnZiplineAttachmentChanged, "BP_OnZiplineAttachmentChanged" }, // 1778308306
		{ &Z_Construct_UFunction_ASBZBagItem_Multicast_SetZipline, "Multicast_SetZipline" }, // 3308885402
		{ &Z_Construct_UFunction_ASBZBagItem_OnPickup, "OnPickup" }, // 2808765397
		{ &Z_Construct_UFunction_ASBZBagItem_OnRep_BagId, "OnRep_BagId" }, // 941460887
		{ &Z_Construct_UFunction_ASBZBagItem_OnRep_CurrentZipline, "OnRep_CurrentZipline" }, // 620040884
		{ &Z_Construct_UFunction_ASBZBagItem_SecureBag, "SecureBag" }, // 1343637763
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBagItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagItem, AudioComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ZiplineAudioController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ZiplineAudioController = { "ZiplineAudioController", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagItem, ZiplineAudioController), Z_Construct_UClass_USBZZiplineAudioController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ZiplineAudioController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ZiplineAudioController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_OverrideImpactEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_OverrideImpactEvent = { "OverrideImpactEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagItem, OverrideImpactEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_OverrideImpactEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_OverrideImpactEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_MinimumImpactVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_MinimumImpactVelocity = { "MinimumImpactVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagItem, MinimumImpactVelocity), METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_MinimumImpactVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_MinimumImpactVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ZiplineMotorClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ZiplineMotorClass = { "ZiplineMotorClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagItem, ZiplineMotorClass), Z_Construct_UClass_ASBZZiplineMotor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ZiplineMotorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ZiplineMotorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_CurrentZiplineMotor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_CurrentZiplineMotor = { "CurrentZiplineMotor", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagItem, CurrentZiplineMotor), Z_Construct_UClass_ASBZZiplineMotor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_CurrentZiplineMotor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_CurrentZiplineMotor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagItem, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_Interactable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagItem, Interactable), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_PhysicsCorrector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_PhysicsCorrector = { "PhysicsCorrector", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagItem, PhysicsCorrector), Z_Construct_UClass_USBZSimplePhysicsCorrector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_PhysicsCorrector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_PhysicsCorrector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ObjectiveComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ObjectiveComponent = { "ObjectiveComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagItem, ObjectiveComponent), Z_Construct_UClass_USBZAIObjectiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ObjectiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ObjectiveComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_Bag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_Bag = { "Bag", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagItem, Bag), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_Bag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_Bag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_CurrentZipLine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_CurrentZipLine = { "CurrentZipLine", "OnRep_CurrentZipline", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagItem, CurrentZipLine), Z_Construct_UClass_ASBZZipline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_CurrentZipLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_CurrentZipLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_TimeOnZipline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_TimeOnZipline = { "TimeOnZipline", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagItem, TimeOnZipline), METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_TimeOnZipline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_TimeOnZipline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bIsMovingOnZiplineForward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	void Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bIsMovingOnZiplineForward_SetBit(void* Obj)
	{
		((ASBZBagItem*)Obj)->bIsMovingOnZiplineForward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bIsMovingOnZiplineForward = { "bIsMovingOnZiplineForward", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZBagItem), &Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bIsMovingOnZiplineForward_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bIsMovingOnZiplineForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bIsMovingOnZiplineForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_BagId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_BagId = { "BagId", "OnRep_BagId", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagItem, BagId), METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_BagId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_BagId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_InteractionDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_InteractionDelay = { "InteractionDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagItem, InteractionDelay), METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_InteractionDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_InteractionDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ZiplineParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ZiplineParams = { "ZiplineParams", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagItem, ZiplineParams), Z_Construct_UClass_USBZZiplineSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ZiplineParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ZiplineParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bCanCrewAICarry_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	void Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bCanCrewAICarry_SetBit(void* Obj)
	{
		((ASBZBagItem*)Obj)->bCanCrewAICarry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bCanCrewAICarry = { "bCanCrewAICarry", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZBagItem), &Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bCanCrewAICarry_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bCanCrewAICarry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bCanCrewAICarry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bShouldBroadcastOnHitEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	void Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bShouldBroadcastOnHitEvent_SetBit(void* Obj)
	{
		((ASBZBagItem*)Obj)->bShouldBroadcastOnHitEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bShouldBroadcastOnHitEvent = { "bShouldBroadcastOnHitEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZBagItem), &Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bShouldBroadcastOnHitEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bShouldBroadcastOnHitEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bShouldBroadcastOnHitEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagItem_Statics::NewProp_MarkerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagItem" },
		{ "ModuleRelativePath", "Public/SBZBagItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZBagItem_Statics::NewProp_MarkerID = { "MarkerID", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagItem, MarkerID), METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_MarkerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::NewProp_MarkerID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZBagItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ZiplineAudioController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_OverrideImpactEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_MinimumImpactVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ZiplineMotorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_CurrentZiplineMotor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_PhysicsCorrector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ObjectiveComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_Bag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_CurrentZipLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_TimeOnZipline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bIsMovingOnZiplineForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_BagId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_InteractionDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_ZiplineParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bCanCrewAICarry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_bShouldBroadcastOnHitEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagItem_Statics::NewProp_MarkerID,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZBagItem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZZiplinerInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZBagItem, ISBZZiplinerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZBagItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZBagItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZBagItem_Statics::ClassParams = {
		&ASBZBagItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZBagItem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZBagItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZBagItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZBagItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZBagItem, 4202417400);
	template<> STARBREEZE_API UClass* StaticClass<ASBZBagItem>()
	{
		return ASBZBagItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZBagItem(Z_Construct_UClass_ASBZBagItem, &ASBZBagItem::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZBagItem"), false, nullptr, nullptr, nullptr);

	void ASBZBagItem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentZipLine(TEXT("CurrentZipLine"));
		static const FName Name_TimeOnZipline(TEXT("TimeOnZipline"));
		static const FName Name_bIsMovingOnZiplineForward(TEXT("bIsMovingOnZiplineForward"));
		static const FName Name_BagId(TEXT("BagId"));

		const bool bIsValid = true
			&& Name_CurrentZipLine == ClassReps[(int32)ENetFields_Private::CurrentZipLine].Property->GetFName()
			&& Name_TimeOnZipline == ClassReps[(int32)ENetFields_Private::TimeOnZipline].Property->GetFName()
			&& Name_bIsMovingOnZiplineForward == ClassReps[(int32)ENetFields_Private::bIsMovingOnZiplineForward].Property->GetFName()
			&& Name_BagId == ClassReps[(int32)ENetFields_Private::BagId].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZBagItem"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZBagItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
