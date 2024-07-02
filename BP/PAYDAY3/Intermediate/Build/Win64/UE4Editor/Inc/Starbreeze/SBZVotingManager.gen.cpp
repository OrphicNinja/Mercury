// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVotingManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVotingManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVotingManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVotingManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZVotingReplicatedProxy_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoteFactory_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVote_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZVotingManager::execHandlePlayableLevelInitialized)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayableLevelInitialized(Z_Param_World);
		P_NATIVE_END;
	}
	void USBZVotingManager::StaticRegisterNativesUSBZVotingManager()
	{
		UClass* Class = USBZVotingManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandlePlayableLevelInitialized", &USBZVotingManager::execHandlePlayableLevelInitialized },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZVotingManager_HandlePlayableLevelInitialized_Statics
	{
		struct SBZVotingManager_eventHandlePlayableLevelInitialized_Parms
		{
			UWorld* World;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVotingManager_HandlePlayableLevelInitialized_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVotingManager_eventHandlePlayableLevelInitialized_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVotingManager_HandlePlayableLevelInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVotingManager_HandlePlayableLevelInitialized_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVotingManager_HandlePlayableLevelInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVotingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVotingManager_HandlePlayableLevelInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVotingManager, nullptr, "HandlePlayableLevelInitialized", nullptr, nullptr, sizeof(SBZVotingManager_eventHandlePlayableLevelInitialized_Parms), Z_Construct_UFunction_USBZVotingManager_HandlePlayableLevelInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVotingManager_HandlePlayableLevelInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVotingManager_HandlePlayableLevelInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVotingManager_HandlePlayableLevelInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVotingManager_HandlePlayableLevelInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVotingManager_HandlePlayableLevelInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZVotingManager_NoRegister()
	{
		return USBZVotingManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZVotingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedProxy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicatedProxy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoteFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoteFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVote_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentVote;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVotingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZVotingManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZVotingManager_HandlePlayableLevelInitialized, "HandlePlayableLevelInitialized" }, // 809928759
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVotingManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZVotingManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVotingManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVotingManager_Statics::NewProp_ReplicatedProxy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVotingManager" },
		{ "ModuleRelativePath", "Public/SBZVotingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVotingManager_Statics::NewProp_ReplicatedProxy = { "ReplicatedProxy", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVotingManager, ReplicatedProxy), Z_Construct_UClass_ASBZVotingReplicatedProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVotingManager_Statics::NewProp_ReplicatedProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVotingManager_Statics::NewProp_ReplicatedProxy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVotingManager_Statics::NewProp_VoteFactory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVotingManager" },
		{ "ModuleRelativePath", "Public/SBZVotingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVotingManager_Statics::NewProp_VoteFactory = { "VoteFactory", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVotingManager, VoteFactory), Z_Construct_UClass_USBZVoteFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVotingManager_Statics::NewProp_VoteFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVotingManager_Statics::NewProp_VoteFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVotingManager_Statics::NewProp_CurrentVote_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVotingManager" },
		{ "ModuleRelativePath", "Public/SBZVotingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVotingManager_Statics::NewProp_CurrentVote = { "CurrentVote", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVotingManager, CurrentVote), Z_Construct_UClass_USBZVote_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVotingManager_Statics::NewProp_CurrentVote_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVotingManager_Statics::NewProp_CurrentVote_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZVotingManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVotingManager_Statics::NewProp_ReplicatedProxy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVotingManager_Statics::NewProp_VoteFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVotingManager_Statics::NewProp_CurrentVote,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVotingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVotingManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVotingManager_Statics::ClassParams = {
		&USBZVotingManager::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZVotingManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZVotingManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVotingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVotingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVotingManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVotingManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVotingManager, 3032897384);
	template<> STARBREEZE_API UClass* StaticClass<USBZVotingManager>()
	{
		return USBZVotingManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVotingManager(Z_Construct_UClass_USBZVotingManager, &USBZVotingManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVotingManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVotingManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
