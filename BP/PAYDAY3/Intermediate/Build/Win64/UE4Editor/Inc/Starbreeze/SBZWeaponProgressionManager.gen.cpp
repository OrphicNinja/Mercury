// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponProgressionManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponProgressionManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponProgressionManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponProgressionManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZWeaponProgressionManager::execGetWeaponProgressionManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZWeaponProgressionManager**)Z_Param__Result=USBZWeaponProgressionManager::GetWeaponProgressionManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZWeaponProgressionManager::StaticRegisterNativesUSBZWeaponProgressionManager()
	{
		UClass* Class = USBZWeaponProgressionManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWeaponProgressionManager", &USBZWeaponProgressionManager::execGetWeaponProgressionManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZWeaponProgressionManager_GetWeaponProgressionManager_Statics
	{
		struct SBZWeaponProgressionManager_eventGetWeaponProgressionManager_Parms
		{
			const UObject* WorldContextObject;
			USBZWeaponProgressionManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponProgressionManager_GetWeaponProgressionManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWeaponProgressionManager_GetWeaponProgressionManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponProgressionManager_eventGetWeaponProgressionManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponProgressionManager_GetWeaponProgressionManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponProgressionManager_GetWeaponProgressionManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWeaponProgressionManager_GetWeaponProgressionManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponProgressionManager_eventGetWeaponProgressionManager_Parms, ReturnValue), Z_Construct_UClass_USBZWeaponProgressionManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWeaponProgressionManager_GetWeaponProgressionManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponProgressionManager_GetWeaponProgressionManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponProgressionManager_GetWeaponProgressionManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponProgressionManager_GetWeaponProgressionManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponProgressionManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponProgressionManager_GetWeaponProgressionManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponProgressionManager, nullptr, "GetWeaponProgressionManager", nullptr, nullptr, sizeof(SBZWeaponProgressionManager_eventGetWeaponProgressionManager_Parms), Z_Construct_UFunction_USBZWeaponProgressionManager_GetWeaponProgressionManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponProgressionManager_GetWeaponProgressionManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponProgressionManager_GetWeaponProgressionManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponProgressionManager_GetWeaponProgressionManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponProgressionManager_GetWeaponProgressionManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponProgressionManager_GetWeaponProgressionManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZWeaponProgressionManager_NoRegister()
	{
		return USBZWeaponProgressionManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponProgressionManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponProgressionManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZWeaponProgressionManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZWeaponProgressionManager_GetWeaponProgressionManager, "GetWeaponProgressionManager" }, // 1970915621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponProgressionManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponProgressionManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponProgressionManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponProgressionManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponProgressionManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponProgressionManager_Statics::ClassParams = {
		&USBZWeaponProgressionManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponProgressionManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponProgressionManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponProgressionManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponProgressionManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponProgressionManager, 768947082);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponProgressionManager>()
	{
		return USBZWeaponProgressionManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponProgressionManager(Z_Construct_UClass_USBZWeaponProgressionManager, &USBZWeaponProgressionManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponProgressionManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponProgressionManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
