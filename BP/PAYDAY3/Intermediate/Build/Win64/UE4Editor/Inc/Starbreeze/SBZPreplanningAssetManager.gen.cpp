// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPreplanningAssetManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPreplanningAssetManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPreplanningAssetManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPreplanningAssetManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPreplanningAssetData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZPreplanningAssetManager::execConsumeUserEntitlementError)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConsumeUserEntitlementError(ESBZMetaRequestResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPreplanningAssetManager::execConsumeUserEntitlementSuccess)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConsumeUserEntitlementSuccess(ESBZMetaRequestResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPreplanningAssetManager::execGetAssetBySku)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InAssetSku);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZPreplanningAssetData**)Z_Param__Result=P_THIS->GetAssetBySku(Z_Param_InAssetSku);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPreplanningAssetManager::execGetPreplanningAssetManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZPreplanningAssetManager**)Z_Param__Result=USBZPreplanningAssetManager::GetPreplanningAssetManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZPreplanningAssetManager::StaticRegisterNativesUSBZPreplanningAssetManager()
	{
		UClass* Class = USBZPreplanningAssetManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConsumeUserEntitlementError", &USBZPreplanningAssetManager::execConsumeUserEntitlementError },
			{ "ConsumeUserEntitlementSuccess", &USBZPreplanningAssetManager::execConsumeUserEntitlementSuccess },
			{ "GetAssetBySku", &USBZPreplanningAssetManager::execGetAssetBySku },
			{ "GetPreplanningAssetManager", &USBZPreplanningAssetManager::execGetPreplanningAssetManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementError_Statics
	{
		struct SBZPreplanningAssetManager_eventConsumeUserEntitlementError_Parms
		{
			ESBZMetaRequestResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementError_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementError_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPreplanningAssetManager_eventConsumeUserEntitlementError_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementError_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementError_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPreplanningAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPreplanningAssetManager, nullptr, "ConsumeUserEntitlementError", nullptr, nullptr, sizeof(SBZPreplanningAssetManager_eventConsumeUserEntitlementError_Parms), Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementSuccess_Statics
	{
		struct SBZPreplanningAssetManager_eventConsumeUserEntitlementSuccess_Parms
		{
			ESBZMetaRequestResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementSuccess_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementSuccess_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPreplanningAssetManager_eventConsumeUserEntitlementSuccess_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementSuccess_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementSuccess_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPreplanningAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPreplanningAssetManager, nullptr, "ConsumeUserEntitlementSuccess", nullptr, nullptr, sizeof(SBZPreplanningAssetManager_eventConsumeUserEntitlementSuccess_Parms), Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPreplanningAssetManager_GetAssetBySku_Statics
	{
		struct SBZPreplanningAssetManager_eventGetAssetBySku_Parms
		{
			FString InAssetSku;
			USBZPreplanningAssetData* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAssetSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InAssetSku;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPreplanningAssetManager_GetAssetBySku_Statics::NewProp_InAssetSku_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZPreplanningAssetManager_GetAssetBySku_Statics::NewProp_InAssetSku = { "InAssetSku", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPreplanningAssetManager_eventGetAssetBySku_Parms, InAssetSku), METADATA_PARAMS(Z_Construct_UFunction_USBZPreplanningAssetManager_GetAssetBySku_Statics::NewProp_InAssetSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPreplanningAssetManager_GetAssetBySku_Statics::NewProp_InAssetSku_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPreplanningAssetManager_GetAssetBySku_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPreplanningAssetManager_eventGetAssetBySku_Parms, ReturnValue), Z_Construct_UClass_USBZPreplanningAssetData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPreplanningAssetManager_GetAssetBySku_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPreplanningAssetManager_GetAssetBySku_Statics::NewProp_InAssetSku,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPreplanningAssetManager_GetAssetBySku_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPreplanningAssetManager_GetAssetBySku_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPreplanningAssetManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPreplanningAssetManager_GetAssetBySku_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPreplanningAssetManager, nullptr, "GetAssetBySku", nullptr, nullptr, sizeof(SBZPreplanningAssetManager_eventGetAssetBySku_Parms), Z_Construct_UFunction_USBZPreplanningAssetManager_GetAssetBySku_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPreplanningAssetManager_GetAssetBySku_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPreplanningAssetManager_GetAssetBySku_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPreplanningAssetManager_GetAssetBySku_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPreplanningAssetManager_GetAssetBySku()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPreplanningAssetManager_GetAssetBySku_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPreplanningAssetManager_GetPreplanningAssetManager_Statics
	{
		struct SBZPreplanningAssetManager_eventGetPreplanningAssetManager_Parms
		{
			UObject* WorldContextObject;
			USBZPreplanningAssetManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPreplanningAssetManager_GetPreplanningAssetManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPreplanningAssetManager_eventGetPreplanningAssetManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPreplanningAssetManager_GetPreplanningAssetManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPreplanningAssetManager_eventGetPreplanningAssetManager_Parms, ReturnValue), Z_Construct_UClass_USBZPreplanningAssetManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPreplanningAssetManager_GetPreplanningAssetManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPreplanningAssetManager_GetPreplanningAssetManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPreplanningAssetManager_GetPreplanningAssetManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPreplanningAssetManager_GetPreplanningAssetManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPreplanningAssetManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPreplanningAssetManager_GetPreplanningAssetManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPreplanningAssetManager, nullptr, "GetPreplanningAssetManager", nullptr, nullptr, sizeof(SBZPreplanningAssetManager_eventGetPreplanningAssetManager_Parms), Z_Construct_UFunction_USBZPreplanningAssetManager_GetPreplanningAssetManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPreplanningAssetManager_GetPreplanningAssetManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPreplanningAssetManager_GetPreplanningAssetManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPreplanningAssetManager_GetPreplanningAssetManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPreplanningAssetManager_GetPreplanningAssetManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPreplanningAssetManager_GetPreplanningAssetManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPreplanningAssetManager_NoRegister()
	{
		return USBZPreplanningAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZPreplanningAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPreplanningAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPreplanningAssetManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementError, "ConsumeUserEntitlementError" }, // 1209838435
		{ &Z_Construct_UFunction_USBZPreplanningAssetManager_ConsumeUserEntitlementSuccess, "ConsumeUserEntitlementSuccess" }, // 129638638
		{ &Z_Construct_UFunction_USBZPreplanningAssetManager_GetAssetBySku, "GetAssetBySku" }, // 780450584
		{ &Z_Construct_UFunction_USBZPreplanningAssetManager_GetPreplanningAssetManager, "GetPreplanningAssetManager" }, // 4161772131
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPreplanningAssetManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPreplanningAssetManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPreplanningAssetManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPreplanningAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPreplanningAssetManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPreplanningAssetManager_Statics::ClassParams = {
		&USBZPreplanningAssetManager::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPreplanningAssetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPreplanningAssetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPreplanningAssetManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPreplanningAssetManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPreplanningAssetManager, 986449786);
	template<> STARBREEZE_API UClass* StaticClass<USBZPreplanningAssetManager>()
	{
		return USBZPreplanningAssetManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPreplanningAssetManager(Z_Construct_UClass_USBZPreplanningAssetManager, &USBZPreplanningAssetManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPreplanningAssetManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPreplanningAssetManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
