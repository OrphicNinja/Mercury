// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCuttableInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCuttableInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuttableInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuttableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuttableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuttableSplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCuttableState();
// End Cross Module References
	DEFINE_FUNCTION(ISBZCuttableInterface::execGetCuttableComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZCuttableComponent**)Z_Param__Result=P_THIS->GetCuttableComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZCuttableInterface::execGetCuttableSplineComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZCuttableSplineComponent**)Z_Param__Result=P_THIS->GetCuttableSplineComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZCuttableInterface::execGetMeltingMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetMeltingMesh_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZCuttableInterface::execGetNiagaraComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraComponent**)Z_Param__Result=P_THIS->GetNiagaraComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZCuttableInterface::execIsWindow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWindow_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZCuttableInterface::execOnCuttableStateChanged)
	{
		P_GET_ENUM(ESBZCuttableState,Z_Param_NewCuttableState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCuttableStateChanged_Implementation(ESBZCuttableState(Z_Param_NewCuttableState));
		P_NATIVE_END;
	}
	USBZCuttableComponent* ISBZCuttableInterface::GetCuttableComponent()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCuttableComponent instead.");
		SBZCuttableInterface_eventGetCuttableComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	USBZCuttableSplineComponent* ISBZCuttableInterface::GetCuttableSplineComponent()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCuttableSplineComponent instead.");
		SBZCuttableInterface_eventGetCuttableSplineComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	UStaticMeshComponent* ISBZCuttableInterface::GetMeltingMesh()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMeltingMesh instead.");
		SBZCuttableInterface_eventGetMeltingMesh_Parms Parms;
		return Parms.ReturnValue;
	}
	UNiagaraComponent* ISBZCuttableInterface::GetNiagaraComponent()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetNiagaraComponent instead.");
		SBZCuttableInterface_eventGetNiagaraComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ISBZCuttableInterface::IsWindow()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsWindow instead.");
		SBZCuttableInterface_eventIsWindow_Parms Parms;
		return Parms.ReturnValue;
	}
	void ISBZCuttableInterface::OnCuttableStateChanged(ESBZCuttableState NewCuttableState)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnCuttableStateChanged instead.");
	}
	void USBZCuttableInterface::StaticRegisterNativesUSBZCuttableInterface()
	{
		UClass* Class = USBZCuttableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCuttableComponent", &ISBZCuttableInterface::execGetCuttableComponent },
			{ "GetCuttableSplineComponent", &ISBZCuttableInterface::execGetCuttableSplineComponent },
			{ "GetMeltingMesh", &ISBZCuttableInterface::execGetMeltingMesh },
			{ "GetNiagaraComponent", &ISBZCuttableInterface::execGetNiagaraComponent },
			{ "IsWindow", &ISBZCuttableInterface::execIsWindow },
			{ "OnCuttableStateChanged", &ISBZCuttableInterface::execOnCuttableStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCuttableInterface_GetCuttableComponent_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableInterface_GetCuttableComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCuttableInterface_GetCuttableComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableInterface_eventGetCuttableComponent_Parms, ReturnValue), Z_Construct_UClass_USBZCuttableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableInterface_GetCuttableComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableInterface_GetCuttableComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttableInterface_GetCuttableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableInterface_GetCuttableComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableInterface_GetCuttableComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableInterface_GetCuttableComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableInterface, nullptr, "GetCuttableComponent", nullptr, nullptr, sizeof(SBZCuttableInterface_eventGetCuttableComponent_Parms), Z_Construct_UFunction_USBZCuttableInterface_GetCuttableComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableInterface_GetCuttableComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableInterface_GetCuttableComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableInterface_GetCuttableComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableInterface_GetCuttableComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableInterface_GetCuttableComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableInterface_GetCuttableSplineComponent_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableInterface_GetCuttableSplineComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCuttableInterface_GetCuttableSplineComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableInterface_eventGetCuttableSplineComponent_Parms, ReturnValue), Z_Construct_UClass_USBZCuttableSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableInterface_GetCuttableSplineComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableInterface_GetCuttableSplineComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttableInterface_GetCuttableSplineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableInterface_GetCuttableSplineComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableInterface_GetCuttableSplineComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableInterface_GetCuttableSplineComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableInterface, nullptr, "GetCuttableSplineComponent", nullptr, nullptr, sizeof(SBZCuttableInterface_eventGetCuttableSplineComponent_Parms), Z_Construct_UFunction_USBZCuttableInterface_GetCuttableSplineComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableInterface_GetCuttableSplineComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableInterface_GetCuttableSplineComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableInterface_GetCuttableSplineComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableInterface_GetCuttableSplineComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableInterface_GetCuttableSplineComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableInterface_GetMeltingMesh_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableInterface_GetMeltingMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCuttableInterface_GetMeltingMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableInterface_eventGetMeltingMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableInterface_GetMeltingMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableInterface_GetMeltingMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttableInterface_GetMeltingMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableInterface_GetMeltingMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableInterface_GetMeltingMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableInterface_GetMeltingMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableInterface, nullptr, "GetMeltingMesh", nullptr, nullptr, sizeof(SBZCuttableInterface_eventGetMeltingMesh_Parms), Z_Construct_UFunction_USBZCuttableInterface_GetMeltingMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableInterface_GetMeltingMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableInterface_GetMeltingMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableInterface_GetMeltingMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableInterface_GetMeltingMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableInterface_GetMeltingMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableInterface_GetNiagaraComponent_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableInterface_GetNiagaraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCuttableInterface_GetNiagaraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableInterface_eventGetNiagaraComponent_Parms, ReturnValue), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableInterface_GetNiagaraComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableInterface_GetNiagaraComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttableInterface_GetNiagaraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableInterface_GetNiagaraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableInterface_GetNiagaraComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableInterface_GetNiagaraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableInterface, nullptr, "GetNiagaraComponent", nullptr, nullptr, sizeof(SBZCuttableInterface_eventGetNiagaraComponent_Parms), Z_Construct_UFunction_USBZCuttableInterface_GetNiagaraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableInterface_GetNiagaraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableInterface_GetNiagaraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableInterface_GetNiagaraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableInterface_GetNiagaraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableInterface_GetNiagaraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableInterface_IsWindow_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCuttableInterface_IsWindow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCuttableInterface_eventIsWindow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCuttableInterface_IsWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCuttableInterface_eventIsWindow_Parms), &Z_Construct_UFunction_USBZCuttableInterface_IsWindow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttableInterface_IsWindow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableInterface_IsWindow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableInterface_IsWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableInterface_IsWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableInterface, nullptr, "IsWindow", nullptr, nullptr, sizeof(SBZCuttableInterface_eventIsWindow_Parms), Z_Construct_UFunction_USBZCuttableInterface_IsWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableInterface_IsWindow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableInterface_IsWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableInterface_IsWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableInterface_IsWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableInterface_IsWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableInterface_OnCuttableStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewCuttableState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewCuttableState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCuttableInterface_OnCuttableStateChanged_Statics::NewProp_NewCuttableState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCuttableInterface_OnCuttableStateChanged_Statics::NewProp_NewCuttableState = { "NewCuttableState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableInterface_eventOnCuttableStateChanged_Parms, NewCuttableState), Z_Construct_UEnum_Starbreeze_ESBZCuttableState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttableInterface_OnCuttableStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableInterface_OnCuttableStateChanged_Statics::NewProp_NewCuttableState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableInterface_OnCuttableStateChanged_Statics::NewProp_NewCuttableState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableInterface_OnCuttableStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableInterface_OnCuttableStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableInterface, nullptr, "OnCuttableStateChanged", nullptr, nullptr, sizeof(SBZCuttableInterface_eventOnCuttableStateChanged_Parms), Z_Construct_UFunction_USBZCuttableInterface_OnCuttableStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableInterface_OnCuttableStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableInterface_OnCuttableStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableInterface_OnCuttableStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableInterface_OnCuttableStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableInterface_OnCuttableStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCuttableInterface_NoRegister()
	{
		return USBZCuttableInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZCuttableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCuttableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCuttableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCuttableInterface_GetCuttableComponent, "GetCuttableComponent" }, // 2979545237
		{ &Z_Construct_UFunction_USBZCuttableInterface_GetCuttableSplineComponent, "GetCuttableSplineComponent" }, // 2074681121
		{ &Z_Construct_UFunction_USBZCuttableInterface_GetMeltingMesh, "GetMeltingMesh" }, // 2809210803
		{ &Z_Construct_UFunction_USBZCuttableInterface_GetNiagaraComponent, "GetNiagaraComponent" }, // 1289434809
		{ &Z_Construct_UFunction_USBZCuttableInterface_IsWindow, "IsWindow" }, // 4065577863
		{ &Z_Construct_UFunction_USBZCuttableInterface_OnCuttableStateChanged, "OnCuttableStateChanged" }, // 3431587543
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCuttableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZCuttableInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCuttableInterface_Statics::ClassParams = {
		&USBZCuttableInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZCuttableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCuttableInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCuttableInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCuttableInterface, 2736719810);
	template<> STARBREEZE_API UClass* StaticClass<USBZCuttableInterface>()
	{
		return USBZCuttableInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCuttableInterface(Z_Construct_UClass_USBZCuttableInterface, &USBZCuttableInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCuttableInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCuttableInterface);
	static FName NAME_USBZCuttableInterface_GetCuttableComponent = FName(TEXT("GetCuttableComponent"));
	USBZCuttableComponent* ISBZCuttableInterface::Execute_GetCuttableComponent(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZCuttableInterface::StaticClass()));
		SBZCuttableInterface_eventGetCuttableComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZCuttableInterface_GetCuttableComponent);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZCuttableInterface*)(O->GetNativeInterfaceAddress(USBZCuttableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCuttableComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZCuttableInterface_GetCuttableSplineComponent = FName(TEXT("GetCuttableSplineComponent"));
	USBZCuttableSplineComponent* ISBZCuttableInterface::Execute_GetCuttableSplineComponent(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZCuttableInterface::StaticClass()));
		SBZCuttableInterface_eventGetCuttableSplineComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZCuttableInterface_GetCuttableSplineComponent);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZCuttableInterface*)(O->GetNativeInterfaceAddress(USBZCuttableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCuttableSplineComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZCuttableInterface_GetMeltingMesh = FName(TEXT("GetMeltingMesh"));
	UStaticMeshComponent* ISBZCuttableInterface::Execute_GetMeltingMesh(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZCuttableInterface::StaticClass()));
		SBZCuttableInterface_eventGetMeltingMesh_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZCuttableInterface_GetMeltingMesh);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZCuttableInterface*)(O->GetNativeInterfaceAddress(USBZCuttableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetMeltingMesh_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZCuttableInterface_GetNiagaraComponent = FName(TEXT("GetNiagaraComponent"));
	UNiagaraComponent* ISBZCuttableInterface::Execute_GetNiagaraComponent(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZCuttableInterface::StaticClass()));
		SBZCuttableInterface_eventGetNiagaraComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZCuttableInterface_GetNiagaraComponent);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZCuttableInterface*)(O->GetNativeInterfaceAddress(USBZCuttableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetNiagaraComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZCuttableInterface_IsWindow = FName(TEXT("IsWindow"));
	bool ISBZCuttableInterface::Execute_IsWindow(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZCuttableInterface::StaticClass()));
		SBZCuttableInterface_eventIsWindow_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZCuttableInterface_IsWindow);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZCuttableInterface*)(O->GetNativeInterfaceAddress(USBZCuttableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsWindow_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZCuttableInterface_OnCuttableStateChanged = FName(TEXT("OnCuttableStateChanged"));
	void ISBZCuttableInterface::Execute_OnCuttableStateChanged(UObject* O, ESBZCuttableState NewCuttableState)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZCuttableInterface::StaticClass()));
		SBZCuttableInterface_eventOnCuttableStateChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZCuttableInterface_OnCuttableStateChanged);
		if (Func)
		{
			Parms.NewCuttableState=NewCuttableState;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZCuttableInterface*)(O->GetNativeInterfaceAddress(USBZCuttableInterface::StaticClass())))
		{
			I->OnCuttableStateChanged_Implementation(NewCuttableState);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
