// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZZipline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZZipline() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZZipline_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZZipline();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZZiplineType();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLongNavLink_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZZipline::execMulticast_ZiplineEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ZiplineEnabled_Implementation(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZZipline::execOnCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompleteInteraction(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZZipline::execOnNavLinkReached)
	{
		P_GET_OBJECT(AActor,Z_Param_MovingActor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DestinationPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNavLinkReached(Z_Param_MovingActor,Z_Param_Out_DestinationPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZZipline::execOnRep_ZiplineEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ZiplineEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZZipline::execOnZiplineBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnZiplineBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZZipline::execOnZiplineEnabledCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnZiplineEnabledCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZZipline::execSetZiplineEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetZiplineEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZZipline_BP_OnZiplineEnabledChanged = FName(TEXT("BP_OnZiplineEnabledChanged"));
	void ASBZZipline::BP_OnZiplineEnabledChanged(bool bEnabled, bool bDoCosmetics)
	{
		SBZZipline_eventBP_OnZiplineEnabledChanged_Parms Parms;
		Parms.bEnabled=bEnabled ? true : false;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZZipline_BP_OnZiplineEnabledChanged),&Parms);
	}
	static FName NAME_ASBZZipline_Multicast_ZiplineEnabled = FName(TEXT("Multicast_ZiplineEnabled"));
	void ASBZZipline::Multicast_ZiplineEnabled(bool bEnabled)
	{
		SBZZipline_eventMulticast_ZiplineEnabled_Parms Parms;
		Parms.bEnabled=bEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZZipline_Multicast_ZiplineEnabled),&Parms);
	}
	void ASBZZipline::StaticRegisterNativesASBZZipline()
	{
		UClass* Class = ASBZZipline::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_ZiplineEnabled", &ASBZZipline::execMulticast_ZiplineEnabled },
			{ "OnCompleteInteraction", &ASBZZipline::execOnCompleteInteraction },
			{ "OnNavLinkReached", &ASBZZipline::execOnNavLinkReached },
			{ "OnRep_ZiplineEnabled", &ASBZZipline::execOnRep_ZiplineEnabled },
			{ "OnZiplineBeginOverlap", &ASBZZipline::execOnZiplineBeginOverlap },
			{ "OnZiplineEnabledCallback", &ASBZZipline::execOnZiplineEnabledCallback },
			{ "SetZiplineEnabled", &ASBZZipline::execSetZiplineEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged_Statics
	{
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZZipline_eventBP_OnZiplineEnabledChanged_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZZipline_eventBP_OnZiplineEnabledChanged_Parms), &Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZZipline_eventBP_OnZiplineEnabledChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZZipline_eventBP_OnZiplineEnabledChanged_Parms), &Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZZipline, nullptr, "BP_OnZiplineEnabledChanged", nullptr, nullptr, sizeof(SBZZipline_eventBP_OnZiplineEnabledChanged_Parms), Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZZipline_Multicast_ZiplineEnabled_Statics
	{
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZZipline_Multicast_ZiplineEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZZipline_eventMulticast_ZiplineEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZZipline_Multicast_ZiplineEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZZipline_eventMulticast_ZiplineEnabled_Parms), &Z_Construct_UFunction_ASBZZipline_Multicast_ZiplineEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZZipline_Multicast_ZiplineEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZZipline_Multicast_ZiplineEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZZipline_Multicast_ZiplineEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZZipline_Multicast_ZiplineEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZZipline, nullptr, "Multicast_ZiplineEnabled", nullptr, nullptr, sizeof(SBZZipline_eventMulticast_ZiplineEnabled_Parms), Z_Construct_UFunction_ASBZZipline_Multicast_ZiplineEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_Multicast_ZiplineEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZZipline_Multicast_ZiplineEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_Multicast_ZiplineEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZZipline_Multicast_ZiplineEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZZipline_Multicast_ZiplineEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics
	{
		struct SBZZipline_eventOnCompleteInteraction_Parms
		{
			USBZBaseInteractableComponent* Interactable;
			USBZInteractorComponent* Interactor;
			bool bIsLocallyControlledInteractor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledInteractor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZZipline_eventOnCompleteInteraction_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZZipline_eventOnCompleteInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZZipline_eventOnCompleteInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZZipline_eventOnCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZZipline, nullptr, "OnCompleteInteraction", nullptr, nullptr, sizeof(SBZZipline_eventOnCompleteInteraction_Parms), Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZZipline_OnNavLinkReached_Statics
	{
		struct SBZZipline_eventOnNavLinkReached_Parms
		{
			AActor* MovingActor;
			FVector DestinationPoint;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovingActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestinationPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZZipline_OnNavLinkReached_Statics::NewProp_MovingActor = { "MovingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZZipline_eventOnNavLinkReached_Parms, MovingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZZipline_OnNavLinkReached_Statics::NewProp_DestinationPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZZipline_OnNavLinkReached_Statics::NewProp_DestinationPoint = { "DestinationPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZZipline_eventOnNavLinkReached_Parms, DestinationPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZZipline_OnNavLinkReached_Statics::NewProp_DestinationPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_OnNavLinkReached_Statics::NewProp_DestinationPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZZipline_OnNavLinkReached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZZipline_OnNavLinkReached_Statics::NewProp_MovingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZZipline_OnNavLinkReached_Statics::NewProp_DestinationPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZZipline_OnNavLinkReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZZipline_OnNavLinkReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZZipline, nullptr, "OnNavLinkReached", nullptr, nullptr, sizeof(SBZZipline_eventOnNavLinkReached_Parms), Z_Construct_UFunction_ASBZZipline_OnNavLinkReached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_OnNavLinkReached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZZipline_OnNavLinkReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_OnNavLinkReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZZipline_OnNavLinkReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZZipline_OnNavLinkReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZZipline_OnRep_ZiplineEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZZipline_OnRep_ZiplineEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZZipline_OnRep_ZiplineEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZZipline, nullptr, "OnRep_ZiplineEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZZipline_OnRep_ZiplineEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_OnRep_ZiplineEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZZipline_OnRep_ZiplineEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZZipline_OnRep_ZiplineEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics
	{
		struct SBZZipline_eventOnZiplineBeginOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZZipline_eventOnZiplineBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZZipline_eventOnZiplineBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZZipline_eventOnZiplineBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZZipline_eventOnZiplineBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SBZZipline_eventOnZiplineBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZZipline_eventOnZiplineBeginOverlap_Parms), &Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZZipline_eventOnZiplineBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZZipline, nullptr, "OnZiplineBeginOverlap", nullptr, nullptr, sizeof(SBZZipline_eventOnZiplineBeginOverlap_Parms), Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZZipline_OnZiplineEnabledCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZZipline_OnZiplineEnabledCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZZipline_OnZiplineEnabledCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZZipline, nullptr, "OnZiplineEnabledCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZZipline_OnZiplineEnabledCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_OnZiplineEnabledCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZZipline_OnZiplineEnabledCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZZipline_OnZiplineEnabledCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZZipline_SetZiplineEnabled_Statics
	{
		struct SBZZipline_eventSetZiplineEnabled_Parms
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
	void Z_Construct_UFunction_ASBZZipline_SetZiplineEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZZipline_eventSetZiplineEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZZipline_SetZiplineEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZZipline_eventSetZiplineEnabled_Parms), &Z_Construct_UFunction_ASBZZipline_SetZiplineEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZZipline_SetZiplineEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZZipline_SetZiplineEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZZipline_SetZiplineEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZZipline_SetZiplineEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZZipline, nullptr, "SetZiplineEnabled", nullptr, nullptr, sizeof(SBZZipline_eventSetZiplineEnabled_Parms), Z_Construct_UFunction_ASBZZipline_SetZiplineEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_SetZiplineEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZZipline_SetZiplineEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZZipline_SetZiplineEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZZipline_SetZiplineEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZZipline_SetZiplineEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZZipline_NoRegister()
	{
		return ASBZZipline::StaticClass();
	}
	struct Z_Construct_UClass_ASBZZipline_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLinkStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavLinkStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLinkEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavLinkEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapNavLinkEnd_MetaData[];
#endif
		static void NewProp_bSnapNavLinkEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapNavLinkEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapNavLinkStart_MetaData[];
#endif
		static void NewProp_bSnapNavLinkStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapNavLinkStart;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ZiplineType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZiplineType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ZiplineType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPointMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartPointMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPointMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndPointMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDropoffVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartDropoffVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDropoffVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndDropoffVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceSolverIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDistanceSolverIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitLaunchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExitLaunchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabledAtStart_MetaData[];
#endif
		static void NewProp_bDisabledAtStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabledAtStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bZiplineEnabled_MetaData[];
#endif
		static void NewProp_bZiplineEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bZiplineEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFromEndToStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFromEndToStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfExtentSizeToAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfExtentSizeToAdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartForcedDirectionThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartForcedDirectionThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndForcedDirectionThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndForcedDirectionThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZZipline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZZipline_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZZipline_BP_OnZiplineEnabledChanged, "BP_OnZiplineEnabledChanged" }, // 2145127692
		{ &Z_Construct_UFunction_ASBZZipline_Multicast_ZiplineEnabled, "Multicast_ZiplineEnabled" }, // 3140399847
		{ &Z_Construct_UFunction_ASBZZipline_OnCompleteInteraction, "OnCompleteInteraction" }, // 705130371
		{ &Z_Construct_UFunction_ASBZZipline_OnNavLinkReached, "OnNavLinkReached" }, // 3635814757
		{ &Z_Construct_UFunction_ASBZZipline_OnRep_ZiplineEnabled, "OnRep_ZiplineEnabled" }, // 1390515456
		{ &Z_Construct_UFunction_ASBZZipline_OnZiplineBeginOverlap, "OnZiplineBeginOverlap" }, // 319012312
		{ &Z_Construct_UFunction_ASBZZipline_OnZiplineEnabledCallback, "OnZiplineEnabledCallback" }, // 3526412023
		{ &Z_Construct_UFunction_ASBZZipline_SetZiplineEnabled, "SetZiplineEnabled" }, // 16728311
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZZipline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_NavLinkStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_NavLinkStart = { "NavLinkStart", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZipline, NavLinkStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_NavLinkStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_NavLinkStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_NavLinkEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_NavLinkEnd = { "NavLinkEnd", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZipline, NavLinkEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_NavLinkEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_NavLinkEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_bSnapNavLinkEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	void Z_Construct_UClass_ASBZZipline_Statics::NewProp_bSnapNavLinkEnd_SetBit(void* Obj)
	{
		((ASBZZipline*)Obj)->bSnapNavLinkEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_bSnapNavLinkEnd = { "bSnapNavLinkEnd", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZZipline), &Z_Construct_UClass_ASBZZipline_Statics::NewProp_bSnapNavLinkEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_bSnapNavLinkEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_bSnapNavLinkEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_bSnapNavLinkStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	void Z_Construct_UClass_ASBZZipline_Statics::NewProp_bSnapNavLinkStart_SetBit(void* Obj)
	{
		((ASBZZipline*)Obj)->bSnapNavLinkStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_bSnapNavLinkStart = { "bSnapNavLinkStart", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZZipline), &Z_Construct_UClass_ASBZZipline_Statics::NewProp_bSnapNavLinkStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_bSnapNavLinkStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_bSnapNavLinkStart_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_ZiplineType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_ZiplineType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_ZiplineType = { "ZiplineType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZipline, ZiplineType), Z_Construct_UEnum_Starbreeze_ESBZZiplineType, METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_ZiplineType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_ZiplineType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_OverlapBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_OverlapBox = { "OverlapBox", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZipline, OverlapBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_OverlapBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_OverlapBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZipline, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_SplineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_StartPointMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_StartPointMesh = { "StartPointMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZipline, StartPointMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_StartPointMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_StartPointMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_EndPointMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_EndPointMesh = { "EndPointMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZipline, EndPointMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_EndPointMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_EndPointMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_InteractableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZipline, InteractableComponent), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_InteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_InteractableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_NavLink_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_NavLink = { "NavLink", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZipline, NavLink), Z_Construct_UClass_ASBZLongNavLink_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_NavLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_NavLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_StartDropoffVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_StartDropoffVelocity = { "StartDropoffVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZipline, StartDropoffVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_StartDropoffVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_StartDropoffVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_EndDropoffVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_EndDropoffVelocity = { "EndDropoffVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZipline, EndDropoffVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_EndDropoffVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_EndDropoffVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_MaxDistanceSolverIterations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_MaxDistanceSolverIterations = { "MaxDistanceSolverIterations", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZipline, MaxDistanceSolverIterations), METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_MaxDistanceSolverIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_MaxDistanceSolverIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_ExitLaunchSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_ExitLaunchSpeed = { "ExitLaunchSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZipline, ExitLaunchSpeed), METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_ExitLaunchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_ExitLaunchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_bDisabledAtStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	void Z_Construct_UClass_ASBZZipline_Statics::NewProp_bDisabledAtStart_SetBit(void* Obj)
	{
		((ASBZZipline*)Obj)->bDisabledAtStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_bDisabledAtStart = { "bDisabledAtStart", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZZipline), &Z_Construct_UClass_ASBZZipline_Statics::NewProp_bDisabledAtStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_bDisabledAtStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_bDisabledAtStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_bZiplineEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	void Z_Construct_UClass_ASBZZipline_Statics::NewProp_bZiplineEnabled_SetBit(void* Obj)
	{
		((ASBZZipline*)Obj)->bZiplineEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_bZiplineEnabled = { "bZiplineEnabled", "OnRep_ZiplineEnabled", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZZipline), &Z_Construct_UClass_ASBZZipline_Statics::NewProp_bZiplineEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_bZiplineEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_bZiplineEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_DistanceFromEndToStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_DistanceFromEndToStop = { "DistanceFromEndToStop", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZipline, DistanceFromEndToStop), METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_DistanceFromEndToStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_DistanceFromEndToStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_HalfExtentSizeToAdd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_HalfExtentSizeToAdd = { "HalfExtentSizeToAdd", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZipline, HalfExtentSizeToAdd), METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_HalfExtentSizeToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_HalfExtentSizeToAdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_StartForcedDirectionThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_StartForcedDirectionThreshold = { "StartForcedDirectionThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZipline, StartForcedDirectionThreshold), METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_StartForcedDirectionThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_StartForcedDirectionThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZipline_Statics::NewProp_EndForcedDirectionThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZipline" },
		{ "ModuleRelativePath", "Public/SBZZipline.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZZipline_Statics::NewProp_EndForcedDirectionThreshold = { "EndForcedDirectionThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZipline, EndForcedDirectionThreshold), METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::NewProp_EndForcedDirectionThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::NewProp_EndForcedDirectionThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZZipline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_NavLinkStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_NavLinkEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_bSnapNavLinkEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_bSnapNavLinkStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_ZiplineType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_ZiplineType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_OverlapBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_SplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_StartPointMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_EndPointMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_InteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_NavLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_StartDropoffVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_EndDropoffVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_MaxDistanceSolverIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_ExitLaunchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_bDisabledAtStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_bZiplineEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_DistanceFromEndToStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_HalfExtentSizeToAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_StartForcedDirectionThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZipline_Statics::NewProp_EndForcedDirectionThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZZipline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZZipline>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZZipline_Statics::ClassParams = {
		&ASBZZipline::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZZipline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZZipline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZipline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZZipline()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZZipline_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZZipline, 2233616102);
	template<> STARBREEZE_API UClass* StaticClass<ASBZZipline>()
	{
		return ASBZZipline::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZZipline(Z_Construct_UClass_ASBZZipline, &ASBZZipline::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZZipline"), false, nullptr, nullptr, nullptr);

	void ASBZZipline::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bZiplineEnabled(TEXT("bZiplineEnabled"));

		const bool bIsValid = true
			&& Name_bZiplineEnabled == ClassReps[(int32)ENetFields_Private::bZiplineEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZZipline"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZZipline);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
