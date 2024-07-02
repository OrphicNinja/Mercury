// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUIWeaponStatsBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUIWeaponStatsBlueprint() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIWeaponStatsBlueprint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIWeaponStatsBlueprint();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRangedWeaponData_NoRegister();
// End Cross Module References
	static FName NAME_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray = FName(TEXT("GetAccuracyValueArray"));
	void USBZUIWeaponStatsBlueprint::GetAccuracyValueArray(const USBZRangedWeaponData* RangedWeaponData, TArray<float>& OutValueArray) const
	{
		SBZUIWeaponStatsBlueprint_eventGetAccuracyValueArray_Parms Parms;
		Parms.RangedWeaponData=RangedWeaponData;
		Parms.OutValueArray=OutValueArray;
		const_cast<USBZUIWeaponStatsBlueprint*>(this)->ProcessEvent(FindFunctionChecked(NAME_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray),&Parms);
		OutValueArray=Parms.OutValueArray;
	}
	static FName NAME_USBZUIWeaponStatsBlueprint_GetDamageValueArray = FName(TEXT("GetDamageValueArray"));
	void USBZUIWeaponStatsBlueprint::GetDamageValueArray(const USBZRangedWeaponData* RangedWeaponData, TArray<float>& OutValueArray) const
	{
		SBZUIWeaponStatsBlueprint_eventGetDamageValueArray_Parms Parms;
		Parms.RangedWeaponData=RangedWeaponData;
		Parms.OutValueArray=OutValueArray;
		const_cast<USBZUIWeaponStatsBlueprint*>(this)->ProcessEvent(FindFunctionChecked(NAME_USBZUIWeaponStatsBlueprint_GetDamageValueArray),&Parms);
		OutValueArray=Parms.OutValueArray;
	}
	static FName NAME_USBZUIWeaponStatsBlueprint_GetFireRateValueArray = FName(TEXT("GetFireRateValueArray"));
	void USBZUIWeaponStatsBlueprint::GetFireRateValueArray(const USBZRangedWeaponData* RangedWeaponData, TArray<float>& OutValueArray) const
	{
		SBZUIWeaponStatsBlueprint_eventGetFireRateValueArray_Parms Parms;
		Parms.RangedWeaponData=RangedWeaponData;
		Parms.OutValueArray=OutValueArray;
		const_cast<USBZUIWeaponStatsBlueprint*>(this)->ProcessEvent(FindFunctionChecked(NAME_USBZUIWeaponStatsBlueprint_GetFireRateValueArray),&Parms);
		OutValueArray=Parms.OutValueArray;
	}
	static FName NAME_USBZUIWeaponStatsBlueprint_GetHandlingValueArray = FName(TEXT("GetHandlingValueArray"));
	void USBZUIWeaponStatsBlueprint::GetHandlingValueArray(const USBZRangedWeaponData* RangedWeaponData, TArray<float>& OutValueArray) const
	{
		SBZUIWeaponStatsBlueprint_eventGetHandlingValueArray_Parms Parms;
		Parms.RangedWeaponData=RangedWeaponData;
		Parms.OutValueArray=OutValueArray;
		const_cast<USBZUIWeaponStatsBlueprint*>(this)->ProcessEvent(FindFunctionChecked(NAME_USBZUIWeaponStatsBlueprint_GetHandlingValueArray),&Parms);
		OutValueArray=Parms.OutValueArray;
	}
	static FName NAME_USBZUIWeaponStatsBlueprint_GetRecoilValueArray = FName(TEXT("GetRecoilValueArray"));
	void USBZUIWeaponStatsBlueprint::GetRecoilValueArray(const USBZRangedWeaponData* RangedWeaponData, TArray<float>& OutValueArray) const
	{
		SBZUIWeaponStatsBlueprint_eventGetRecoilValueArray_Parms Parms;
		Parms.RangedWeaponData=RangedWeaponData;
		Parms.OutValueArray=OutValueArray;
		const_cast<USBZUIWeaponStatsBlueprint*>(this)->ProcessEvent(FindFunctionChecked(NAME_USBZUIWeaponStatsBlueprint_GetRecoilValueArray),&Parms);
		OutValueArray=Parms.OutValueArray;
	}
	static FName NAME_USBZUIWeaponStatsBlueprint_GetStabilityValueArray = FName(TEXT("GetStabilityValueArray"));
	void USBZUIWeaponStatsBlueprint::GetStabilityValueArray(const USBZRangedWeaponData* RangedWeaponData, TArray<float>& OutValueArray) const
	{
		SBZUIWeaponStatsBlueprint_eventGetStabilityValueArray_Parms Parms;
		Parms.RangedWeaponData=RangedWeaponData;
		Parms.OutValueArray=OutValueArray;
		const_cast<USBZUIWeaponStatsBlueprint*>(this)->ProcessEvent(FindFunctionChecked(NAME_USBZUIWeaponStatsBlueprint_GetStabilityValueArray),&Parms);
		OutValueArray=Parms.OutValueArray;
	}
	void USBZUIWeaponStatsBlueprint::StaticRegisterNativesUSBZUIWeaponStatsBlueprint()
	{
	}
	struct Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedWeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangedWeaponData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutValueArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutValueArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray_Statics::NewProp_RangedWeaponData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray_Statics::NewProp_RangedWeaponData = { "RangedWeaponData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIWeaponStatsBlueprint_eventGetAccuracyValueArray_Parms, RangedWeaponData), Z_Construct_UClass_USBZRangedWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray_Statics::NewProp_RangedWeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray_Statics::NewProp_RangedWeaponData_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray_Statics::NewProp_OutValueArray_Inner = { "OutValueArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray_Statics::NewProp_OutValueArray = { "OutValueArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIWeaponStatsBlueprint_eventGetAccuracyValueArray_Parms, OutValueArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray_Statics::NewProp_RangedWeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray_Statics::NewProp_OutValueArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray_Statics::NewProp_OutValueArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIWeaponStatsBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIWeaponStatsBlueprint, nullptr, "GetAccuracyValueArray", nullptr, nullptr, sizeof(SBZUIWeaponStatsBlueprint_eventGetAccuracyValueArray_Parms), Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedWeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangedWeaponData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutValueArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutValueArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray_Statics::NewProp_RangedWeaponData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray_Statics::NewProp_RangedWeaponData = { "RangedWeaponData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIWeaponStatsBlueprint_eventGetDamageValueArray_Parms, RangedWeaponData), Z_Construct_UClass_USBZRangedWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray_Statics::NewProp_RangedWeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray_Statics::NewProp_RangedWeaponData_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray_Statics::NewProp_OutValueArray_Inner = { "OutValueArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray_Statics::NewProp_OutValueArray = { "OutValueArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIWeaponStatsBlueprint_eventGetDamageValueArray_Parms, OutValueArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray_Statics::NewProp_RangedWeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray_Statics::NewProp_OutValueArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray_Statics::NewProp_OutValueArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIWeaponStatsBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIWeaponStatsBlueprint, nullptr, "GetDamageValueArray", nullptr, nullptr, sizeof(SBZUIWeaponStatsBlueprint_eventGetDamageValueArray_Parms), Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedWeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangedWeaponData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutValueArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutValueArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray_Statics::NewProp_RangedWeaponData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray_Statics::NewProp_RangedWeaponData = { "RangedWeaponData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIWeaponStatsBlueprint_eventGetFireRateValueArray_Parms, RangedWeaponData), Z_Construct_UClass_USBZRangedWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray_Statics::NewProp_RangedWeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray_Statics::NewProp_RangedWeaponData_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray_Statics::NewProp_OutValueArray_Inner = { "OutValueArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray_Statics::NewProp_OutValueArray = { "OutValueArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIWeaponStatsBlueprint_eventGetFireRateValueArray_Parms, OutValueArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray_Statics::NewProp_RangedWeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray_Statics::NewProp_OutValueArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray_Statics::NewProp_OutValueArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIWeaponStatsBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIWeaponStatsBlueprint, nullptr, "GetFireRateValueArray", nullptr, nullptr, sizeof(SBZUIWeaponStatsBlueprint_eventGetFireRateValueArray_Parms), Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedWeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangedWeaponData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutValueArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutValueArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray_Statics::NewProp_RangedWeaponData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray_Statics::NewProp_RangedWeaponData = { "RangedWeaponData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIWeaponStatsBlueprint_eventGetHandlingValueArray_Parms, RangedWeaponData), Z_Construct_UClass_USBZRangedWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray_Statics::NewProp_RangedWeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray_Statics::NewProp_RangedWeaponData_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray_Statics::NewProp_OutValueArray_Inner = { "OutValueArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray_Statics::NewProp_OutValueArray = { "OutValueArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIWeaponStatsBlueprint_eventGetHandlingValueArray_Parms, OutValueArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray_Statics::NewProp_RangedWeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray_Statics::NewProp_OutValueArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray_Statics::NewProp_OutValueArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIWeaponStatsBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIWeaponStatsBlueprint, nullptr, "GetHandlingValueArray", nullptr, nullptr, sizeof(SBZUIWeaponStatsBlueprint_eventGetHandlingValueArray_Parms), Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedWeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangedWeaponData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutValueArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutValueArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray_Statics::NewProp_RangedWeaponData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray_Statics::NewProp_RangedWeaponData = { "RangedWeaponData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIWeaponStatsBlueprint_eventGetRecoilValueArray_Parms, RangedWeaponData), Z_Construct_UClass_USBZRangedWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray_Statics::NewProp_RangedWeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray_Statics::NewProp_RangedWeaponData_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray_Statics::NewProp_OutValueArray_Inner = { "OutValueArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray_Statics::NewProp_OutValueArray = { "OutValueArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIWeaponStatsBlueprint_eventGetRecoilValueArray_Parms, OutValueArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray_Statics::NewProp_RangedWeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray_Statics::NewProp_OutValueArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray_Statics::NewProp_OutValueArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIWeaponStatsBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIWeaponStatsBlueprint, nullptr, "GetRecoilValueArray", nullptr, nullptr, sizeof(SBZUIWeaponStatsBlueprint_eventGetRecoilValueArray_Parms), Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedWeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangedWeaponData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutValueArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutValueArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray_Statics::NewProp_RangedWeaponData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray_Statics::NewProp_RangedWeaponData = { "RangedWeaponData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIWeaponStatsBlueprint_eventGetStabilityValueArray_Parms, RangedWeaponData), Z_Construct_UClass_USBZRangedWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray_Statics::NewProp_RangedWeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray_Statics::NewProp_RangedWeaponData_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray_Statics::NewProp_OutValueArray_Inner = { "OutValueArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray_Statics::NewProp_OutValueArray = { "OutValueArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIWeaponStatsBlueprint_eventGetStabilityValueArray_Parms, OutValueArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray_Statics::NewProp_RangedWeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray_Statics::NewProp_OutValueArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray_Statics::NewProp_OutValueArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIWeaponStatsBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIWeaponStatsBlueprint, nullptr, "GetStabilityValueArray", nullptr, nullptr, sizeof(SBZUIWeaponStatsBlueprint_eventGetStabilityValueArray_Parms), Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZUIWeaponStatsBlueprint_NoRegister()
	{
		return USBZUIWeaponStatsBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_USBZUIWeaponStatsBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZUIWeaponStatsBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZUIWeaponStatsBlueprint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetAccuracyValueArray, "GetAccuracyValueArray" }, // 947723122
		{ &Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetDamageValueArray, "GetDamageValueArray" }, // 2082687626
		{ &Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetFireRateValueArray, "GetFireRateValueArray" }, // 1053187689
		{ &Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetHandlingValueArray, "GetHandlingValueArray" }, // 3253562733
		{ &Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetRecoilValueArray, "GetRecoilValueArray" }, // 2497780775
		{ &Z_Construct_UFunction_USBZUIWeaponStatsBlueprint_GetStabilityValueArray, "GetStabilityValueArray" }, // 2896407916
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIWeaponStatsBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZUIWeaponStatsBlueprint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZUIWeaponStatsBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZUIWeaponStatsBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZUIWeaponStatsBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZUIWeaponStatsBlueprint_Statics::ClassParams = {
		&USBZUIWeaponStatsBlueprint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZUIWeaponStatsBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIWeaponStatsBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZUIWeaponStatsBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZUIWeaponStatsBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZUIWeaponStatsBlueprint, 1876501486);
	template<> STARBREEZE_API UClass* StaticClass<USBZUIWeaponStatsBlueprint>()
	{
		return USBZUIWeaponStatsBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZUIWeaponStatsBlueprint(Z_Construct_UClass_USBZUIWeaponStatsBlueprint, &USBZUIWeaponStatsBlueprint::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZUIWeaponStatsBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZUIWeaponStatsBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
