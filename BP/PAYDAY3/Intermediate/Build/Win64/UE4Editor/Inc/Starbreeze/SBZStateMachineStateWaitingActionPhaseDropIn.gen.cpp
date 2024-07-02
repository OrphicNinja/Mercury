// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateWaitingActionPhaseDropIn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateWaitingActionPhaseDropIn() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseDropIn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseDropIn();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseDropIn::execHandleGameStateReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleGameStateReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseDropIn::execHandleJoinedHost)
	{
		P_GET_OBJECT(UWorld,Z_Param_NewWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleJoinedHost(Z_Param_NewWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateWaitingActionPhaseDropIn::execHandlePlayerControllerReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerControllerReady();
		P_NATIVE_END;
	}
	void USBZStateMachineStateWaitingActionPhaseDropIn::StaticRegisterNativesUSBZStateMachineStateWaitingActionPhaseDropIn()
	{
		UClass* Class = USBZStateMachineStateWaitingActionPhaseDropIn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleGameStateReady", &USBZStateMachineStateWaitingActionPhaseDropIn::execHandleGameStateReady },
			{ "HandleJoinedHost", &USBZStateMachineStateWaitingActionPhaseDropIn::execHandleJoinedHost },
			{ "HandlePlayerControllerReady", &USBZStateMachineStateWaitingActionPhaseDropIn::execHandlePlayerControllerReady },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleGameStateReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleGameStateReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseDropIn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleGameStateReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseDropIn, nullptr, "HandleGameStateReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleGameStateReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleGameStateReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleGameStateReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleGameStateReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleJoinedHost_Statics
	{
		struct SBZStateMachineStateWaitingActionPhaseDropIn_eventHandleJoinedHost_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleJoinedHost_Statics::NewProp_NewWorld = { "NewWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateWaitingActionPhaseDropIn_eventHandleJoinedHost_Parms, NewWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleJoinedHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleJoinedHost_Statics::NewProp_NewWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleJoinedHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseDropIn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleJoinedHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseDropIn, nullptr, "HandleJoinedHost", nullptr, nullptr, sizeof(SBZStateMachineStateWaitingActionPhaseDropIn_eventHandleJoinedHost_Parms), Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleJoinedHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleJoinedHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleJoinedHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleJoinedHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleJoinedHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleJoinedHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandlePlayerControllerReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandlePlayerControllerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseDropIn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandlePlayerControllerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseDropIn, nullptr, "HandlePlayerControllerReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandlePlayerControllerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandlePlayerControllerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandlePlayerControllerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandlePlayerControllerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseDropIn_NoRegister()
	{
		return USBZStateMachineStateWaitingActionPhaseDropIn::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseDropIn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseDropIn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseDropIn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleGameStateReady, "HandleGameStateReady" }, // 1640102560
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandleJoinedHost, "HandleJoinedHost" }, // 1023559310
		{ &Z_Construct_UFunction_USBZStateMachineStateWaitingActionPhaseDropIn_HandlePlayerControllerReady, "HandlePlayerControllerReady" }, // 2523543436
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseDropIn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateWaitingActionPhaseDropIn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitingActionPhaseDropIn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseDropIn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateWaitingActionPhaseDropIn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseDropIn_Statics::ClassParams = {
		&USBZStateMachineStateWaitingActionPhaseDropIn::StaticClass,
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
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseDropIn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseDropIn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseDropIn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseDropIn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateWaitingActionPhaseDropIn, 2210695729);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateWaitingActionPhaseDropIn>()
	{
		return USBZStateMachineStateWaitingActionPhaseDropIn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateWaitingActionPhaseDropIn(Z_Construct_UClass_USBZStateMachineStateWaitingActionPhaseDropIn, &USBZStateMachineStateWaitingActionPhaseDropIn::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateWaitingActionPhaseDropIn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateWaitingActionPhaseDropIn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
