// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateSoloPreMatch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateSoloPreMatch() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateSoloPreMatch();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataMatchmaking_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateSoloPreMatch::execOnActiveLoadoutChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewActiveLoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActiveLoadoutChanged(Z_Param_NewActiveLoadoutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateSoloPreMatch::execOnPlayerReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateSoloPreMatch::execSetPlayerReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPlayerReady();
		P_NATIVE_END;
	}
	void USBZStateMachineStateSoloPreMatch::StaticRegisterNativesUSBZStateMachineStateSoloPreMatch()
	{
		UClass* Class = USBZStateMachineStateSoloPreMatch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActiveLoadoutChanged", &USBZStateMachineStateSoloPreMatch::execOnActiveLoadoutChanged },
			{ "OnPlayerReady", &USBZStateMachineStateSoloPreMatch::execOnPlayerReady },
			{ "SetPlayerReady", &USBZStateMachineStateSoloPreMatch::execSetPlayerReady },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnActiveLoadoutChanged_Statics
	{
		struct SBZStateMachineStateSoloPreMatch_eventOnActiveLoadoutChanged_Parms
		{
			int32 NewActiveLoadoutIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewActiveLoadoutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnActiveLoadoutChanged_Statics::NewProp_NewActiveLoadoutIndex = { "NewActiveLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateSoloPreMatch_eventOnActiveLoadoutChanged_Parms, NewActiveLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnActiveLoadoutChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnActiveLoadoutChanged_Statics::NewProp_NewActiveLoadoutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnActiveLoadoutChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateSoloPreMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnActiveLoadoutChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateSoloPreMatch, nullptr, "OnActiveLoadoutChanged", nullptr, nullptr, sizeof(SBZStateMachineStateSoloPreMatch_eventOnActiveLoadoutChanged_Parms), Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnActiveLoadoutChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnActiveLoadoutChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnActiveLoadoutChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnActiveLoadoutChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnActiveLoadoutChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnActiveLoadoutChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnPlayerReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnPlayerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateSoloPreMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnPlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateSoloPreMatch, nullptr, "OnPlayerReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnPlayerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnPlayerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnPlayerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnPlayerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_SetPlayerReady_Statics
	{
		struct SBZStateMachineStateSoloPreMatch_eventSetPlayerReady_Parms
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
	void Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_SetPlayerReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZStateMachineStateSoloPreMatch_eventSetPlayerReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_SetPlayerReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZStateMachineStateSoloPreMatch_eventSetPlayerReady_Parms), &Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_SetPlayerReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_SetPlayerReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_SetPlayerReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_SetPlayerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateSoloPreMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_SetPlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateSoloPreMatch, nullptr, "SetPlayerReady", nullptr, nullptr, sizeof(SBZStateMachineStateSoloPreMatch_eventSetPlayerReady_Parms), Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_SetPlayerReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_SetPlayerReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_SetPlayerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_SetPlayerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_SetPlayerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_SetPlayerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_NoRegister()
	{
		return USBZStateMachineStateSoloPreMatch::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchmakingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MatchmakingData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnActiveLoadoutChanged, "OnActiveLoadoutChanged" }, // 3553649063
		{ &Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_OnPlayerReady, "OnPlayerReady" }, // 1112323694
		{ &Z_Construct_UFunction_USBZStateMachineStateSoloPreMatch_SetPlayerReady, "SetPlayerReady" }, // 1982452058
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateSoloPreMatch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateSoloPreMatch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_Statics::NewProp_MatchmakingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateSoloPreMatch" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateSoloPreMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_Statics::NewProp_MatchmakingData = { "MatchmakingData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateSoloPreMatch, MatchmakingData), Z_Construct_UClass_USBZStateMachineDataMatchmaking_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_Statics::NewProp_MatchmakingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_Statics::NewProp_MatchmakingData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_Statics::NewProp_MatchmakingData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateSoloPreMatch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_Statics::ClassParams = {
		&USBZStateMachineStateSoloPreMatch::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateSoloPreMatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateSoloPreMatch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateSoloPreMatch, 4004700146);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateSoloPreMatch>()
	{
		return USBZStateMachineStateSoloPreMatch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateSoloPreMatch(Z_Construct_UClass_USBZStateMachineStateSoloPreMatch, &USBZStateMachineStateSoloPreMatch::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateSoloPreMatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateSoloPreMatch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
