// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplicationGraphNode_PrototypingOnly.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplicationGraphNode_PrototypingOnly() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplicationGraphNode_PrototypingOnly_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplicationGraphNode_PrototypingOnly();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZReplicationGraphNode_PrototypingOnly::StaticRegisterNativesUSBZReplicationGraphNode_PrototypingOnly()
	{
	}
	UClass* Z_Construct_UClass_USBZReplicationGraphNode_PrototypingOnly_NoRegister()
	{
		return USBZReplicationGraphNode_PrototypingOnly::StaticClass();
	}
	struct Z_Construct_UClass_USBZReplicationGraphNode_PrototypingOnly_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReplicationGraphNode_PrototypingOnly_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplicationGraphNode_PrototypingOnly_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZReplicationGraphNode_PrototypingOnly.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReplicationGraphNode_PrototypingOnly.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReplicationGraphNode_PrototypingOnly_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZReplicationGraphNode_PrototypingOnly>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReplicationGraphNode_PrototypingOnly_Statics::ClassParams = {
		&USBZReplicationGraphNode_PrototypingOnly::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZReplicationGraphNode_PrototypingOnly_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplicationGraphNode_PrototypingOnly_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReplicationGraphNode_PrototypingOnly()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReplicationGraphNode_PrototypingOnly_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReplicationGraphNode_PrototypingOnly, 1171264009);
	template<> STARBREEZE_API UClass* StaticClass<USBZReplicationGraphNode_PrototypingOnly>()
	{
		return USBZReplicationGraphNode_PrototypingOnly::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReplicationGraphNode_PrototypingOnly(Z_Construct_UClass_USBZReplicationGraphNode_PrototypingOnly, &USBZReplicationGraphNode_PrototypingOnly::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReplicationGraphNode_PrototypingOnly"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReplicationGraphNode_PrototypingOnly);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
