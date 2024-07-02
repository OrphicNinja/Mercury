// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAccelByteNetworkErrorManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAccelByteNetworkErrorManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteNetworkErrorManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteNetworkErrorManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAccelByteNetworkErrorManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZAccelByteNetworkErrorManager**)Z_Param__Result=USBZAccelByteNetworkErrorManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAccelByteNetworkErrorManager::execOnPopUpWaitToReconnectClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPopUpWaitToReconnectClosed(Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAccelByteNetworkErrorManager::execPollAccelTimeService)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PollAccelTimeService();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAccelByteNetworkErrorManager::execValidateFailedInternetConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ValidateFailedInternetConnection();
		P_NATIVE_END;
	}
	void USBZAccelByteNetworkErrorManager::StaticRegisterNativesUSBZAccelByteNetworkErrorManager()
	{
		UClass* Class = USBZAccelByteNetworkErrorManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZAccelByteNetworkErrorManager::execGet },
			{ "OnPopUpWaitToReconnectClosed", &USBZAccelByteNetworkErrorManager::execOnPopUpWaitToReconnectClosed },
			{ "PollAccelTimeService", &USBZAccelByteNetworkErrorManager::execPollAccelTimeService },
			{ "ValidateFailedInternetConnection", &USBZAccelByteNetworkErrorManager::execValidateFailedInternetConnection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_Get_Statics
	{
		struct SBZAccelByteNetworkErrorManager_eventGet_Parms
		{
			const UObject* WorldContextObject;
			USBZAccelByteNetworkErrorManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_Get_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAccelByteNetworkErrorManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_Get_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_Get_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAccelByteNetworkErrorManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZAccelByteNetworkErrorManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAccelByteNetworkErrorManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAccelByteNetworkErrorManager, nullptr, "Get", nullptr, nullptr, sizeof(SBZAccelByteNetworkErrorManager_eventGet_Parms), Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_OnPopUpWaitToReconnectClosed_Statics
	{
		struct SBZAccelByteNetworkErrorManager_eventOnPopUpWaitToReconnectClosed_Parms
		{
			FName ActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_OnPopUpWaitToReconnectClosed_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAccelByteNetworkErrorManager_eventOnPopUpWaitToReconnectClosed_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_OnPopUpWaitToReconnectClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_OnPopUpWaitToReconnectClosed_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_OnPopUpWaitToReconnectClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAccelByteNetworkErrorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_OnPopUpWaitToReconnectClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAccelByteNetworkErrorManager, nullptr, "OnPopUpWaitToReconnectClosed", nullptr, nullptr, sizeof(SBZAccelByteNetworkErrorManager_eventOnPopUpWaitToReconnectClosed_Parms), Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_OnPopUpWaitToReconnectClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_OnPopUpWaitToReconnectClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_OnPopUpWaitToReconnectClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_OnPopUpWaitToReconnectClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_OnPopUpWaitToReconnectClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_OnPopUpWaitToReconnectClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_PollAccelTimeService_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_PollAccelTimeService_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAccelByteNetworkErrorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_PollAccelTimeService_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAccelByteNetworkErrorManager, nullptr, "PollAccelTimeService", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_PollAccelTimeService_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_PollAccelTimeService_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_PollAccelTimeService()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_PollAccelTimeService_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_ValidateFailedInternetConnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_ValidateFailedInternetConnection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAccelByteNetworkErrorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_ValidateFailedInternetConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAccelByteNetworkErrorManager, nullptr, "ValidateFailedInternetConnection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_ValidateFailedInternetConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_ValidateFailedInternetConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_ValidateFailedInternetConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_ValidateFailedInternetConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAccelByteNetworkErrorManager_NoRegister()
	{
		return USBZAccelByteNetworkErrorManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZAccelByteNetworkErrorManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NotifyWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAccelByteNetworkErrorManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAccelByteNetworkErrorManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_Get, "Get" }, // 1083708511
		{ &Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_OnPopUpWaitToReconnectClosed, "OnPopUpWaitToReconnectClosed" }, // 1422452062
		{ &Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_PollAccelTimeService, "PollAccelTimeService" }, // 3503843236
		{ &Z_Construct_UFunction_USBZAccelByteNetworkErrorManager_ValidateFailedInternetConnection, "ValidateFailedInternetConnection" }, // 2854199550
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteNetworkErrorManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAccelByteNetworkErrorManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAccelByteNetworkErrorManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteNetworkErrorManager_Statics::NewProp_NotifyWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteNetworkErrorManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAccelByteNetworkErrorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAccelByteNetworkErrorManager_Statics::NewProp_NotifyWidget = { "NotifyWidget", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteNetworkErrorManager, NotifyWidget), Z_Construct_UClass_USBZWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteNetworkErrorManager_Statics::NewProp_NotifyWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteNetworkErrorManager_Statics::NewProp_NotifyWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAccelByteNetworkErrorManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteNetworkErrorManager_Statics::NewProp_NotifyWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAccelByteNetworkErrorManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAccelByteNetworkErrorManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAccelByteNetworkErrorManager_Statics::ClassParams = {
		&USBZAccelByteNetworkErrorManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAccelByteNetworkErrorManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteNetworkErrorManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteNetworkErrorManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteNetworkErrorManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAccelByteNetworkErrorManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAccelByteNetworkErrorManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAccelByteNetworkErrorManager, 1259927355);
	template<> STARBREEZE_API UClass* StaticClass<USBZAccelByteNetworkErrorManager>()
	{
		return USBZAccelByteNetworkErrorManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAccelByteNetworkErrorManager(Z_Construct_UClass_USBZAccelByteNetworkErrorManager, &USBZAccelByteNetworkErrorManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAccelByteNetworkErrorManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAccelByteNetworkErrorManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
