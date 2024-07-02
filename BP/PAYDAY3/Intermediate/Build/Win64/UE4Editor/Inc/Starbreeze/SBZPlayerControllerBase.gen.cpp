// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerControllerBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerControllerBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerControllerBase();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3PlayerLoadout();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPlayerControllerBase::execBP_IsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerControllerBase::execIsPausedPreferred)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPausedPreferred();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerControllerBase::execServer_SetAccelByteSessionInformation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InAccelByteUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_InSessionId);
		P_GET_ENUM(ESBZFirstPartyPlatform,Z_Param_FirstPartyPlatform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetAccelByteSessionInformation_Implementation(Z_Param_InAccelByteUserId,Z_Param_InSessionId,ESBZFirstPartyPlatform(Z_Param_FirstPartyPlatform));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerControllerBase::execServer_SetLoadout)
	{
		P_GET_STRUCT(FPD3PlayerLoadout,Z_Param_Loadout);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetLoadout_Validate(Z_Param_Loadout))
		{
			RPC_ValidateFailed(TEXT("Server_SetLoadout_Validate"));
			return;
		}
		P_THIS->Server_SetLoadout_Implementation(Z_Param_Loadout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerControllerBase::execServer_SetPausedPreferred)
	{
		P_GET_UBOOL(Z_Param_bInIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetPausedPreferred_Implementation(Z_Param_bInIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerControllerBase::execSetPausedPreferred)
	{
		P_GET_UBOOL(Z_Param_bIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPausedPreferred(Z_Param_bIsPaused);
		P_NATIVE_END;
	}
	static FName NAME_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation = FName(TEXT("Server_SetAccelByteSessionInformation"));
	void ASBZPlayerControllerBase::Server_SetAccelByteSessionInformation(const FString& InAccelByteUserId, const FString& InSessionId, const ESBZFirstPartyPlatform FirstPartyPlatform)
	{
		SBZPlayerControllerBase_eventServer_SetAccelByteSessionInformation_Parms Parms;
		Parms.InAccelByteUserId=InAccelByteUserId;
		Parms.InSessionId=InSessionId;
		Parms.FirstPartyPlatform=FirstPartyPlatform;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation),&Parms);
	}
	static FName NAME_ASBZPlayerControllerBase_Server_SetLoadout = FName(TEXT("Server_SetLoadout"));
	void ASBZPlayerControllerBase::Server_SetLoadout(FPD3PlayerLoadout const& Loadout)
	{
		SBZPlayerControllerBase_eventServer_SetLoadout_Parms Parms;
		Parms.Loadout=Loadout;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerControllerBase_Server_SetLoadout),&Parms);
	}
	static FName NAME_ASBZPlayerControllerBase_Server_SetPausedPreferred = FName(TEXT("Server_SetPausedPreferred"));
	void ASBZPlayerControllerBase::Server_SetPausedPreferred(bool bInIsPaused)
	{
		SBZPlayerControllerBase_eventServer_SetPausedPreferred_Parms Parms;
		Parms.bInIsPaused=bInIsPaused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerControllerBase_Server_SetPausedPreferred),&Parms);
	}
	void ASBZPlayerControllerBase::StaticRegisterNativesASBZPlayerControllerBase()
	{
		UClass* Class = ASBZPlayerControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_IsPaused", &ASBZPlayerControllerBase::execBP_IsPaused },
			{ "IsPausedPreferred", &ASBZPlayerControllerBase::execIsPausedPreferred },
			{ "Server_SetAccelByteSessionInformation", &ASBZPlayerControllerBase::execServer_SetAccelByteSessionInformation },
			{ "Server_SetLoadout", &ASBZPlayerControllerBase::execServer_SetLoadout },
			{ "Server_SetPausedPreferred", &ASBZPlayerControllerBase::execServer_SetPausedPreferred },
			{ "SetPausedPreferred", &ASBZPlayerControllerBase::execSetPausedPreferred },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPlayerControllerBase_BP_IsPaused_Statics
	{
		struct SBZPlayerControllerBase_eventBP_IsPaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPlayerControllerBase_BP_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerControllerBase_eventBP_IsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerControllerBase_BP_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerControllerBase_eventBP_IsPaused_Parms), &Z_Construct_UFunction_ASBZPlayerControllerBase_BP_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerControllerBase_BP_IsPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerControllerBase_BP_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerControllerBase_BP_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerControllerBase_BP_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerControllerBase, nullptr, "BP_IsPaused", nullptr, nullptr, sizeof(SBZPlayerControllerBase_eventBP_IsPaused_Parms), Z_Construct_UFunction_ASBZPlayerControllerBase_BP_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerControllerBase_BP_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerControllerBase_BP_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerControllerBase_BP_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerControllerBase_BP_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerControllerBase_BP_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerControllerBase_IsPausedPreferred_Statics
	{
		struct SBZPlayerControllerBase_eventIsPausedPreferred_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPlayerControllerBase_IsPausedPreferred_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerControllerBase_eventIsPausedPreferred_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerControllerBase_IsPausedPreferred_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerControllerBase_eventIsPausedPreferred_Parms), &Z_Construct_UFunction_ASBZPlayerControllerBase_IsPausedPreferred_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerControllerBase_IsPausedPreferred_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerControllerBase_IsPausedPreferred_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerControllerBase_IsPausedPreferred_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerControllerBase_IsPausedPreferred_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerControllerBase, nullptr, "IsPausedPreferred", nullptr, nullptr, sizeof(SBZPlayerControllerBase_eventIsPausedPreferred_Parms), Z_Construct_UFunction_ASBZPlayerControllerBase_IsPausedPreferred_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerControllerBase_IsPausedPreferred_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerControllerBase_IsPausedPreferred_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerControllerBase_IsPausedPreferred_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerControllerBase_IsPausedPreferred()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerControllerBase_IsPausedPreferred_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAccelByteUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InAccelByteUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InSessionId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FirstPartyPlatform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPartyPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FirstPartyPlatform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::NewProp_InAccelByteUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::NewProp_InAccelByteUserId = { "InAccelByteUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerControllerBase_eventServer_SetAccelByteSessionInformation_Parms, InAccelByteUserId), METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::NewProp_InAccelByteUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::NewProp_InAccelByteUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::NewProp_InSessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::NewProp_InSessionId = { "InSessionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerControllerBase_eventServer_SetAccelByteSessionInformation_Parms, InSessionId), METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::NewProp_InSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::NewProp_InSessionId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::NewProp_FirstPartyPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::NewProp_FirstPartyPlatform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::NewProp_FirstPartyPlatform = { "FirstPartyPlatform", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerControllerBase_eventServer_SetAccelByteSessionInformation_Parms, FirstPartyPlatform), Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::NewProp_FirstPartyPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::NewProp_FirstPartyPlatform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::NewProp_InAccelByteUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::NewProp_InSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::NewProp_FirstPartyPlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::NewProp_FirstPartyPlatform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerControllerBase, nullptr, "Server_SetAccelByteSessionInformation", nullptr, nullptr, sizeof(SBZPlayerControllerBase_eventServer_SetAccelByteSessionInformation_Parms), Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetLoadout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Loadout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetLoadout_Statics::NewProp_Loadout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetLoadout_Statics::NewProp_Loadout = { "Loadout", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerControllerBase_eventServer_SetLoadout_Parms, Loadout), Z_Construct_UScriptStruct_FPD3PlayerLoadout, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetLoadout_Statics::NewProp_Loadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetLoadout_Statics::NewProp_Loadout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetLoadout_Statics::NewProp_Loadout,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerControllerBase, nullptr, "Server_SetLoadout", nullptr, nullptr, sizeof(SBZPlayerControllerBase_eventServer_SetLoadout_Parms), Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetPausedPreferred_Statics
	{
		static void NewProp_bInIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsPaused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetPausedPreferred_Statics::NewProp_bInIsPaused_SetBit(void* Obj)
	{
		((SBZPlayerControllerBase_eventServer_SetPausedPreferred_Parms*)Obj)->bInIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetPausedPreferred_Statics::NewProp_bInIsPaused = { "bInIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerControllerBase_eventServer_SetPausedPreferred_Parms), &Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetPausedPreferred_Statics::NewProp_bInIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetPausedPreferred_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetPausedPreferred_Statics::NewProp_bInIsPaused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetPausedPreferred_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetPausedPreferred_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerControllerBase, nullptr, "Server_SetPausedPreferred", nullptr, nullptr, sizeof(SBZPlayerControllerBase_eventServer_SetPausedPreferred_Parms), Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetPausedPreferred_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetPausedPreferred_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetPausedPreferred_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetPausedPreferred_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetPausedPreferred()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetPausedPreferred_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerControllerBase_SetPausedPreferred_Statics
	{
		struct SBZPlayerControllerBase_eventSetPausedPreferred_Parms
		{
			bool bIsPaused;
		};
		static void NewProp_bIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPlayerControllerBase_SetPausedPreferred_Statics::NewProp_bIsPaused_SetBit(void* Obj)
	{
		((SBZPlayerControllerBase_eventSetPausedPreferred_Parms*)Obj)->bIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerControllerBase_SetPausedPreferred_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerControllerBase_eventSetPausedPreferred_Parms), &Z_Construct_UFunction_ASBZPlayerControllerBase_SetPausedPreferred_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerControllerBase_SetPausedPreferred_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerControllerBase_SetPausedPreferred_Statics::NewProp_bIsPaused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerControllerBase_SetPausedPreferred_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerControllerBase_SetPausedPreferred_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerControllerBase, nullptr, "SetPausedPreferred", nullptr, nullptr, sizeof(SBZPlayerControllerBase_eventSetPausedPreferred_Parms), Z_Construct_UFunction_ASBZPlayerControllerBase_SetPausedPreferred_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerControllerBase_SetPausedPreferred_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerControllerBase_SetPausedPreferred_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerControllerBase_SetPausedPreferred_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerControllerBase_SetPausedPreferred()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerControllerBase_SetPausedPreferred_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPlayerControllerBase_NoRegister()
	{
		return ASBZPlayerControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlayerControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SBZPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SBZPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlayerControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPlayerControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPlayerControllerBase_BP_IsPaused, "BP_IsPaused" }, // 1934044194
		{ &Z_Construct_UFunction_ASBZPlayerControllerBase_IsPausedPreferred, "IsPausedPreferred" }, // 803977225
		{ &Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetAccelByteSessionInformation, "Server_SetAccelByteSessionInformation" }, // 3027153209
		{ &Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetLoadout, "Server_SetLoadout" }, // 2840042132
		{ &Z_Construct_UFunction_ASBZPlayerControllerBase_Server_SetPausedPreferred, "Server_SetPausedPreferred" }, // 2407911
		{ &Z_Construct_UFunction_ASBZPlayerControllerBase_SetPausedPreferred, "SetPausedPreferred" }, // 2711484717
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerControllerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZPlayerControllerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerControllerBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerControllerBase_Statics::NewProp_SBZPlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/SBZPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerControllerBase_Statics::NewProp_SBZPlayerState = { "SBZPlayerState", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerControllerBase, SBZPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerControllerBase_Statics::NewProp_SBZPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerControllerBase_Statics::NewProp_SBZPlayerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPlayerControllerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerControllerBase_Statics::NewProp_SBZPlayerState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlayerControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlayerControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlayerControllerBase_Statics::ClassParams = {
		&ASBZPlayerControllerBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPlayerControllerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerControllerBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlayerControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlayerControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlayerControllerBase, 1257551124);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlayerControllerBase>()
	{
		return ASBZPlayerControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlayerControllerBase(Z_Construct_UClass_ASBZPlayerControllerBase, &ASBZPlayerControllerBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlayerControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlayerControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
