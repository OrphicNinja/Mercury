// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnlineSlotsHost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnlineSlotsHost() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSlotsHost_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSlotsHost();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZOnlineSlotsSync_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSession_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZOnlineSlotsHost::execIndividualReadyTimerTimeout)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IndividualReadyTimerTimeout(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	void USBZOnlineSlotsHost::StaticRegisterNativesUSBZOnlineSlotsHost()
	{
		UClass* Class = USBZOnlineSlotsHost::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IndividualReadyTimerTimeout", &USBZOnlineSlotsHost::execIndividualReadyTimerTimeout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZOnlineSlotsHost_IndividualReadyTimerTimeout_Statics
	{
		struct SBZOnlineSlotsHost_eventIndividualReadyTimerTimeout_Parms
		{
			FUniqueNetIdRepl PlayerId;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineSlotsHost_IndividualReadyTimerTimeout_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineSlotsHost_eventIndividualReadyTimerTimeout_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineSlotsHost_IndividualReadyTimerTimeout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineSlotsHost_IndividualReadyTimerTimeout_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineSlotsHost_IndividualReadyTimerTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineSlotsHost_IndividualReadyTimerTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineSlotsHost, nullptr, "IndividualReadyTimerTimeout", nullptr, nullptr, sizeof(SBZOnlineSlotsHost_eventIndividualReadyTimerTimeout_Parms), Z_Construct_UFunction_USBZOnlineSlotsHost_IndividualReadyTimerTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSlotsHost_IndividualReadyTimerTimeout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineSlotsHost_IndividualReadyTimerTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineSlotsHost_IndividualReadyTimerTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineSlotsHost_IndividualReadyTimerTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineSlotsHost_IndividualReadyTimerTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZOnlineSlotsHost_NoRegister()
	{
		return USBZOnlineSlotsHost::StaticClass();
	}
	struct Z_Construct_UClass_USBZOnlineSlotsHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotsSync_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlotsSync;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreMatchReadyTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreMatchReadyTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreTravelTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreTravelTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreMatchLongReadyTimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreMatchLongReadyTimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreMatchShortReadyTimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreMatchShortReadyTimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreTravelTimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreTravelTimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineSession;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZOnlineSlotsHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZOnlineSlotsHost_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZOnlineSlotsHost_IndividualReadyTimerTimeout, "IndividualReadyTimerTimeout" }, // 1500564507
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSlotsHost_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZOnlineSlotsHost.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsHost.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_SlotsSync_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSlotsHost" },
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsHost.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_SlotsSync = { "SlotsSync", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSlotsHost, SlotsSync), Z_Construct_UClass_ASBZOnlineSlotsSync_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_SlotsSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_SlotsSync_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreMatchReadyTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSlotsHost" },
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsHost.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreMatchReadyTimer = { "PreMatchReadyTimer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSlotsHost, PreMatchReadyTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreMatchReadyTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreMatchReadyTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreTravelTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSlotsHost" },
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsHost.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreTravelTimer = { "PreTravelTimer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSlotsHost, PreTravelTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreTravelTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreTravelTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreMatchLongReadyTimeLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSlotsHost" },
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreMatchLongReadyTimeLimit = { "PreMatchLongReadyTimeLimit", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSlotsHost, PreMatchLongReadyTimeLimit), METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreMatchLongReadyTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreMatchLongReadyTimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreMatchShortReadyTimeLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSlotsHost" },
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreMatchShortReadyTimeLimit = { "PreMatchShortReadyTimeLimit", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSlotsHost, PreMatchShortReadyTimeLimit), METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreMatchShortReadyTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreMatchShortReadyTimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreTravelTimeLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSlotsHost" },
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreTravelTimeLimit = { "PreTravelTimeLimit", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSlotsHost, PreTravelTimeLimit), METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreTravelTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreTravelTimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_OnlineSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSlotsHost" },
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsHost.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_OnlineSession = { "OnlineSession", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSlotsHost, OnlineSession), Z_Construct_UClass_USBZOnlineSession_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_OnlineSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_OnlineSession_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZOnlineSlotsHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_SlotsSync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreMatchReadyTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreTravelTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreMatchLongReadyTimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreMatchShortReadyTimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_PreTravelTimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSlotsHost_Statics::NewProp_OnlineSession,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZOnlineSlotsHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZOnlineSlotsHost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZOnlineSlotsHost_Statics::ClassParams = {
		&USBZOnlineSlotsHost::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZOnlineSlotsHost_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSlotsHost_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSlotsHost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSlotsHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZOnlineSlotsHost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZOnlineSlotsHost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZOnlineSlotsHost, 1659251606);
	template<> STARBREEZE_API UClass* StaticClass<USBZOnlineSlotsHost>()
	{
		return USBZOnlineSlotsHost::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZOnlineSlotsHost(Z_Construct_UClass_USBZOnlineSlotsHost, &USBZOnlineSlotsHost::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZOnlineSlotsHost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZOnlineSlotsHost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
