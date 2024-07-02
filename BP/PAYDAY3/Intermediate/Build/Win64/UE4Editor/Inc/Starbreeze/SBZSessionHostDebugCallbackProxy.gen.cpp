// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSessionHostDebugCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSessionHostDebugCallbackProxy() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSessionHostDebugCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZSessionHostDebugCallbackProxy::execSessionHostDebug)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSessionHostDebugCallbackProxy**)Z_Param__Result=USBZSessionHostDebugCallbackProxy::SessionHostDebug(Z_Param_NewWorldContextObject);
		P_NATIVE_END;
	}
	void USBZSessionHostDebugCallbackProxy::StaticRegisterNativesUSBZSessionHostDebugCallbackProxy()
	{
		UClass* Class = USBZSessionHostDebugCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SessionHostDebug", &USBZSessionHostDebugCallbackProxy::execSessionHostDebug },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSessionHostDebugCallbackProxy_SessionHostDebug_Statics
	{
		struct SBZSessionHostDebugCallbackProxy_eventSessionHostDebug_Parms
		{
			UObject* NewWorldContextObject;
			USBZSessionHostDebugCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSessionHostDebugCallbackProxy_SessionHostDebug_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSessionHostDebugCallbackProxy_eventSessionHostDebug_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSessionHostDebugCallbackProxy_SessionHostDebug_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSessionHostDebugCallbackProxy_eventSessionHostDebug_Parms, ReturnValue), Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSessionHostDebugCallbackProxy_SessionHostDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSessionHostDebugCallbackProxy_SessionHostDebug_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSessionHostDebugCallbackProxy_SessionHostDebug_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSessionHostDebugCallbackProxy_SessionHostDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSessionHostDebugCallbackProxy.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSessionHostDebugCallbackProxy_SessionHostDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSessionHostDebugCallbackProxy, nullptr, "SessionHostDebug", nullptr, nullptr, sizeof(SBZSessionHostDebugCallbackProxy_eventSessionHostDebug_Parms), Z_Construct_UFunction_USBZSessionHostDebugCallbackProxy_SessionHostDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSessionHostDebugCallbackProxy_SessionHostDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSessionHostDebugCallbackProxy_SessionHostDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSessionHostDebugCallbackProxy_SessionHostDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSessionHostDebugCallbackProxy_SessionHostDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSessionHostDebugCallbackProxy_SessionHostDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_NoRegister()
	{
		return USBZSessionHostDebugCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSessionHostDebugCallbackProxy_SessionHostDebug, "SessionHostDebug" }, // 2154541007
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSessionHostDebugCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSessionHostDebugCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::NewProp_OnComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSessionHostDebugCallbackProxy" },
		{ "ModuleRelativePath", "Public/SBZSessionHostDebugCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSessionHostDebugCallbackProxy, OnComplete), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::NewProp_OnComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSessionHostDebugCallbackProxy" },
		{ "ModuleRelativePath", "Public/SBZSessionHostDebugCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSessionHostDebugCallbackProxy, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::NewProp_OnComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::NewProp_WorldContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSessionHostDebugCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::ClassParams = {
		&USBZSessionHostDebugCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSessionHostDebugCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSessionHostDebugCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSessionHostDebugCallbackProxy, 108487128);
	template<> STARBREEZE_API UClass* StaticClass<USBZSessionHostDebugCallbackProxy>()
	{
		return USBZSessionHostDebugCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSessionHostDebugCallbackProxy(Z_Construct_UClass_USBZSessionHostDebugCallbackProxy, &USBZSessionHostDebugCallbackProxy::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSessionHostDebugCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSessionHostDebugCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
