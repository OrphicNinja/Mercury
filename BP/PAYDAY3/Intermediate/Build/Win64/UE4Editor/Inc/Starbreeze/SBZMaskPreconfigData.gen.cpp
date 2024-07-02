// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskPreconfigData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskPreconfigData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskPreconfigData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskPreconfigData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskConfig();
// End Cross Module References
	DEFINE_FUNCTION(USBZMaskPreconfigData::execGetMaskConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZMaskConfig*)Z_Param__Result=P_THIS->GetMaskConfig();
		P_NATIVE_END;
	}
	void USBZMaskPreconfigData::StaticRegisterNativesUSBZMaskPreconfigData()
	{
		UClass* Class = USBZMaskPreconfigData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaskConfig", &USBZMaskPreconfigData::execGetMaskConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMaskPreconfigData_GetMaskConfig_Statics
	{
		struct SBZMaskPreconfigData_eventGetMaskConfig_Parms
		{
			FSBZMaskConfig ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMaskPreconfigData_GetMaskConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMaskPreconfigData_eventGetMaskConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZMaskConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMaskPreconfigData_GetMaskConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaskPreconfigData_GetMaskConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskPreconfigData_GetMaskConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMaskPreconfigData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMaskPreconfigData_GetMaskConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMaskPreconfigData, nullptr, "GetMaskConfig", nullptr, nullptr, sizeof(SBZMaskPreconfigData_eventGetMaskConfig_Parms), Z_Construct_UFunction_USBZMaskPreconfigData_GetMaskConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskPreconfigData_GetMaskConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskPreconfigData_GetMaskConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskPreconfigData_GetMaskConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMaskPreconfigData_GetMaskConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMaskPreconfigData_GetMaskConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMaskPreconfigData_NoRegister()
	{
		return USBZMaskPreconfigData::StaticClass();
	}
	struct Z_Construct_UClass_USBZMaskPreconfigData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMaskPreconfigData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCosmeticsDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMaskPreconfigData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMaskPreconfigData_GetMaskConfig, "GetMaskConfig" }, // 3655088643
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskPreconfigData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMaskPreconfigData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskPreconfigData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskPreconfigData_Statics::NewProp_MaskConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskPreconfigData" },
		{ "ModuleRelativePath", "Public/SBZMaskPreconfigData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMaskPreconfigData_Statics::NewProp_MaskConfig = { "MaskConfig", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskPreconfigData, MaskConfig), Z_Construct_UScriptStruct_FSBZMaskConfig, METADATA_PARAMS(Z_Construct_UClass_USBZMaskPreconfigData_Statics::NewProp_MaskConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskPreconfigData_Statics::NewProp_MaskConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMaskPreconfigData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskPreconfigData_Statics::NewProp_MaskConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMaskPreconfigData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMaskPreconfigData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMaskPreconfigData_Statics::ClassParams = {
		&USBZMaskPreconfigData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMaskPreconfigData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskPreconfigData_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMaskPreconfigData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskPreconfigData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMaskPreconfigData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMaskPreconfigData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMaskPreconfigData, 1051111723);
	template<> STARBREEZE_API UClass* StaticClass<USBZMaskPreconfigData>()
	{
		return USBZMaskPreconfigData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMaskPreconfigData(Z_Construct_UClass_USBZMaskPreconfigData, &USBZMaskPreconfigData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMaskPreconfigData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMaskPreconfigData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
