// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZExperienceManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZExperienceManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExperienceManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExperienceManager();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatisticsManager();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZExperienceManager::execGetExperienceManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZExperienceManager**)Z_Param__Result=USBZExperienceManager::GetExperienceManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZExperienceManager::StaticRegisterNativesUSBZExperienceManager()
	{
		UClass* Class = USBZExperienceManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetExperienceManager", &USBZExperienceManager::execGetExperienceManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZExperienceManager_GetExperienceManager_Statics
	{
		struct SBZExperienceManager_eventGetExperienceManager_Parms
		{
			const UObject* WorldContextObject;
			USBZExperienceManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZExperienceManager_GetExperienceManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZExperienceManager_GetExperienceManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZExperienceManager_eventGetExperienceManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZExperienceManager_GetExperienceManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZExperienceManager_GetExperienceManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZExperienceManager_GetExperienceManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZExperienceManager_eventGetExperienceManager_Parms, ReturnValue), Z_Construct_UClass_USBZExperienceManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZExperienceManager_GetExperienceManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZExperienceManager_GetExperienceManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZExperienceManager_GetExperienceManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZExperienceManager_GetExperienceManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExperienceManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZExperienceManager_GetExperienceManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZExperienceManager, nullptr, "GetExperienceManager", nullptr, nullptr, sizeof(SBZExperienceManager_eventGetExperienceManager_Parms), Z_Construct_UFunction_USBZExperienceManager_GetExperienceManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZExperienceManager_GetExperienceManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZExperienceManager_GetExperienceManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZExperienceManager_GetExperienceManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZExperienceManager_GetExperienceManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZExperienceManager_GetExperienceManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZExperienceManager_NoRegister()
	{
		return USBZExperienceManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZExperienceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZExperienceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStatisticsManager,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZExperienceManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZExperienceManager_GetExperienceManager, "GetExperienceManager" }, // 1408240294
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZExperienceManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZExperienceManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZExperienceManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZExperienceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZExperienceManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZExperienceManager_Statics::ClassParams = {
		&USBZExperienceManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZExperienceManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZExperienceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZExperienceManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZExperienceManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZExperienceManager, 3040022168);
	template<> STARBREEZE_API UClass* StaticClass<USBZExperienceManager>()
	{
		return USBZExperienceManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZExperienceManager(Z_Construct_UClass_USBZExperienceManager, &USBZExperienceManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZExperienceManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZExperienceManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
