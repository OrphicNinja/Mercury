// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateSubsystemInitialisation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateSubsystemInitialisation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateSubsystemInitialisation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateSubsystemInitialisation();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateSubsystemInitialisation::execHandlePlatformUserLoginComplete)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlatformUserLoginComplete(Z_Param_bSuccess);
		P_NATIVE_END;
	}
	void USBZStateMachineStateSubsystemInitialisation::StaticRegisterNativesUSBZStateMachineStateSubsystemInitialisation()
	{
		UClass* Class = USBZStateMachineStateSubsystemInitialisation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandlePlatformUserLoginComplete", &USBZStateMachineStateSubsystemInitialisation::execHandlePlatformUserLoginComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateSubsystemInitialisation_HandlePlatformUserLoginComplete_Statics
	{
		struct SBZStateMachineStateSubsystemInitialisation_eventHandlePlatformUserLoginComplete_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZStateMachineStateSubsystemInitialisation_HandlePlatformUserLoginComplete_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((SBZStateMachineStateSubsystemInitialisation_eventHandlePlatformUserLoginComplete_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZStateMachineStateSubsystemInitialisation_HandlePlatformUserLoginComplete_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZStateMachineStateSubsystemInitialisation_eventHandlePlatformUserLoginComplete_Parms), &Z_Construct_UFunction_USBZStateMachineStateSubsystemInitialisation_HandlePlatformUserLoginComplete_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateSubsystemInitialisation_HandlePlatformUserLoginComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateSubsystemInitialisation_HandlePlatformUserLoginComplete_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateSubsystemInitialisation_HandlePlatformUserLoginComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateSubsystemInitialisation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateSubsystemInitialisation_HandlePlatformUserLoginComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateSubsystemInitialisation, nullptr, "HandlePlatformUserLoginComplete", nullptr, nullptr, sizeof(SBZStateMachineStateSubsystemInitialisation_eventHandlePlatformUserLoginComplete_Parms), Z_Construct_UFunction_USBZStateMachineStateSubsystemInitialisation_HandlePlatformUserLoginComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateSubsystemInitialisation_HandlePlatformUserLoginComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateSubsystemInitialisation_HandlePlatformUserLoginComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateSubsystemInitialisation_HandlePlatformUserLoginComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateSubsystemInitialisation_HandlePlatformUserLoginComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateSubsystemInitialisation_HandlePlatformUserLoginComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateSubsystemInitialisation_NoRegister()
	{
		return USBZStateMachineStateSubsystemInitialisation::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateSubsystemInitialisation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateSubsystemInitialisation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateSubsystemInitialisation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateSubsystemInitialisation_HandlePlatformUserLoginComplete, "HandlePlatformUserLoginComplete" }, // 2296719283
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateSubsystemInitialisation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateSubsystemInitialisation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateSubsystemInitialisation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateSubsystemInitialisation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateSubsystemInitialisation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateSubsystemInitialisation_Statics::ClassParams = {
		&USBZStateMachineStateSubsystemInitialisation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateSubsystemInitialisation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateSubsystemInitialisation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateSubsystemInitialisation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateSubsystemInitialisation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateSubsystemInitialisation, 777739466);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateSubsystemInitialisation>()
	{
		return USBZStateMachineStateSubsystemInitialisation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateSubsystemInitialisation(Z_Construct_UClass_USBZStateMachineStateSubsystemInitialisation, &USBZStateMachineStateSubsystemInitialisation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateSubsystemInitialisation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateSubsystemInitialisation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
