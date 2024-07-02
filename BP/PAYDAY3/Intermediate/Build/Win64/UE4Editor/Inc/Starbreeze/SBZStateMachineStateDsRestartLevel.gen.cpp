// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateDsRestartLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateDsRestartLevel() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateDsRestartLevel();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDsStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPreplanningAsset();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateDsRestartLevel::execOnClientStartSeamlessTravel)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClientStartSeamlessTravel(Z_Param_Out_PlayerId);
		P_NATIVE_END;
	}
	void USBZStateMachineStateDsRestartLevel::StaticRegisterNativesUSBZStateMachineStateDsRestartLevel()
	{
		UClass* Class = USBZStateMachineStateDsRestartLevel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClientStartSeamlessTravel", &USBZStateMachineStateDsRestartLevel::execOnClientStartSeamlessTravel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateDsRestartLevel_OnClientStartSeamlessTravel_Statics
	{
		struct SBZStateMachineStateDsRestartLevel_eventOnClientStartSeamlessTravel_Parms
		{
			FUniqueNetIdRepl PlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsRestartLevel_OnClientStartSeamlessTravel_Statics::NewProp_PlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZStateMachineStateDsRestartLevel_OnClientStartSeamlessTravel_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateDsRestartLevel_eventOnClientStartSeamlessTravel_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsRestartLevel_OnClientStartSeamlessTravel_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsRestartLevel_OnClientStartSeamlessTravel_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateDsRestartLevel_OnClientStartSeamlessTravel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateDsRestartLevel_OnClientStartSeamlessTravel_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateDsRestartLevel_OnClientStartSeamlessTravel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsRestartLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateDsRestartLevel_OnClientStartSeamlessTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateDsRestartLevel, nullptr, "OnClientStartSeamlessTravel", nullptr, nullptr, sizeof(SBZStateMachineStateDsRestartLevel_eventOnClientStartSeamlessTravel_Parms), Z_Construct_UFunction_USBZStateMachineStateDsRestartLevel_OnClientStartSeamlessTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsRestartLevel_OnClientStartSeamlessTravel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateDsRestartLevel_OnClientStartSeamlessTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateDsRestartLevel_OnClientStartSeamlessTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateDsRestartLevel_OnClientStartSeamlessTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateDsRestartLevel_OnClientStartSeamlessTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_NoRegister()
	{
		return USBZStateMachineStateDsRestartLevel::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreplanningAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreplanningAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreplanningAssets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDsStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateDsRestartLevel_OnClientStartSeamlessTravel, "OnClientStartSeamlessTravel" }, // 4264826446
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateDsRestartLevel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsRestartLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics::NewProp_PreplanningAssets_Inner = { "PreplanningAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPreplanningAsset, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics::NewProp_PreplanningAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateDsRestartLevel" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateDsRestartLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics::NewProp_PreplanningAssets = { "PreplanningAssets", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateDsRestartLevel, PreplanningAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics::NewProp_PreplanningAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics::NewProp_PreplanningAssets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics::NewProp_PreplanningAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics::NewProp_PreplanningAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateDsRestartLevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics::ClassParams = {
		&USBZStateMachineStateDsRestartLevel::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateDsRestartLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateDsRestartLevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateDsRestartLevel, 2096761751);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateDsRestartLevel>()
	{
		return USBZStateMachineStateDsRestartLevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateDsRestartLevel(Z_Construct_UClass_USBZStateMachineStateDsRestartLevel, &USBZStateMachineStateDsRestartLevel::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateDsRestartLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateDsRestartLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
