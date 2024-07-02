// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnlineSessionRequestHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnlineSessionRequestHandler() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSessionRequestHandler_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSessionRequestHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EOnlineSessionInfo();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLobby_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZParty_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSessionUtils_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSession_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZOnlineSessionRequestHandler::execGetSessionInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOnlineSessionInfo*)Z_Param__Result=P_THIS->GetSessionInfo();
		P_NATIVE_END;
	}
	void USBZOnlineSessionRequestHandler::StaticRegisterNativesUSBZOnlineSessionRequestHandler()
	{
		UClass* Class = USBZOnlineSessionRequestHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSessionInfo", &USBZOnlineSessionRequestHandler::execGetSessionInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZOnlineSessionRequestHandler_GetSessionInfo_Statics
	{
		struct SBZOnlineSessionRequestHandler_eventGetSessionInfo_Parms
		{
			EOnlineSessionInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineSessionRequestHandler_GetSessionInfo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZOnlineSessionRequestHandler_GetSessionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSessionRequestHandler_eventGetSessionInfo_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_EOnlineSessionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSessionRequestHandler_GetSessionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSessionRequestHandler_GetSessionInfo_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSessionRequestHandler_GetSessionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSessionRequestHandler_GetSessionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSessionRequestHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSessionRequestHandler_GetSessionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSessionRequestHandler, nullptr, "GetSessionInfo", nullptr, nullptr, sizeof(SBZOnlineSessionRequestHandler_eventGetSessionInfo_Parms), Z_Construct_UFunction_USBZOnlineSessionRequestHandler_GetSessionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSessionRequestHandler_GetSessionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSessionRequestHandler_GetSessionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSessionRequestHandler_GetSessionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSessionRequestHandler_GetSessionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSessionRequestHandler_GetSessionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZOnlineSessionRequestHandler_NoRegister()
	{
		return USBZOnlineSessionRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Lobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Party_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Party;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SBZOnlineSessionUtils_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SBZOnlineSessionUtils;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionRequestTimeoutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SessionRequestTimeoutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SBZOnlineSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SBZOnlineSession;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZOnlineSessionRequestHandler_GetSessionInfo, "GetSessionInfo" }, // 3657772580
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZOnlineSessionRequestHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionRequestHandler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_Lobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionRequestHandler" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionRequestHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_Lobby = { "Lobby", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSessionRequestHandler, Lobby), Z_Construct_UClass_USBZLobby_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_Lobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_Lobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_Party_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionRequestHandler" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionRequestHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_Party = { "Party", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSessionRequestHandler, Party), Z_Construct_UClass_USBZParty_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_Party_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_Party_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_SBZOnlineSessionUtils_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionRequestHandler" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionRequestHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_SBZOnlineSessionUtils = { "SBZOnlineSessionUtils", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSessionRequestHandler, SBZOnlineSessionUtils), Z_Construct_UClass_USBZOnlineSessionUtils_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_SBZOnlineSessionUtils_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_SBZOnlineSessionUtils_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_SessionRequestTimeoutDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionRequestHandler" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionRequestHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_SessionRequestTimeoutDuration = { "SessionRequestTimeoutDuration", nullptr, (EPropertyFlags)0x0040000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSessionRequestHandler, SessionRequestTimeoutDuration), METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_SessionRequestTimeoutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_SessionRequestTimeoutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_SBZOnlineSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionRequestHandler" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionRequestHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_SBZOnlineSession = { "SBZOnlineSession", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSessionRequestHandler, SBZOnlineSession), Z_Construct_UClass_USBZOnlineSession_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_SBZOnlineSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_SBZOnlineSession_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_Lobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_Party,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_SBZOnlineSessionUtils,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_SessionRequestTimeoutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::NewProp_SBZOnlineSession,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZOnlineSessionRequestHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::ClassParams = {
		&USBZOnlineSessionRequestHandler::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZOnlineSessionRequestHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZOnlineSessionRequestHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZOnlineSessionRequestHandler, 2045933305);
	template<> STARBREEZE_API UClass* StaticClass<USBZOnlineSessionRequestHandler>()
	{
		return USBZOnlineSessionRequestHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZOnlineSessionRequestHandler(Z_Construct_UClass_USBZOnlineSessionRequestHandler, &USBZOnlineSessionRequestHandler::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZOnlineSessionRequestHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZOnlineSessionRequestHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
