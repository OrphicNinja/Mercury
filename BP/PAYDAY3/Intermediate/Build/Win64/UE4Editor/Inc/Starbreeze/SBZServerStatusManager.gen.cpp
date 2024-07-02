// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZServerStatusManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZServerStatusManager() {}
// Cross Module References
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZServerStatusManager();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZServerStatusManager_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics
	{
		struct SBZServerStatusManager_eventMessageReceivedDelegate_Parms
		{
			FString Title;
			FString Content;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics::NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZServerStatusManager_eventMessageReceivedDelegate_Parms, Title), METADATA_PARAMS(Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZServerStatusManager_eventMessageReceivedDelegate_Parms, Content), METADATA_PARAMS(Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZServerStatusManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZServerStatusManager, nullptr, "MessageReceivedDelegate__DelegateSignature", nullptr, nullptr, sizeof(SBZServerStatusManager_eventMessageReceivedDelegate_Parms), Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USBZServerStatusManager::execGetServerStatusManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZServerStatusManager**)Z_Param__Result=USBZServerStatusManager::GetServerStatusManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZServerStatusManager::execGetServerStatusMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetServerStatusMessage();
		P_NATIVE_END;
	}
	void USBZServerStatusManager::StaticRegisterNativesUSBZServerStatusManager()
	{
		UClass* Class = USBZServerStatusManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetServerStatusManager", &USBZServerStatusManager::execGetServerStatusManager },
			{ "GetServerStatusMessage", &USBZServerStatusManager::execGetServerStatusMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusManager_Statics
	{
		struct SBZServerStatusManager_eventGetServerStatusManager_Parms
		{
			const UObject* WorldContextObject;
			USBZServerStatusManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZServerStatusManager_eventGetServerStatusManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZServerStatusManager_eventGetServerStatusManager_Parms, ReturnValue), Z_Construct_UClass_USBZServerStatusManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZServerStatusManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZServerStatusManager, nullptr, "GetServerStatusManager", nullptr, nullptr, sizeof(SBZServerStatusManager_eventGetServerStatusManager_Parms), Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZServerStatusManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZServerStatusManager, nullptr, "GetServerStatusMessage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZServerStatusManager_NoRegister()
	{
		return USBZServerStatusManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZServerStatusManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMessageReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageReceived;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZServerStatusManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZServerStatusManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusManager, "GetServerStatusManager" }, // 342611834
		{ &Z_Construct_UFunction_USBZServerStatusManager_GetServerStatusMessage, "GetServerStatusMessage" }, // 340479032
		{ &Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature, "MessageReceivedDelegate__DelegateSignature" }, // 762066407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZServerStatusManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZServerStatusManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZServerStatusManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZServerStatusManager_Statics::NewProp_OnMessageReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZServerStatusManager" },
		{ "ModuleRelativePath", "Public/SBZServerStatusManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZServerStatusManager_Statics::NewProp_OnMessageReceived = { "OnMessageReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZServerStatusManager, OnMessageReceived), Z_Construct_UDelegateFunction_USBZServerStatusManager_MessageReceivedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZServerStatusManager_Statics::NewProp_OnMessageReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZServerStatusManager_Statics::NewProp_OnMessageReceived_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZServerStatusManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZServerStatusManager_Statics::NewProp_OnMessageReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZServerStatusManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZServerStatusManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZServerStatusManager_Statics::ClassParams = {
		&USBZServerStatusManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZServerStatusManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZServerStatusManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZServerStatusManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZServerStatusManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZServerStatusManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZServerStatusManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZServerStatusManager, 2332593223);
	template<> STARBREEZE_API UClass* StaticClass<USBZServerStatusManager>()
	{
		return USBZServerStatusManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZServerStatusManager(Z_Construct_UClass_USBZServerStatusManager, &USBZServerStatusManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZServerStatusManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZServerStatusManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
