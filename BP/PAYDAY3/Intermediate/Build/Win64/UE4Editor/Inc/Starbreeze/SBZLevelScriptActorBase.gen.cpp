// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLevelScriptActorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLevelScriptActorBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLevelScriptActorBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLevelScriptActorBase();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZLevelScriptActorBase::execRemoteEventWithActor)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoteEventWithActor(Z_Param_EventName,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActorBase::execRemoteEventWithActorsArray)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoteEventWithActorsArray(Z_Param_EventName,Z_Param_Out_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActorBase::execRemoteEventWithBool)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
		P_GET_UBOOL(Z_Param_bBool);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoteEventWithBool(Z_Param_EventName,Z_Param_bBool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptActorBase::execRemoteEventWithInt)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Integer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoteEventWithInt(Z_Param_EventName,Z_Param_Integer);
		P_NATIVE_END;
	}
	void ASBZLevelScriptActorBase::StaticRegisterNativesASBZLevelScriptActorBase()
	{
		UClass* Class = ASBZLevelScriptActorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoteEventWithActor", &ASBZLevelScriptActorBase::execRemoteEventWithActor },
			{ "RemoteEventWithActorsArray", &ASBZLevelScriptActorBase::execRemoteEventWithActorsArray },
			{ "RemoteEventWithBool", &ASBZLevelScriptActorBase::execRemoteEventWithBool },
			{ "RemoteEventWithInt", &ASBZLevelScriptActorBase::execRemoteEventWithInt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor_Statics
	{
		struct SBZLevelScriptActorBase_eventRemoteEventWithActor_Parms
		{
			FName EventName;
			AActor* Actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActorBase_eventRemoteEventWithActor_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActorBase_eventRemoteEventWithActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLevelScriptActorBase_eventRemoteEventWithActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLevelScriptActorBase_eventRemoteEventWithActor_Parms), &Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActorBase, nullptr, "RemoteEventWithActor", nullptr, nullptr, sizeof(SBZLevelScriptActorBase_eventRemoteEventWithActor_Parms), Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics
	{
		struct SBZLevelScriptActorBase_eventRemoteEventWithActorsArray_Parms
		{
			FName EventName;
			TArray<AActor*> Actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActorBase_eventRemoteEventWithActorsArray_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::NewProp_Actor_Inner = { "Actor", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActorBase_eventRemoteEventWithActorsArray_Parms, Actor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::NewProp_Actor_MetaData)) };
	void Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLevelScriptActorBase_eventRemoteEventWithActorsArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLevelScriptActorBase_eventRemoteEventWithActorsArray_Parms), &Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::NewProp_Actor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActorBase, nullptr, "RemoteEventWithActorsArray", nullptr, nullptr, sizeof(SBZLevelScriptActorBase_eventRemoteEventWithActorsArray_Parms), Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics
	{
		struct SBZLevelScriptActorBase_eventRemoteEventWithBool_Parms
		{
			FName EventName;
			bool bBool;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName;
		static void NewProp_bBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBool;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActorBase_eventRemoteEventWithBool_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics::NewProp_bBool_SetBit(void* Obj)
	{
		((SBZLevelScriptActorBase_eventRemoteEventWithBool_Parms*)Obj)->bBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics::NewProp_bBool = { "bBool", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLevelScriptActorBase_eventRemoteEventWithBool_Parms), &Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics::NewProp_bBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLevelScriptActorBase_eventRemoteEventWithBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLevelScriptActorBase_eventRemoteEventWithBool_Parms), &Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics::NewProp_bBool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActorBase, nullptr, "RemoteEventWithBool", nullptr, nullptr, sizeof(SBZLevelScriptActorBase_eventRemoteEventWithBool_Parms), Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt_Statics
	{
		struct SBZLevelScriptActorBase_eventRemoteEventWithInt_Parms
		{
			FName EventName;
			int32 Integer;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Integer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActorBase_eventRemoteEventWithInt_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt_Statics::NewProp_Integer = { "Integer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptActorBase_eventRemoteEventWithInt_Parms, Integer), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLevelScriptActorBase_eventRemoteEventWithInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLevelScriptActorBase_eventRemoteEventWithInt_Parms), &Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt_Statics::NewProp_Integer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptActorBase, nullptr, "RemoteEventWithInt", nullptr, nullptr, sizeof(SBZLevelScriptActorBase_eventRemoteEventWithInt_Parms), Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZLevelScriptActorBase_NoRegister()
	{
		return ASBZLevelScriptActorBase::StaticClass();
	}
	struct Z_Construct_UClass_ASBZLevelScriptActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZLevelScriptActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZLevelScriptActorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActor, "RemoteEventWithActor" }, // 3269887371
		{ &Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithActorsArray, "RemoteEventWithActorsArray" }, // 265127867
		{ &Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithBool, "RemoteEventWithBool" }, // 3644944589
		{ &Z_Construct_UFunction_ASBZLevelScriptActorBase_RemoteEventWithInt, "RemoteEventWithInt" }, // 3823005318
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLevelScriptActorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZLevelScriptActorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLevelScriptActorBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZLevelScriptActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZLevelScriptActorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZLevelScriptActorBase_Statics::ClassParams = {
		&ASBZLevelScriptActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZLevelScriptActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLevelScriptActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZLevelScriptActorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZLevelScriptActorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZLevelScriptActorBase, 1263409614);
	template<> STARBREEZE_API UClass* StaticClass<ASBZLevelScriptActorBase>()
	{
		return ASBZLevelScriptActorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZLevelScriptActorBase(Z_Construct_UClass_ASBZLevelScriptActorBase, &ASBZLevelScriptActorBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZLevelScriptActorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZLevelScriptActorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
