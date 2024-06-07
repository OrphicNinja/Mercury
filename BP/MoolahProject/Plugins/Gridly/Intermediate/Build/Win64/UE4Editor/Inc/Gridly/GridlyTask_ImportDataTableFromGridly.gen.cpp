// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gridly/Public/GridlyTask_ImportDataTableFromGridly.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridlyTask_ImportDataTableFromGridly() {}
// Cross Module References
	GRIDLY_API UClass* Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_NoRegister();
	GRIDLY_API UClass* Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Gridly();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GRIDLY_API UClass* Z_Construct_UClass_UGridlyDataTable_NoRegister();
	GRIDLY_API UFunction* Z_Construct_UDelegateFunction_Gridly_ImportDataTableFromGridlyDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGridlyTask_ImportDataTableFromGridly::execImportDataTableFromGridly)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UGridlyDataTable,Z_Param_NewGridlyDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGridlyTask_ImportDataTableFromGridly**)Z_Param__Result=UGridlyTask_ImportDataTableFromGridly::ImportDataTableFromGridly(Z_Param_WorldContextObject,Z_Param_NewGridlyDataTable);
		P_NATIVE_END;
	}
	void UGridlyTask_ImportDataTableFromGridly::StaticRegisterNativesUGridlyTask_ImportDataTableFromGridly()
	{
		UClass* Class = UGridlyTask_ImportDataTableFromGridly::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ImportDataTableFromGridly", &UGridlyTask_ImportDataTableFromGridly::execImportDataTableFromGridly },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Statics
	{
		struct GridlyTask_ImportDataTableFromGridly_eventImportDataTableFromGridly_Parms
		{
			const UObject* WorldContextObject;
			UGridlyDataTable* NewGridlyDataTable;
			UGridlyTask_ImportDataTableFromGridly* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGridlyDataTable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridlyTask_ImportDataTableFromGridly_eventImportDataTableFromGridly_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Statics::NewProp_NewGridlyDataTable = { "NewGridlyDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridlyTask_ImportDataTableFromGridly_eventImportDataTableFromGridly_Parms, NewGridlyDataTable), Z_Construct_UClass_UGridlyDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridlyTask_ImportDataTableFromGridly_eventImportDataTableFromGridly_Parms, ReturnValue), Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Statics::NewProp_NewGridlyDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GridlyTask_ImportDataTableFromGridly.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly, nullptr, "ImportDataTableFromGridly", nullptr, nullptr, sizeof(GridlyTask_ImportDataTableFromGridly_eventImportDataTableFromGridly_Parms), Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_NoRegister()
	{
		return UGridlyTask_ImportDataTableFromGridly::StaticClass();
	}
	struct Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridlyDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridlyDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Gridly,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly, "ImportDataTableFromGridly" }, // 4204708197
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GridlyTask_ImportDataTableFromGridly.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GridlyTask_ImportDataTableFromGridly.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GridlyTask_ImportDataTableFromGridly" },
		{ "ModuleRelativePath", "Public/GridlyTask_ImportDataTableFromGridly.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridlyTask_ImportDataTableFromGridly, OnSuccess), Z_Construct_UDelegateFunction_Gridly_ImportDataTableFromGridlyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_OnProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GridlyTask_ImportDataTableFromGridly" },
		{ "ModuleRelativePath", "Public/GridlyTask_ImportDataTableFromGridly.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridlyTask_ImportDataTableFromGridly, OnProgress), Z_Construct_UDelegateFunction_Gridly_ImportDataTableFromGridlyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_OnProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_OnProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_OnFail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GridlyTask_ImportDataTableFromGridly" },
		{ "ModuleRelativePath", "Public/GridlyTask_ImportDataTableFromGridly.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridlyTask_ImportDataTableFromGridly, OnFail), Z_Construct_UDelegateFunction_Gridly_ImportDataTableFromGridlyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_OnFail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_GridlyDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GridlyTask_ImportDataTableFromGridly" },
		{ "ModuleRelativePath", "Public/GridlyTask_ImportDataTableFromGridly.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_GridlyDataTable = { "GridlyDataTable", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridlyTask_ImportDataTableFromGridly, GridlyDataTable), Z_Construct_UClass_UGridlyDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_GridlyDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_GridlyDataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_OnProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_OnFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::NewProp_GridlyDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridlyTask_ImportDataTableFromGridly>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::ClassParams = {
		&UGridlyTask_ImportDataTableFromGridly::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridlyTask_ImportDataTableFromGridly, 1401829646);
	template<> GRIDLY_API UClass* StaticClass<UGridlyTask_ImportDataTableFromGridly>()
	{
		return UGridlyTask_ImportDataTableFromGridly::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridlyTask_ImportDataTableFromGridly(Z_Construct_UClass_UGridlyTask_ImportDataTableFromGridly, &UGridlyTask_ImportDataTableFromGridly::StaticClass, TEXT("/Script/Gridly"), TEXT("UGridlyTask_ImportDataTableFromGridly"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridlyTask_ImportDataTableFromGridly);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
