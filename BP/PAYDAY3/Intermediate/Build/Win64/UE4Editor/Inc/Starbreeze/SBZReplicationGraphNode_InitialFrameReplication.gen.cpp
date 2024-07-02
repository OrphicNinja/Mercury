// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplicationGraphNode_InitialFrameReplication.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplicationGraphNode_InitialFrameReplication() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplicationGraphNode_InitialFrameReplication_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplicationGraphNode_InitialFrameReplication();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZReplicationGraphNode_InitialFrameReplication::StaticRegisterNativesUSBZReplicationGraphNode_InitialFrameReplication()
	{
	}
	UClass* Z_Construct_UClass_USBZReplicationGraphNode_InitialFrameReplication_NoRegister()
	{
		return USBZReplicationGraphNode_InitialFrameReplication::StaticClass();
	}
	struct Z_Construct_UClass_USBZReplicationGraphNode_InitialFrameReplication_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReplicationGraphNode_InitialFrameReplication_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplicationGraphNode_InitialFrameReplication_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZReplicationGraphNode_InitialFrameReplication.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReplicationGraphNode_InitialFrameReplication.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReplicationGraphNode_InitialFrameReplication_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZReplicationGraphNode_InitialFrameReplication>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReplicationGraphNode_InitialFrameReplication_Statics::ClassParams = {
		&USBZReplicationGraphNode_InitialFrameReplication::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZReplicationGraphNode_InitialFrameReplication_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplicationGraphNode_InitialFrameReplication_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReplicationGraphNode_InitialFrameReplication()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReplicationGraphNode_InitialFrameReplication_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReplicationGraphNode_InitialFrameReplication, 63381433);
	template<> STARBREEZE_API UClass* StaticClass<USBZReplicationGraphNode_InitialFrameReplication>()
	{
		return USBZReplicationGraphNode_InitialFrameReplication::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReplicationGraphNode_InitialFrameReplication(Z_Construct_UClass_USBZReplicationGraphNode_InitialFrameReplication, &USBZReplicationGraphNode_InitialFrameReplication::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReplicationGraphNode_InitialFrameReplication"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReplicationGraphNode_InitialFrameReplication);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
