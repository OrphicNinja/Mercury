// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SBZWorldRuntime/Public/SBZWorldRuntimeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWorldRuntimeBase() {}
// Cross Module References
	SBZWORLDRUNTIME_API UClass* Z_Construct_UClass_USBZWorldRuntimeBase_NoRegister();
	SBZWORLDRUNTIME_API UClass* Z_Construct_UClass_USBZWorldRuntimeBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SBZWorldRuntime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(USBZWorldRuntimeBase::execGetWorldRuntime)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZWorldRuntimeBase**)Z_Param__Result=USBZWorldRuntimeBase::GetWorldRuntime(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZWorldRuntimeBase::StaticRegisterNativesUSBZWorldRuntimeBase()
	{
		UClass* Class = USBZWorldRuntimeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWorldRuntime", &USBZWorldRuntimeBase::execGetWorldRuntime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZWorldRuntimeBase_GetWorldRuntime_Statics
	{
		struct SBZWorldRuntimeBase_eventGetWorldRuntime_Parms
		{
			const UObject* WorldContextObject;
			USBZWorldRuntimeBase* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWorldRuntimeBase_GetWorldRuntime_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWorldRuntimeBase_GetWorldRuntime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWorldRuntimeBase_eventGetWorldRuntime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZWorldRuntimeBase_GetWorldRuntime_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWorldRuntimeBase_GetWorldRuntime_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWorldRuntimeBase_GetWorldRuntime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWorldRuntimeBase_eventGetWorldRuntime_Parms, ReturnValue), Z_Construct_UClass_USBZWorldRuntimeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWorldRuntimeBase_GetWorldRuntime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWorldRuntimeBase_GetWorldRuntime_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWorldRuntimeBase_GetWorldRuntime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWorldRuntimeBase_GetWorldRuntime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWorldRuntimeBase.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWorldRuntimeBase_GetWorldRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWorldRuntimeBase, nullptr, "GetWorldRuntime", nullptr, nullptr, sizeof(SBZWorldRuntimeBase_eventGetWorldRuntime_Parms), Z_Construct_UFunction_USBZWorldRuntimeBase_GetWorldRuntime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWorldRuntimeBase_GetWorldRuntime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWorldRuntimeBase_GetWorldRuntime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWorldRuntimeBase_GetWorldRuntime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWorldRuntimeBase_GetWorldRuntime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWorldRuntimeBase_GetWorldRuntime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZWorldRuntimeBase_NoRegister()
	{
		return USBZWorldRuntimeBase::StaticClass();
	}
	struct Z_Construct_UClass_USBZWorldRuntimeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldRuntimeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WorldRuntimeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWorldRuntimeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SBZWorldRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZWorldRuntimeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZWorldRuntimeBase_GetWorldRuntime, "GetWorldRuntime" }, // 1618967367
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntimeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWorldRuntimeBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntimeBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldRuntimeBase_Statics::NewProp_WorldRuntimeClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldRuntimeBase" },
		{ "ModuleRelativePath", "Public/SBZWorldRuntimeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZWorldRuntimeBase_Statics::NewProp_WorldRuntimeClass = { "WorldRuntimeClass", nullptr, (EPropertyFlags)0x0014000000044005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldRuntimeBase, WorldRuntimeClass), Z_Construct_UClass_USBZWorldRuntimeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntimeBase_Statics::NewProp_WorldRuntimeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntimeBase_Statics::NewProp_WorldRuntimeClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWorldRuntimeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldRuntimeBase_Statics::NewProp_WorldRuntimeClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWorldRuntimeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWorldRuntimeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWorldRuntimeBase_Statics::ClassParams = {
		&USBZWorldRuntimeBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZWorldRuntimeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntimeBase_Statics::PropPointers),
		0,
		0x001000AEu,
		METADATA_PARAMS(Z_Construct_UClass_USBZWorldRuntimeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldRuntimeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWorldRuntimeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWorldRuntimeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWorldRuntimeBase, 3336632047);
	template<> SBZWORLDRUNTIME_API UClass* StaticClass<USBZWorldRuntimeBase>()
	{
		return USBZWorldRuntimeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWorldRuntimeBase(Z_Construct_UClass_USBZWorldRuntimeBase, &USBZWorldRuntimeBase::StaticClass, TEXT("/Script/SBZWorldRuntime"), TEXT("USBZWorldRuntimeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWorldRuntimeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
