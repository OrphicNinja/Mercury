// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWaitStateMachineStateCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWaitStateMachineStateCallbackProxy() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGameStateMachineState();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnEnterGameStateDynamicDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZWaitStateMachineStateCallbackProxy::execHandleStateEntered)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleStateEntered(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWaitStateMachineStateCallbackProxy::execWaitGameStateMachineState)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_StateToWait);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZWaitStateMachineStateCallbackProxy**)Z_Param__Result=USBZWaitStateMachineStateCallbackProxy::WaitGameStateMachineState(Z_Param_NewWorldContextObject,(TEnumAsByte<ESBZGameStateMachineState>&)(Z_Param_Out_StateToWait));
		P_NATIVE_END;
	}
	void USBZWaitStateMachineStateCallbackProxy::StaticRegisterNativesUSBZWaitStateMachineStateCallbackProxy()
	{
		UClass* Class = USBZWaitStateMachineStateCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleStateEntered", &USBZWaitStateMachineStateCallbackProxy::execHandleStateEntered },
			{ "WaitGameStateMachineState", &USBZWaitStateMachineStateCallbackProxy::execWaitGameStateMachineState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_HandleStateEntered_Statics
	{
		struct SBZWaitStateMachineStateCallbackProxy_eventHandleStateEntered_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_HandleStateEntered_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWaitStateMachineStateCallbackProxy_eventHandleStateEntered_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_HandleStateEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_HandleStateEntered_Statics::NewProp_StateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_HandleStateEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWaitStateMachineStateCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_HandleStateEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy, nullptr, "HandleStateEntered", nullptr, nullptr, sizeof(SBZWaitStateMachineStateCallbackProxy_eventHandleStateEntered_Parms), Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_HandleStateEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_HandleStateEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_HandleStateEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_HandleStateEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_HandleStateEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_HandleStateEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState_Statics
	{
		struct SBZWaitStateMachineStateCallbackProxy_eventWaitGameStateMachineState_Parms
		{
			UObject* NewWorldContextObject;
			TEnumAsByte<ESBZGameStateMachineState> StateToWait;
			USBZWaitStateMachineStateCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateToWait_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StateToWait;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWaitStateMachineStateCallbackProxy_eventWaitGameStateMachineState_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState_Statics::NewProp_StateToWait_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState_Statics::NewProp_StateToWait = { "StateToWait", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWaitStateMachineStateCallbackProxy_eventWaitGameStateMachineState_Parms, StateToWait), Z_Construct_UEnum_Starbreeze_ESBZGameStateMachineState, METADATA_PARAMS(Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState_Statics::NewProp_StateToWait_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState_Statics::NewProp_StateToWait_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWaitStateMachineStateCallbackProxy_eventWaitGameStateMachineState_Parms, ReturnValue), Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState_Statics::NewProp_StateToWait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWaitStateMachineStateCallbackProxy.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy, nullptr, "WaitGameStateMachineState", nullptr, nullptr, sizeof(SBZWaitStateMachineStateCallbackProxy_eventWaitGameStateMachineState_Parms), Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_NoRegister()
	{
		return USBZWaitStateMachineStateCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_HandleStateEntered, "HandleStateEntered" }, // 669640360
		{ &Z_Construct_UFunction_USBZWaitStateMachineStateCallbackProxy_WaitGameStateMachineState, "WaitGameStateMachineState" }, // 347953197
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWaitStateMachineStateCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWaitStateMachineStateCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWaitStateMachineStateCallbackProxy" },
		{ "ModuleRelativePath", "Public/SBZWaitStateMachineStateCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWaitStateMachineStateCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Starbreeze_OnEnterGameStateDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWaitStateMachineStateCallbackProxy" },
		{ "ModuleRelativePath", "Public/SBZWaitStateMachineStateCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWaitStateMachineStateCallbackProxy, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::NewProp_WorldContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWaitStateMachineStateCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::ClassParams = {
		&USBZWaitStateMachineStateCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWaitStateMachineStateCallbackProxy, 3308091815);
	template<> STARBREEZE_API UClass* StaticClass<USBZWaitStateMachineStateCallbackProxy>()
	{
		return USBZWaitStateMachineStateCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWaitStateMachineStateCallbackProxy(Z_Construct_UClass_USBZWaitStateMachineStateCallbackProxy, &USBZWaitStateMachineStateCallbackProxy::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWaitStateMachineStateCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWaitStateMachineStateCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
