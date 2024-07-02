// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3Dispatcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3Dispatcher() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3Dispatcher_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3Dispatcher();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DispatchCaller();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DispatchCallerReason();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionNotificationAsset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3CallerReason();
// End Cross Module References
	DEFINE_FUNCTION(UPD3Dispatcher::execCallDispatcher)
	{
		P_GET_ENUM(EPD3DispatchCaller,Z_Param_InCaller);
		P_GET_ENUM(EPD3DispatchCallerReason,Z_Param_InReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallDispatcher(EPD3DispatchCaller(Z_Param_InCaller),EPD3DispatchCallerReason(Z_Param_InReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3Dispatcher::execCallDispatcherByAsset)
	{
		P_GET_OBJECT(USBZActionNotificationAsset,Z_Param_CallerReason);
		P_GET_OBJECT(UObject,Z_Param_InDispatcherCallData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallDispatcherByAsset(Z_Param_CallerReason,Z_Param_InDispatcherCallData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3Dispatcher::execGetDispatcher)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPD3Dispatcher**)Z_Param__Result=UPD3Dispatcher::GetDispatcher(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3Dispatcher::execMulticast_CallDispatcherByAsset)
	{
		P_GET_OBJECT(USBZActionNotificationAsset,Z_Param_CallerReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_CallDispatcherByAsset_Implementation(Z_Param_CallerReason);
		P_NATIVE_END;
	}
	static FName NAME_UPD3Dispatcher_Multicast_CallDispatcherByAsset = FName(TEXT("Multicast_CallDispatcherByAsset"));
	void UPD3Dispatcher::Multicast_CallDispatcherByAsset(const USBZActionNotificationAsset* CallerReason)
	{
		PD3Dispatcher_eventMulticast_CallDispatcherByAsset_Parms Parms;
		Parms.CallerReason=CallerReason;
		ProcessEvent(FindFunctionChecked(NAME_UPD3Dispatcher_Multicast_CallDispatcherByAsset),&Parms);
	}
	void UPD3Dispatcher::StaticRegisterNativesUPD3Dispatcher()
	{
		UClass* Class = UPD3Dispatcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallDispatcher", &UPD3Dispatcher::execCallDispatcher },
			{ "CallDispatcherByAsset", &UPD3Dispatcher::execCallDispatcherByAsset },
			{ "GetDispatcher", &UPD3Dispatcher::execGetDispatcher },
			{ "Multicast_CallDispatcherByAsset", &UPD3Dispatcher::execMulticast_CallDispatcherByAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher_Statics
	{
		struct PD3Dispatcher_eventCallDispatcher_Parms
		{
			EPD3DispatchCaller InCaller;
			EPD3DispatchCallerReason InReason;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCaller_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InCaller;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher_Statics::NewProp_InCaller_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher_Statics::NewProp_InCaller = { "InCaller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3Dispatcher_eventCallDispatcher_Parms, InCaller), Z_Construct_UEnum_Starbreeze_EPD3DispatchCaller, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher_Statics::NewProp_InReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher_Statics::NewProp_InReason = { "InReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3Dispatcher_eventCallDispatcher_Parms, InReason), Z_Construct_UEnum_Starbreeze_EPD3DispatchCallerReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher_Statics::NewProp_InCaller_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher_Statics::NewProp_InCaller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher_Statics::NewProp_InReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher_Statics::NewProp_InReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3Dispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3Dispatcher, nullptr, "CallDispatcher", nullptr, nullptr, sizeof(PD3Dispatcher_eventCallDispatcher_Parms), Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3Dispatcher_CallDispatcherByAsset_Statics
	{
		struct PD3Dispatcher_eventCallDispatcherByAsset_Parms
		{
			const USBZActionNotificationAsset* CallerReason;
			UObject* InDispatcherCallData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallerReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallerReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InDispatcherCallData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3Dispatcher_CallDispatcherByAsset_Statics::NewProp_CallerReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3Dispatcher_CallDispatcherByAsset_Statics::NewProp_CallerReason = { "CallerReason", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3Dispatcher_eventCallDispatcherByAsset_Parms, CallerReason), Z_Construct_UClass_USBZActionNotificationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPD3Dispatcher_CallDispatcherByAsset_Statics::NewProp_CallerReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3Dispatcher_CallDispatcherByAsset_Statics::NewProp_CallerReason_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3Dispatcher_CallDispatcherByAsset_Statics::NewProp_InDispatcherCallData = { "InDispatcherCallData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3Dispatcher_eventCallDispatcherByAsset_Parms, InDispatcherCallData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3Dispatcher_CallDispatcherByAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3Dispatcher_CallDispatcherByAsset_Statics::NewProp_CallerReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3Dispatcher_CallDispatcherByAsset_Statics::NewProp_InDispatcherCallData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3Dispatcher_CallDispatcherByAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3Dispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3Dispatcher_CallDispatcherByAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3Dispatcher, nullptr, "CallDispatcherByAsset", nullptr, nullptr, sizeof(PD3Dispatcher_eventCallDispatcherByAsset_Parms), Z_Construct_UFunction_UPD3Dispatcher_CallDispatcherByAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3Dispatcher_CallDispatcherByAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3Dispatcher_CallDispatcherByAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3Dispatcher_CallDispatcherByAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3Dispatcher_CallDispatcherByAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3Dispatcher_CallDispatcherByAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3Dispatcher_GetDispatcher_Statics
	{
		struct PD3Dispatcher_eventGetDispatcher_Parms
		{
			UObject* WorldContextObject;
			UPD3Dispatcher* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3Dispatcher_GetDispatcher_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3Dispatcher_eventGetDispatcher_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3Dispatcher_GetDispatcher_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3Dispatcher_GetDispatcher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3Dispatcher_eventGetDispatcher_Parms, ReturnValue), Z_Construct_UClass_UPD3Dispatcher_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPD3Dispatcher_GetDispatcher_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3Dispatcher_GetDispatcher_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3Dispatcher_GetDispatcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3Dispatcher_GetDispatcher_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3Dispatcher_GetDispatcher_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3Dispatcher_GetDispatcher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3Dispatcher.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3Dispatcher_GetDispatcher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3Dispatcher, nullptr, "GetDispatcher", nullptr, nullptr, sizeof(PD3Dispatcher_eventGetDispatcher_Parms), Z_Construct_UFunction_UPD3Dispatcher_GetDispatcher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3Dispatcher_GetDispatcher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3Dispatcher_GetDispatcher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3Dispatcher_GetDispatcher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3Dispatcher_GetDispatcher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3Dispatcher_GetDispatcher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3Dispatcher_Multicast_CallDispatcherByAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallerReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallerReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3Dispatcher_Multicast_CallDispatcherByAsset_Statics::NewProp_CallerReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3Dispatcher_Multicast_CallDispatcherByAsset_Statics::NewProp_CallerReason = { "CallerReason", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3Dispatcher_eventMulticast_CallDispatcherByAsset_Parms, CallerReason), Z_Construct_UClass_USBZActionNotificationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPD3Dispatcher_Multicast_CallDispatcherByAsset_Statics::NewProp_CallerReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3Dispatcher_Multicast_CallDispatcherByAsset_Statics::NewProp_CallerReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3Dispatcher_Multicast_CallDispatcherByAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3Dispatcher_Multicast_CallDispatcherByAsset_Statics::NewProp_CallerReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3Dispatcher_Multicast_CallDispatcherByAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3Dispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3Dispatcher_Multicast_CallDispatcherByAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3Dispatcher, nullptr, "Multicast_CallDispatcherByAsset", nullptr, nullptr, sizeof(PD3Dispatcher_eventMulticast_CallDispatcherByAsset_Parms), Z_Construct_UFunction_UPD3Dispatcher_Multicast_CallDispatcherByAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3Dispatcher_Multicast_CallDispatcherByAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3Dispatcher_Multicast_CallDispatcherByAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3Dispatcher_Multicast_CallDispatcherByAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3Dispatcher_Multicast_CallDispatcherByAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3Dispatcher_Multicast_CallDispatcherByAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3Dispatcher_NoRegister()
	{
		return UPD3Dispatcher::StaticClass();
	}
	struct Z_Construct_UClass_UPD3Dispatcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Caller_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Caller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3Dispatcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3Dispatcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3Dispatcher_CallDispatcher, "CallDispatcher" }, // 3591097425
		{ &Z_Construct_UFunction_UPD3Dispatcher_CallDispatcherByAsset, "CallDispatcherByAsset" }, // 60093743
		{ &Z_Construct_UFunction_UPD3Dispatcher_GetDispatcher, "GetDispatcher" }, // 1600817792
		{ &Z_Construct_UFunction_UPD3Dispatcher_Multicast_CallDispatcherByAsset, "Multicast_CallDispatcherByAsset" }, // 3539505111
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3Dispatcher_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3Dispatcher.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3Dispatcher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3Dispatcher_Statics::NewProp_Caller_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3Dispatcher" },
		{ "ModuleRelativePath", "Public/PD3Dispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3Dispatcher_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Caller, UPD3Dispatcher), STRUCT_OFFSET(UPD3Dispatcher, Caller), Z_Construct_UScriptStruct_FPD3CallerReason, METADATA_PARAMS(Z_Construct_UClass_UPD3Dispatcher_Statics::NewProp_Caller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3Dispatcher_Statics::NewProp_Caller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3Dispatcher_Statics::NewProp_CallData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3Dispatcher" },
		{ "ModuleRelativePath", "Public/PD3Dispatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3Dispatcher_Statics::NewProp_CallData = { "CallData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3Dispatcher, CallData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3Dispatcher_Statics::NewProp_CallData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3Dispatcher_Statics::NewProp_CallData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3Dispatcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3Dispatcher_Statics::NewProp_Caller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3Dispatcher_Statics::NewProp_CallData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3Dispatcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3Dispatcher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3Dispatcher_Statics::ClassParams = {
		&UPD3Dispatcher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3Dispatcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3Dispatcher_Statics::PropPointers),
		0,
		0x002000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3Dispatcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3Dispatcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3Dispatcher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3Dispatcher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3Dispatcher, 138661510);
	template<> STARBREEZE_API UClass* StaticClass<UPD3Dispatcher>()
	{
		return UPD3Dispatcher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3Dispatcher(Z_Construct_UClass_UPD3Dispatcher, &UPD3Dispatcher::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3Dispatcher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3Dispatcher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
