// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_TacticalMoveTo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_TacticalMoveTo() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_TacticalMoveTo();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquadOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_Order_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
// End Cross Module References
	void USBZAIOrder_TacticalMoveTo::StaticRegisterNativesUSBZAIOrder_TacticalMoveTo()
	{
	}
	UClass* Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_NoRegister()
	{
		return USBZAIOrder_TacticalMoveTo::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InjectTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InjectTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Behaviors_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Behaviors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrioTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrioTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrioTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreStateActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PreStateActions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrioQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrioQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrioQueue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrioWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrioWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetConnector_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TargetConnector;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompletedMembers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CompletedMembers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetEQSQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetEQSQuery;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbortedPawns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbortedPawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbortedPawns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumTargetRoomPathFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxNumTargetRoomPathFailed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAISquadOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_TacticalMoveTo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_TacticalMoveTo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_InjectTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_TacticalMoveTo" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_TacticalMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_InjectTag = { "InjectTag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_TacticalMoveTo, InjectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_InjectTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_InjectTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_Behaviors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_TacticalMoveTo" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_TacticalMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_Behaviors = { "Behaviors", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Behaviors, USBZAIOrder_TacticalMoveTo), STRUCT_OFFSET(USBZAIOrder_TacticalMoveTo, Behaviors), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_Behaviors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_Behaviors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioTypes_Inner = { "PrioTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_TacticalMoveTo" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_TacticalMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioTypes = { "PrioTypes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_TacticalMoveTo, PrioTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PreStateActions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_TacticalMoveTo" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_TacticalMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PreStateActions = { "PreStateActions", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(PreStateActions, USBZAIOrder_TacticalMoveTo), STRUCT_OFFSET(USBZAIOrder_TacticalMoveTo, PreStateActions), Z_Construct_UClass_USBZAIAction_Order_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PreStateActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PreStateActions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioQueue_Inner = { "PrioQueue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioQueue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_TacticalMoveTo" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_TacticalMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioQueue = { "PrioQueue", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_TacticalMoveTo, PrioQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioQueue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_TacticalMoveTo" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_TacticalMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioWaitTime = { "PrioWaitTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_TacticalMoveTo, PrioWaitTime), METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_TargetRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_TacticalMoveTo" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_TacticalMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_TargetRoom = { "TargetRoom", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_TacticalMoveTo, TargetRoom), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_TargetRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_TargetRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_TargetConnector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_TacticalMoveTo" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_TacticalMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_TargetConnector = { "TargetConnector", nullptr, (EPropertyFlags)0x0024080000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_TacticalMoveTo, TargetConnector), Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_TargetConnector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_TargetConnector_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_CompletedMembers_Inner = { "CompletedMembers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_CompletedMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_TacticalMoveTo" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_TacticalMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_CompletedMembers = { "CompletedMembers", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_TacticalMoveTo, CompletedMembers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_CompletedMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_CompletedMembers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_TargetEQSQuery_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_TacticalMoveTo" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_TacticalMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_TargetEQSQuery = { "TargetEQSQuery", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_TacticalMoveTo, TargetEQSQuery), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_TargetEQSQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_TargetEQSQuery_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_AbortedPawns_Inner = { "AbortedPawns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_AbortedPawns_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_TacticalMoveTo" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_TacticalMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_AbortedPawns = { "AbortedPawns", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_TacticalMoveTo, AbortedPawns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_AbortedPawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_AbortedPawns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_MaxNumTargetRoomPathFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_TacticalMoveTo" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_TacticalMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_MaxNumTargetRoomPathFailed = { "MaxNumTargetRoomPathFailed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_TacticalMoveTo, MaxNumTargetRoomPathFailed), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_MaxNumTargetRoomPathFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_MaxNumTargetRoomPathFailed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_InjectTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_Behaviors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PreStateActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_PrioWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_TargetRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_TargetConnector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_CompletedMembers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_CompletedMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_TargetEQSQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_AbortedPawns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_AbortedPawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::NewProp_MaxNumTargetRoomPathFailed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_TacticalMoveTo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::ClassParams = {
		&USBZAIOrder_TacticalMoveTo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_TacticalMoveTo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_TacticalMoveTo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_TacticalMoveTo, 2552107434);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_TacticalMoveTo>()
	{
		return USBZAIOrder_TacticalMoveTo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_TacticalMoveTo(Z_Construct_UClass_USBZAIOrder_TacticalMoveTo, &USBZAIOrder_TacticalMoveTo::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_TacticalMoveTo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_TacticalMoveTo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
