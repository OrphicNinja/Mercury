// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActorSpawnRequestDoneDynamicDelegateDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActorSpawnRequestDoneDynamicDelegateDelegate() {}
// Cross Module References
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActorSpawnRequestHandle();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSpawnRequestStatus();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics
	{
		struct _Script_Starbreeze_eventSBZActorSpawnRequestDoneDynamicDelegate_Parms
		{
			FSBZActorSpawnRequestHandle RequestHandle;
			TArray<AActor*> CreatedActorArray;
			ESBZSpawnRequestStatus FinalStatus;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestHandle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CreatedActorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedActorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CreatedActorArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FinalStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FinalStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::NewProp_RequestHandle = { "RequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZActorSpawnRequestDoneDynamicDelegate_Parms, RequestHandle), Z_Construct_UScriptStruct_FSBZActorSpawnRequestHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::NewProp_CreatedActorArray_Inner = { "CreatedActorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::NewProp_CreatedActorArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::NewProp_CreatedActorArray = { "CreatedActorArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZActorSpawnRequestDoneDynamicDelegate_Parms, CreatedActorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::NewProp_CreatedActorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::NewProp_CreatedActorArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::NewProp_FinalStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::NewProp_FinalStatus = { "FinalStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZActorSpawnRequestDoneDynamicDelegate_Parms, FinalStatus), Z_Construct_UEnum_Starbreeze_ESBZSpawnRequestStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::NewProp_RequestHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::NewProp_CreatedActorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::NewProp_CreatedActorArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::NewProp_FinalStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::NewProp_FinalStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActorSpawnRequestDoneDynamicDelegateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Starbreeze, nullptr, "SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Starbreeze_eventSBZActorSpawnRequestDoneDynamicDelegate_Parms), Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
