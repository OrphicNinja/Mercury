// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSessionLeavePartyCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSessionLeavePartyCallbackProxy() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZSessionLeavePartyCallbackProxy::execSessionLeaveParty)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSessionLeavePartyCallbackProxy**)Z_Param__Result=USBZSessionLeavePartyCallbackProxy::SessionLeaveParty(Z_Param_NewWorldContextObject);
		P_NATIVE_END;
	}
	void USBZSessionLeavePartyCallbackProxy::StaticRegisterNativesUSBZSessionLeavePartyCallbackProxy()
	{
		UClass* Class = USBZSessionLeavePartyCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SessionLeaveParty", &USBZSessionLeavePartyCallbackProxy::execSessionLeaveParty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSessionLeavePartyCallbackProxy_SessionLeaveParty_Statics
	{
		struct SBZSessionLeavePartyCallbackProxy_eventSessionLeaveParty_Parms
		{
			UObject* NewWorldContextObject;
			USBZSessionLeavePartyCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSessionLeavePartyCallbackProxy_SessionLeaveParty_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSessionLeavePartyCallbackProxy_eventSessionLeaveParty_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSessionLeavePartyCallbackProxy_SessionLeaveParty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSessionLeavePartyCallbackProxy_eventSessionLeaveParty_Parms, ReturnValue), Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSessionLeavePartyCallbackProxy_SessionLeaveParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSessionLeavePartyCallbackProxy_SessionLeaveParty_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSessionLeavePartyCallbackProxy_SessionLeaveParty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSessionLeavePartyCallbackProxy_SessionLeaveParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSessionLeavePartyCallbackProxy.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSessionLeavePartyCallbackProxy_SessionLeaveParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy, nullptr, "SessionLeaveParty", nullptr, nullptr, sizeof(SBZSessionLeavePartyCallbackProxy_eventSessionLeaveParty_Parms), Z_Construct_UFunction_USBZSessionLeavePartyCallbackProxy_SessionLeaveParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSessionLeavePartyCallbackProxy_SessionLeaveParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSessionLeavePartyCallbackProxy_SessionLeaveParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSessionLeavePartyCallbackProxy_SessionLeaveParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSessionLeavePartyCallbackProxy_SessionLeaveParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSessionLeavePartyCallbackProxy_SessionLeaveParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_NoRegister()
	{
		return USBZSessionLeavePartyCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSessionLeavePartyCallbackProxy_SessionLeaveParty, "SessionLeaveParty" }, // 815868666
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSessionLeavePartyCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSessionLeavePartyCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::NewProp_OnComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSessionLeavePartyCallbackProxy" },
		{ "ModuleRelativePath", "Public/SBZSessionLeavePartyCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSessionLeavePartyCallbackProxy, OnComplete), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::NewProp_OnComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSessionLeavePartyCallbackProxy" },
		{ "ModuleRelativePath", "Public/SBZSessionLeavePartyCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSessionLeavePartyCallbackProxy, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::NewProp_OnComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::NewProp_WorldContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSessionLeavePartyCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::ClassParams = {
		&USBZSessionLeavePartyCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSessionLeavePartyCallbackProxy, 3441074935);
	template<> STARBREEZE_API UClass* StaticClass<USBZSessionLeavePartyCallbackProxy>()
	{
		return USBZSessionLeavePartyCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSessionLeavePartyCallbackProxy(Z_Construct_UClass_USBZSessionLeavePartyCallbackProxy, &USBZSessionLeavePartyCallbackProxy::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSessionLeavePartyCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSessionLeavePartyCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
