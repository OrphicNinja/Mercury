// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSessionHostPartyCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSessionHostPartyCallbackProxy() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSessionHostPartyCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlinePartyParamsUi();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZSessionHostPartyCallbackProxy::execSessionHostParty)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_STRUCT_REF(FSBZOnlinePartyParamsUi,Z_Param_Out_InPartyParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSessionHostPartyCallbackProxy**)Z_Param__Result=USBZSessionHostPartyCallbackProxy::SessionHostParty(Z_Param_NewWorldContextObject,Z_Param_Out_InPartyParams);
		P_NATIVE_END;
	}
	void USBZSessionHostPartyCallbackProxy::StaticRegisterNativesUSBZSessionHostPartyCallbackProxy()
	{
		UClass* Class = USBZSessionHostPartyCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SessionHostParty", &USBZSessionHostPartyCallbackProxy::execSessionHostParty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty_Statics
	{
		struct SBZSessionHostPartyCallbackProxy_eventSessionHostParty_Parms
		{
			UObject* NewWorldContextObject;
			FSBZOnlinePartyParamsUi InPartyParams;
			USBZSessionHostPartyCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPartyParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPartyParams;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSessionHostPartyCallbackProxy_eventSessionHostParty_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty_Statics::NewProp_InPartyParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty_Statics::NewProp_InPartyParams = { "InPartyParams", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSessionHostPartyCallbackProxy_eventSessionHostParty_Parms, InPartyParams), Z_Construct_UScriptStruct_FSBZOnlinePartyParamsUi, METADATA_PARAMS(Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty_Statics::NewProp_InPartyParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty_Statics::NewProp_InPartyParams_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSessionHostPartyCallbackProxy_eventSessionHostParty_Parms, ReturnValue), Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty_Statics::NewProp_InPartyParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSessionHostPartyCallbackProxy.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSessionHostPartyCallbackProxy, nullptr, "SessionHostParty", nullptr, nullptr, sizeof(SBZSessionHostPartyCallbackProxy_eventSessionHostParty_Parms), Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_NoRegister()
	{
		return USBZSessionHostPartyCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartyParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSessionHostPartyCallbackProxy_SessionHostParty, "SessionHostParty" }, // 1803392603
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSessionHostPartyCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSessionHostPartyCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::NewProp_OnComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSessionHostPartyCallbackProxy" },
		{ "ModuleRelativePath", "Public/SBZSessionHostPartyCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSessionHostPartyCallbackProxy, OnComplete), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::NewProp_OnComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSessionHostPartyCallbackProxy" },
		{ "ModuleRelativePath", "Public/SBZSessionHostPartyCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSessionHostPartyCallbackProxy, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::NewProp_PartyParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSessionHostPartyCallbackProxy" },
		{ "ModuleRelativePath", "Public/SBZSessionHostPartyCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::NewProp_PartyParams = { "PartyParams", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSessionHostPartyCallbackProxy, PartyParams), Z_Construct_UScriptStruct_FSBZOnlinePartyParamsUi, METADATA_PARAMS(Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::NewProp_PartyParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::NewProp_PartyParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::NewProp_OnComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::NewProp_PartyParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSessionHostPartyCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::ClassParams = {
		&USBZSessionHostPartyCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSessionHostPartyCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSessionHostPartyCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSessionHostPartyCallbackProxy, 1456405153);
	template<> STARBREEZE_API UClass* StaticClass<USBZSessionHostPartyCallbackProxy>()
	{
		return USBZSessionHostPartyCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSessionHostPartyCallbackProxy(Z_Construct_UClass_USBZSessionHostPartyCallbackProxy, &USBZSessionHostPartyCallbackProxy::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSessionHostPartyCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSessionHostPartyCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
