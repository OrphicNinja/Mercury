// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnSecurityCompaniesChangedDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnSecurityCompaniesChangedDelegate() {}
// Cross Module References
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature_Statics
	{
		struct _Script_Starbreeze_eventSBZOnSecurityCompaniesChanged_Parms
		{
			TArray<ESBZSecurityCompany> SecurityCompanies;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecurityCompanies_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecurityCompanies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecurityCompanies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SecurityCompanies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature_Statics::NewProp_SecurityCompanies_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature_Statics::NewProp_SecurityCompanies_Inner = { "SecurityCompanies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature_Statics::NewProp_SecurityCompanies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature_Statics::NewProp_SecurityCompanies = { "SecurityCompanies", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZOnSecurityCompaniesChanged_Parms, SecurityCompanies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature_Statics::NewProp_SecurityCompanies_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature_Statics::NewProp_SecurityCompanies_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature_Statics::NewProp_SecurityCompanies_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature_Statics::NewProp_SecurityCompanies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature_Statics::NewProp_SecurityCompanies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnSecurityCompaniesChangedDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Starbreeze, nullptr, "SBZOnSecurityCompaniesChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_Starbreeze_eventSBZOnSecurityCompaniesChanged_Parms), Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Starbreeze_SBZOnSecurityCompaniesChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
