// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInstantLootManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInstantLootManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInstantLootManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInstantLootManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZInstantLootManager::execGetInstantLootManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZInstantLootManager**)Z_Param__Result=USBZInstantLootManager::GetInstantLootManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZInstantLootManager::StaticRegisterNativesUSBZInstantLootManager()
	{
		UClass* Class = USBZInstantLootManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInstantLootManager", &USBZInstantLootManager::execGetInstantLootManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZInstantLootManager_GetInstantLootManager_Statics
	{
		struct SBZInstantLootManager_eventGetInstantLootManager_Parms
		{
			UObject* WorldContextObject;
			USBZInstantLootManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInstantLootManager_GetInstantLootManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInstantLootManager_eventGetInstantLootManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInstantLootManager_GetInstantLootManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInstantLootManager_eventGetInstantLootManager_Parms, ReturnValue), Z_Construct_UClass_USBZInstantLootManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInstantLootManager_GetInstantLootManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInstantLootManager_GetInstantLootManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInstantLootManager_GetInstantLootManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInstantLootManager_GetInstantLootManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInstantLootManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInstantLootManager_GetInstantLootManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInstantLootManager, nullptr, "GetInstantLootManager", nullptr, nullptr, sizeof(SBZInstantLootManager_eventGetInstantLootManager_Parms), Z_Construct_UFunction_USBZInstantLootManager_GetInstantLootManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInstantLootManager_GetInstantLootManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInstantLootManager_GetInstantLootManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInstantLootManager_GetInstantLootManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInstantLootManager_GetInstantLootManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInstantLootManager_GetInstantLootManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZInstantLootManager_NoRegister()
	{
		return USBZInstantLootManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZInstantLootManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInstantLootManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZInstantLootManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZInstantLootManager_GetInstantLootManager, "GetInstantLootManager" }, // 1155565060
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInstantLootManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInstantLootManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInstantLootManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInstantLootManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInstantLootManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInstantLootManager_Statics::ClassParams = {
		&USBZInstantLootManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZInstantLootManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInstantLootManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInstantLootManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInstantLootManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInstantLootManager, 2812562622);
	template<> STARBREEZE_API UClass* StaticClass<USBZInstantLootManager>()
	{
		return USBZInstantLootManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInstantLootManager(Z_Construct_UClass_USBZInstantLootManager, &USBZInstantLootManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInstantLootManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInstantLootManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
