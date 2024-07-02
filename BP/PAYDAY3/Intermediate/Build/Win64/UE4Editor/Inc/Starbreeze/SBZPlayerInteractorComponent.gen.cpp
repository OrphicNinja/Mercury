// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerInteractorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerInteractorComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerInteractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerInteractorComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractModeDisplayData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLockCameraData();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZPlayerInteractorComponent::execCanInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInteract();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerInteractorComponent::execGetModeDisplayData)
	{
		P_GET_STRUCT_REF(FSBZInteractDisplayDataCollection,Z_Param_Out_Collection);
		P_GET_UBOOL(Z_Param_bIsInstant);
		P_GET_UBOOL_REF(Z_Param_Out_bOutIsFront);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZInteractModeDisplayData*)Z_Param__Result=USBZPlayerInteractorComponent::GetModeDisplayData(Z_Param_Out_Collection,Z_Param_bIsInstant,Z_Param_Out_bOutIsFront);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerInteractorComponent::execGetSelectedInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZBaseInteractableComponent**)Z_Param__Result=P_THIS->GetSelectedInteraction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerInteractorComponent::execIsCurrentInstant)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCurrentInstant();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerInteractorComponent::execShowInteractWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowInteractWidget();
		P_NATIVE_END;
	}
	void USBZPlayerInteractorComponent::StaticRegisterNativesUSBZPlayerInteractorComponent()
	{
		UClass* Class = USBZPlayerInteractorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanInteract", &USBZPlayerInteractorComponent::execCanInteract },
			{ "GetModeDisplayData", &USBZPlayerInteractorComponent::execGetModeDisplayData },
			{ "GetSelectedInteraction", &USBZPlayerInteractorComponent::execGetSelectedInteraction },
			{ "IsCurrentInstant", &USBZPlayerInteractorComponent::execIsCurrentInstant },
			{ "ShowInteractWidget", &USBZPlayerInteractorComponent::execShowInteractWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPlayerInteractorComponent_CanInteract_Statics
	{
		struct SBZPlayerInteractorComponent_eventCanInteract_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZPlayerInteractorComponent_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerInteractorComponent_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPlayerInteractorComponent_CanInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerInteractorComponent_eventCanInteract_Parms), &Z_Construct_UFunction_USBZPlayerInteractorComponent_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerInteractorComponent_CanInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerInteractorComponent_CanInteract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerInteractorComponent_CanInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerInteractorComponent_CanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerInteractorComponent, nullptr, "CanInteract", nullptr, nullptr, sizeof(SBZPlayerInteractorComponent_eventCanInteract_Parms), Z_Construct_UFunction_USBZPlayerInteractorComponent_CanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerInteractorComponent_CanInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerInteractorComponent_CanInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerInteractorComponent_CanInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerInteractorComponent_CanInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerInteractorComponent_CanInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics
	{
		struct SBZPlayerInteractorComponent_eventGetModeDisplayData_Parms
		{
			FSBZInteractDisplayDataCollection Collection;
			bool bIsInstant;
			bool bOutIsFront;
			FSBZInteractModeDisplayData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Collection;
		static void NewProp_bIsInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInstant;
		static void NewProp_bOutIsFront_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutIsFront;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::NewProp_Collection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerInteractorComponent_eventGetModeDisplayData_Parms, Collection), Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::NewProp_Collection_MetaData)) };
	void Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::NewProp_bIsInstant_SetBit(void* Obj)
	{
		((SBZPlayerInteractorComponent_eventGetModeDisplayData_Parms*)Obj)->bIsInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::NewProp_bIsInstant = { "bIsInstant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerInteractorComponent_eventGetModeDisplayData_Parms), &Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::NewProp_bIsInstant_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::NewProp_bOutIsFront_SetBit(void* Obj)
	{
		((SBZPlayerInteractorComponent_eventGetModeDisplayData_Parms*)Obj)->bOutIsFront = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::NewProp_bOutIsFront = { "bOutIsFront", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerInteractorComponent_eventGetModeDisplayData_Parms), &Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::NewProp_bOutIsFront_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerInteractorComponent_eventGetModeDisplayData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZInteractModeDisplayData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::NewProp_Collection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::NewProp_bIsInstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::NewProp_bOutIsFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerInteractorComponent, nullptr, "GetModeDisplayData", nullptr, nullptr, sizeof(SBZPlayerInteractorComponent_eventGetModeDisplayData_Parms), Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerInteractorComponent_GetSelectedInteraction_Statics
	{
		struct SBZPlayerInteractorComponent_eventGetSelectedInteraction_Parms
		{
			USBZBaseInteractableComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerInteractorComponent_GetSelectedInteraction_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerInteractorComponent_GetSelectedInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerInteractorComponent_eventGetSelectedInteraction_Parms, ReturnValue), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerInteractorComponent_GetSelectedInteraction_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerInteractorComponent_GetSelectedInteraction_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerInteractorComponent_GetSelectedInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerInteractorComponent_GetSelectedInteraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerInteractorComponent_GetSelectedInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerInteractorComponent_GetSelectedInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerInteractorComponent, nullptr, "GetSelectedInteraction", nullptr, nullptr, sizeof(SBZPlayerInteractorComponent_eventGetSelectedInteraction_Parms), Z_Construct_UFunction_USBZPlayerInteractorComponent_GetSelectedInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerInteractorComponent_GetSelectedInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerInteractorComponent_GetSelectedInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerInteractorComponent_GetSelectedInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerInteractorComponent_GetSelectedInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerInteractorComponent_GetSelectedInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerInteractorComponent_IsCurrentInstant_Statics
	{
		struct SBZPlayerInteractorComponent_eventIsCurrentInstant_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZPlayerInteractorComponent_IsCurrentInstant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerInteractorComponent_eventIsCurrentInstant_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPlayerInteractorComponent_IsCurrentInstant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerInteractorComponent_eventIsCurrentInstant_Parms), &Z_Construct_UFunction_USBZPlayerInteractorComponent_IsCurrentInstant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerInteractorComponent_IsCurrentInstant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerInteractorComponent_IsCurrentInstant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerInteractorComponent_IsCurrentInstant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerInteractorComponent_IsCurrentInstant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerInteractorComponent, nullptr, "IsCurrentInstant", nullptr, nullptr, sizeof(SBZPlayerInteractorComponent_eventIsCurrentInstant_Parms), Z_Construct_UFunction_USBZPlayerInteractorComponent_IsCurrentInstant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerInteractorComponent_IsCurrentInstant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerInteractorComponent_IsCurrentInstant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerInteractorComponent_IsCurrentInstant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerInteractorComponent_IsCurrentInstant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerInteractorComponent_IsCurrentInstant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerInteractorComponent_ShowInteractWidget_Statics
	{
		struct SBZPlayerInteractorComponent_eventShowInteractWidget_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZPlayerInteractorComponent_ShowInteractWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerInteractorComponent_eventShowInteractWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPlayerInteractorComponent_ShowInteractWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerInteractorComponent_eventShowInteractWidget_Parms), &Z_Construct_UFunction_USBZPlayerInteractorComponent_ShowInteractWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerInteractorComponent_ShowInteractWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerInteractorComponent_ShowInteractWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerInteractorComponent_ShowInteractWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerInteractorComponent_ShowInteractWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerInteractorComponent, nullptr, "ShowInteractWidget", nullptr, nullptr, sizeof(SBZPlayerInteractorComponent_eventShowInteractWidget_Parms), Z_Construct_UFunction_USBZPlayerInteractorComponent_ShowInteractWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerInteractorComponent_ShowInteractWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerInteractorComponent_ShowInteractWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerInteractorComponent_ShowInteractWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerInteractorComponent_ShowInteractWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerInteractorComponent_ShowInteractWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPlayerInteractorComponent_NoRegister()
	{
		return USBZPlayerInteractorComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerInteractorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionLockCameraData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionLockCameraData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistancePitchCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistancePitchCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Selected_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Selected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValidThisFrame_MetaData[];
#endif
		static void NewProp_bIsValidThisFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValidThisFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInstantModeIndex_MetaData[];
#endif
		static void NewProp_bIsInstantModeIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInstantModeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFrontSelected_MetaData[];
#endif
		static void NewProp_bIsFrontSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFrontSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFailedScreenInteractableCheckFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LastFailedScreenInteractableCheckFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckScreenInteractableFrameInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CheckScreenInteractableFrameInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingOnScreenDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PendingOnScreenDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingOnScreenInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PendingOnScreenInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingOnScreenTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PendingOnScreenTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInteractorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPlayerInteractorComponent_CanInteract, "CanInteract" }, // 2675819621
		{ &Z_Construct_UFunction_USBZPlayerInteractorComponent_GetModeDisplayData, "GetModeDisplayData" }, // 1186628035
		{ &Z_Construct_UFunction_USBZPlayerInteractorComponent_GetSelectedInteraction, "GetSelectedInteraction" }, // 20910362
		{ &Z_Construct_UFunction_USBZPlayerInteractorComponent_IsCurrentInstant, "IsCurrentInstant" }, // 206088169
		{ &Z_Construct_UFunction_USBZPlayerInteractorComponent_ShowInteractWidget, "ShowInteractWidget" }, // 189738139
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZPlayerInteractorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerInteractorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_InteractionLockCameraData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_InteractionLockCameraData = { "InteractionLockCameraData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerInteractorComponent, InteractionLockCameraData), Z_Construct_UScriptStruct_FSBZLockCameraData, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_InteractionLockCameraData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_InteractionLockCameraData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_DistancePitchCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_DistancePitchCurve = { "DistancePitchCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerInteractorComponent, DistancePitchCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_DistancePitchCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_DistancePitchCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_Selected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_Selected = { "Selected", nullptr, (EPropertyFlags)0x0020088000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerInteractorComponent, Selected), Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_Selected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_Selected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsValidThisFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerInteractorComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsValidThisFrame_SetBit(void* Obj)
	{
		((USBZPlayerInteractorComponent*)Obj)->bIsValidThisFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsValidThisFrame = { "bIsValidThisFrame", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZPlayerInteractorComponent), &Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsValidThisFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsValidThisFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsValidThisFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_LocalPlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_LocalPlayerController = { "LocalPlayerController", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerInteractorComponent, LocalPlayerController), Z_Construct_UClass_ASBZPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_LocalPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_LocalPlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsInstantModeIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerInteractorComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsInstantModeIndex_SetBit(void* Obj)
	{
		((USBZPlayerInteractorComponent*)Obj)->bIsInstantModeIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsInstantModeIndex = { "bIsInstantModeIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZPlayerInteractorComponent), &Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsInstantModeIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsInstantModeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsInstantModeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsFrontSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerInteractorComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsFrontSelected_SetBit(void* Obj)
	{
		((USBZPlayerInteractorComponent*)Obj)->bIsFrontSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsFrontSelected = { "bIsFrontSelected", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZPlayerInteractorComponent), &Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsFrontSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsFrontSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsFrontSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_LastFailedScreenInteractableCheckFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_LastFailedScreenInteractableCheckFrame = { "LastFailedScreenInteractableCheckFrame", nullptr, (EPropertyFlags)0x0020080000002001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerInteractorComponent, LastFailedScreenInteractableCheckFrame), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_LastFailedScreenInteractableCheckFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_LastFailedScreenInteractableCheckFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_CheckScreenInteractableFrameInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_CheckScreenInteractableFrameInterval = { "CheckScreenInteractableFrameInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerInteractorComponent, CheckScreenInteractableFrameInterval), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_CheckScreenInteractableFrameInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_CheckScreenInteractableFrameInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_PendingOnScreenDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_PendingOnScreenDelay = { "PendingOnScreenDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerInteractorComponent, PendingOnScreenDelay), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_PendingOnScreenDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_PendingOnScreenDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_PendingOnScreenInteractable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerInteractorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_PendingOnScreenInteractable = { "PendingOnScreenInteractable", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerInteractorComponent, PendingOnScreenInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_PendingOnScreenInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_PendingOnScreenInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_PendingOnScreenTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerInteractorComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerInteractorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_PendingOnScreenTime = { "PendingOnScreenTime", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerInteractorComponent, PendingOnScreenTime), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_PendingOnScreenTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_PendingOnScreenTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_InteractionLockCameraData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_DistancePitchCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_Selected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsValidThisFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_LocalPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsInstantModeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_bIsFrontSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_LastFailedScreenInteractableCheckFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_CheckScreenInteractableFrameInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_PendingOnScreenDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_PendingOnScreenInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::NewProp_PendingOnScreenTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerInteractorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::ClassParams = {
		&USBZPlayerInteractorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerInteractorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerInteractorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerInteractorComponent, 3357269390);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerInteractorComponent>()
	{
		return USBZPlayerInteractorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerInteractorComponent(Z_Construct_UClass_USBZPlayerInteractorComponent, &USBZPlayerInteractorComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerInteractorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerInteractorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
