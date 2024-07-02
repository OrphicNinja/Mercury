// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWaitStateMachineStateChangeCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWaitStateMachineStateChangeCallbackProxy() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnEnterGameStateDynamicDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZWaitStateMachineStateChangeCallbackProxy::execHandleStateEntered)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleStateEntered(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWaitStateMachineStateChangeCallbackProxy::execWaitGameStateMachineStateChange)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZWaitStateMachineStateChangeCallbackProxy**)Z_Param__Result=USBZWaitStateMachineStateChangeCallbackProxy::WaitGameStateMachineStateChange(Z_Param_NewWorldContextObject);
		P_NATIVE_END;
	}
	void USBZWaitStateMachineStateChangeCallbackProxy::StaticRegisterNativesUSBZWaitStateMachineStateChangeCallbackProxy()
	{
		UClass* Class = USBZWaitStateMachineStateChangeCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleStateEntered", &USBZWaitStateMachineStateChangeCallbackProxy::execHandleStateEntered },
			{ "WaitGameStateMachineStateChange", &USBZWaitStateMachineStateChangeCallbackProxy::execWaitGameStateMachineStateChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_HandleStateEntered_Statics
	{
		struct SBZWaitStateMachineStateChangeCallbackProxy_eventHandleStateEntered_Parms
		{
			FName StateName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_HandleStateEntered_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWaitStateMachineStateChangeCallbackProxy_eventHandleStateEntered_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_HandleStateEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_HandleStateEntered_Statics::NewProp_StateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_HandleStateEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWaitStateMachineStateChangeCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_HandleStateEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy, nullptr, "HandleStateEntered", nullptr, nullptr, sizeof(SBZWaitStateMachineStateChangeCallbackProxy_eventHandleStateEntered_Parms), Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_HandleStateEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_HandleStateEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_HandleStateEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_HandleStateEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_HandleStateEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_HandleStateEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_WaitGameStateMachineStateChange_Statics
	{
		struct SBZWaitStateMachineStateChangeCallbackProxy_eventWaitGameStateMachineStateChange_Parms
		{
			UObject* NewWorldContextObject;
			USBZWaitStateMachineStateChangeCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_WaitGameStateMachineStateChange_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWaitStateMachineStateChangeCallbackProxy_eventWaitGameStateMachineStateChange_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_WaitGameStateMachineStateChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWaitStateMachineStateChangeCallbackProxy_eventWaitGameStateMachineStateChange_Parms, ReturnValue), Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_WaitGameStateMachineStateChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_WaitGameStateMachineStateChange_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_WaitGameStateMachineStateChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_WaitGameStateMachineStateChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWaitStateMachineStateChangeCallbackProxy.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_WaitGameStateMachineStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy, nullptr, "WaitGameStateMachineStateChange", nullptr, nullptr, sizeof(SBZWaitStateMachineStateChangeCallbackProxy_eventWaitGameStateMachineStateChange_Parms), Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_WaitGameStateMachineStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_WaitGameStateMachineStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_WaitGameStateMachineStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_WaitGameStateMachineStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_WaitGameStateMachineStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_WaitGameStateMachineStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_NoRegister()
	{
		return USBZWaitStateMachineStateChangeCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_HandleStateEntered, "HandleStateEntered" }, // 2493120637
		{ &Z_Construct_UFunction_USBZWaitStateMachineStateChangeCallbackProxy_WaitGameStateMachineStateChange, "WaitGameStateMachineStateChange" }, // 63886573
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWaitStateMachineStateChangeCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWaitStateMachineStateChangeCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWaitStateMachineStateChangeCallbackProxy" },
		{ "ModuleRelativePath", "Public/SBZWaitStateMachineStateChangeCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWaitStateMachineStateChangeCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Starbreeze_OnEnterGameStateDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWaitStateMachineStateChangeCallbackProxy" },
		{ "ModuleRelativePath", "Public/SBZWaitStateMachineStateChangeCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWaitStateMachineStateChangeCallbackProxy, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::NewProp_WorldContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWaitStateMachineStateChangeCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::ClassParams = {
		&USBZWaitStateMachineStateChangeCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWaitStateMachineStateChangeCallbackProxy, 626068716);
	template<> STARBREEZE_API UClass* StaticClass<USBZWaitStateMachineStateChangeCallbackProxy>()
	{
		return USBZWaitStateMachineStateChangeCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWaitStateMachineStateChangeCallbackProxy(Z_Construct_UClass_USBZWaitStateMachineStateChangeCallbackProxy, &USBZWaitStateMachineStateChangeCallbackProxy::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWaitStateMachineStateChangeCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWaitStateMachineStateChangeCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
