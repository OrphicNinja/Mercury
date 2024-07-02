// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnPlayerToReadyEventDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnPlayerToReadyEventDelegate() {}
// Cross Module References
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics
	{
		struct _Script_Starbreeze_eventSBZOnPlayerToReadyEvent_Parms
		{
			FUniqueNetIdRepl InPlayerId;
			FString PlayerDisplayName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerDisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZOnPlayerToReadyEvent_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics::NewProp_InPlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics::NewProp_PlayerDisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics::NewProp_PlayerDisplayName = { "PlayerDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZOnPlayerToReadyEvent_Parms, PlayerDisplayName), METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics::NewProp_PlayerDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics::NewProp_PlayerDisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics::NewProp_InPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics::NewProp_PlayerDisplayName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnPlayerToReadyEventDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Starbreeze, nullptr, "SBZOnPlayerToReadyEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_Starbreeze_eventSBZOnPlayerToReadyEvent_Parms), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
