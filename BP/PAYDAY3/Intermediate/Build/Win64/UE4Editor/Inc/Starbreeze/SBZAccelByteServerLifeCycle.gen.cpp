// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAccelByteServerLifeCycle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAccelByteServerLifeCycle() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteServerLifeCycle_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteServerLifeCycle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDsStateMachine_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteDS_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAccelByteServerLifeCycle::execOnNetDriverTearDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNetDriverTearDown();
		P_NATIVE_END;
	}
	void USBZAccelByteServerLifeCycle::StaticRegisterNativesUSBZAccelByteServerLifeCycle()
	{
		UClass* Class = USBZAccelByteServerLifeCycle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnNetDriverTearDown", &USBZAccelByteServerLifeCycle::execOnNetDriverTearDown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAccelByteServerLifeCycle_OnNetDriverTearDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAccelByteServerLifeCycle_OnNetDriverTearDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAccelByteServerLifeCycle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAccelByteServerLifeCycle_OnNetDriverTearDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAccelByteServerLifeCycle, nullptr, "OnNetDriverTearDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAccelByteServerLifeCycle_OnNetDriverTearDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAccelByteServerLifeCycle_OnNetDriverTearDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAccelByteServerLifeCycle_OnNetDriverTearDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAccelByteServerLifeCycle_OnNetDriverTearDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAccelByteServerLifeCycle_NoRegister()
	{
		return USBZAccelByteServerLifeCycle::StaticClass();
	}
	struct Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateMachine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AccelByteDs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShutdownTimeDsLoading_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShutdownTimeDsLoading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShutdownTimeDsWaitingForPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShutdownTimeDsWaitingForPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShutdownTimeDsWaitingForPlayersShort_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShutdownTimeDsWaitingForPlayersShort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShutdownTimeDsActionPhase_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShutdownTimeDsActionPhase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShutdownTimeDsResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShutdownTimeDsResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAccelByteServerLifeCycle_OnNetDriverTearDown, "OnNetDriverTearDown" }, // 4167223033
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAccelByteServerLifeCycle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAccelByteServerLifeCycle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_StateMachine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteServerLifeCycle" },
		{ "ModuleRelativePath", "Public/SBZAccelByteServerLifeCycle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_StateMachine = { "StateMachine", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteServerLifeCycle, StateMachine), Z_Construct_UClass_USBZDsStateMachine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_StateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_StateMachine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_AccelByteDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteServerLifeCycle" },
		{ "ModuleRelativePath", "Public/SBZAccelByteServerLifeCycle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_AccelByteDs = { "AccelByteDs", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteServerLifeCycle, AccelByteDs), Z_Construct_UClass_USBZAccelByteDS_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_AccelByteDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_AccelByteDs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsLoading_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteServerLifeCycle" },
		{ "ModuleRelativePath", "Public/SBZAccelByteServerLifeCycle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsLoading = { "ShutdownTimeDsLoading", nullptr, (EPropertyFlags)0x0040000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteServerLifeCycle, ShutdownTimeDsLoading), METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsLoading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsLoading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsWaitingForPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteServerLifeCycle" },
		{ "ModuleRelativePath", "Public/SBZAccelByteServerLifeCycle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsWaitingForPlayers = { "ShutdownTimeDsWaitingForPlayers", nullptr, (EPropertyFlags)0x0040000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteServerLifeCycle, ShutdownTimeDsWaitingForPlayers), METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsWaitingForPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsWaitingForPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsWaitingForPlayersShort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteServerLifeCycle" },
		{ "ModuleRelativePath", "Public/SBZAccelByteServerLifeCycle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsWaitingForPlayersShort = { "ShutdownTimeDsWaitingForPlayersShort", nullptr, (EPropertyFlags)0x0040000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteServerLifeCycle, ShutdownTimeDsWaitingForPlayersShort), METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsWaitingForPlayersShort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsWaitingForPlayersShort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsActionPhase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteServerLifeCycle" },
		{ "ModuleRelativePath", "Public/SBZAccelByteServerLifeCycle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsActionPhase = { "ShutdownTimeDsActionPhase", nullptr, (EPropertyFlags)0x0040000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteServerLifeCycle, ShutdownTimeDsActionPhase), METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsActionPhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsActionPhase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteServerLifeCycle" },
		{ "ModuleRelativePath", "Public/SBZAccelByteServerLifeCycle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsResult = { "ShutdownTimeDsResult", nullptr, (EPropertyFlags)0x0040000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteServerLifeCycle, ShutdownTimeDsResult), METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_StateMachine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_AccelByteDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsLoading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsWaitingForPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsWaitingForPlayersShort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsActionPhase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::NewProp_ShutdownTimeDsResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAccelByteServerLifeCycle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::ClassParams = {
		&USBZAccelByteServerLifeCycle::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAccelByteServerLifeCycle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAccelByteServerLifeCycle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAccelByteServerLifeCycle, 753831231);
	template<> STARBREEZE_API UClass* StaticClass<USBZAccelByteServerLifeCycle>()
	{
		return USBZAccelByteServerLifeCycle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAccelByteServerLifeCycle(Z_Construct_UClass_USBZAccelByteServerLifeCycle, &USBZAccelByteServerLifeCycle::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAccelByteServerLifeCycle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAccelByteServerLifeCycle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
