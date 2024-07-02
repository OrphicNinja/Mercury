// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPreplanningAssetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPreplanningAssetData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPreplanningAssetData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPreplanningAssetData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(USBZPreplanningAssetData::execApplyPreplanningAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyPreplanningAsset(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZPreplanningAssetData::StaticRegisterNativesUSBZPreplanningAssetData()
	{
		UClass* Class = USBZPreplanningAssetData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyPreplanningAsset", &USBZPreplanningAssetData::execApplyPreplanningAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPreplanningAssetData_ApplyPreplanningAsset_Statics
	{
		struct SBZPreplanningAssetData_eventApplyPreplanningAsset_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPreplanningAssetData_ApplyPreplanningAsset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPreplanningAssetData_eventApplyPreplanningAsset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPreplanningAssetData_ApplyPreplanningAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPreplanningAssetData_ApplyPreplanningAsset_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPreplanningAssetData_ApplyPreplanningAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPreplanningAssetData.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPreplanningAssetData_ApplyPreplanningAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPreplanningAssetData, nullptr, "ApplyPreplanningAsset", nullptr, nullptr, sizeof(SBZPreplanningAssetData_eventApplyPreplanningAsset_Parms), Z_Construct_UFunction_USBZPreplanningAssetData_ApplyPreplanningAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPreplanningAssetData_ApplyPreplanningAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPreplanningAssetData_ApplyPreplanningAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPreplanningAssetData_ApplyPreplanningAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPreplanningAssetData_ApplyPreplanningAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPreplanningAssetData_ApplyPreplanningAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPreplanningAssetData_NoRegister()
	{
		return USBZPreplanningAssetData::StaticClass();
	}
	struct Z_Construct_UClass_USBZPreplanningAssetData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPreplanningAssetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventoryBaseData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPreplanningAssetData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPreplanningAssetData_ApplyPreplanningAsset, "ApplyPreplanningAsset" }, // 910388785
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPreplanningAssetData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPreplanningAssetData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPreplanningAssetData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPreplanningAssetData_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPreplanningAssetData_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPreplanningAssetData" },
		{ "ModuleRelativePath", "Public/SBZPreplanningAssetData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPreplanningAssetData_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPreplanningAssetData, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPreplanningAssetData_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPreplanningAssetData_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPreplanningAssetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPreplanningAssetData_Statics::NewProp_Tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPreplanningAssetData_Statics::NewProp_Tags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPreplanningAssetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPreplanningAssetData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPreplanningAssetData_Statics::ClassParams = {
		&USBZPreplanningAssetData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPreplanningAssetData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPreplanningAssetData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPreplanningAssetData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPreplanningAssetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPreplanningAssetData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPreplanningAssetData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPreplanningAssetData, 173008781);
	template<> STARBREEZE_API UClass* StaticClass<USBZPreplanningAssetData>()
	{
		return USBZPreplanningAssetData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPreplanningAssetData(Z_Construct_UClass_USBZPreplanningAssetData, &USBZPreplanningAssetData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPreplanningAssetData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPreplanningAssetData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
