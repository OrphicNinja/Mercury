// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponPatternData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponPatternData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPatternData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPatternData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList();
// End Cross Module References
	DEFINE_FUNCTION(USBZWeaponPatternData::execGetNbExpectedColorsInConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNbExpectedColorsInConfig();
		P_NATIVE_END;
	}
	void USBZWeaponPatternData::StaticRegisterNativesUSBZWeaponPatternData()
	{
		UClass* Class = USBZWeaponPatternData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNbExpectedColorsInConfig", &USBZWeaponPatternData::execGetNbExpectedColorsInConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZWeaponPatternData_GetNbExpectedColorsInConfig_Statics
	{
		struct SBZWeaponPatternData_eventGetNbExpectedColorsInConfig_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZWeaponPatternData_GetNbExpectedColorsInConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponPatternData_eventGetNbExpectedColorsInConfig_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWeaponPatternData_GetNbExpectedColorsInConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponPatternData_GetNbExpectedColorsInConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponPatternData_GetNbExpectedColorsInConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponPatternData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponPatternData_GetNbExpectedColorsInConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponPatternData, nullptr, "GetNbExpectedColorsInConfig", nullptr, nullptr, sizeof(SBZWeaponPatternData_eventGetNbExpectedColorsInConfig_Parms), Z_Construct_UFunction_USBZWeaponPatternData_GetNbExpectedColorsInConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponPatternData_GetNbExpectedColorsInConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponPatternData_GetNbExpectedColorsInConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponPatternData_GetNbExpectedColorsInConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponPatternData_GetNbExpectedColorsInConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponPatternData_GetNbExpectedColorsInConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZWeaponPatternData_NoRegister()
	{
		return USBZWeaponPatternData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponPatternData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AreasForEachColor_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreasForEachColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AreasForEachColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponPatternData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCosmeticsDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZWeaponPatternData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZWeaponPatternData_GetNbExpectedColorsInConfig, "GetNbExpectedColorsInConfig" }, // 1184082089
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPatternData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponPatternData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponPatternData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponPatternData_Statics::NewProp_AreasForEachColor_Inner = { "AreasForEachColor", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPatternData_Statics::NewProp_AreasForEachColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPatternData" },
		{ "ModuleRelativePath", "Public/SBZWeaponPatternData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZWeaponPatternData_Statics::NewProp_AreasForEachColor = { "AreasForEachColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponPatternData, AreasForEachColor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPatternData_Statics::NewProp_AreasForEachColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPatternData_Statics::NewProp_AreasForEachColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponPatternData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPatternData_Statics::NewProp_AreasForEachColor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPatternData_Statics::NewProp_AreasForEachColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponPatternData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponPatternData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponPatternData_Statics::ClassParams = {
		&USBZWeaponPatternData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZWeaponPatternData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPatternData_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPatternData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPatternData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponPatternData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponPatternData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponPatternData, 1654988186);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponPatternData>()
	{
		return USBZWeaponPatternData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponPatternData(Z_Construct_UClass_USBZWeaponPatternData, &USBZWeaponPatternData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponPatternData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponPatternData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
