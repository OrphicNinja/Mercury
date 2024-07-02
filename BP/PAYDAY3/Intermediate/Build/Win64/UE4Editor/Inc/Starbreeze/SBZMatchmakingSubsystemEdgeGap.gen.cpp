// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMatchmakingSubsystemEdgeGap.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMatchmakingSubsystemEdgeGap() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZMatchmakingSubsystemEdgeGap::execCancelMatchmaking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CancelMatchmaking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMatchmakingSubsystemEdgeGap::execStartMatchmaking)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Map);
		P_GET_PROPERTY(FStrProperty,Z_Param_DifficultyIdx);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartMatchmaking(Z_Param_Map,Z_Param_DifficultyIdx);
		P_NATIVE_END;
	}
	void USBZMatchmakingSubsystemEdgeGap::StaticRegisterNativesUSBZMatchmakingSubsystemEdgeGap()
	{
		UClass* Class = USBZMatchmakingSubsystemEdgeGap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelMatchmaking", &USBZMatchmakingSubsystemEdgeGap::execCancelMatchmaking },
			{ "StartMatchmaking", &USBZMatchmakingSubsystemEdgeGap::execStartMatchmaking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_CancelMatchmaking_Statics
	{
		struct SBZMatchmakingSubsystemEdgeGap_eventCancelMatchmaking_Parms
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
	void Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_CancelMatchmaking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMatchmakingSubsystemEdgeGap_eventCancelMatchmaking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_CancelMatchmaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMatchmakingSubsystemEdgeGap_eventCancelMatchmaking_Parms), &Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_CancelMatchmaking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_CancelMatchmaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_CancelMatchmaking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_CancelMatchmaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMatchmakingSubsystemEdgeGap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_CancelMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap, nullptr, "CancelMatchmaking", nullptr, nullptr, sizeof(SBZMatchmakingSubsystemEdgeGap_eventCancelMatchmaking_Parms), Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_CancelMatchmaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_CancelMatchmaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_CancelMatchmaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_CancelMatchmaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_CancelMatchmaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_CancelMatchmaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics
	{
		struct SBZMatchmakingSubsystemEdgeGap_eventStartMatchmaking_Parms
		{
			FString Map;
			FString DifficultyIdx;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Map;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultyIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DifficultyIdx;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::NewProp_Map_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMatchmakingSubsystemEdgeGap_eventStartMatchmaking_Parms, Map), METADATA_PARAMS(Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::NewProp_Map_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::NewProp_DifficultyIdx_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::NewProp_DifficultyIdx = { "DifficultyIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMatchmakingSubsystemEdgeGap_eventStartMatchmaking_Parms, DifficultyIdx), METADATA_PARAMS(Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::NewProp_DifficultyIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::NewProp_DifficultyIdx_MetaData)) };
	void Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMatchmakingSubsystemEdgeGap_eventStartMatchmaking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMatchmakingSubsystemEdgeGap_eventStartMatchmaking_Parms), &Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::NewProp_DifficultyIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMatchmakingSubsystemEdgeGap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap, nullptr, "StartMatchmaking", nullptr, nullptr, sizeof(SBZMatchmakingSubsystemEdgeGap_eventStartMatchmaking_Parms), Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_NoRegister()
	{
		return USBZMatchmakingSubsystemEdgeGap::StaticClass();
	}
	struct Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInQueue_MetaData[];
#endif
		static void NewProp_bInQueue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInQueue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchmakerURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchmakerURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchmakerAPIToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchmakerAPIToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_CancelMatchmaking, "CancelMatchmaking" }, // 3829727920
		{ &Z_Construct_UFunction_USBZMatchmakingSubsystemEdgeGap_StartMatchmaking, "StartMatchmaking" }, // 2438209379
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMatchmakingSubsystemEdgeGap.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMatchmakingSubsystemEdgeGap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::NewProp_bInQueue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMatchmakingSubsystemEdgeGap" },
		{ "ModuleRelativePath", "Public/SBZMatchmakingSubsystemEdgeGap.h" },
	};
#endif
	void Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::NewProp_bInQueue_SetBit(void* Obj)
	{
		((USBZMatchmakingSubsystemEdgeGap*)Obj)->bInQueue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::NewProp_bInQueue = { "bInQueue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMatchmakingSubsystemEdgeGap), &Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::NewProp_bInQueue_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::NewProp_bInQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::NewProp_bInQueue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::NewProp_MatchmakerURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMatchmakingSubsystemEdgeGap" },
		{ "ModuleRelativePath", "Public/SBZMatchmakingSubsystemEdgeGap.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::NewProp_MatchmakerURL = { "MatchmakerURL", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMatchmakingSubsystemEdgeGap, MatchmakerURL), METADATA_PARAMS(Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::NewProp_MatchmakerURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::NewProp_MatchmakerURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::NewProp_MatchmakerAPIToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMatchmakingSubsystemEdgeGap" },
		{ "ModuleRelativePath", "Public/SBZMatchmakingSubsystemEdgeGap.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::NewProp_MatchmakerAPIToken = { "MatchmakerAPIToken", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMatchmakingSubsystemEdgeGap, MatchmakerAPIToken), METADATA_PARAMS(Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::NewProp_MatchmakerAPIToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::NewProp_MatchmakerAPIToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::NewProp_bInQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::NewProp_MatchmakerURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::NewProp_MatchmakerAPIToken,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMatchmakingSubsystemEdgeGap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::ClassParams = {
		&USBZMatchmakingSubsystemEdgeGap::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMatchmakingSubsystemEdgeGap, 2835927827);
	template<> STARBREEZE_API UClass* StaticClass<USBZMatchmakingSubsystemEdgeGap>()
	{
		return USBZMatchmakingSubsystemEdgeGap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMatchmakingSubsystemEdgeGap(Z_Construct_UClass_USBZMatchmakingSubsystemEdgeGap, &USBZMatchmakingSubsystemEdgeGap::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMatchmakingSubsystemEdgeGap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMatchmakingSubsystemEdgeGap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
