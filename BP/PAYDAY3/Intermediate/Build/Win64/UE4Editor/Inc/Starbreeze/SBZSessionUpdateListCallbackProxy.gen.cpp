// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSessionUpdateListCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSessionUpdateListCallbackProxy() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSessionUpdateListCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlineSessionParams();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionSearchEventDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZSessionUpdateListCallbackProxy::execSessionUpdateList)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_STRUCT_REF(FSBZOnlineSessionParams,Z_Param_Out_InSearchParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSessionUpdateListCallbackProxy**)Z_Param__Result=USBZSessionUpdateListCallbackProxy::SessionUpdateList(Z_Param_NewWorldContextObject,Z_Param_Out_InSearchParams);
		P_NATIVE_END;
	}
	void USBZSessionUpdateListCallbackProxy::StaticRegisterNativesUSBZSessionUpdateListCallbackProxy()
	{
		UClass* Class = USBZSessionUpdateListCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SessionUpdateList", &USBZSessionUpdateListCallbackProxy::execSessionUpdateList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList_Statics
	{
		struct SBZSessionUpdateListCallbackProxy_eventSessionUpdateList_Parms
		{
			UObject* NewWorldContextObject;
			FSBZOnlineSessionParams InSearchParams;
			USBZSessionUpdateListCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSearchParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSearchParams;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSessionUpdateListCallbackProxy_eventSessionUpdateList_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList_Statics::NewProp_InSearchParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList_Statics::NewProp_InSearchParams = { "InSearchParams", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSessionUpdateListCallbackProxy_eventSessionUpdateList_Parms, InSearchParams), Z_Construct_UScriptStruct_FSBZOnlineSessionParams, METADATA_PARAMS(Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList_Statics::NewProp_InSearchParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList_Statics::NewProp_InSearchParams_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSessionUpdateListCallbackProxy_eventSessionUpdateList_Parms, ReturnValue), Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList_Statics::NewProp_InSearchParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSessionUpdateListCallbackProxy.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSessionUpdateListCallbackProxy, nullptr, "SessionUpdateList", nullptr, nullptr, sizeof(SBZSessionUpdateListCallbackProxy_eventSessionUpdateList_Parms), Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_NoRegister()
	{
		return USBZSessionUpdateListCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSessionUpdateListCallbackProxy_SessionUpdateList, "SessionUpdateList" }, // 3206448026
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSessionUpdateListCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSessionUpdateListCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::NewProp_OnComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSessionUpdateListCallbackProxy" },
		{ "ModuleRelativePath", "Public/SBZSessionUpdateListCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSessionUpdateListCallbackProxy, OnComplete), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionSearchEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::NewProp_OnComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSessionUpdateListCallbackProxy" },
		{ "ModuleRelativePath", "Public/SBZSessionUpdateListCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSessionUpdateListCallbackProxy, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::NewProp_OnComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::NewProp_WorldContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSessionUpdateListCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::ClassParams = {
		&USBZSessionUpdateListCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSessionUpdateListCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSessionUpdateListCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSessionUpdateListCallbackProxy, 3063294758);
	template<> STARBREEZE_API UClass* StaticClass<USBZSessionUpdateListCallbackProxy>()
	{
		return USBZSessionUpdateListCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSessionUpdateListCallbackProxy(Z_Construct_UClass_USBZSessionUpdateListCallbackProxy, &USBZSessionUpdateListCallbackProxy::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSessionUpdateListCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSessionUpdateListCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
