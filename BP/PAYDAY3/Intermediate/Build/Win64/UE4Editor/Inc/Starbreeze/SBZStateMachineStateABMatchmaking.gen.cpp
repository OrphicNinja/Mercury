// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateABMatchmaking.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateABMatchmaking() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateABMatchmaking_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateABMatchmaking();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadingScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataMatchmaking_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateABMatchmaking::execHandleBeaconDisconnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleBeaconDisconnect();
		P_NATIVE_END;
	}
	void USBZStateMachineStateABMatchmaking::StaticRegisterNativesUSBZStateMachineStateABMatchmaking()
	{
		UClass* Class = USBZStateMachineStateABMatchmaking::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleBeaconDisconnect", &USBZStateMachineStateABMatchmaking::execHandleBeaconDisconnect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateABMatchmaking_HandleBeaconDisconnect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateABMatchmaking_HandleBeaconDisconnect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateABMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateABMatchmaking_HandleBeaconDisconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateABMatchmaking, nullptr, "HandleBeaconDisconnect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateABMatchmaking_HandleBeaconDisconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateABMatchmaking_HandleBeaconDisconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateABMatchmaking_HandleBeaconDisconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateABMatchmaking_HandleBeaconDisconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateABMatchmaking_NoRegister()
	{
		return USBZStateMachineStateABMatchmaking::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchmakingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MatchmakingData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateABMatchmaking_HandleBeaconDisconnect, "HandleBeaconDisconnect" }, // 314062420
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateABMatchmaking.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateABMatchmaking.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::NewProp_LoadingScreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateABMatchmaking" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateABMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::NewProp_LoadingScreen = { "LoadingScreen", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateABMatchmaking, LoadingScreen), Z_Construct_UClass_USBZLoadingScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::NewProp_LoadingScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::NewProp_LoadingScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::NewProp_MatchmakingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateABMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateABMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::NewProp_MatchmakingData = { "MatchmakingData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateABMatchmaking, MatchmakingData), Z_Construct_UClass_USBZStateMachineDataMatchmaking_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::NewProp_MatchmakingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::NewProp_MatchmakingData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::NewProp_LoadingScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::NewProp_MatchmakingData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateABMatchmaking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::ClassParams = {
		&USBZStateMachineStateABMatchmaking::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateABMatchmaking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateABMatchmaking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateABMatchmaking, 502419764);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateABMatchmaking>()
	{
		return USBZStateMachineStateABMatchmaking::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateABMatchmaking(Z_Construct_UClass_USBZStateMachineStateABMatchmaking, &USBZStateMachineStateABMatchmaking::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateABMatchmaking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateABMatchmaking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
