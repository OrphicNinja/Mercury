// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateOutro.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateOutro() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateOutro_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateOutro();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEndMissionResultData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataResult_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateOutro::execDelayedLeaveOutroSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DelayedLeaveOutroSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateOutro::execHandleMissionResultReady)
	{
		P_GET_STRUCT_REF(FSBZEndMissionResultData,Z_Param_Out_MissionResultData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMissionResultReady(Z_Param_Out_MissionResultData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateOutro::execOutroSequenceTimeout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OutroSequenceTimeout();
		P_NATIVE_END;
	}
	void USBZStateMachineStateOutro::StaticRegisterNativesUSBZStateMachineStateOutro()
	{
		UClass* Class = USBZStateMachineStateOutro::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DelayedLeaveOutroSequence", &USBZStateMachineStateOutro::execDelayedLeaveOutroSequence },
			{ "HandleMissionResultReady", &USBZStateMachineStateOutro::execHandleMissionResultReady },
			{ "OutroSequenceTimeout", &USBZStateMachineStateOutro::execOutroSequenceTimeout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateOutro_DelayedLeaveOutroSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateOutro_DelayedLeaveOutroSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateOutro.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateOutro_DelayedLeaveOutroSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateOutro, nullptr, "DelayedLeaveOutroSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateOutro_DelayedLeaveOutroSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateOutro_DelayedLeaveOutroSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateOutro_DelayedLeaveOutroSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateOutro_DelayedLeaveOutroSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateOutro_HandleMissionResultReady_Statics
	{
		struct SBZStateMachineStateOutro_eventHandleMissionResultReady_Parms
		{
			FSBZEndMissionResultData MissionResultData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MissionResultData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateOutro_HandleMissionResultReady_Statics::NewProp_MissionResultData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateOutro_HandleMissionResultReady_Statics::NewProp_MissionResultData = { "MissionResultData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateOutro_eventHandleMissionResultReady_Parms, MissionResultData), Z_Construct_UScriptStruct_FSBZEndMissionResultData, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateOutro_HandleMissionResultReady_Statics::NewProp_MissionResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateOutro_HandleMissionResultReady_Statics::NewProp_MissionResultData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateOutro_HandleMissionResultReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateOutro_HandleMissionResultReady_Statics::NewProp_MissionResultData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateOutro_HandleMissionResultReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateOutro.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateOutro_HandleMissionResultReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateOutro, nullptr, "HandleMissionResultReady", nullptr, nullptr, sizeof(SBZStateMachineStateOutro_eventHandleMissionResultReady_Parms), Z_Construct_UFunction_USBZStateMachineStateOutro_HandleMissionResultReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateOutro_HandleMissionResultReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateOutro_HandleMissionResultReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateOutro_HandleMissionResultReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateOutro_HandleMissionResultReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateOutro_HandleMissionResultReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateOutro_OutroSequenceTimeout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateOutro_OutroSequenceTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateOutro.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateOutro_OutroSequenceTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateOutro, nullptr, "OutroSequenceTimeout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateOutro_OutroSequenceTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateOutro_OutroSequenceTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateOutro_OutroSequenceTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateOutro_OutroSequenceTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateOutro_NoRegister()
	{
		return USBZStateMachineStateOutro::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateOutro_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitingForEndResult_MetaData[];
#endif
		static void NewProp_WaitingForEndResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WaitingForEndResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateOutro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateOutro_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateOutro_DelayedLeaveOutroSequence, "DelayedLeaveOutroSequence" }, // 3190815323
		{ &Z_Construct_UFunction_USBZStateMachineStateOutro_HandleMissionResultReady, "HandleMissionResultReady" }, // 1304106411
		{ &Z_Construct_UFunction_USBZStateMachineStateOutro_OutroSequenceTimeout, "OutroSequenceTimeout" }, // 193915333
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateOutro_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateOutro.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateOutro.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateOutro_Statics::NewProp_ResultData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateOutro" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateOutro.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateOutro_Statics::NewProp_ResultData = { "ResultData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateOutro, ResultData), Z_Construct_UClass_USBZStateMachineDataResult_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateOutro_Statics::NewProp_ResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateOutro_Statics::NewProp_ResultData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateOutro_Statics::NewProp_WaitingForEndResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateOutro" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateOutro.h" },
	};
#endif
	void Z_Construct_UClass_USBZStateMachineStateOutro_Statics::NewProp_WaitingForEndResult_SetBit(void* Obj)
	{
		((USBZStateMachineStateOutro*)Obj)->WaitingForEndResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZStateMachineStateOutro_Statics::NewProp_WaitingForEndResult = { "WaitingForEndResult", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZStateMachineStateOutro), &Z_Construct_UClass_USBZStateMachineStateOutro_Statics::NewProp_WaitingForEndResult_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateOutro_Statics::NewProp_WaitingForEndResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateOutro_Statics::NewProp_WaitingForEndResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateOutro_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateOutro_Statics::NewProp_ResultData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateOutro_Statics::NewProp_WaitingForEndResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateOutro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateOutro>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateOutro_Statics::ClassParams = {
		&USBZStateMachineStateOutro::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateOutro_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateOutro_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateOutro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateOutro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateOutro()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateOutro_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateOutro, 2952525641);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateOutro>()
	{
		return USBZStateMachineStateOutro::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateOutro(Z_Construct_UClass_USBZStateMachineStateOutro, &USBZStateMachineStateOutro::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateOutro"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateOutro);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
