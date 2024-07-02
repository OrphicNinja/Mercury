// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZP2PSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZP2PSession() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZP2PSession_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZP2PSession();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnSessionJoined__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnSessionJoinStarted__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZP2PSession::execOnLevelLoaded)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelLoaded(Z_Param_InWorld);
		P_NATIVE_END;
	}
	void USBZP2PSession::StaticRegisterNativesUSBZP2PSession()
	{
		UClass* Class = USBZP2PSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelLoaded", &USBZP2PSession::execOnLevelLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZP2PSession_OnLevelLoaded_Statics
	{
		struct SBZP2PSession_eventOnLevelLoaded_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZP2PSession_OnLevelLoaded_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZP2PSession_eventOnLevelLoaded_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZP2PSession_OnLevelLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZP2PSession_OnLevelLoaded_Statics::NewProp_InWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZP2PSession_OnLevelLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZP2PSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZP2PSession_OnLevelLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZP2PSession, nullptr, "OnLevelLoaded", nullptr, nullptr, sizeof(SBZP2PSession_eventOnLevelLoaded_Parms), Z_Construct_UFunction_USBZP2PSession_OnLevelLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZP2PSession_OnLevelLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZP2PSession_OnLevelLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZP2PSession_OnLevelLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZP2PSession_OnLevelLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZP2PSession_OnLevelLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZP2PSession_NoRegister()
	{
		return USBZP2PSession::StaticClass();
	}
	struct Z_Construct_UClass_USBZP2PSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionJoined_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionJoined;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSessionJoinStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSessionJoinStarted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZP2PSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZP2PSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZP2PSession_OnLevelLoaded, "OnLevelLoaded" }, // 2580989295
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZP2PSession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZP2PSession.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZP2PSession.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZP2PSession_Statics::NewProp_OnSessionJoined_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZP2PSession" },
		{ "ModuleRelativePath", "Public/SBZP2PSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZP2PSession_Statics::NewProp_OnSessionJoined = { "OnSessionJoined", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZP2PSession, OnSessionJoined), Z_Construct_UDelegateFunction_Starbreeze_SBZOnSessionJoined__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZP2PSession_Statics::NewProp_OnSessionJoined_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZP2PSession_Statics::NewProp_OnSessionJoined_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZP2PSession_Statics::NewProp_OnSessionJoinStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZP2PSession" },
		{ "ModuleRelativePath", "Public/SBZP2PSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZP2PSession_Statics::NewProp_OnSessionJoinStarted = { "OnSessionJoinStarted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZP2PSession, OnSessionJoinStarted), Z_Construct_UDelegateFunction_Starbreeze_SBZOnSessionJoinStarted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZP2PSession_Statics::NewProp_OnSessionJoinStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZP2PSession_Statics::NewProp_OnSessionJoinStarted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZP2PSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZP2PSession_Statics::NewProp_OnSessionJoined,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZP2PSession_Statics::NewProp_OnSessionJoinStarted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZP2PSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZP2PSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZP2PSession_Statics::ClassParams = {
		&USBZP2PSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZP2PSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZP2PSession_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZP2PSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZP2PSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZP2PSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZP2PSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZP2PSession, 2543146385);
	template<> STARBREEZE_API UClass* StaticClass<USBZP2PSession>()
	{
		return USBZP2PSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZP2PSession(Z_Construct_UClass_USBZP2PSession, &USBZP2PSession::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZP2PSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZP2PSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
