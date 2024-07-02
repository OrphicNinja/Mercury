// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplicationGraphNode_AlwaysRelevant_ForConnection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplicationGraphNode_AlwaysRelevant_ForConnection() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void USBZReplicationGraphNode_AlwaysRelevant_ForConnection::StaticRegisterNativesUSBZReplicationGraphNode_AlwaysRelevant_ForConnection()
	{
	}
	UClass* Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister()
	{
		return USBZReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass();
	}
	struct Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZReplicationGraphNode_AlwaysRelevant_ForConnection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReplicationGraphNode_AlwaysRelevant_ForConnection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastPawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplicationGraphNode_AlwaysRelevant_ForConnection" },
		{ "ModuleRelativePath", "Public/SBZReplicationGraphNode_AlwaysRelevant_ForConnection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastPawn = { "LastPawn", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplicationGraphNode_AlwaysRelevant_ForConnection, LastPawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastPawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZReplicationGraphNode_AlwaysRelevant_ForConnection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::ClassParams = {
		&USBZReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReplicationGraphNode_AlwaysRelevant_ForConnection, 2210044372);
	template<> STARBREEZE_API UClass* StaticClass<USBZReplicationGraphNode_AlwaysRelevant_ForConnection>()
	{
		return USBZReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection(Z_Construct_UClass_USBZReplicationGraphNode_AlwaysRelevant_ForConnection, &USBZReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReplicationGraphNode_AlwaysRelevant_ForConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReplicationGraphNode_AlwaysRelevant_ForConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
