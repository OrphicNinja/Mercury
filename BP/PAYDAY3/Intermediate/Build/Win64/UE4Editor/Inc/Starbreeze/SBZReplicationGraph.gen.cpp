// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplicationGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplicationGraph() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplicationGraph_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplicationGraph();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraph();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplicationGraphNode_PrototypingOnly_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplicationGraphNode_InitialFrameReplication_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZConfigRepClass();
// End Cross Module References
	DEFINE_FUNCTION(USBZReplicationGraph::execOnActorDependencyAdded)
	{
		P_GET_OBJECT(AActor,Z_Param_Master);
		P_GET_OBJECT(AActor,Z_Param_Slave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorDependencyAdded(Z_Param_Master,Z_Param_Slave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZReplicationGraph::execOnActorDependencyRemoved)
	{
		P_GET_OBJECT(AActor,Z_Param_Master);
		P_GET_OBJECT(AActor,Z_Param_Slave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorDependencyRemoved(Z_Param_Master,Z_Param_Slave);
		P_NATIVE_END;
	}
	void USBZReplicationGraph::StaticRegisterNativesUSBZReplicationGraph()
	{
		UClass* Class = USBZReplicationGraph::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActorDependencyAdded", &USBZReplicationGraph::execOnActorDependencyAdded },
			{ "OnActorDependencyRemoved", &USBZReplicationGraph::execOnActorDependencyRemoved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyAdded_Statics
	{
		struct SBZReplicationGraph_eventOnActorDependencyAdded_Parms
		{
			AActor* Master;
			AActor* Slave;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Master;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyAdded_Statics::NewProp_Master = { "Master", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplicationGraph_eventOnActorDependencyAdded_Parms, Master), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyAdded_Statics::NewProp_Slave = { "Slave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplicationGraph_eventOnActorDependencyAdded_Parms, Slave), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyAdded_Statics::NewProp_Master,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyAdded_Statics::NewProp_Slave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplicationGraph, nullptr, "OnActorDependencyAdded", nullptr, nullptr, sizeof(SBZReplicationGraph_eventOnActorDependencyAdded_Parms), Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyRemoved_Statics
	{
		struct SBZReplicationGraph_eventOnActorDependencyRemoved_Parms
		{
			AActor* Master;
			AActor* Slave;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Master;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyRemoved_Statics::NewProp_Master = { "Master", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplicationGraph_eventOnActorDependencyRemoved_Parms, Master), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyRemoved_Statics::NewProp_Slave = { "Slave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplicationGraph_eventOnActorDependencyRemoved_Parms, Slave), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyRemoved_Statics::NewProp_Master,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyRemoved_Statics::NewProp_Slave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReplicationGraph, nullptr, "OnActorDependencyRemoved", nullptr, nullptr, sizeof(SBZReplicationGraph_eventOnActorDependencyRemoved_Parms), Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZReplicationGraph_NoRegister()
	{
		return USBZReplicationGraph::StaticClass();
	}
	struct Z_Construct_UClass_USBZReplicationGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrototypeNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrototypeNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysRelevantNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlwaysRelevantNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicSpatialFrequencyNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicSpatialFrequencyNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntialFrameReplicationNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IntialFrameReplicationNode;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NonSpatializedChildClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonSpatializedChildClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NonSpatializedChildClasses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConfigRepClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigRepClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConfigRepClasses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReplicationGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZReplicationGraph_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyAdded, "OnActorDependencyAdded" }, // 3975718973
		{ &Z_Construct_UFunction_USBZReplicationGraph_OnActorDependencyRemoved, "OnActorDependencyRemoved" }, // 7425014
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplicationGraph_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZReplicationGraph.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReplicationGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_GridNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicationGraph" },
		{ "ModuleRelativePath", "Public/SBZReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_GridNode = { "GridNode", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplicationGraph, GridNode), Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_GridNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_GridNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_PrototypeNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicationGraph" },
		{ "ModuleRelativePath", "Public/SBZReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_PrototypeNode = { "PrototypeNode", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplicationGraph, PrototypeNode), Z_Construct_UClass_USBZReplicationGraphNode_PrototypingOnly_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_PrototypeNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_PrototypeNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_AlwaysRelevantNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicationGraph" },
		{ "ModuleRelativePath", "Public/SBZReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_AlwaysRelevantNode = { "AlwaysRelevantNode", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplicationGraph, AlwaysRelevantNode), Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_AlwaysRelevantNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_AlwaysRelevantNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_DynamicSpatialFrequencyNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicationGraph" },
		{ "ModuleRelativePath", "Public/SBZReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_DynamicSpatialFrequencyNode = { "DynamicSpatialFrequencyNode", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplicationGraph, DynamicSpatialFrequencyNode), Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_DynamicSpatialFrequencyNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_DynamicSpatialFrequencyNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_IntialFrameReplicationNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicationGraph" },
		{ "ModuleRelativePath", "Public/SBZReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_IntialFrameReplicationNode = { "IntialFrameReplicationNode", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplicationGraph, IntialFrameReplicationNode), Z_Construct_UClass_USBZReplicationGraphNode_InitialFrameReplication_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_IntialFrameReplicationNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_IntialFrameReplicationNode_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_NonSpatializedChildClasses_Inner = { "NonSpatializedChildClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_NonSpatializedChildClasses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicationGraph" },
		{ "ModuleRelativePath", "Public/SBZReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_NonSpatializedChildClasses = { "NonSpatializedChildClasses", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplicationGraph, NonSpatializedChildClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_NonSpatializedChildClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_NonSpatializedChildClasses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_ConfigRepClasses_Inner = { "ConfigRepClasses", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZConfigRepClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_ConfigRepClasses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicationGraph" },
		{ "ModuleRelativePath", "Public/SBZReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_ConfigRepClasses = { "ConfigRepClasses", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplicationGraph, ConfigRepClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_ConfigRepClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_ConfigRepClasses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZReplicationGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_GridNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_PrototypeNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_AlwaysRelevantNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_DynamicSpatialFrequencyNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_IntialFrameReplicationNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_NonSpatializedChildClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_NonSpatializedChildClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_ConfigRepClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplicationGraph_Statics::NewProp_ConfigRepClasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReplicationGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZReplicationGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReplicationGraph_Statics::ClassParams = {
		&USBZReplicationGraph::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZReplicationGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplicationGraph_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_USBZReplicationGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplicationGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReplicationGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReplicationGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReplicationGraph, 4043311946);
	template<> STARBREEZE_API UClass* StaticClass<USBZReplicationGraph>()
	{
		return USBZReplicationGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReplicationGraph(Z_Construct_UClass_USBZReplicationGraph, &USBZReplicationGraph::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReplicationGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReplicationGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
