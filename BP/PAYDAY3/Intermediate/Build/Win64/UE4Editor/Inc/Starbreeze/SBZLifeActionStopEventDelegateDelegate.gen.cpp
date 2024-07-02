// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLifeActionStopEventDelegateDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLifeActionStopEventDelegateDelegate() {}
// Cross Module References
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionInstance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionSlot_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics
	{
		struct _Script_Starbreeze_eventSBZLifeActionStopEventDelegate_Parms
		{
			ASBZCharacter* Character;
			USBZLifeActionInstance* ActionInstance;
			USBZLifeActionSlot* ActionSlot;
			ESBZLifeActionStopReason Result;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZLifeActionStopEventDelegate_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZLifeActionStopEventDelegate_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZLifeActionStopEventDelegate_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZLifeActionStopEventDelegate_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::NewProp_ActionSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionStopEventDelegateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Starbreeze, nullptr, "SBZLifeActionStopEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Starbreeze_eventSBZLifeActionStopEventDelegate_Parms), Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionStopEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
