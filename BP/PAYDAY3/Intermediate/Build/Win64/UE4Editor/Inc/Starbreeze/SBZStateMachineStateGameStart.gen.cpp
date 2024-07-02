// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateGameStart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateGameStart() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateGameStart_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateGameStart();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineCode();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadingScreen_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateGameStart::execHandleLostConnectionToPartyHost)
	{
		P_GET_ENUM(ESBZOnlineCode,Z_Param_ErrorCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLostConnectionToPartyHost(ESBZOnlineCode(Z_Param_ErrorCode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateGameStart::execSessionJoined)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SessionJoined(Z_Param_InWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateGameStart::execSessionJoinStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SessionJoinStarted();
		P_NATIVE_END;
	}
	void USBZStateMachineStateGameStart::StaticRegisterNativesUSBZStateMachineStateGameStart()
	{
		UClass* Class = USBZStateMachineStateGameStart::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleLostConnectionToPartyHost", &USBZStateMachineStateGameStart::execHandleLostConnectionToPartyHost },
			{ "SessionJoined", &USBZStateMachineStateGameStart::execSessionJoined },
			{ "SessionJoinStarted", &USBZStateMachineStateGameStart::execSessionJoinStarted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateGameStart_HandleLostConnectionToPartyHost_Statics
	{
		struct SBZStateMachineStateGameStart_eventHandleLostConnectionToPartyHost_Parms
		{
			ESBZOnlineCode ErrorCode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ErrorCode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZStateMachineStateGameStart_HandleLostConnectionToPartyHost_Statics::NewProp_ErrorCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZStateMachineStateGameStart_HandleLostConnectionToPartyHost_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateGameStart_eventHandleLostConnectionToPartyHost_Parms, ErrorCode), Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateGameStart_HandleLostConnectionToPartyHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateGameStart_HandleLostConnectionToPartyHost_Statics::NewProp_ErrorCode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateGameStart_HandleLostConnectionToPartyHost_Statics::NewProp_ErrorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateGameStart_HandleLostConnectionToPartyHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateGameStart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateGameStart_HandleLostConnectionToPartyHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateGameStart, nullptr, "HandleLostConnectionToPartyHost", nullptr, nullptr, sizeof(SBZStateMachineStateGameStart_eventHandleLostConnectionToPartyHost_Parms), Z_Construct_UFunction_USBZStateMachineStateGameStart_HandleLostConnectionToPartyHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateGameStart_HandleLostConnectionToPartyHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateGameStart_HandleLostConnectionToPartyHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateGameStart_HandleLostConnectionToPartyHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateGameStart_HandleLostConnectionToPartyHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateGameStart_HandleLostConnectionToPartyHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoined_Statics
	{
		struct SBZStateMachineStateGameStart_eventSessionJoined_Parms
		{
			UWorld* InWorld;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoined_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateGameStart_eventSessionJoined_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoined_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoined_Statics::NewProp_InWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoined_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateGameStart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoined_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateGameStart, nullptr, "SessionJoined", nullptr, nullptr, sizeof(SBZStateMachineStateGameStart_eventSessionJoined_Parms), Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoined_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoined_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoined_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoined_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoined()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoined_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoinStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoinStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateGameStart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoinStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateGameStart, nullptr, "SessionJoinStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoinStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoinStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoinStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoinStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateGameStart_NoRegister()
	{
		return USBZStateMachineStateGameStart::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateGameStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadingScreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateGameStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateGameStart_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateGameStart_HandleLostConnectionToPartyHost, "HandleLostConnectionToPartyHost" }, // 1373926025
		{ &Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoined, "SessionJoined" }, // 3472555443
		{ &Z_Construct_UFunction_USBZStateMachineStateGameStart_SessionJoinStarted, "SessionJoinStarted" }, // 2731847337
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateGameStart_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateGameStart.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateGameStart.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateGameStart_Statics::NewProp_LoadingScreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateGameStart" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateGameStart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateGameStart_Statics::NewProp_LoadingScreen = { "LoadingScreen", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateGameStart, LoadingScreen), Z_Construct_UClass_USBZLoadingScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateGameStart_Statics::NewProp_LoadingScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateGameStart_Statics::NewProp_LoadingScreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateGameStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateGameStart_Statics::NewProp_LoadingScreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateGameStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateGameStart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateGameStart_Statics::ClassParams = {
		&USBZStateMachineStateGameStart::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateGameStart_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateGameStart_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateGameStart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateGameStart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateGameStart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateGameStart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateGameStart, 1306694594);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateGameStart>()
	{
		return USBZStateMachineStateGameStart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateGameStart(Z_Construct_UClass_USBZStateMachineStateGameStart, &USBZStateMachineStateGameStart::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateGameStart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateGameStart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
