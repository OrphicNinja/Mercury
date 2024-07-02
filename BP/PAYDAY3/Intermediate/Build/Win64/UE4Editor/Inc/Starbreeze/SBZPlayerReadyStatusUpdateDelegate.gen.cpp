// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerReadyStatusUpdateDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerReadyStatusUpdateDelegate() {}
// Cross Module References
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerReadyInfo();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature_Statics
	{
		struct _Script_Starbreeze_eventSBZPlayerReadyStatusUpdate_Parms
		{
			TArray<FSBZPlayerReadyInfo> PlayerReadyStatus;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerReadyStatus_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerReadyStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerReadyStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature_Statics::NewProp_PlayerReadyStatus_Inner = { "PlayerReadyStatus", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPlayerReadyInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature_Statics::NewProp_PlayerReadyStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature_Statics::NewProp_PlayerReadyStatus = { "PlayerReadyStatus", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZPlayerReadyStatusUpdate_Parms, PlayerReadyStatus), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature_Statics::NewProp_PlayerReadyStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature_Statics::NewProp_PlayerReadyStatus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature_Statics::NewProp_PlayerReadyStatus_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature_Statics::NewProp_PlayerReadyStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerReadyStatusUpdateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Starbreeze, nullptr, "SBZPlayerReadyStatusUpdate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Starbreeze_eventSBZPlayerReadyStatusUpdate_Parms), Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerReadyStatusUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
