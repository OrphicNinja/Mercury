// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIUtilityDecider_AIObjectiveBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIUtilityDecider_AIObjectiveBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGate_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIUtilityDecider_AIObjectiveBase::execObjectiveInteractableChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ObjectiveInteractableChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIUtilityDecider_AIObjectiveBase::execOnDoorInteractionCompleted)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDoorInteractionCompleted(Z_Param_InInteractable,Z_Param_InInteractor,Z_Param_bIsLocallyControlled);
		P_NATIVE_END;
	}
	void USBZAIUtilityDecider_AIObjectiveBase::StaticRegisterNativesUSBZAIUtilityDecider_AIObjectiveBase()
	{
		UClass* Class = USBZAIUtilityDecider_AIObjectiveBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ObjectiveInteractableChanged", &USBZAIUtilityDecider_AIObjectiveBase::execObjectiveInteractableChanged },
			{ "OnDoorInteractionCompleted", &USBZAIUtilityDecider_AIObjectiveBase::execOnDoorInteractionCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_ObjectiveInteractableChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_ObjectiveInteractableChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_ObjectiveInteractableChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase, nullptr, "ObjectiveInteractableChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_ObjectiveInteractableChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_ObjectiveInteractableChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_ObjectiveInteractableChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_ObjectiveInteractableChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics
	{
		struct SBZAIUtilityDecider_AIObjectiveBase_eventOnDoorInteractionCompleted_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* InInteractor;
			bool bIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIUtilityDecider_AIObjectiveBase_eventOnDoorInteractionCompleted_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIUtilityDecider_AIObjectiveBase_eventOnDoorInteractionCompleted_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::NewProp_bIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZAIUtilityDecider_AIObjectiveBase_eventOnDoorInteractionCompleted_Parms*)Obj)->bIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::NewProp_bIsLocallyControlled = { "bIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIUtilityDecider_AIObjectiveBase_eventOnDoorInteractionCompleted_Parms), &Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::NewProp_bIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::NewProp_bIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase, nullptr, "OnDoorInteractionCompleted", nullptr, nullptr, sizeof(SBZAIUtilityDecider_AIObjectiveBase_eventOnDoorInteractionCompleted_Parms), Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_NoRegister()
	{
		return USBZAIUtilityDecider_AIObjectiveBase::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Gates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Gates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentGate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGoalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentGoalLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveToLocationBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MoveToLocationBBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIUtilityDecider,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_ObjectiveInteractableChanged, "ObjectiveInteractableChanged" }, // 1442545361
		{ &Z_Construct_UFunction_USBZAIUtilityDecider_AIObjectiveBase_OnDoorInteractionCompleted, "OnDoorInteractionCompleted" }, // 1342303190
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIUtilityDecider_AIObjectiveBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_Gates_Inner = { "Gates", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZGate_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_Gates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_AIObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_Gates = { "Gates", nullptr, (EPropertyFlags)0x0024080000002001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveBase, Gates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_Gates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_Gates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_CurrentGate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_AIObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_CurrentGate = { "CurrentGate", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveBase, CurrentGate), METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_CurrentGate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_CurrentGate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_StartLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_AIObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveBase, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_PreviousLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_AIObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_PreviousLocation = { "PreviousLocation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveBase, PreviousLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_PreviousLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_PreviousLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_CurrentGoalLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_AIObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_CurrentGoalLocation = { "CurrentGoalLocation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveBase, CurrentGoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_CurrentGoalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_CurrentGoalLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_EndLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_AIObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveBase, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_EndRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_AIObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_EndRoom = { "EndRoom", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveBase, EndRoom), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_EndRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_EndRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_MoveToLocationBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_AIObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_MoveToLocationBBKey = { "MoveToLocationBBKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveBase, MoveToLocationBBKey), METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_MoveToLocationBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_MoveToLocationBBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_AcceptableRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_AIObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveBase, AcceptableRadius), METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_AcceptableRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_AcceptableRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_Gates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_Gates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_CurrentGate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_PreviousLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_CurrentGoalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_EndRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_MoveToLocationBBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::NewProp_AcceptableRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIUtilityDecider_AIObjectiveBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::ClassParams = {
		&USBZAIUtilityDecider_AIObjectiveBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::PropPointers),
		0,
		0x008010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIUtilityDecider_AIObjectiveBase, 3229408089);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIUtilityDecider_AIObjectiveBase>()
	{
		return USBZAIUtilityDecider_AIObjectiveBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIUtilityDecider_AIObjectiveBase(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase, &USBZAIUtilityDecider_AIObjectiveBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIUtilityDecider_AIObjectiveBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIUtilityDecider_AIObjectiveBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
