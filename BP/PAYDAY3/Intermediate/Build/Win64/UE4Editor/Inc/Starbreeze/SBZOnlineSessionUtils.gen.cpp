// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnlineSessionUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnlineSessionUtils() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSessionUtils_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSessionUtils();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPartyManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLobby_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZOnlineSessionUtils::execIsActionPhaseClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActionPhaseClient();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineSessionUtils::execIsActionPhaseHost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActionPhaseHost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineSessionUtils::execIsInParty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInParty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineSessionUtils::execIsInSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineSessionUtils::execIsLobbyClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLobbyClient();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineSessionUtils::execIsLobbyHost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLobbyHost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineSessionUtils::execIsPartyClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPartyClient();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineSessionUtils::execIsPartyOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPartyOwner();
		P_NATIVE_END;
	}
	void USBZOnlineSessionUtils::StaticRegisterNativesUSBZOnlineSessionUtils()
	{
		UClass* Class = USBZOnlineSessionUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActionPhaseClient", &USBZOnlineSessionUtils::execIsActionPhaseClient },
			{ "IsActionPhaseHost", &USBZOnlineSessionUtils::execIsActionPhaseHost },
			{ "IsInParty", &USBZOnlineSessionUtils::execIsInParty },
			{ "IsInSession", &USBZOnlineSessionUtils::execIsInSession },
			{ "IsLobbyClient", &USBZOnlineSessionUtils::execIsLobbyClient },
			{ "IsLobbyHost", &USBZOnlineSessionUtils::execIsLobbyHost },
			{ "IsPartyClient", &USBZOnlineSessionUtils::execIsPartyClient },
			{ "IsPartyOwner", &USBZOnlineSessionUtils::execIsPartyOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseClient_Statics
	{
		struct SBZOnlineSessionUtils_eventIsActionPhaseClient_Parms
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
	void Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineSessionUtils_eventIsActionPhaseClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineSessionUtils_eventIsActionPhaseClient_Parms), &Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSessionUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSessionUtils, nullptr, "IsActionPhaseClient", nullptr, nullptr, sizeof(SBZOnlineSessionUtils_eventIsActionPhaseClient_Parms), Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseHost_Statics
	{
		struct SBZOnlineSessionUtils_eventIsActionPhaseHost_Parms
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
	void Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseHost_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineSessionUtils_eventIsActionPhaseHost_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseHost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineSessionUtils_eventIsActionPhaseHost_Parms), &Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseHost_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseHost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSessionUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSessionUtils, nullptr, "IsActionPhaseHost", nullptr, nullptr, sizeof(SBZOnlineSessionUtils_eventIsActionPhaseHost_Parms), Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineSessionUtils_IsInParty_Statics
	{
		struct SBZOnlineSessionUtils_eventIsInParty_Parms
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
	void Z_Construct_UFunction_USBZOnlineSessionUtils_IsInParty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineSessionUtils_eventIsInParty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineSessionUtils_IsInParty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineSessionUtils_eventIsInParty_Parms), &Z_Construct_UFunction_USBZOnlineSessionUtils_IsInParty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSessionUtils_IsInParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSessionUtils_IsInParty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSessionUtils_IsInParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSessionUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSessionUtils_IsInParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSessionUtils, nullptr, "IsInParty", nullptr, nullptr, sizeof(SBZOnlineSessionUtils_eventIsInParty_Parms), Z_Construct_UFunction_USBZOnlineSessionUtils_IsInParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSessionUtils_IsInParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSessionUtils_IsInParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSessionUtils_IsInParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSessionUtils_IsInParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSessionUtils_IsInParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineSessionUtils_IsInSession_Statics
	{
		struct SBZOnlineSessionUtils_eventIsInSession_Parms
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
	void Z_Construct_UFunction_USBZOnlineSessionUtils_IsInSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineSessionUtils_eventIsInSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineSessionUtils_IsInSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineSessionUtils_eventIsInSession_Parms), &Z_Construct_UFunction_USBZOnlineSessionUtils_IsInSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSessionUtils_IsInSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSessionUtils_IsInSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSessionUtils_IsInSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSessionUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSessionUtils_IsInSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSessionUtils, nullptr, "IsInSession", nullptr, nullptr, sizeof(SBZOnlineSessionUtils_eventIsInSession_Parms), Z_Construct_UFunction_USBZOnlineSessionUtils_IsInSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSessionUtils_IsInSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSessionUtils_IsInSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSessionUtils_IsInSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSessionUtils_IsInSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSessionUtils_IsInSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyClient_Statics
	{
		struct SBZOnlineSessionUtils_eventIsLobbyClient_Parms
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
	void Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineSessionUtils_eventIsLobbyClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineSessionUtils_eventIsLobbyClient_Parms), &Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSessionUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSessionUtils, nullptr, "IsLobbyClient", nullptr, nullptr, sizeof(SBZOnlineSessionUtils_eventIsLobbyClient_Parms), Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyHost_Statics
	{
		struct SBZOnlineSessionUtils_eventIsLobbyHost_Parms
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
	void Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyHost_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineSessionUtils_eventIsLobbyHost_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyHost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineSessionUtils_eventIsLobbyHost_Parms), &Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyHost_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyHost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSessionUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSessionUtils, nullptr, "IsLobbyHost", nullptr, nullptr, sizeof(SBZOnlineSessionUtils_eventIsLobbyHost_Parms), Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyClient_Statics
	{
		struct SBZOnlineSessionUtils_eventIsPartyClient_Parms
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
	void Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineSessionUtils_eventIsPartyClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineSessionUtils_eventIsPartyClient_Parms), &Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSessionUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSessionUtils, nullptr, "IsPartyClient", nullptr, nullptr, sizeof(SBZOnlineSessionUtils_eventIsPartyClient_Parms), Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyOwner_Statics
	{
		struct SBZOnlineSessionUtils_eventIsPartyOwner_Parms
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
	void Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineSessionUtils_eventIsPartyOwner_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineSessionUtils_eventIsPartyOwner_Parms), &Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSessionUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSessionUtils, nullptr, "IsPartyOwner", nullptr, nullptr, sizeof(SBZOnlineSessionUtils_eventIsPartyOwner_Parms), Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZOnlineSessionUtils_NoRegister()
	{
		return USBZOnlineSessionUtils::StaticClass();
	}
	struct Z_Construct_UClass_USBZOnlineSessionUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Party_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Party;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Lobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZOnlineSessionUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZOnlineSessionUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseClient, "IsActionPhaseClient" }, // 625206830
		{ &Z_Construct_UFunction_USBZOnlineSessionUtils_IsActionPhaseHost, "IsActionPhaseHost" }, // 3536883526
		{ &Z_Construct_UFunction_USBZOnlineSessionUtils_IsInParty, "IsInParty" }, // 916865990
		{ &Z_Construct_UFunction_USBZOnlineSessionUtils_IsInSession, "IsInSession" }, // 2108037531
		{ &Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyClient, "IsLobbyClient" }, // 4028951701
		{ &Z_Construct_UFunction_USBZOnlineSessionUtils_IsLobbyHost, "IsLobbyHost" }, // 3375641719
		{ &Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyClient, "IsPartyClient" }, // 1804680380
		{ &Z_Construct_UFunction_USBZOnlineSessionUtils_IsPartyOwner, "IsPartyOwner" }, // 3894340223
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionUtils_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZOnlineSessionUtils.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionUtils.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionUtils_Statics::NewProp_Party_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionUtils" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSessionUtils_Statics::NewProp_Party = { "Party", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSessionUtils, Party), Z_Construct_UClass_USBZPartyManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionUtils_Statics::NewProp_Party_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionUtils_Statics::NewProp_Party_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionUtils_Statics::NewProp_Lobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionUtils" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSessionUtils_Statics::NewProp_Lobby = { "Lobby", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSessionUtils, Lobby), Z_Construct_UClass_USBZLobby_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionUtils_Statics::NewProp_Lobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionUtils_Statics::NewProp_Lobby_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZOnlineSessionUtils_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSessionUtils_Statics::NewProp_Party,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSessionUtils_Statics::NewProp_Lobby,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZOnlineSessionUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZOnlineSessionUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZOnlineSessionUtils_Statics::ClassParams = {
		&USBZOnlineSessionUtils::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZOnlineSessionUtils_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionUtils_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZOnlineSessionUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZOnlineSessionUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZOnlineSessionUtils, 1447973858);
	template<> STARBREEZE_API UClass* StaticClass<USBZOnlineSessionUtils>()
	{
		return USBZOnlineSessionUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZOnlineSessionUtils(Z_Construct_UClass_USBZOnlineSessionUtils, &USBZOnlineSessionUtils::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZOnlineSessionUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZOnlineSessionUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
