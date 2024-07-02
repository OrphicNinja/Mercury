// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZToolHackableInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZToolHackableInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolHackableInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolHackableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHackableInteractableComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMiniGameComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHackingComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ISBZToolHackableInterface::execAddToWorldRuntime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToWorldRuntime_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZToolHackableInterface::execGetHackableInteractableComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZHackableInteractableComponent**)Z_Param__Result=P_THIS->GetHackableInteractableComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZToolHackableInterface::execGetHackableLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetHackableLocation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZToolHackableInterface::execGetHackableMiniGameComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZMiniGameComponent**)Z_Param__Result=P_THIS->GetHackableMiniGameComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZToolHackableInterface::execGetHackingComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZHackingComponent**)Z_Param__Result=P_THIS->GetHackingComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZToolHackableInterface::execHighlightHackable)
	{
		P_GET_UBOOL(Z_Param_bInHighlight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HighlightHackable_Implementation(Z_Param_bInHighlight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZToolHackableInterface::execRemoveFromWorldRuntime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromWorldRuntime_Implementation();
		P_NATIVE_END;
	}
	void ISBZToolHackableInterface::AddToWorldRuntime()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddToWorldRuntime instead.");
	}
	USBZHackableInteractableComponent* ISBZToolHackableInterface::GetHackableInteractableComponent()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHackableInteractableComponent instead.");
		SBZToolHackableInterface_eventGetHackableInteractableComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	FVector ISBZToolHackableInterface::GetHackableLocation() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHackableLocation instead.");
		SBZToolHackableInterface_eventGetHackableLocation_Parms Parms;
		return Parms.ReturnValue;
	}
	USBZMiniGameComponent* ISBZToolHackableInterface::GetHackableMiniGameComponent()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHackableMiniGameComponent instead.");
		SBZToolHackableInterface_eventGetHackableMiniGameComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	USBZHackingComponent* ISBZToolHackableInterface::GetHackingComponent()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHackingComponent instead.");
		SBZToolHackableInterface_eventGetHackingComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	void ISBZToolHackableInterface::HighlightHackable(bool bInHighlight)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HighlightHackable instead.");
	}
	void ISBZToolHackableInterface::OnHackingSyncAborted(bool bInIsSynchedAlready)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnHackingSyncAborted instead.");
	}
	void ISBZToolHackableInterface::OnHackingSyncCompleted()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnHackingSyncCompleted instead.");
	}
	void ISBZToolHackableInterface::OnHackingSyncStarted()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnHackingSyncStarted instead.");
	}
	void ISBZToolHackableInterface::OnHackingSyncSucceeded()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnHackingSyncSucceeded instead.");
	}
	void ISBZToolHackableInterface::RemoveFromWorldRuntime()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveFromWorldRuntime instead.");
	}
	void USBZToolHackableInterface::StaticRegisterNativesUSBZToolHackableInterface()
	{
		UClass* Class = USBZToolHackableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToWorldRuntime", &ISBZToolHackableInterface::execAddToWorldRuntime },
			{ "GetHackableInteractableComponent", &ISBZToolHackableInterface::execGetHackableInteractableComponent },
			{ "GetHackableLocation", &ISBZToolHackableInterface::execGetHackableLocation },
			{ "GetHackableMiniGameComponent", &ISBZToolHackableInterface::execGetHackableMiniGameComponent },
			{ "GetHackingComponent", &ISBZToolHackableInterface::execGetHackingComponent },
			{ "HighlightHackable", &ISBZToolHackableInterface::execHighlightHackable },
			{ "RemoveFromWorldRuntime", &ISBZToolHackableInterface::execRemoveFromWorldRuntime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZToolHackableInterface_AddToWorldRuntime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZToolHackableInterface_AddToWorldRuntime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZToolHackableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZToolHackableInterface_AddToWorldRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZToolHackableInterface, nullptr, "AddToWorldRuntime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZToolHackableInterface_AddToWorldRuntime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_AddToWorldRuntime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZToolHackableInterface_AddToWorldRuntime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZToolHackableInterface_AddToWorldRuntime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZToolHackableInterface_GetHackableInteractableComponent_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZToolHackableInterface_GetHackableInteractableComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZToolHackableInterface_GetHackableInteractableComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZToolHackableInterface_eventGetHackableInteractableComponent_Parms, ReturnValue), Z_Construct_UClass_USBZHackableInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZToolHackableInterface_GetHackableInteractableComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_GetHackableInteractableComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZToolHackableInterface_GetHackableInteractableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZToolHackableInterface_GetHackableInteractableComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZToolHackableInterface_GetHackableInteractableComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZToolHackableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZToolHackableInterface_GetHackableInteractableComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZToolHackableInterface, nullptr, "GetHackableInteractableComponent", nullptr, nullptr, sizeof(SBZToolHackableInterface_eventGetHackableInteractableComponent_Parms), Z_Construct_UFunction_USBZToolHackableInterface_GetHackableInteractableComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_GetHackableInteractableComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZToolHackableInterface_GetHackableInteractableComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_GetHackableInteractableComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZToolHackableInterface_GetHackableInteractableComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZToolHackableInterface_GetHackableInteractableComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZToolHackableInterface_GetHackableLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZToolHackableInterface_GetHackableLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZToolHackableInterface_eventGetHackableLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZToolHackableInterface_GetHackableLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZToolHackableInterface_GetHackableLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZToolHackableInterface_GetHackableLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZToolHackableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZToolHackableInterface_GetHackableLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZToolHackableInterface, nullptr, "GetHackableLocation", nullptr, nullptr, sizeof(SBZToolHackableInterface_eventGetHackableLocation_Parms), Z_Construct_UFunction_USBZToolHackableInterface_GetHackableLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_GetHackableLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZToolHackableInterface_GetHackableLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_GetHackableLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZToolHackableInterface_GetHackableLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZToolHackableInterface_GetHackableLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZToolHackableInterface_GetHackableMiniGameComponent_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZToolHackableInterface_GetHackableMiniGameComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZToolHackableInterface_GetHackableMiniGameComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZToolHackableInterface_eventGetHackableMiniGameComponent_Parms, ReturnValue), Z_Construct_UClass_USBZMiniGameComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZToolHackableInterface_GetHackableMiniGameComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_GetHackableMiniGameComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZToolHackableInterface_GetHackableMiniGameComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZToolHackableInterface_GetHackableMiniGameComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZToolHackableInterface_GetHackableMiniGameComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZToolHackableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZToolHackableInterface_GetHackableMiniGameComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZToolHackableInterface, nullptr, "GetHackableMiniGameComponent", nullptr, nullptr, sizeof(SBZToolHackableInterface_eventGetHackableMiniGameComponent_Parms), Z_Construct_UFunction_USBZToolHackableInterface_GetHackableMiniGameComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_GetHackableMiniGameComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZToolHackableInterface_GetHackableMiniGameComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_GetHackableMiniGameComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZToolHackableInterface_GetHackableMiniGameComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZToolHackableInterface_GetHackableMiniGameComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZToolHackableInterface_GetHackingComponent_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZToolHackableInterface_GetHackingComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZToolHackableInterface_GetHackingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZToolHackableInterface_eventGetHackingComponent_Parms, ReturnValue), Z_Construct_UClass_USBZHackingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZToolHackableInterface_GetHackingComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_GetHackingComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZToolHackableInterface_GetHackingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZToolHackableInterface_GetHackingComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZToolHackableInterface_GetHackingComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZToolHackableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZToolHackableInterface_GetHackingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZToolHackableInterface, nullptr, "GetHackingComponent", nullptr, nullptr, sizeof(SBZToolHackableInterface_eventGetHackingComponent_Parms), Z_Construct_UFunction_USBZToolHackableInterface_GetHackingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_GetHackingComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZToolHackableInterface_GetHackingComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_GetHackingComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZToolHackableInterface_GetHackingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZToolHackableInterface_GetHackingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZToolHackableInterface_HighlightHackable_Statics
	{
		static void NewProp_bInHighlight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInHighlight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZToolHackableInterface_HighlightHackable_Statics::NewProp_bInHighlight_SetBit(void* Obj)
	{
		((SBZToolHackableInterface_eventHighlightHackable_Parms*)Obj)->bInHighlight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZToolHackableInterface_HighlightHackable_Statics::NewProp_bInHighlight = { "bInHighlight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZToolHackableInterface_eventHighlightHackable_Parms), &Z_Construct_UFunction_USBZToolHackableInterface_HighlightHackable_Statics::NewProp_bInHighlight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZToolHackableInterface_HighlightHackable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZToolHackableInterface_HighlightHackable_Statics::NewProp_bInHighlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZToolHackableInterface_HighlightHackable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZToolHackableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZToolHackableInterface_HighlightHackable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZToolHackableInterface, nullptr, "HighlightHackable", nullptr, nullptr, sizeof(SBZToolHackableInterface_eventHighlightHackable_Parms), Z_Construct_UFunction_USBZToolHackableInterface_HighlightHackable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_HighlightHackable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZToolHackableInterface_HighlightHackable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_HighlightHackable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZToolHackableInterface_HighlightHackable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZToolHackableInterface_HighlightHackable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncAborted_Statics
	{
		static void NewProp_bInIsSynchedAlready_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsSynchedAlready;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncAborted_Statics::NewProp_bInIsSynchedAlready_SetBit(void* Obj)
	{
		((SBZToolHackableInterface_eventOnHackingSyncAborted_Parms*)Obj)->bInIsSynchedAlready = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncAborted_Statics::NewProp_bInIsSynchedAlready = { "bInIsSynchedAlready", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZToolHackableInterface_eventOnHackingSyncAborted_Parms), &Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncAborted_Statics::NewProp_bInIsSynchedAlready_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncAborted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncAborted_Statics::NewProp_bInIsSynchedAlready,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncAborted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZToolHackableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncAborted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZToolHackableInterface, nullptr, "OnHackingSyncAborted", nullptr, nullptr, sizeof(SBZToolHackableInterface_eventOnHackingSyncAborted_Parms), Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncAborted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncAborted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncAborted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncAborted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncAborted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncAborted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZToolHackableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZToolHackableInterface, nullptr, "OnHackingSyncCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZToolHackableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZToolHackableInterface, nullptr, "OnHackingSyncStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncSucceeded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncSucceeded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZToolHackableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZToolHackableInterface, nullptr, "OnHackingSyncSucceeded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncSucceeded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncSucceeded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncSucceeded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncSucceeded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZToolHackableInterface_RemoveFromWorldRuntime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZToolHackableInterface_RemoveFromWorldRuntime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZToolHackableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZToolHackableInterface_RemoveFromWorldRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZToolHackableInterface, nullptr, "RemoveFromWorldRuntime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZToolHackableInterface_RemoveFromWorldRuntime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZToolHackableInterface_RemoveFromWorldRuntime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZToolHackableInterface_RemoveFromWorldRuntime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZToolHackableInterface_RemoveFromWorldRuntime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZToolHackableInterface_NoRegister()
	{
		return USBZToolHackableInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZToolHackableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZToolHackableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZToolHackableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZToolHackableInterface_AddToWorldRuntime, "AddToWorldRuntime" }, // 19794445
		{ &Z_Construct_UFunction_USBZToolHackableInterface_GetHackableInteractableComponent, "GetHackableInteractableComponent" }, // 3849303317
		{ &Z_Construct_UFunction_USBZToolHackableInterface_GetHackableLocation, "GetHackableLocation" }, // 2138864605
		{ &Z_Construct_UFunction_USBZToolHackableInterface_GetHackableMiniGameComponent, "GetHackableMiniGameComponent" }, // 28886367
		{ &Z_Construct_UFunction_USBZToolHackableInterface_GetHackingComponent, "GetHackingComponent" }, // 253097496
		{ &Z_Construct_UFunction_USBZToolHackableInterface_HighlightHackable, "HighlightHackable" }, // 3725163685
		{ &Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncAborted, "OnHackingSyncAborted" }, // 3298563446
		{ &Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncCompleted, "OnHackingSyncCompleted" }, // 1297755175
		{ &Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncStarted, "OnHackingSyncStarted" }, // 1537655867
		{ &Z_Construct_UFunction_USBZToolHackableInterface_OnHackingSyncSucceeded, "OnHackingSyncSucceeded" }, // 1127313420
		{ &Z_Construct_UFunction_USBZToolHackableInterface_RemoveFromWorldRuntime, "RemoveFromWorldRuntime" }, // 95199277
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolHackableInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZToolHackableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZToolHackableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZToolHackableInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZToolHackableInterface_Statics::ClassParams = {
		&USBZToolHackableInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZToolHackableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolHackableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZToolHackableInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZToolHackableInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZToolHackableInterface, 2731355276);
	template<> STARBREEZE_API UClass* StaticClass<USBZToolHackableInterface>()
	{
		return USBZToolHackableInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZToolHackableInterface(Z_Construct_UClass_USBZToolHackableInterface, &USBZToolHackableInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZToolHackableInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZToolHackableInterface);
	static FName NAME_USBZToolHackableInterface_AddToWorldRuntime = FName(TEXT("AddToWorldRuntime"));
	void ISBZToolHackableInterface::Execute_AddToWorldRuntime(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZToolHackableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USBZToolHackableInterface_AddToWorldRuntime);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ISBZToolHackableInterface*)(O->GetNativeInterfaceAddress(USBZToolHackableInterface::StaticClass())))
		{
			I->AddToWorldRuntime_Implementation();
		}
	}
	static FName NAME_USBZToolHackableInterface_GetHackableInteractableComponent = FName(TEXT("GetHackableInteractableComponent"));
	USBZHackableInteractableComponent* ISBZToolHackableInterface::Execute_GetHackableInteractableComponent(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZToolHackableInterface::StaticClass()));
		SBZToolHackableInterface_eventGetHackableInteractableComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZToolHackableInterface_GetHackableInteractableComponent);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZToolHackableInterface*)(O->GetNativeInterfaceAddress(USBZToolHackableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetHackableInteractableComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZToolHackableInterface_GetHackableLocation = FName(TEXT("GetHackableLocation"));
	FVector ISBZToolHackableInterface::Execute_GetHackableLocation(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZToolHackableInterface::StaticClass()));
		SBZToolHackableInterface_eventGetHackableLocation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZToolHackableInterface_GetHackableLocation);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZToolHackableInterface*)(O->GetNativeInterfaceAddress(USBZToolHackableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetHackableLocation_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZToolHackableInterface_GetHackableMiniGameComponent = FName(TEXT("GetHackableMiniGameComponent"));
	USBZMiniGameComponent* ISBZToolHackableInterface::Execute_GetHackableMiniGameComponent(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZToolHackableInterface::StaticClass()));
		SBZToolHackableInterface_eventGetHackableMiniGameComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZToolHackableInterface_GetHackableMiniGameComponent);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZToolHackableInterface*)(O->GetNativeInterfaceAddress(USBZToolHackableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetHackableMiniGameComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZToolHackableInterface_GetHackingComponent = FName(TEXT("GetHackingComponent"));
	USBZHackingComponent* ISBZToolHackableInterface::Execute_GetHackingComponent(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZToolHackableInterface::StaticClass()));
		SBZToolHackableInterface_eventGetHackingComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZToolHackableInterface_GetHackingComponent);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZToolHackableInterface*)(O->GetNativeInterfaceAddress(USBZToolHackableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetHackingComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZToolHackableInterface_HighlightHackable = FName(TEXT("HighlightHackable"));
	void ISBZToolHackableInterface::Execute_HighlightHackable(UObject* O, bool bInHighlight)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZToolHackableInterface::StaticClass()));
		SBZToolHackableInterface_eventHighlightHackable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZToolHackableInterface_HighlightHackable);
		if (Func)
		{
			Parms.bInHighlight=bInHighlight;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZToolHackableInterface*)(O->GetNativeInterfaceAddress(USBZToolHackableInterface::StaticClass())))
		{
			I->HighlightHackable_Implementation(bInHighlight);
		}
	}
	static FName NAME_USBZToolHackableInterface_OnHackingSyncAborted = FName(TEXT("OnHackingSyncAborted"));
	void ISBZToolHackableInterface::Execute_OnHackingSyncAborted(UObject* O, bool bInIsSynchedAlready)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZToolHackableInterface::StaticClass()));
		SBZToolHackableInterface_eventOnHackingSyncAborted_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZToolHackableInterface_OnHackingSyncAborted);
		if (Func)
		{
			Parms.bInIsSynchedAlready=bInIsSynchedAlready;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_USBZToolHackableInterface_OnHackingSyncCompleted = FName(TEXT("OnHackingSyncCompleted"));
	void ISBZToolHackableInterface::Execute_OnHackingSyncCompleted(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZToolHackableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USBZToolHackableInterface_OnHackingSyncCompleted);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_USBZToolHackableInterface_OnHackingSyncStarted = FName(TEXT("OnHackingSyncStarted"));
	void ISBZToolHackableInterface::Execute_OnHackingSyncStarted(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZToolHackableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USBZToolHackableInterface_OnHackingSyncStarted);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_USBZToolHackableInterface_OnHackingSyncSucceeded = FName(TEXT("OnHackingSyncSucceeded"));
	void ISBZToolHackableInterface::Execute_OnHackingSyncSucceeded(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZToolHackableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USBZToolHackableInterface_OnHackingSyncSucceeded);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_USBZToolHackableInterface_RemoveFromWorldRuntime = FName(TEXT("RemoveFromWorldRuntime"));
	void ISBZToolHackableInterface::Execute_RemoveFromWorldRuntime(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZToolHackableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USBZToolHackableInterface_RemoveFromWorldRuntime);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ISBZToolHackableInterface*)(O->GetNativeInterfaceAddress(USBZToolHackableInterface::StaticClass())))
		{
			I->RemoveFromWorldRuntime_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
