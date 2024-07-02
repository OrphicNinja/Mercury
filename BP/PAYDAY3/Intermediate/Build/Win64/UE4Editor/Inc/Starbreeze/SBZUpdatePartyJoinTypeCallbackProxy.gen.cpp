// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUpdatePartyJoinTypeCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUpdatePartyJoinTypeCallbackProxy() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineJoinType();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZUpdatePartyJoinTypeCallbackProxy::execUpdatePartyJoinType)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_ENUM(ESBZOnlineJoinType,Z_Param_InNewJoinType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZUpdatePartyJoinTypeCallbackProxy**)Z_Param__Result=USBZUpdatePartyJoinTypeCallbackProxy::UpdatePartyJoinType(Z_Param_NewWorldContextObject,ESBZOnlineJoinType(Z_Param_InNewJoinType));
		P_NATIVE_END;
	}
	void USBZUpdatePartyJoinTypeCallbackProxy::StaticRegisterNativesUSBZUpdatePartyJoinTypeCallbackProxy()
	{
		UClass* Class = USBZUpdatePartyJoinTypeCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdatePartyJoinType", &USBZUpdatePartyJoinTypeCallbackProxy::execUpdatePartyJoinType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType_Statics
	{
		struct SBZUpdatePartyJoinTypeCallbackProxy_eventUpdatePartyJoinType_Parms
		{
			UObject* NewWorldContextObject;
			ESBZOnlineJoinType InNewJoinType;
			USBZUpdatePartyJoinTypeCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InNewJoinType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InNewJoinType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUpdatePartyJoinTypeCallbackProxy_eventUpdatePartyJoinType_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType_Statics::NewProp_InNewJoinType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType_Statics::NewProp_InNewJoinType = { "InNewJoinType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUpdatePartyJoinTypeCallbackProxy_eventUpdatePartyJoinType_Parms, InNewJoinType), Z_Construct_UEnum_Starbreeze_ESBZOnlineJoinType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUpdatePartyJoinTypeCallbackProxy_eventUpdatePartyJoinType_Parms, ReturnValue), Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType_Statics::NewProp_InNewJoinType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType_Statics::NewProp_InNewJoinType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUpdatePartyJoinTypeCallbackProxy.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy, nullptr, "UpdatePartyJoinType", nullptr, nullptr, sizeof(SBZUpdatePartyJoinTypeCallbackProxy_eventUpdatePartyJoinType_Parms), Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_NoRegister()
	{
		return USBZUpdatePartyJoinTypeCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZUpdatePartyJoinTypeCallbackProxy_UpdatePartyJoinType, "UpdatePartyJoinType" }, // 4243515229
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZUpdatePartyJoinTypeCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZUpdatePartyJoinTypeCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUpdatePartyJoinTypeCallbackProxy" },
		{ "ModuleRelativePath", "Public/SBZUpdatePartyJoinTypeCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUpdatePartyJoinTypeCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Starbreeze_OnOnlineSessionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUpdatePartyJoinTypeCallbackProxy" },
		{ "ModuleRelativePath", "Public/SBZUpdatePartyJoinTypeCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUpdatePartyJoinTypeCallbackProxy, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::NewProp_WorldContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZUpdatePartyJoinTypeCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::ClassParams = {
		&USBZUpdatePartyJoinTypeCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZUpdatePartyJoinTypeCallbackProxy, 935159644);
	template<> STARBREEZE_API UClass* StaticClass<USBZUpdatePartyJoinTypeCallbackProxy>()
	{
		return USBZUpdatePartyJoinTypeCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZUpdatePartyJoinTypeCallbackProxy(Z_Construct_UClass_USBZUpdatePartyJoinTypeCallbackProxy, &USBZUpdatePartyJoinTypeCallbackProxy::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZUpdatePartyJoinTypeCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZUpdatePartyJoinTypeCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
