// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeEnhancements/Public/DelegateTimer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelegateTimer() {}
// Cross Module References
	TIMEENHANCEMENTS_API UFunction* Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TimeEnhancements();
	TIMEENHANCEMENTS_API UClass* Z_Construct_UClass_UDelegateTimer_NoRegister();
	TIMEENHANCEMENTS_API UClass* Z_Construct_UClass_UDelegateTimer();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature_Statics
	{
		struct _Script_TimeEnhancements_eventDelegateTimerExec_Parms
		{
			const UDelegateTimer* Timer;
			float ElapsedTime;
			float TimeSinceLast;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Timer;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSinceLast;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature_Statics::NewProp_Timer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TimeEnhancements_eventDelegateTimerExec_Parms, Timer), Z_Construct_UClass_UDelegateTimer_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature_Statics::NewProp_Timer_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TimeEnhancements_eventDelegateTimerExec_Parms, ElapsedTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature_Statics::NewProp_TimeSinceLast = { "TimeSinceLast", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TimeEnhancements_eventDelegateTimerExec_Parms, TimeSinceLast), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature_Statics::NewProp_Timer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature_Statics::NewProp_ElapsedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature_Statics::NewProp_TimeSinceLast,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// This fires every time the configured period fires\n// @see UDelegateTimer::TickExec\n" },
		{ "ModuleRelativePath", "Public/DelegateTimer.h" },
		{ "ToolTip", "This fires every time the configured period fires\n@see UDelegateTimer::TickExec" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TimeEnhancements, nullptr, "DelegateTimerExec__DelegateSignature", nullptr, nullptr, sizeof(_Script_TimeEnhancements_eventDelegateTimerExec_Parms), Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UDelegateTimer::execCreateDelegateTimer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Period);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayToFirstExecution);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDelegateTimer**)Z_Param__Result=UDelegateTimer::CreateDelegateTimer(Z_Param_WorldContextObject,Z_Param_Period,Z_Param_DelayToFirstExecution);
		P_NATIVE_END;
	}
	void UDelegateTimer::StaticRegisterNativesUDelegateTimer()
	{
		UClass* Class = UDelegateTimer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDelegateTimer", &UDelegateTimer::execCreateDelegateTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer_Statics
	{
		struct DelegateTimer_eventCreateDelegateTimer_Parms
		{
			UObject* WorldContextObject;
			float Period;
			float DelayToFirstExecution;
			UDelegateTimer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Period;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayToFirstExecution;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DelegateTimer_eventCreateDelegateTimer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DelegateTimer_eventCreateDelegateTimer_Parms, Period), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer_Statics::NewProp_DelayToFirstExecution = { "DelayToFirstExecution", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DelegateTimer_eventCreateDelegateTimer_Parms, DelayToFirstExecution), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DelegateTimer_eventCreateDelegateTimer_Parms, ReturnValue), Z_Construct_UClass_UDelegateTimer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer_Statics::NewProp_Period,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer_Statics::NewProp_DelayToFirstExecution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Time Enhancements" },
		{ "Comment", "/**\n\x09 * Default object creation and initialization function, exposed to BP as an Async Action\n\x09 * @param WorldContextObject The default world context object if used inside actors, to be provided in other UObjects\n\x09 * @param Period The amount of seconds between two TickExecs\n\x09 * @param DelayToFirstExecution The amount of seconds between this function and the first TickExec\n\x09 * @returns A newly created DelegateTimer, configured as per params. Shows in blueprint as Latent exec pins.\n\x09 * @see UDelegateTimer::TickExec\n\x09 */" },
		{ "CPP_Default_DelayToFirstExecution", "0.000000" },
		{ "CPP_Default_Period", "2.000000" },
		{ "ModuleRelativePath", "Public/DelegateTimer.h" },
		{ "ToolTip", "Default object creation and initialization function, exposed to BP as an Async Action\n@param WorldContextObject The default world context object if used inside actors, to be provided in other UObjects\n@param Period The amount of seconds between two TickExecs\n@param DelayToFirstExecution The amount of seconds between this function and the first TickExec\n@returns A newly created DelegateTimer, configured as per params. Shows in blueprint as Latent exec pins.\n@see UDelegateTimer::TickExec" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDelegateTimer, nullptr, "CreateDelegateTimer", nullptr, nullptr, sizeof(DelegateTimer_eventCreateDelegateTimer_Parms), Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDelegateTimer_NoRegister()
	{
		return UDelegateTimer::StaticClass();
	}
	struct Z_Construct_UClass_UDelegateTimer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickExec_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_TickExec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeFirstExecution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeFirstExecution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLastExecution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeLastExecution;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDelegateTimer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeEnhancements,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDelegateTimer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDelegateTimer_CreateDelegateTimer, "CreateDelegateTimer" }, // 2728417351
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDelegateTimer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A lightweight substitute for a tick event, configurable by period and first delay.\n * Uses timers internally, that in turn piggyback to world tick.\n * It can be stopped, paused and reconfigured for different tick rates.\n */" },
		{ "IncludePath", "DelegateTimer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DelegateTimer.h" },
		{ "ToolTip", "A lightweight substitute for a tick event, configurable by period and first delay.\nUses timers internally, that in turn piggyback to world tick.\nIt can be stopped, paused and reconfigured for different tick rates." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TickExec_MetaData[] = {
		{ "Category", "Time Enhancements|Delegate Timer" },
		{ "Comment", "/**\n\x09 * Delegate to bind to for timed executions, it will show as an exec pin if this class is used as a return value\n\x09 * @param Timer The object that is executing the delegate\n\x09 * @param ElapsedTime The amount of seconds since the object was last initialized\n\x09 * @param TimeSinceLast The amount of seconds since the object's last execution\n\x09 * @see UDelegateTimer::CreateDelegateTimer\n\x09 */" },
		{ "ModuleRelativePath", "Public/DelegateTimer.h" },
		{ "ToolTip", "Delegate to bind to for timed executions, it will show as an exec pin if this class is used as a return value\n@param Timer The object that is executing the delegate\n@param ElapsedTime The amount of seconds since the object was last initialized\n@param TimeSinceLast The amount of seconds since the object's last execution\n@see UDelegateTimer::CreateDelegateTimer" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TickExec = { "TickExec", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDelegateTimer, TickExec), Z_Construct_UDelegateFunction_TimeEnhancements_DelegateTimerExec__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TickExec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TickExec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TimeStart_MetaData[] = {
		{ "Category", "Time Enhancements|Delegate Timer" },
		{ "Comment", "/**\n\x09 * The time of this object's Init \n\x09 * Usually just after creation time, using UDelegateTimer::CreateDelegateTimer\n\x09 */" },
		{ "ModuleRelativePath", "Public/DelegateTimer.h" },
		{ "ToolTip", "The time of this object's Init\nUsually just after creation time, using UDelegateTimer::CreateDelegateTimer" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TimeStart = { "TimeStart", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDelegateTimer, TimeStart), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TimeStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TimeStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TimeFirstExecution_MetaData[] = {
		{ "Category", "Time Enhancements|Delegate Timer" },
		{ "Comment", "/**\n\x09 * The time of this object's first fired event, equal to 0 Ticks if never fired\n\x09 */" },
		{ "ModuleRelativePath", "Public/DelegateTimer.h" },
		{ "ToolTip", "The time of this object's first fired event, equal to 0 Ticks if never fired" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TimeFirstExecution = { "TimeFirstExecution", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDelegateTimer, TimeFirstExecution), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TimeFirstExecution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TimeFirstExecution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TimeLastExecution_MetaData[] = {
		{ "Category", "Time Enhancements|Delegate Timer" },
		{ "Comment", "/**\n\x09 * The time of this object's latest fired event, equal to 0 Ticks if never fired\n\x09 */" },
		{ "ModuleRelativePath", "Public/DelegateTimer.h" },
		{ "ToolTip", "The time of this object's latest fired event, equal to 0 Ticks if never fired" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TimeLastExecution = { "TimeLastExecution", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDelegateTimer, TimeLastExecution), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TimeLastExecution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TimeLastExecution_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDelegateTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TickExec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TimeStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TimeFirstExecution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDelegateTimer_Statics::NewProp_TimeLastExecution,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDelegateTimer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDelegateTimer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDelegateTimer_Statics::ClassParams = {
		&UDelegateTimer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDelegateTimer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDelegateTimer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDelegateTimer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDelegateTimer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDelegateTimer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDelegateTimer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDelegateTimer, 1205535185);
	template<> TIMEENHANCEMENTS_API UClass* StaticClass<UDelegateTimer>()
	{
		return UDelegateTimer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDelegateTimer(Z_Construct_UClass_UDelegateTimer, &UDelegateTimer::StaticClass, TEXT("/Script/TimeEnhancements"), TEXT("UDelegateTimer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDelegateTimer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
