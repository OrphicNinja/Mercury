// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZClientStateMachineState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZClientStateMachineState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCommonStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZServiceStatus();
// End Cross Module References
	DEFINE_FUNCTION(USBZClientStateMachineState::execOnNetworkStatusChanged)
	{
		P_GET_ENUM(ESBZServiceStatus,Z_Param_ServiceStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNetworkStatusChanged(ESBZServiceStatus(Z_Param_ServiceStatus));
		P_NATIVE_END;
	}
	void USBZClientStateMachineState::StaticRegisterNativesUSBZClientStateMachineState()
	{
		UClass* Class = USBZClientStateMachineState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnNetworkStatusChanged", &USBZClientStateMachineState::execOnNetworkStatusChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZClientStateMachineState_OnNetworkStatusChanged_Statics
	{
		struct SBZClientStateMachineState_eventOnNetworkStatusChanged_Parms
		{
			ESBZServiceStatus ServiceStatus;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServiceStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ServiceStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZClientStateMachineState_OnNetworkStatusChanged_Statics::NewProp_ServiceStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZClientStateMachineState_OnNetworkStatusChanged_Statics::NewProp_ServiceStatus = { "ServiceStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZClientStateMachineState_eventOnNetworkStatusChanged_Parms, ServiceStatus), Z_Construct_UEnum_Starbreeze_ESBZServiceStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZClientStateMachineState_OnNetworkStatusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachineState_OnNetworkStatusChanged_Statics::NewProp_ServiceStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZClientStateMachineState_OnNetworkStatusChanged_Statics::NewProp_ServiceStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZClientStateMachineState_OnNetworkStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZClientStateMachineState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZClientStateMachineState_OnNetworkStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZClientStateMachineState, nullptr, "OnNetworkStatusChanged", nullptr, nullptr, sizeof(SBZClientStateMachineState_eventOnNetworkStatusChanged_Parms), Z_Construct_UFunction_USBZClientStateMachineState_OnNetworkStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachineState_OnNetworkStatusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZClientStateMachineState_OnNetworkStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZClientStateMachineState_OnNetworkStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZClientStateMachineState_OnNetworkStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZClientStateMachineState_OnNetworkStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZClientStateMachineState_NoRegister()
	{
		return USBZClientStateMachineState::StaticClass();
	}
	struct Z_Construct_UClass_USBZClientStateMachineState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZClientStateMachineState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCommonStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZClientStateMachineState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZClientStateMachineState_OnNetworkStatusChanged, "OnNetworkStatusChanged" }, // 1022413952
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZClientStateMachineState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZClientStateMachineState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZClientStateMachineState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZClientStateMachineState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZClientStateMachineState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZClientStateMachineState_Statics::ClassParams = {
		&USBZClientStateMachineState::StaticClass,
		"Starbreeze",
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
		METADATA_PARAMS(Z_Construct_UClass_USBZClientStateMachineState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZClientStateMachineState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZClientStateMachineState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZClientStateMachineState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZClientStateMachineState, 3099699381);
	template<> STARBREEZE_API UClass* StaticClass<USBZClientStateMachineState>()
	{
		return USBZClientStateMachineState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZClientStateMachineState(Z_Construct_UClass_USBZClientStateMachineState, &USBZClientStateMachineState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZClientStateMachineState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZClientStateMachineState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
