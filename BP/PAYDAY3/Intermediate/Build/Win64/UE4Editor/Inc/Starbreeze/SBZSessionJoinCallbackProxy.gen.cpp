// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSessionJoinCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSessionJoinCallbackProxy() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSessionJoinCallbackProxy_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSessionJoinCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlineSearchResult();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZSessionJoinCallbackProxy::execSessionJoin)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_STRUCT_REF(FSBZOnlineSearchResult,Z_Param_Out_InSessionToJoin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSessionJoinCallbackProxy**)Z_Param__Result=USBZSessionJoinCallbackProxy::SessionJoin(Z_Param_NewWorldContextObject,Z_Param_Out_InSessionToJoin);
		P_NATIVE_END;
	}
	void USBZSessionJoinCallbackProxy::StaticRegisterNativesUSBZSessionJoinCallbackProxy()
	{
		UClass* Class = USBZSessionJoinCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SessionJoin", &USBZSessionJoinCallbackProxy::execSessionJoin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin_Statics
	{
		struct SBZSessionJoinCallbackProxy_eventSessionJoin_Parms
		{
			UObject* NewWorldContextObject;
			FSBZOnlineSearchResult InSessionToJoin;
			USBZSessionJoinCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSessionToJoin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSessionToJoin;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSessionJoinCallbackProxy_eventSessionJoin_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin_Statics::NewProp_InSessionToJoin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin_Statics::NewProp_InSessionToJoin = { "InSessionToJoin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSessionJoinCallbackProxy_eventSessionJoin_Parms, InSessionToJoin), Z_Construct_UScriptStruct_FSBZOnlineSearchResult, METADATA_PARAMS(Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin_Statics::NewProp_InSessionToJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin_Statics::NewProp_InSessionToJoin_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSessionJoinCallbackProxy_eventSessionJoin_Parms, ReturnValue), Z_Construct_UClass_USBZSessionJoinCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin_Statics::NewProp_InSessionToJoin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSessionJoinCallbackProxy.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSessionJoinCallbackProxy, nullptr, "SessionJoin", nullptr, nullptr, sizeof(SBZSessionJoinCallbackProxy_eventSessionJoin_Parms), Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSessionJoinCallbackProxy_NoRegister()
	{
		return USBZSessionJoinCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionToJoin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionToJoin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSessionJoinCallbackProxy_SessionJoin, "SessionJoin" }, // 50071325
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSessionJoinCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSessionJoinCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::NewProp_OnComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSessionJoinCallbackProxy" },
		{ "ModuleRelativePath", "Public/SBZSessionJoinCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSessionJoinCallbackProxy, OnComplete), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::NewProp_OnComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSessionJoinCallbackProxy" },
		{ "ModuleRelativePath", "Public/SBZSessionJoinCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSessionJoinCallbackProxy, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::NewProp_SessionToJoin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSessionJoinCallbackProxy" },
		{ "ModuleRelativePath", "Public/SBZSessionJoinCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::NewProp_SessionToJoin = { "SessionToJoin", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSessionJoinCallbackProxy, SessionToJoin), Z_Construct_UScriptStruct_FSBZOnlineSearchResult, METADATA_PARAMS(Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::NewProp_SessionToJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::NewProp_SessionToJoin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::NewProp_OnComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::NewProp_SessionToJoin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSessionJoinCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::ClassParams = {
		&USBZSessionJoinCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSessionJoinCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSessionJoinCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSessionJoinCallbackProxy, 2911103950);
	template<> STARBREEZE_API UClass* StaticClass<USBZSessionJoinCallbackProxy>()
	{
		return USBZSessionJoinCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSessionJoinCallbackProxy(Z_Construct_UClass_USBZSessionJoinCallbackProxy, &USBZSessionJoinCallbackProxy::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSessionJoinCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSessionJoinCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
