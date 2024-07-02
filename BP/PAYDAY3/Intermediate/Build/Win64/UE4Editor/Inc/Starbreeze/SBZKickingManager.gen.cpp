// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZKickingManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZKickingManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZKickingManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZKickingManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZKickingMode();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZKickingInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnKickInfoChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnKickFailed__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnClientWasKicked__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZKickingManager::execKickPlayer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerIdToKick);
		P_GET_ENUM(ESBZKickingMode,Z_Param_ModeKick);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZKickingManager::KickPlayer(Z_Param_WorldContextObject,Z_Param_PlayerIdToKick,ESBZKickingMode(Z_Param_ModeKick));
		P_NATIVE_END;
	}
	void USBZKickingManager::StaticRegisterNativesUSBZKickingManager()
	{
		UClass* Class = USBZKickingManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "KickPlayer", &USBZKickingManager::execKickPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics
	{
		struct SBZKickingManager_eventKickPlayer_Parms
		{
			const UObject* WorldContextObject;
			FUniqueNetIdRepl PlayerIdToKick;
			ESBZKickingMode ModeKick;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerIdToKick;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModeKick_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModeKick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKickingManager_eventKickPlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::NewProp_PlayerIdToKick = { "PlayerIdToKick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKickingManager_eventKickPlayer_Parms, PlayerIdToKick), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::NewProp_ModeKick_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::NewProp_ModeKick = { "ModeKick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZKickingManager_eventKickPlayer_Parms, ModeKick), Z_Construct_UEnum_Starbreeze_ESBZKickingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::NewProp_PlayerIdToKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::NewProp_ModeKick_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::NewProp_ModeKick,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZKickingManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZKickingManager, nullptr, "KickPlayer", nullptr, nullptr, sizeof(SBZKickingManager_eventKickPlayer_Parms), Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZKickingManager_KickPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZKickingManager_KickPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZKickingManager_NoRegister()
	{
		return USBZKickingManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZKickingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentKickingInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentKickingInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecentlyAttemptedKicks_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecentlyAttemptedKicks_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecentlyAttemptedKicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RecentlyAttemptedKicks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKickInfoChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKickInfoChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKickFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKickFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClientWasKicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClientWasKicked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToKick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToKick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToBeKickedAgainOnFailedKick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToBeKickedAgainOnFailedKick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasClientRecentlyKicked_MetaData[];
#endif
		static void NewProp_bWasClientRecentlyKicked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasClientRecentlyKicked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZKickingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZKickingManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZKickingManager_KickPlayer, "KickPlayer" }, // 1507066050
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZKickingManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZKickingManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZKickingManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZKickingManager_Statics::NewProp_CurrentKickingInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingManager" },
		{ "ModuleRelativePath", "Public/SBZKickingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZKickingManager_Statics::NewProp_CurrentKickingInfo = { "CurrentKickingInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZKickingManager, CurrentKickingInfo), Z_Construct_UScriptStruct_FSBZKickingInfo, METADATA_PARAMS(Z_Construct_UClass_USBZKickingManager_Statics::NewProp_CurrentKickingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZKickingManager_Statics::NewProp_CurrentKickingInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZKickingManager_Statics::NewProp_RecentlyAttemptedKicks_ValueProp = { "RecentlyAttemptedKicks", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZKickingManager_Statics::NewProp_RecentlyAttemptedKicks_Key_KeyProp = { "RecentlyAttemptedKicks_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZKickingManager_Statics::NewProp_RecentlyAttemptedKicks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingManager" },
		{ "ModuleRelativePath", "Public/SBZKickingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZKickingManager_Statics::NewProp_RecentlyAttemptedKicks = { "RecentlyAttemptedKicks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZKickingManager, RecentlyAttemptedKicks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZKickingManager_Statics::NewProp_RecentlyAttemptedKicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZKickingManager_Statics::NewProp_RecentlyAttemptedKicks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZKickingManager_Statics::NewProp_OnKickInfoChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingManager" },
		{ "ModuleRelativePath", "Public/SBZKickingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZKickingManager_Statics::NewProp_OnKickInfoChanged = { "OnKickInfoChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZKickingManager, OnKickInfoChanged), Z_Construct_UDelegateFunction_Starbreeze_OnKickInfoChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZKickingManager_Statics::NewProp_OnKickInfoChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZKickingManager_Statics::NewProp_OnKickInfoChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZKickingManager_Statics::NewProp_OnKickFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingManager" },
		{ "ModuleRelativePath", "Public/SBZKickingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZKickingManager_Statics::NewProp_OnKickFailed = { "OnKickFailed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZKickingManager, OnKickFailed), Z_Construct_UDelegateFunction_Starbreeze_OnKickFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZKickingManager_Statics::NewProp_OnKickFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZKickingManager_Statics::NewProp_OnKickFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZKickingManager_Statics::NewProp_OnClientWasKicked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingManager" },
		{ "ModuleRelativePath", "Public/SBZKickingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZKickingManager_Statics::NewProp_OnClientWasKicked = { "OnClientWasKicked", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZKickingManager, OnClientWasKicked), Z_Construct_UDelegateFunction_Starbreeze_OnClientWasKicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZKickingManager_Statics::NewProp_OnClientWasKicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZKickingManager_Statics::NewProp_OnClientWasKicked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZKickingManager_Statics::NewProp_TimeToKick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingManager" },
		{ "ModuleRelativePath", "Public/SBZKickingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZKickingManager_Statics::NewProp_TimeToKick = { "TimeToKick", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZKickingManager, TimeToKick), METADATA_PARAMS(Z_Construct_UClass_USBZKickingManager_Statics::NewProp_TimeToKick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZKickingManager_Statics::NewProp_TimeToKick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZKickingManager_Statics::NewProp_TimeToBeKickedAgainOnFailedKick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingManager" },
		{ "ModuleRelativePath", "Public/SBZKickingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZKickingManager_Statics::NewProp_TimeToBeKickedAgainOnFailedKick = { "TimeToBeKickedAgainOnFailedKick", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZKickingManager, TimeToBeKickedAgainOnFailedKick), METADATA_PARAMS(Z_Construct_UClass_USBZKickingManager_Statics::NewProp_TimeToBeKickedAgainOnFailedKick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZKickingManager_Statics::NewProp_TimeToBeKickedAgainOnFailedKick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZKickingManager_Statics::NewProp_bWasClientRecentlyKicked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingManager" },
		{ "ModuleRelativePath", "Public/SBZKickingManager.h" },
	};
#endif
	void Z_Construct_UClass_USBZKickingManager_Statics::NewProp_bWasClientRecentlyKicked_SetBit(void* Obj)
	{
		((USBZKickingManager*)Obj)->bWasClientRecentlyKicked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZKickingManager_Statics::NewProp_bWasClientRecentlyKicked = { "bWasClientRecentlyKicked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZKickingManager), &Z_Construct_UClass_USBZKickingManager_Statics::NewProp_bWasClientRecentlyKicked_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZKickingManager_Statics::NewProp_bWasClientRecentlyKicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZKickingManager_Statics::NewProp_bWasClientRecentlyKicked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZKickingManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZKickingManager_Statics::NewProp_CurrentKickingInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZKickingManager_Statics::NewProp_RecentlyAttemptedKicks_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZKickingManager_Statics::NewProp_RecentlyAttemptedKicks_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZKickingManager_Statics::NewProp_RecentlyAttemptedKicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZKickingManager_Statics::NewProp_OnKickInfoChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZKickingManager_Statics::NewProp_OnKickFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZKickingManager_Statics::NewProp_OnClientWasKicked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZKickingManager_Statics::NewProp_TimeToKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZKickingManager_Statics::NewProp_TimeToBeKickedAgainOnFailedKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZKickingManager_Statics::NewProp_bWasClientRecentlyKicked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZKickingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZKickingManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZKickingManager_Statics::ClassParams = {
		&USBZKickingManager::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZKickingManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZKickingManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZKickingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZKickingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZKickingManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZKickingManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZKickingManager, 154077304);
	template<> STARBREEZE_API UClass* StaticClass<USBZKickingManager>()
	{
		return USBZKickingManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZKickingManager(Z_Construct_UClass_USBZKickingManager, &USBZKickingManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZKickingManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZKickingManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
