// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SBZUtilityPlugin/Public/OnPlayerUnregisterDelegateDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnPlayerUnregisterDelegateDelegate() {}
// Cross Module References
	SBZUTILITYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SBZUtilityPlugin_OnPlayerUnregisterDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SBZUtilityPlugin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SBZUtilityPlugin_OnPlayerUnregisterDelegate__DelegateSignature_Statics
	{
		struct _Script_SBZUtilityPlugin_eventOnPlayerUnregisterDelegate_Parms
		{
			FUniqueNetIdRepl UniquePlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniquePlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniquePlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SBZUtilityPlugin_OnPlayerUnregisterDelegate__DelegateSignature_Statics::NewProp_UniquePlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SBZUtilityPlugin_OnPlayerUnregisterDelegate__DelegateSignature_Statics::NewProp_UniquePlayerId = { "UniquePlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SBZUtilityPlugin_eventOnPlayerUnregisterDelegate_Parms, UniquePlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UDelegateFunction_SBZUtilityPlugin_OnPlayerUnregisterDelegate__DelegateSignature_Statics::NewProp_UniquePlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SBZUtilityPlugin_OnPlayerUnregisterDelegate__DelegateSignature_Statics::NewProp_UniquePlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SBZUtilityPlugin_OnPlayerUnregisterDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SBZUtilityPlugin_OnPlayerUnregisterDelegate__DelegateSignature_Statics::NewProp_UniquePlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SBZUtilityPlugin_OnPlayerUnregisterDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnPlayerUnregisterDelegateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SBZUtilityPlugin_OnPlayerUnregisterDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SBZUtilityPlugin, nullptr, "OnPlayerUnregisterDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_SBZUtilityPlugin_eventOnPlayerUnregisterDelegate_Parms), Z_Construct_UDelegateFunction_SBZUtilityPlugin_OnPlayerUnregisterDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SBZUtilityPlugin_OnPlayerUnregisterDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SBZUtilityPlugin_OnPlayerUnregisterDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SBZUtilityPlugin_OnPlayerUnregisterDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SBZUtilityPlugin_OnPlayerUnregisterDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SBZUtilityPlugin_OnPlayerUnregisterDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
