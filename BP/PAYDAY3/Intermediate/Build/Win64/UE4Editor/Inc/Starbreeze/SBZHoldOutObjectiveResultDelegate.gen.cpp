// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutObjectiveResultDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutObjectiveResultDelegate() {}
// Cross Module References
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHoldOutObjectiveResult();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutObjectiveBase_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics
	{
		struct _Script_Starbreeze_eventSBZHoldOutObjectiveResult_Parms
		{
			ESBZHoldOutObjectiveResult Result;
			USBZHoldOutObjectiveBase* Objective;
			FGameplayTagContainer GrantedTags;
			FGameplayTagContainer RemovedTags;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZHoldOutObjectiveResult_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZHoldOutObjectiveResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZHoldOutObjectiveResult_Parms, Objective), Z_Construct_UClass_USBZHoldOutObjectiveBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_GrantedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZHoldOutObjectiveResult_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_GrantedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_GrantedTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_RemovedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_RemovedTags = { "RemovedTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZHoldOutObjectiveResult_Parms, RemovedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_RemovedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_RemovedTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_Objective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_GrantedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::NewProp_RemovedTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveResultDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Starbreeze, nullptr, "SBZHoldOutObjectiveResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_Starbreeze_eventSBZHoldOutObjectiveResult_Parms), Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
