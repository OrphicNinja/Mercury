// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZObjectContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZObjectContainer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectContainer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	DEFINE_FUNCTION(USBZObjectContainer::execAdd)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Add(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZObjectContainer::execCleanUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CleanUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZObjectContainer::execK2_GetArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->K2_GetArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZObjectContainer::execRemove)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Remove(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZObjectContainer::execRemoveAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAt(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZObjectContainer::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	void USBZObjectContainer::StaticRegisterNativesUSBZObjectContainer()
	{
		UClass* Class = USBZObjectContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add", &USBZObjectContainer::execAdd },
			{ "CleanUp", &USBZObjectContainer::execCleanUp },
			{ "K2_GetArray", &USBZObjectContainer::execK2_GetArray },
			{ "Remove", &USBZObjectContainer::execRemove },
			{ "RemoveAt", &USBZObjectContainer::execRemoveAt },
			{ "Reset", &USBZObjectContainer::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZObjectContainer_Add_Statics
	{
		struct SBZObjectContainer_eventAdd_Parms
		{
			UObject* Object;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZObjectContainer_Add_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjectContainer_eventAdd_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZObjectContainer_Add_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZObjectContainer_eventAdd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZObjectContainer_Add_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZObjectContainer_eventAdd_Parms), &Z_Construct_UFunction_USBZObjectContainer_Add_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZObjectContainer_Add_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectContainer_Add_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectContainer_Add_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectContainer_Add_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectContainer_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectContainer, nullptr, "Add", nullptr, nullptr, sizeof(SBZObjectContainer_eventAdd_Parms), Z_Construct_UFunction_USBZObjectContainer_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectContainer_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectContainer_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectContainer_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectContainer_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectContainer_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZObjectContainer_CleanUp_Statics
	{
		struct SBZObjectContainer_eventCleanUp_Parms
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
	void Z_Construct_UFunction_USBZObjectContainer_CleanUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZObjectContainer_eventCleanUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZObjectContainer_CleanUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZObjectContainer_eventCleanUp_Parms), &Z_Construct_UFunction_USBZObjectContainer_CleanUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZObjectContainer_CleanUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectContainer_CleanUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectContainer_CleanUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectContainer_CleanUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectContainer, nullptr, "CleanUp", nullptr, nullptr, sizeof(SBZObjectContainer_eventCleanUp_Parms), Z_Construct_UFunction_USBZObjectContainer_CleanUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectContainer_CleanUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectContainer_CleanUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectContainer_CleanUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectContainer_CleanUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectContainer_CleanUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZObjectContainer_K2_GetArray_Statics
	{
		struct SBZObjectContainer_eventK2_GetArray_Parms
		{
			TArray<UObject*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZObjectContainer_K2_GetArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZObjectContainer_K2_GetArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjectContainer_eventK2_GetArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZObjectContainer_K2_GetArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectContainer_K2_GetArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectContainer_K2_GetArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectContainer_K2_GetArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectContainer_K2_GetArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectContainer, nullptr, "K2_GetArray", nullptr, nullptr, sizeof(SBZObjectContainer_eventK2_GetArray_Parms), Z_Construct_UFunction_USBZObjectContainer_K2_GetArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectContainer_K2_GetArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectContainer_K2_GetArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectContainer_K2_GetArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectContainer_K2_GetArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectContainer_K2_GetArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZObjectContainer_Remove_Statics
	{
		struct SBZObjectContainer_eventRemove_Parms
		{
			UObject* Object;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZObjectContainer_Remove_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjectContainer_eventRemove_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZObjectContainer_Remove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZObjectContainer_eventRemove_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZObjectContainer_Remove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZObjectContainer_eventRemove_Parms), &Z_Construct_UFunction_USBZObjectContainer_Remove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZObjectContainer_Remove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectContainer_Remove_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectContainer_Remove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectContainer_Remove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectContainer_Remove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectContainer, nullptr, "Remove", nullptr, nullptr, sizeof(SBZObjectContainer_eventRemove_Parms), Z_Construct_UFunction_USBZObjectContainer_Remove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectContainer_Remove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectContainer_Remove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectContainer_Remove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectContainer_Remove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectContainer_Remove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZObjectContainer_RemoveAt_Statics
	{
		struct SBZObjectContainer_eventRemoveAt_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZObjectContainer_RemoveAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjectContainer_eventRemoveAt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZObjectContainer_RemoveAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZObjectContainer_eventRemoveAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZObjectContainer_RemoveAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZObjectContainer_eventRemoveAt_Parms), &Z_Construct_UFunction_USBZObjectContainer_RemoveAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZObjectContainer_RemoveAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectContainer_RemoveAt_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZObjectContainer_RemoveAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectContainer_RemoveAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectContainer_RemoveAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectContainer, nullptr, "RemoveAt", nullptr, nullptr, sizeof(SBZObjectContainer_eventRemoveAt_Parms), Z_Construct_UFunction_USBZObjectContainer_RemoveAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectContainer_RemoveAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectContainer_RemoveAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectContainer_RemoveAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectContainer_RemoveAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectContainer_RemoveAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZObjectContainer_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZObjectContainer_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZObjectContainer_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZObjectContainer, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZObjectContainer_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZObjectContainer_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZObjectContainer_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZObjectContainer_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZObjectContainer_NoRegister()
	{
		return USBZObjectContainer::StaticClass();
	}
	struct Z_Construct_UClass_USBZObjectContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Objects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestrictedObjectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RestrictedObjectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestrictedInterfaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RestrictedInterfaceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDuplicates_MetaData[];
#endif
		static void NewProp_bAllowDuplicates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDuplicates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepSorted_MetaData[];
#endif
		static void NewProp_bKeepSorted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepSorted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZObjectContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZObjectContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZObjectContainer_Add, "Add" }, // 38650684
		{ &Z_Construct_UFunction_USBZObjectContainer_CleanUp, "CleanUp" }, // 917864634
		{ &Z_Construct_UFunction_USBZObjectContainer_K2_GetArray, "K2_GetArray" }, // 1300549749
		{ &Z_Construct_UFunction_USBZObjectContainer_Remove, "Remove" }, // 2026070893
		{ &Z_Construct_UFunction_USBZObjectContainer_RemoveAt, "RemoveAt" }, // 3641923340
		{ &Z_Construct_UFunction_USBZObjectContainer_Reset, "Reset" }, // 2159038821
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZObjectContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZObjectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_Objects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectContainer" },
		{ "ModuleRelativePath", "Public/SBZObjectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObjectContainer, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_Objects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_Objects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_RestrictedObjectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectContainer" },
		{ "ModuleRelativePath", "Public/SBZObjectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_RestrictedObjectClass = { "RestrictedObjectClass", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObjectContainer, RestrictedObjectClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_RestrictedObjectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_RestrictedObjectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_RestrictedInterfaceType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectContainer" },
		{ "ModuleRelativePath", "Public/SBZObjectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_RestrictedInterfaceType = { "RestrictedInterfaceType", nullptr, (EPropertyFlags)0x0024080000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObjectContainer, RestrictedInterfaceType), Z_Construct_UClass_UInterface, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_RestrictedInterfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_RestrictedInterfaceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_bAllowDuplicates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectContainer" },
		{ "ModuleRelativePath", "Public/SBZObjectContainer.h" },
	};
#endif
	void Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_bAllowDuplicates_SetBit(void* Obj)
	{
		((USBZObjectContainer*)Obj)->bAllowDuplicates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_bAllowDuplicates = { "bAllowDuplicates", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZObjectContainer), &Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_bAllowDuplicates_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_bAllowDuplicates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_bAllowDuplicates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_bKeepSorted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectContainer" },
		{ "ModuleRelativePath", "Public/SBZObjectContainer.h" },
	};
#endif
	void Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_bKeepSorted_SetBit(void* Obj)
	{
		((USBZObjectContainer*)Obj)->bKeepSorted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_bKeepSorted = { "bKeepSorted", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZObjectContainer), &Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_bKeepSorted_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_bKeepSorted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_bKeepSorted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZObjectContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_Objects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_Objects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_RestrictedObjectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_RestrictedInterfaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_bAllowDuplicates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectContainer_Statics::NewProp_bKeepSorted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZObjectContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZObjectContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZObjectContainer_Statics::ClassParams = {
		&USBZObjectContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZObjectContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectContainer_Statics::PropPointers),
		0,
		0x002000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZObjectContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZObjectContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZObjectContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZObjectContainer, 1698834385);
	template<> STARBREEZE_API UClass* StaticClass<USBZObjectContainer>()
	{
		return USBZObjectContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZObjectContainer(Z_Construct_UClass_USBZObjectContainer, &USBZObjectContainer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZObjectContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZObjectContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
