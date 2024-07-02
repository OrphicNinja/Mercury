// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateWaitingReturnToIIS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateWaitingReturnToIIS() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataIIS_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateWaitingReturnToIIS::execHandleP2PSessionDestroyed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_GET_UBOOL(Z_Param_bResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleP2PSessionDestroyed(Z_Param_SessionName,Z_Param_bResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitingReturnToIIS::execHandlePostLoadMap)
	{
		P_GET_OBJECT(UWorld,Z_Param_NewWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePostLoadMap(Z_Param_NewWorld);
		P_NATIVE_END;
	}
	void USBZStateMachineStateWaitingReturnToIIS::StaticRegisterNativesUSBZStateMachineStateWaitingReturnToIIS()
	{
		UClass* Class = USBZStateMachineStateWaitingReturnToIIS::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleP2PSessionDestroyed", &USBZStateMachineStateWaitingReturnToIIS::execHandleP2PSessionDestroyed },
			{ "HandlePostLoadMap", &USBZStateMachineStateWaitingReturnToIIS::execHandlePostLoadMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandleP2PSessionDestroyed_Statics
	{
		struct SBZStateMachineStateWaitingReturnToIIS_eventHandleP2PSessionDestroyed_Parms
		{
			FName SessionName;
			bool bResult;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static void NewProp_bResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandleP2PSessionDestroyed_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateWaitingReturnToIIS_eventHandleP2PSessionDestroyed_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandleP2PSessionDestroyed_Statics::NewProp_bResult_SetBit(void* Obj)
	{
		((SBZStateMachineStateWaitingReturnToIIS_eventHandleP2PSessionDestroyed_Parms*)Obj)->bResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandleP2PSessionDestroyed_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZStateMachineStateWaitingReturnToIIS_eventHandleP2PSessionDestroyed_Parms), &Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandleP2PSessionDestroyed_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandleP2PSessionDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandleP2PSessionDestroyed_Statics::NewProp_SessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandleP2PSessionDestroyed_Statics::NewProp_bResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandleP2PSessionDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingReturnToIIS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandleP2PSessionDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS, nullptr, "HandleP2PSessionDestroyed", nullptr, nullptr, sizeof(SBZStateMachineStateWaitingReturnToIIS_eventHandleP2PSessionDestroyed_Parms), Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandleP2PSessionDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandleP2PSessionDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandleP2PSessionDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandleP2PSessionDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandleP2PSessionDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandleP2PSessionDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandlePostLoadMap_Statics
	{
		struct SBZStateMachineStateWaitingReturnToIIS_eventHandlePostLoadMap_Parms
		{
			UWorld* NewWorld;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandlePostLoadMap_Statics::NewProp_NewWorld = { "NewWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateWaitingReturnToIIS_eventHandlePostLoadMap_Parms, NewWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandlePostLoadMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandlePostLoadMap_Statics::NewProp_NewWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandlePostLoadMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingReturnToIIS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandlePostLoadMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS, nullptr, "HandlePostLoadMap", nullptr, nullptr, sizeof(SBZStateMachineStateWaitingReturnToIIS_eventHandlePostLoadMap_Parms), Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandlePostLoadMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandlePostLoadMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandlePostLoadMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandlePostLoadMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandlePostLoadMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandlePostLoadMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_NoRegister()
	{
		return USBZStateMachineStateWaitingReturnToIIS::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandleP2PSessionDestroyed, "HandleP2PSessionDestroyed" }, // 3005116176
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingReturnToIIS_HandlePostLoadMap, "HandlePostLoadMap" }, // 2190004925
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateWaitingReturnToIIS.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingReturnToIIS.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_Statics::NewProp_ReturnReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateWaitingReturnToIIS" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingReturnToIIS.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_Statics::NewProp_ReturnReason = { "ReturnReason", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateWaitingReturnToIIS, ReturnReason), Z_Construct_UClass_USBZStateMachineDataIIS_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_Statics::NewProp_ReturnReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_Statics::NewProp_ReturnReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_Statics::NewProp_ReturnReason,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateWaitingReturnToIIS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_Statics::ClassParams = {
		&USBZStateMachineStateWaitingReturnToIIS::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateWaitingReturnToIIS, 1850381132);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateWaitingReturnToIIS>()
	{
		return USBZStateMachineStateWaitingReturnToIIS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateWaitingReturnToIIS(Z_Construct_UClass_USBZStateMachineStateWaitingReturnToIIS, &USBZStateMachineStateWaitingReturnToIIS::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateWaitingReturnToIIS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateWaitingReturnToIIS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
