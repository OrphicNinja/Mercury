// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNode() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZNode, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZNode"), sizeof(FSBZNode), Get_Z_Construct_UScriptStruct_FSBZNode_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZNode>()
{
	return FSBZNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZNode(FSBZNode::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZNode"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZNode
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZNode()
	{
		UScriptStruct::DeferCppStructOps<FSBZNode>(FName(TEXT("SBZNode")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZNode;
	struct Z_Construct_UScriptStruct_FSBZNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connector_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_Connector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNode_Statics::NewProp_Connector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNode" },
		{ "ModuleRelativePath", "Public/SBZNode.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FSBZNode_Statics::NewProp_Connector = { "Connector", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNode, Connector), Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNode_Statics::NewProp_Connector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNode_Statics::NewProp_Connector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNode_Statics::NewProp_Room_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNode" },
		{ "ModuleRelativePath", "Public/SBZNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZNode_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNode, Room), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNode_Statics::NewProp_Room_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNode_Statics::NewProp_Room_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNode_Statics::NewProp_Connector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNode_Statics::NewProp_Room,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZNode",
		sizeof(FSBZNode),
		alignof(FSBZNode),
		Z_Construct_UScriptStruct_FSBZNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZNode"), sizeof(FSBZNode), Get_Z_Construct_UScriptStruct_FSBZNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZNode_Hash() { return 3391357853U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
