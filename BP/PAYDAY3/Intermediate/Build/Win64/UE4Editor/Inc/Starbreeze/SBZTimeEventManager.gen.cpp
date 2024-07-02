// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTimeEventManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTimeEventManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTimeEventManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTimeEventManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
	DEFINE_FUNCTION(USBZTimeEventManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZTimeEventManager**)Z_Param__Result=USBZTimeEventManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTimeEventManager::execGetLastKnownServerTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetLastKnownServerTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTimeEventManager::execGetNextResetTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNextResetTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTimeEventManager::execRequestTimeEventCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestTimeEventCheck();
		P_NATIVE_END;
	}
	void USBZTimeEventManager::StaticRegisterNativesUSBZTimeEventManager()
	{
		UClass* Class = USBZTimeEventManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZTimeEventManager::execGet },
			{ "GetLastKnownServerTime", &USBZTimeEventManager::execGetLastKnownServerTime },
			{ "GetNextResetTime", &USBZTimeEventManager::execGetNextResetTime },
			{ "RequestTimeEventCheck", &USBZTimeEventManager::execRequestTimeEventCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZTimeEventManager_Get_Statics
	{
		struct SBZTimeEventManager_eventGet_Parms
		{
			const UObject* WorldContextObject;
			USBZTimeEventManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTimeEventManager_Get_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTimeEventManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTimeEventManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZTimeEventManager_Get_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTimeEventManager_Get_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTimeEventManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTimeEventManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZTimeEventManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTimeEventManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTimeEventManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTimeEventManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTimeEventManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTimeEventManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTimeEventManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTimeEventManager, nullptr, "Get", nullptr, nullptr, sizeof(SBZTimeEventManager_eventGet_Parms), Z_Construct_UFunction_USBZTimeEventManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTimeEventManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTimeEventManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTimeEventManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTimeEventManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTimeEventManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTimeEventManager_GetLastKnownServerTime_Statics
	{
		struct SBZTimeEventManager_eventGetLastKnownServerTime_Parms
		{
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZTimeEventManager_GetLastKnownServerTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTimeEventManager_eventGetLastKnownServerTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTimeEventManager_GetLastKnownServerTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTimeEventManager_GetLastKnownServerTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTimeEventManager_GetLastKnownServerTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTimeEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTimeEventManager_GetLastKnownServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTimeEventManager, nullptr, "GetLastKnownServerTime", nullptr, nullptr, sizeof(SBZTimeEventManager_eventGetLastKnownServerTime_Parms), Z_Construct_UFunction_USBZTimeEventManager_GetLastKnownServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTimeEventManager_GetLastKnownServerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTimeEventManager_GetLastKnownServerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTimeEventManager_GetLastKnownServerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTimeEventManager_GetLastKnownServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTimeEventManager_GetLastKnownServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTimeEventManager_GetNextResetTime_Statics
	{
		struct SBZTimeEventManager_eventGetNextResetTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZTimeEventManager_GetNextResetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTimeEventManager_eventGetNextResetTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTimeEventManager_GetNextResetTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTimeEventManager_GetNextResetTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTimeEventManager_GetNextResetTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTimeEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTimeEventManager_GetNextResetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTimeEventManager, nullptr, "GetNextResetTime", nullptr, nullptr, sizeof(SBZTimeEventManager_eventGetNextResetTime_Parms), Z_Construct_UFunction_USBZTimeEventManager_GetNextResetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTimeEventManager_GetNextResetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTimeEventManager_GetNextResetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTimeEventManager_GetNextResetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTimeEventManager_GetNextResetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTimeEventManager_GetNextResetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTimeEventManager_RequestTimeEventCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTimeEventManager_RequestTimeEventCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTimeEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTimeEventManager_RequestTimeEventCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTimeEventManager, nullptr, "RequestTimeEventCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTimeEventManager_RequestTimeEventCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTimeEventManager_RequestTimeEventCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTimeEventManager_RequestTimeEventCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTimeEventManager_RequestTimeEventCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZTimeEventManager_NoRegister()
	{
		return USBZTimeEventManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZTimeEventManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTimeEventManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZTimeEventManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZTimeEventManager_Get, "Get" }, // 30663726
		{ &Z_Construct_UFunction_USBZTimeEventManager_GetLastKnownServerTime, "GetLastKnownServerTime" }, // 2643374674
		{ &Z_Construct_UFunction_USBZTimeEventManager_GetNextResetTime, "GetNextResetTime" }, // 1552837280
		{ &Z_Construct_UFunction_USBZTimeEventManager_RequestTimeEventCheck, "RequestTimeEventCheck" }, // 4153412369
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTimeEventManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTimeEventManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTimeEventManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTimeEventManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTimeEventManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTimeEventManager_Statics::ClassParams = {
		&USBZTimeEventManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTimeEventManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTimeEventManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTimeEventManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTimeEventManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTimeEventManager, 1259314234);
	template<> STARBREEZE_API UClass* StaticClass<USBZTimeEventManager>()
	{
		return USBZTimeEventManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTimeEventManager(Z_Construct_UClass_USBZTimeEventManager, &USBZTimeEventManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTimeEventManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTimeEventManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
