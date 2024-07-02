// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHackingZoneController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHackingZoneController() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHackingZoneController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHackingZoneController();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZModifiableTimer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZTimerDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHackingZone_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZLoudOptions();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHackingZoneData();
// End Cross Module References
	DEFINE_FUNCTION(ASBZHackingZoneController::execDisableHackingZones)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableHackingZones();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackingZoneController::execOnAckCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InteractableComp);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckCompleteInteraction(Z_Param_InteractableComp,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackingZoneController::execOnHeistGoneLoud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistGoneLoud();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHackingZoneController::execSetInteractionEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void ASBZHackingZoneController::StaticRegisterNativesASBZHackingZoneController()
	{
		UClass* Class = ASBZHackingZoneController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableHackingZones", &ASBZHackingZoneController::execDisableHackingZones },
			{ "OnAckCompleteInteraction", &ASBZHackingZoneController::execOnAckCompleteInteraction },
			{ "OnHeistGoneLoud", &ASBZHackingZoneController::execOnHeistGoneLoud },
			{ "SetInteractionEnabled", &ASBZHackingZoneController::execSetInteractionEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZHackingZoneController_DisableHackingZones_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackingZoneController_DisableHackingZones_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackingZoneController_DisableHackingZones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackingZoneController, nullptr, "DisableHackingZones", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackingZoneController_DisableHackingZones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackingZoneController_DisableHackingZones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackingZoneController_DisableHackingZones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackingZoneController_DisableHackingZones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics
	{
		struct SBZHackingZoneController_eventOnAckCompleteInteraction_Parms
		{
			USBZBaseInteractableComponent* InteractableComp;
			USBZInteractorComponent* Interactor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComp;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::NewProp_InteractableComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::NewProp_InteractableComp = { "InteractableComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackingZoneController_eventOnAckCompleteInteraction_Parms, InteractableComp), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::NewProp_InteractableComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::NewProp_InteractableComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackingZoneController_eventOnAckCompleteInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZHackingZoneController_eventOnAckCompleteInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHackingZoneController_eventOnAckCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::NewProp_InteractableComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackingZoneController, nullptr, "OnAckCompleteInteraction", nullptr, nullptr, sizeof(SBZHackingZoneController_eventOnAckCompleteInteraction_Parms), Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackingZoneController_OnHeistGoneLoud_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackingZoneController_OnHeistGoneLoud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackingZoneController_OnHeistGoneLoud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackingZoneController, nullptr, "OnHeistGoneLoud", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackingZoneController_OnHeistGoneLoud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackingZoneController_OnHeistGoneLoud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackingZoneController_OnHeistGoneLoud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackingZoneController_OnHeistGoneLoud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackingZoneController_SetInteractionEnabled_Statics
	{
		struct SBZHackingZoneController_eventSetInteractionEnabled_Parms
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
	void Z_Construct_UFunction_ASBZHackingZoneController_SetInteractionEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZHackingZoneController_eventSetInteractionEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHackingZoneController_SetInteractionEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHackingZoneController_eventSetInteractionEnabled_Parms), &Z_Construct_UFunction_ASBZHackingZoneController_SetInteractionEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackingZoneController_SetInteractionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackingZoneController_SetInteractionEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackingZoneController_SetInteractionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackingZoneController_SetInteractionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackingZoneController, nullptr, "SetInteractionEnabled", nullptr, nullptr, sizeof(SBZHackingZoneController_eventSetInteractionEnabled_Parms), Z_Construct_UFunction_ASBZHackingZoneController_SetInteractionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackingZoneController_SetInteractionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackingZoneController_SetInteractionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackingZoneController_SetInteractionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackingZoneController_SetInteractionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackingZoneController_SetInteractionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZHackingZoneController_NoRegister()
	{
		return ASBZHackingZoneController::StaticClass();
	}
	struct Z_Construct_UClass_ASBZHackingZoneController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInteractionComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractionComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HackingZoneArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackingZoneArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HackingZoneArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfZonesActiveAtOnce_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfZonesActiveAtOnce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipRandomization_MetaData[];
#endif
		static void NewProp_bSkipRandomization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipRandomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingleLocationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SingleLocationDuration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerMultiplierArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerMultiplierArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerMultiplierArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoudOptions_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoudOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoudOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfZonesOccupied_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfZonesOccupied;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HackingZoneDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackingZoneDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HackingZoneDataArray;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AvailableZoneIndexes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableZoneIndexes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailableZoneIndexes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZHackingZoneController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZModifiableTimer,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZHackingZoneController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZHackingZoneController_DisableHackingZones, "DisableHackingZones" }, // 4254662547
		{ &Z_Construct_UFunction_ASBZHackingZoneController_OnAckCompleteInteraction, "OnAckCompleteInteraction" }, // 1210339791
		{ &Z_Construct_UFunction_ASBZHackingZoneController_OnHeistGoneLoud, "OnHeistGoneLoud" }, // 2973421189
		{ &Z_Construct_UFunction_ASBZHackingZoneController_SetInteractionEnabled, "SetInteractionEnabled" }, // 2066027129
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingZoneController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHackingZoneController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_OnInteractionComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingZoneController" },
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_OnInteractionComplete = { "OnInteractionComplete", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackingZoneController, OnInteractionComplete), Z_Construct_UDelegateFunction_Starbreeze_SBZTimerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_OnInteractionComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_OnInteractionComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingZoneController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackingZoneController, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_InteractableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingZoneController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackingZoneController, InteractableComponent), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_InteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_InteractableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_OutlineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingZoneController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_OutlineComponent = { "OutlineComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackingZoneController, OutlineComponent), Z_Construct_UClass_USBZOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_OutlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_OutlineComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_HackingZoneArray_Inner = { "HackingZoneArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZHackingZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_HackingZoneArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingZoneController" },
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_HackingZoneArray = { "HackingZoneArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackingZoneController, HackingZoneArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_HackingZoneArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_HackingZoneArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_NumberOfZonesActiveAtOnce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingZoneController" },
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_NumberOfZonesActiveAtOnce = { "NumberOfZonesActiveAtOnce", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackingZoneController, NumberOfZonesActiveAtOnce), METADATA_PARAMS(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_NumberOfZonesActiveAtOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_NumberOfZonesActiveAtOnce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_bSkipRandomization_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingZoneController" },
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
	};
#endif
	void Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_bSkipRandomization_SetBit(void* Obj)
	{
		((ASBZHackingZoneController*)Obj)->bSkipRandomization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_bSkipRandomization = { "bSkipRandomization", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZHackingZoneController), &Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_bSkipRandomization_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_bSkipRandomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_bSkipRandomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_SingleLocationDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingZoneController" },
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_SingleLocationDuration = { "SingleLocationDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackingZoneController, SingleLocationDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_SingleLocationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_SingleLocationDuration_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_PlayerMultiplierArray_Inner = { "PlayerMultiplierArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_PlayerMultiplierArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingZoneController" },
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_PlayerMultiplierArray = { "PlayerMultiplierArray", nullptr, (EPropertyFlags)0x0020080000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackingZoneController, PlayerMultiplierArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_PlayerMultiplierArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_PlayerMultiplierArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_LoudOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_LoudOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingZoneController" },
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_LoudOptions = { "LoudOptions", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackingZoneController, LoudOptions), Z_Construct_UEnum_Starbreeze_ESBZLoudOptions, METADATA_PARAMS(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_LoudOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_LoudOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingZoneController" },
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackingZoneController, Seed), METADATA_PARAMS(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_NumberOfZonesOccupied_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingZoneController" },
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_NumberOfZonesOccupied = { "NumberOfZonesOccupied", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackingZoneController, NumberOfZonesOccupied), METADATA_PARAMS(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_NumberOfZonesOccupied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_NumberOfZonesOccupied_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_HackingZoneDataArray_Inner = { "HackingZoneDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZHackingZoneData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_HackingZoneDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingZoneController" },
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_HackingZoneDataArray = { "HackingZoneDataArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackingZoneController, HackingZoneDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_HackingZoneDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_HackingZoneDataArray_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_AvailableZoneIndexes_Inner = { "AvailableZoneIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_AvailableZoneIndexes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingZoneController" },
		{ "ModuleRelativePath", "Public/SBZHackingZoneController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_AvailableZoneIndexes = { "AvailableZoneIndexes", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackingZoneController, AvailableZoneIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_AvailableZoneIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_AvailableZoneIndexes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZHackingZoneController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_OnInteractionComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_InteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_OutlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_HackingZoneArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_HackingZoneArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_NumberOfZonesActiveAtOnce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_bSkipRandomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_SingleLocationDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_PlayerMultiplierArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_PlayerMultiplierArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_LoudOptions_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_LoudOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_NumberOfZonesOccupied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_HackingZoneDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_HackingZoneDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_AvailableZoneIndexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingZoneController_Statics::NewProp_AvailableZoneIndexes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZHackingZoneController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZHackingZoneController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZHackingZoneController_Statics::ClassParams = {
		&ASBZHackingZoneController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZHackingZoneController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingZoneController_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZHackingZoneController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingZoneController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZHackingZoneController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZHackingZoneController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZHackingZoneController, 943569136);
	template<> STARBREEZE_API UClass* StaticClass<ASBZHackingZoneController>()
	{
		return ASBZHackingZoneController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZHackingZoneController(Z_Construct_UClass_ASBZHackingZoneController, &ASBZHackingZoneController::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZHackingZoneController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZHackingZoneController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
