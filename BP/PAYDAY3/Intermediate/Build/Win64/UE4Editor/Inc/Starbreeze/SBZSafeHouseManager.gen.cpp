// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSafeHouseManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSafeHouseManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSafeHouseManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSafeHouseManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStateAddedEvent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWorldLoader_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnSafeHouseLoadStart__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnSafeHouseLoadProgressUpdate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnSafeHouseLoadComplete__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAsyncLoadLevelInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZSafeHouseManager::execDebugExitSafeHouse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugExitSafeHouse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSafeHouseManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSafeHouseManager**)Z_Param__Result=USBZSafeHouseManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSafeHouseManager::execHandlePlayerStateAdded)
	{
		P_GET_STRUCT_REF(FSBZPlayerStateAddedEvent,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerStateAdded(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSafeHouseManager::execTravelToSafeHouse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TravelToSafeHouse();
		P_NATIVE_END;
	}
	void USBZSafeHouseManager::StaticRegisterNativesUSBZSafeHouseManager()
	{
		UClass* Class = USBZSafeHouseManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugExitSafeHouse", &USBZSafeHouseManager::execDebugExitSafeHouse },
			{ "Get", &USBZSafeHouseManager::execGet },
			{ "HandlePlayerStateAdded", &USBZSafeHouseManager::execHandlePlayerStateAdded },
			{ "TravelToSafeHouse", &USBZSafeHouseManager::execTravelToSafeHouse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSafeHouseManager_DebugExitSafeHouse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSafeHouseManager_DebugExitSafeHouse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSafeHouseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSafeHouseManager_DebugExitSafeHouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSafeHouseManager, nullptr, "DebugExitSafeHouse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSafeHouseManager_DebugExitSafeHouse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSafeHouseManager_DebugExitSafeHouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSafeHouseManager_DebugExitSafeHouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSafeHouseManager_DebugExitSafeHouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSafeHouseManager_Get_Statics
	{
		struct SBZSafeHouseManager_eventGet_Parms
		{
			const UObject* WorldContextObject;
			USBZSafeHouseManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSafeHouseManager_Get_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSafeHouseManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSafeHouseManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSafeHouseManager_Get_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSafeHouseManager_Get_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSafeHouseManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSafeHouseManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZSafeHouseManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSafeHouseManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSafeHouseManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSafeHouseManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSafeHouseManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSafeHouseManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSafeHouseManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSafeHouseManager, nullptr, "Get", nullptr, nullptr, sizeof(SBZSafeHouseManager_eventGet_Parms), Z_Construct_UFunction_USBZSafeHouseManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSafeHouseManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSafeHouseManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSafeHouseManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSafeHouseManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSafeHouseManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSafeHouseManager_HandlePlayerStateAdded_Statics
	{
		struct SBZSafeHouseManager_eventHandlePlayerStateAdded_Parms
		{
			FSBZPlayerStateAddedEvent Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSafeHouseManager_HandlePlayerStateAdded_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSafeHouseManager_HandlePlayerStateAdded_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSafeHouseManager_eventHandlePlayerStateAdded_Parms, Data), Z_Construct_UScriptStruct_FSBZPlayerStateAddedEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZSafeHouseManager_HandlePlayerStateAdded_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSafeHouseManager_HandlePlayerStateAdded_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSafeHouseManager_HandlePlayerStateAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSafeHouseManager_HandlePlayerStateAdded_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSafeHouseManager_HandlePlayerStateAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSafeHouseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSafeHouseManager_HandlePlayerStateAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSafeHouseManager, nullptr, "HandlePlayerStateAdded", nullptr, nullptr, sizeof(SBZSafeHouseManager_eventHandlePlayerStateAdded_Parms), Z_Construct_UFunction_USBZSafeHouseManager_HandlePlayerStateAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSafeHouseManager_HandlePlayerStateAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSafeHouseManager_HandlePlayerStateAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSafeHouseManager_HandlePlayerStateAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSafeHouseManager_HandlePlayerStateAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSafeHouseManager_HandlePlayerStateAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSafeHouseManager_TravelToSafeHouse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSafeHouseManager_TravelToSafeHouse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSafeHouseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSafeHouseManager_TravelToSafeHouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSafeHouseManager, nullptr, "TravelToSafeHouse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSafeHouseManager_TravelToSafeHouse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSafeHouseManager_TravelToSafeHouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSafeHouseManager_TravelToSafeHouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSafeHouseManager_TravelToSafeHouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSafeHouseManager_NoRegister()
	{
		return USBZSafeHouseManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZSafeHouseManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLoader_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldLoader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSafeHouseLoadStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSafeHouseLoadStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSafeHouseLoadProgressUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSafeHouseLoadProgressUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSafeHouseLoadComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSafeHouseLoadComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSafeHouseManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSafeHouseManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSafeHouseManager_DebugExitSafeHouse, "DebugExitSafeHouse" }, // 2081187573
		{ &Z_Construct_UFunction_USBZSafeHouseManager_Get, "Get" }, // 3359564635
		{ &Z_Construct_UFunction_USBZSafeHouseManager_HandlePlayerStateAdded, "HandlePlayerStateAdded" }, // 2574651934
		{ &Z_Construct_UFunction_USBZSafeHouseManager_TravelToSafeHouse, "TravelToSafeHouse" }, // 4224814719
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSafeHouseManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSafeHouseManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSafeHouseManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_WorldLoader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSafeHouseManager" },
		{ "ModuleRelativePath", "Public/SBZSafeHouseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_WorldLoader = { "WorldLoader", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSafeHouseManager, WorldLoader), Z_Construct_UClass_USBZWorldLoader_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_WorldLoader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_WorldLoader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_OnSafeHouseLoadStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSafeHouseManager" },
		{ "ModuleRelativePath", "Public/SBZSafeHouseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_OnSafeHouseLoadStart = { "OnSafeHouseLoadStart", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSafeHouseManager, OnSafeHouseLoadStart), Z_Construct_UDelegateFunction_Starbreeze_OnSafeHouseLoadStart__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_OnSafeHouseLoadStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_OnSafeHouseLoadStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_OnSafeHouseLoadProgressUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSafeHouseManager" },
		{ "ModuleRelativePath", "Public/SBZSafeHouseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_OnSafeHouseLoadProgressUpdate = { "OnSafeHouseLoadProgressUpdate", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSafeHouseManager, OnSafeHouseLoadProgressUpdate), Z_Construct_UDelegateFunction_Starbreeze_OnSafeHouseLoadProgressUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_OnSafeHouseLoadProgressUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_OnSafeHouseLoadProgressUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_OnSafeHouseLoadComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSafeHouseManager" },
		{ "ModuleRelativePath", "Public/SBZSafeHouseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_OnSafeHouseLoadComplete = { "OnSafeHouseLoadComplete", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSafeHouseManager, OnSafeHouseLoadComplete), Z_Construct_UDelegateFunction_Starbreeze_OnSafeHouseLoadComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_OnSafeHouseLoadComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_OnSafeHouseLoadComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSafeHouseManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_WorldLoader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_OnSafeHouseLoadStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_OnSafeHouseLoadProgressUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSafeHouseManager_Statics::NewProp_OnSafeHouseLoadComplete,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZSafeHouseManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAsyncLoadLevelInterface_NoRegister, (int32)VTABLE_OFFSET(USBZSafeHouseManager, ISBZAsyncLoadLevelInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSafeHouseManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSafeHouseManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSafeHouseManager_Statics::ClassParams = {
		&USBZSafeHouseManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSafeHouseManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSafeHouseManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSafeHouseManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSafeHouseManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSafeHouseManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSafeHouseManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSafeHouseManager, 3128464988);
	template<> STARBREEZE_API UClass* StaticClass<USBZSafeHouseManager>()
	{
		return USBZSafeHouseManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSafeHouseManager(Z_Construct_UClass_USBZSafeHouseManager, &USBZSafeHouseManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSafeHouseManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSafeHouseManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
